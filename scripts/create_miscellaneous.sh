#!/bin/bash

# Create directories for miscellaneous
mkdir -p 06_miscellaneous/{rsa-factoring-challenge,command-line-for-the-win,0x00_fix-my-code,attack-is-the-best-defense,0x01_fix-my-code}

# Function to create README.md with folder name as title
create_readme() {
  for dir in "$@"; do
    echo "# $(basename "$dir" | tr '_' ' ' | tr '-' ' ')" > "$dir/README.md"
  done
}

# Create README.md files in each subdirectory of miscellaneous
create_readme 06_miscellaneous/*

echo "Directories and README.md files created successfully."
