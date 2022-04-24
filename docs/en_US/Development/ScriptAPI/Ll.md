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

<br>

### Get LiteLoader loader version string

`ll.versionString()`

- Return value: loader version
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
You can choose to judge based on the results and report an error to remind users to upgrade their LiteLoader (LLSE) version.
<br>

### List all loaded plugins

`ll.listPlugins()`

- Return value: A list containing the names of all loaded plugin
- Return value type:  `Array<String,String,...>`

<br>

### Remote Function Call

In order to allow the pre-plug-ins developed by developers to provide interfaces and services for other plug-ins, the remote function call function is provided here, so that one LLSE plug-in can call the existing functions in another plug-in. 

#### Export Function 

First, in order for the functions in your plug-in to be located by other plug-ins, you first export some functions in your plug-in, so that others can find your interface by name. Use this function to export the functions you want to share:

`ll.export(func,name)`

- Parameter: 
  - func : `Function`  
    Function to be exported
  - name : `String`  
    The export name of the function. Other plugins call this function based on the export name.
- Return value: Whether the export was successful.
- Return value type:  `Boolean`

Note: If there is a name conflict when exporting, the export will fail. You may need to add some unique prefix or suffix to the export name to avoid possible conflicts with other plugins.

<br>

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

Note: If you export a function with an existing namespace and name, the export will fail. This API is currently only available under `debugMode`.  

<br>

#### Import Function

After you have learned that there is a plug-in exporting function, in order to use the function exported by him, you first need to import this function into your own scripting system.
LLSE provides the interface import to import functions already exported by other plugins. 

`ll.import(name)`

- Parameter: 
  - name : `String`  
    The export name used by the function to be imported.
- Return value: the imported function
- Return value type:  `Function`

`ll.import` will import the target function directly into your scripting environment. Therefore, you can call an imported function as if you were using an existing function. The process of calling across plugins will be done automatically in the background, you don't need to worry about any of this.

Note: In the process of remote invocation, you cannot pass custom data objects such as player objects in the parameters. You can use player Xuid info etc as an alternative.

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

`ll.import` will import the target function directly into your scripting environment. Therefore, you can call an imported function as if you were using an existing function. The process of calling across plugins will be done automatically in the background, you don't need to worry about any of this.

Note: In the process of remote invocation, you cannot pass custom data objects such as player objects in the parameters. You can use player Xuid info etc as an alternative Note: this API is only available in `debugMode`.

<br>

#### Example of Remote Calling Function 

For example, there is a plugin that exports a function, and the export name of the function is AAA_Welcome
when you use `welcome = ll.import("AAA_Welcome"); ` After the import is complete, you can execute directly below:

`welcome("hello",2,true);`   

As if the function already existed. 
The parameters of the function will be automatically forwarded to the corresponding target function for execution, and the return value of the corresponding target function will be returned after execution. The whole process is automatically completed. 

Notice! When calling a function, you need to ensure that the number and types of parameters you pass in and the parameters accepted by the target function are correct and in one-to-one correspondence. Otherwise, an error will occur. 

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

### Execute a String as a Script

`ll.eval(str)`

- Parameter: 
  - str : `String`  
    String to execute as a Script
- Return value: Execution result
- Return value type:  `Any Type`

Different from the above mentioned `ll.require`, the script code executed here is directly executed in the engine corresponding to the current plugin, similar to the eval mechanism of each language.