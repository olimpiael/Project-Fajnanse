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

## Authors

We are students of Poznań University of Technology and we are building this app as a project for our university.

### Team members

- [Łukasz Cieślik](@TreF0) - developer of CLI, testing
- [Mateusz Czarnecki](@matixan) - backend developer, documentation, testing
- [Olimpia Laube](@olimpiael) - GUI developer, documentation, testing

## License

[MIT](https://choosealicense.com/licenses/mit/)

