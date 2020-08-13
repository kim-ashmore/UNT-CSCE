#!/bin/sh

#replaces the back slash with ^
#[^[:alnum:]/]

while IFS=',' read -r line || [[ -n "$line" ]]; do
    echo "Text read from file: $line"
done < "$1"