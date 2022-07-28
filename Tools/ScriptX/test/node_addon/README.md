**demo project showing how to use ScriptX to build `node.js` addon**

1. use cmake-js to build `node.js` addon
2. write CMakeLists.txt using cmake-js. see `CMakeLists.txt` for detail.
3. inside the initializer, use special `V8Engine` constructor. see `src/addon.cc` for detail.
4. build and run using 

```bash
npm i -g cmake-js   # install cmake-js
npm run test        # build & run test
```