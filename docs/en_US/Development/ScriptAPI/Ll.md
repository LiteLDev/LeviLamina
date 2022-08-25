## 💡 Plugin loading related API

Some interfaces related to loader operations are provided here. 

### Get LiteLoader loader version

`ll.version()`

- Return value: loader version object `Object`) 

- Return value type:  `Object<Integer,Integer,Integer,Boolean>`

  - For a returned loader version object ver, there are the following members:

  | Member       | Meaning                              | Data Type  |
  | ------------ | ------------------------------------- | --------- |
  | ver.major    | Major Version Number (example:  the **2** in **2**.1.0)   | `Integer` |
  | ver.minor    | Minor Version Number (ex: the **1** in 2.**1**.0)    | `Integer` |
  | ver.revision | Revision Number: (ex: the **0** in 2.1.**0**)  | `Integer` |
  | ver.isBeta   | Whether the current version is a beta version  | `Boolean` |
  | ver.isDev    | Whether the current version is a dev version  | `Boolean` |
  | ver.isRelease| Whether the current version is a release version  | `Boolean` |

<br>

### Get LiteLoader loader version string

`ll.versionString()`

- Return value: loader version
- Return value type:  `String`

<br>

### Get LiteLoader Version Status

`ll.versionStatus()`

- Return value: Version Status (`0` is Release, `1` is Beta, `2` is Dev)
- Return value type:  `Integer`

<br>

### Check is LiteLoader in debug mode

`ll.isDebugMode()`

- Return value: Is LiteLoader in debug mode
- Return value type:  `Boolean`

<br>

### Get LiteLoader language

`ll.language()`

- Return value: Language (such as `ru`, `en`, `zh_CN`)
- Return value type:  `String`

<br>

### Check LiteLoader loader version

`ll.requireVersion(major[,minor,revision])`

- Parameter: 
  - major: `Integer`  
    Check if the major version number of the currently installed LL is >= this value.
  - minor: `Integer` (optional parameter)
    Check if the minor version number of the currently installed LL is >= this value.
  - revision: `Integer` (optional parameter)  
    Check if the revision number of the currently installed LL is >= this value.
- Return value: Test result
- Return value type:  `Boolean`

If the detection finds that the currently installed version of LLSE is lower than the value passed in, it will return `false`. 
You can choose to judge based on the results and report an error to remind users to upgrade their LiteLoaderBDS version.

<br>

### Get information about Plugin

`ll.getPluginInfo(name)`

- Parameter:
  - name: `String`
  Plugin name
- Return value: Plugin Object
- Return value type:  `Plugin`

<br>

### List all loaded plugins

`ll.listPlugins()`

- Return value: A list containing the names of all loaded plugin
- Return value type:  `Array<String,String,...>`

<br>

### List all loaded plugins with information

`ll.getAllPluginInfo()`

- Return value: A list containing the plugin objects of all loaded plugin
- Return value type:  `Array<Plugin,Plugin,...>`

<br>

### Remote Function Call

In order to allow the pre-plug-ins developed by developers to provide interfaces and services for other plug-ins, the remote function call function is provided here, so that one LLSE plug-in can call the existing functions in another plug-in. 

#### Export Function

In order to allow the pre-plug-ins developed by developers to provide interfaces and services for other plug-ins, the remote function call function is provided here, so that an LL or LLSE plug-in can call the existing functions in another plug-in.

`ll.export(func,namespace,name)`

- Parameter: 
  - func : `Function`  
    Function to be exported
  - namespace : `String`  
    The namespace name of the function, which is only convenient for distinguishing the API exported by different plugins.
  - name : `String`  
    The export name of the function. Other plugins call this function based on the export name.
- Return value: Whether the export was successful.
- Return value type:  `Boolean`

Note: If the namespace and name of the exported function are exactly the same as another already exported function, the export will fail. Please select the namespace and export name appropriately when exporting.

<br>

#### Import Function

After you have learned that there is a plug-in exporting function, in order to use the function exported by him, you first need to import this function into your own scripting system.
LLSE provides the interface import to import functions already exported by other plugins.

`ll.import(namespace,name)`

- Parameter: 
  - namespace : `String`  
    The namespace name used by the function that is being imported.
  - name : `String`  
    The name of the function that is being imported.
- Return value: The imported function
- Return value type:  `Function`

The return value of `ll.import` is a function. When you call this function, the cross-plugin call process will be done automatically in the background. The parameters of the calling function will be wrapped and passed to the remote function, and the return value of this function is the return value returned by the remote function after it has been executed.

<br>

#### Example of Remote Calling Function 

For example, there is a plug-in that exports a function using the namespace AAA, and the name of the exported function is Welcome
You can execute `welcome = ll.import("AAA", "Welcome"); ` to import this function. After the import is complete, you can execute directly below:

`welcome("hello",2,true);`   

The parameters of the function will be automatically forwarded to the corresponding target function for execution, and the return value of the corresponding target function will be returned after execution. The whole process is automatically completed. 

Notice! When calling a function, you need to ensure that the number and types of parameters you pass in and the parameters accepted by the target function are correct and in one-to-one correspondence. Otherwise, an error will occur. 

<br>

### Determine if a remote function has been exported

`ll.hasExported(namespace,name)`

- Parameter：
  - namespace : `String`  
    Namespace name used by the function
  - name : `String`  
    Export name used by the function
- Return value：Whether the function has been exported
- Return value type： `Boolean`

<br>

### Set Plugin Dependencies 

Sometimes, you need to make sure that certain plugins are loaded before your own plugins to use the frontend services provided by them. We call these frontend plugins **library dependencies**.

When using the import function mentioned above, you need to pay attention: the premise of being able to import a function is that the pre-plugin to be called has been loaded by LLSE.
Therefore, you may need to use the following function to set the dependent library, so that the pre-plugins you need are loaded first and the import is successful.

LLSE provides the following interface to preload the dependent libraries required by the plugin, download the dependent library files you need from local files, or even from remote HTTP(s) addresses.

`ll.require(path[,remotePath])`

- Parameter: 
  - path : `String`  
    Library dependency filename (Example: `addplugin.js`)
  - remotePath : `String`  
    (Optional parameter) The path to find and load dependent libraries, see below for instructions.
- Return value: Whether the dependent library is loaded successfully 
- Return value type:  `Boolean`

For execution, use `ll.require`, then LLSE will perform the following series of operations:

- Search the list of loaded plugins. If the dependent library has been loaded, it will return success directly.
- Search **plugins** and **plugins/lib** directories, if the corresponding dependent library file is found, load it and return the loading result.
- If the corresponding dependent library file is not found after the search is completed, and the remotePath parameter is not passed in, it will return directly to failure.
- Use the HTTP(s) protocol remotePath to request the download address corresponding to the remotePath parameter, and download the dependent library files to the `plugins/lib` directory. If the download fails, return failure.
- Load the successfully downloaded dependent library file and return the loading result.

<br>

Authors of dependent libraries can host relevant code on stable large websites such as GitHub or Gitee, and provide external links to other developers for remote download.

<br>

### Get Script Engine version

`ll.scriptEngineVersion()`

- Return value: The backend engine version
- Return value type:  `String`

<br>

### Execute a String as a Script

`ll.eval(str)`

- Parameter: 
  - str : `String`  
    String to execute as a Script
- Return value: Execution result
- Return value type:  `Any Type`

Different from the above mentioned `ll.require`, the script code executed here is directly executed in the engine corresponding to the current plugin, similar to the eval mechanism of each language.