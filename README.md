# Project-Fajnanse

Welcome to Fajnanse - the best finance management app for students. Please read this file carefully before you start working with the app. This file contains all the information you need to know. If you have any questions, please contact us.

## Table of contents

- [About](#about) Who we are and what we are doing
- [Installation](#installation) of Working environment
- [Compiling](#compiling) the app
- [Usage](#usage) of the app
- [Contributing](#contributing) to the project
- [Authors](#authors) of Fajnanse
- [License](#license) 
- [Current project status](#project-status) of Fajnanse

## About

Fajnanse is finance management app for students built in C++. We are students of Poznań University of Technology and we are building this app as a project for our university. We are using C++17, CMake, git, GitHub, vscode and codespaces.

Fajnanse is a funny word in Polish. It is a combination of two words: *fajne* and *finanse*. *Fajne* means *cool* and *finanse* means *finance*. So __*Fajnanse*__ means *cool finance*.

With Fajnanse you can manage your finances. You can add new transactions, see your balance and see your transactions history. You can also recognize text from bills using Tesseract OCR. Parser will recognize the date, amount and currency of the transaction. You can also add new transactions by taking a photo of your bill. You can also see your transactions history in GUI. App will also recognize the type of the transaction (income or expense) and will automatically add it to your balance. Every position from your bill will be added to correct category. You can also add new categories and edit existing ones. You can also see your balance in GUI.

## Features

- [x] Compiling and running the hello world app
- [x] Render GUI in browser
- [x] Include Tesseract OCR
- [ ] Include OpenCV
- [x] Recognize text from image
- [ ] Add new transactions
- [ ] See your balance
- [ ] See your transactions history
- [ ] See your transactions history in GUI

***TODO:*** add more features

### Job assignments

- [ ] Łukasz Cieślik - CLI
- [ ] Mateusz Czarnecki - Work environment, Team leader, Testing, Documentation, Tessaract OCR for text recognition, modules integration
- [ ] Olimpia Laube - GUI

## Installation

Use the provided codespace to run the app. Green button on the top right corner.

Codespace will automatically install all the dependencies, so you don't have to worry about that. All you need to do is to run the app by typing:

```bash
./bin/Fajnense
```

App will run in the terminal and GUI will be shown in the browser.
To access the GUI you need to open Simple Browser built in vscode. You can do that by clicking <kbd>ctrl + shift + p</kbd> and typing "__Simple Browser__".  
Eventually you can use your own browser.

The app will run on __port 6080__, so you need to type in the browser: <http://localhost:6080/>

## Compiling

If you want to compile the app yourself, you need to use __CMake__ extension provided in codespace. You need to configure the project and later compile. In future __we will__ provide a script that will do that for you using buttons in vscode. For now you need to do it manually. 

There is <kbd>F7</kbd> button in CMake extension that will configure the project for you. You need to click it and choose __GCC 10.2.0__ compiler. You need to do it only once. Later you can use <kbd>F7</kbd> button to compile the app. 
## Usage

In the GUI you can add new transactions, see your balance and see your transactions history.

TODO: add more info how to use the app and how it works.

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change. We are open to any suggestions.

There are some rules that you need to follow:

- You need to use English in your code and in your commits.
- You need to create a new branch for every feature you are working on.
- You need to create a pull request to merge your branch with development branch.
- [OPTIONAL] You create a pull request to merge development branch with main branch.
- You need to know how to use CMake, git, GitHub, vscode and codespaces.
- Please make sure to update tests and documentation as appropriate.
- Please make sure to update the GUI and CLI as appropriate.
- Please use __comments__ in your code.

```cpp
// This is a comment in C++ used for single line comments.
```

Or

```cpp
/*
This is a comment in C++ used for multi line comments.
Please use this type of comments for longer comments.
Comments should be used to describe what the code does.
*/
int a = 5; // Creating a variable a and assigning value 5 to it.

//              ^ This is bad comment. Please don't do that.
```

### Code style

- Please use __camelCase__ for naming variables, functions, classes etc.
- Please use __PascalCase__ for naming files.
- Please use __snake_case__ for naming macros.
- Please use __UPPERCASE__ for naming constants.

## Authors

We are students of Poznań University of Technology and we are building this app as a project for our university.

### Team members

- [Łukasz Cieślik](@TreF0) - developer of CLI, testing
- [Mateusz Czarnecki](@matixan) - backend developer, documentation, testing
- [Olimpia Laube](@olimpiael) - GUI developer, documentation, testing

## License

[MIT](https://choosealicense.com/licenses/mit/)

## Project status

Project is still in development. We are working on it every day. We are planning to finish it by the end of this semester. We are planning to add more features in the future. At the moment we are working on recognizing text from image and adding new transactions by taking a photo of your bill. We are also working on GUI.
