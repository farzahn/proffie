#!/bin/bash

# Prompt the user to enter a commit message
echo "Please enter a commit message (or press Enter to use 'Quick Save'):"
read commit_message

# Check if commit_message is empty and use 'Quick Save' if it is
if [ -z "$commit_message" ]; then
  commit_message="Quick Save"
fi

# Add changes to the staging area, commit with the chosen message, and push to the repository
git add * && git commit -m "$commit_message" && git push


## git config --global user.email "github@farzahn.com" && git config --global user.name "farzahn"