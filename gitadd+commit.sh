#!/bin/sh
#THIS FILE IS MADE TO ADD FILES COMMIT AND PUSH AT THE SAME TIME.
echo "ADDING FILES TO YOUR REPOSITORY"
git add *
echo "What is you're commit message ?"
read msg 
git commit -m "$msg"
echo "Pushing to your repository"
git push origin master
