#!/bin/bash

# Check if at least one argument is provided
if [ $# -lt 1 ]; then
    echo "Usage: $0 filename(s)"
    exit 1
fi

# Loop over all provided filenames
for filename in "$@"; do
    # Check if the file exists
    if [ ! -f "$filename" ]; then
        echo "File not found: $filename"
        continue
    fi

    # Create a temporary file
    tmpfile=$(mktemp)

    # Use sed to remove leading whitespace from each line and write to the temporary file
    sed 's/^[[:space:]]*//' "$filename" > "$tmpfile"

    # Check if the sed command was successful
    if [ $? -eq 0 ]; then
        # Move the temporary file to the original file
        mv "$tmpfile" "$filename"
        echo "Updated: $filename"
    else
        echo "Failed to update: $filename"
        # Clean up temporary file
        rm "$tmpfile"
    fi
done

