echo "# intro_git" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin git@github.com:Joski254/intro_git.git
git push -u origin main
  git config --global user.email "kjosephtoo@gmail.com"
  git config --global user.name "Joseph"