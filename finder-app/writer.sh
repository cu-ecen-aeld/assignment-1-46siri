#!/bin/bash

# Check that both parameters were specified
if [[ $# -ne 2 ]]; then
    echo "Usage: writer.sh <writefile> <writestr>"
    exit 1
fi

# Extract parameters
writefile="$1"
writestr="$2"

# Create the directory if it doesn't exist
mkdir -p "$(dirname "$writefile")"

# Write the string to the file
echo "$writestr" > "$writefile"
if [[ $? -ne 0 ]]; then
    echo "Error: Failed to write to $writefile"
    exit 1
fi

exit 0
