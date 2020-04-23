#!/bin/sh
echo "ADDING FILES TO YOUR REPOSITORY"
git add *
echo "What is you're commit message ?"
read msg 
git commit -m "$msg"
echo "Pushing to your repository"
git push origin master
