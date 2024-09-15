#!/bin/bash

# Create directories for Portfolio Project
mkdir -p 07_portfolio-project/{00_research-and-project-approval-part-1,01_research-and-project-approval-part-2,02_research-and-project-approval-part-3,03_build-your-portfolio-project-week-3-project-landing-page}

# Function to create README.md with folder name as title
create_readme() {
  for dir in "$@"; do
    echo "# $(basename "$dir" | tr '_' ' ' | tr '-' ' ')" > "$dir/README.md"
  done
}

# Create README.md files in each subdirectory of Portfolio Project
create_readme 07_portfolio-project/*

echo "Directories and README.md files created successfully."
