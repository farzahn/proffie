#!/bin/bash

# Prompt the user to enter a commit message
echo "Please enter a commit message:"
read commit_message

# Add changes to the staging area, commit with the user's message, and push to the repository
git add * && git commit -m "$commit_message" && git push


## git config --global user.email "github@farzahn.com" && git config --global user.name "farzahn"