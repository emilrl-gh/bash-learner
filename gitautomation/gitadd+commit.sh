#!/bin/sh

#THIS FILE IS MADE TO ADD FILES COMMIT AND PUSH AT THE SAME TIME.

echo "ADDING FILES TO YOUR REPOSITORY"

git add * # add files to repo 

echo "What is you're commit message ?"

read msg # read message for commit

git commit -m "$msg" #publish commit

echo "Pushing to your repository"

git push origin master #push everything

echo "Pull!"

git pull
