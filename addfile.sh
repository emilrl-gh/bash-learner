echo "Give me the name of the file you want to update: "
read file
git add $file
echo "What is your commit message ?"
read msg
git commit -m "$msg"
echo "Pushing to your repository"
git push origin master
echo "Pulling"
git pull
