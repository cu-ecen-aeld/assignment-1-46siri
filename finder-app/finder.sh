#!/bin/bash

# Check that both parameters were specified
if [[ $# -ne 2 ]]; then
    echo "Usage: finder.sh <filesdir> <searchstr>"
    exit 1
fi

# Extract parameters
filesdir="$1"
searchstr="$2"

# Check that filesdir is a directory
if [[ ! -d "$filesdir" ]]; then
    echo "Error: $filesdir is not a directory"
    exit 1
fi

# Count the number of files and matching lines
numfiles=$(find "$filesdir" -type f | wc -l)
numlines=$(grep -r "$searchstr" "$filesdir" | wc -l)

# Print the results
echo "The number of files are $numfiles and the number of matching lines are $numlines"
exit 0
