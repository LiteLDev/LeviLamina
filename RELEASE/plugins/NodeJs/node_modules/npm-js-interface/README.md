# npm-js-interface

> Run NPM commmand directly in JS !

Thanks for [npm/cli: the package manager for JavaScript (github.com)](https://github.com/npm/cli)

## Usage

1. Run `npm install npm-js-interface` to install

2. ```javascript
   let npm = require('npm-js-interface');
   ```

3. ```javascript
   npm("npm help");
   npm("npm list");
   npm("npm install hello-world");
   //...
   ```