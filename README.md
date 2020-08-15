# bash-learner

![C/C++ CI](https://github.com/K0stad1n/bash_learner/workflows/C/C++%20CI/badge.svg)
![GitHub release (latest by date including pre-releases)](https://img.shields.io/github/v/release/K0stad1n/bash-learner?include_prereleases)
[![GPLv3 license](https://img.shields.io/badge/License-GPLv3-blue.svg)](http://perso.crans.org/besson/LICENSE.html)
[![Open Source? Yes!](https://badgen.net/badge/Open%20Source%20%3F/Yes%21/blue?icon=github)](https://github.com/Naereen/badges/)
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg)](http://makeapullrequest.com)

This C program teaches you how to use the bash command line interface.

This program supports:
MacOS
Windows
Linux

If you want you can download an executable at this link(if you are on Windows you have to download the .exe file from the link below):

https://github.com/K0stad1n/bash-learner/releases/latest

If you are on Linux or MacOS after downloading please follow these instructions:

- Open Terminal or the Console.(For MacOS users to open Terminal go to: Applications > Utilities > Terminal"
- Type: cd Downloads (name of the folder where you downloaded the file)
- Type on Linux: chmod +x bash-learner-linux
- Type on Macos: chmod +x bash-learner-macos
- Then Type, to run: ./bash-learner-linux or ./bash-learner-macos

Or you can compile for you're own machine (MacOS and Linux only does not support Windows):

Clone the repository by copying this in the console or in the terminal:
```
git clone https://github.com/K0stad1n/bash-learner.git
```
then compile the code:

```
cd bash_learner/src
make
```
To run the program:
In Linux:
```
bash-learner
```

In macOS:
```
./bash-learner
```

If git is not installed install it:

In debian based system:
```
sudo apt install update
sudo apt install upgrade
sudo apt install git
```
In red hat:
```
sudo yum upgrade
sudo yum install git
```
In Fedora:
```
sudo dnf install git
```
or
```
sudo yum install git
```
In macos:
```
xcode-select --install
```
To uninstall:
```
make uninstall
```
To update:
```
make update
```

If you have an error please report it in issues.
