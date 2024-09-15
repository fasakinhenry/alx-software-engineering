#!/bin/bash

# Create directories for introduction
mkdir -p 01_introduction/{00_shell-navigation,01_emacs,02_vi,03_git,04_professional-technologies,05_setting-up-your-local-coding-environment}

# Function to create README.md with folder name as title
create_readme() {
  for dir in "$@"; do
    echo "# $(basename "$dir" | tr '_' ' ' | tr '-' ' ')" > "$dir/README.md"
  done
}

# Create README.md files in each subdirectory of introduction
create_readme 01_introduction/*

echo "Directories and README.md files created successfully."
