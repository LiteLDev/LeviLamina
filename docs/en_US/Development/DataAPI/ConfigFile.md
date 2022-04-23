# LLSE - Configuration and Data Processing Interface Documentation

> Here are a variety of options for working with **large amounts of data**

In the process of plugin work, it is inevitable to encounter scenarios that need to deal with configuration and a large amount of game-related data.
LLSE provides a lot of `infrastructure`, including configuration files, databases, economic systems, and more.
It is convenient for developers to focus on business code implementation, rather than entangled in the technical details of these aspects.

## 🔨 Profile API

The configuration file is generally used to separate some settings of the plug-in that can be modified by the user into a file, so as to facilitate the modification of some settings.
Therefore, the content and format of the configuration file generally need to be readable. 
LLSE provides the ConfigFile configuration file interface to accomplish this task. 
Of course, you can also manually read and write files to assist in the operation of related configuration files.

<br>

### Description: Selection of Configuration File Type

The choice of configuration file format will affect the type of configuration data you can store.

- `JSON` format can store **most** types of data, including arrays, objects, etc., and the representation logic is relatively rich.
- `ini` format is relatively `simple and intuitive`, and it is very easy for others to modify it, but the type of data stored is subject to certain restrictions.

Please make your choice as needed.

<br>

### 📰 Json Format Configuration File

#### Create/Open a Json Configuration File

[JS] `new JsonConfigFile(path[,default])`  
[Lua] `JsonConfigFile(path[,default])`

- Parameters: 
  - path : `String`  
    The path where the configuration file is located, based on the BDS root directory.  
    LLSE will automatically create a directory in the configuration file path if it does not already exist.
  - default : `String`  
    (Optional parameter) Default content of the configuration file.  
    If during initialization it **does not exist**, the engine will create a new configuration file and write the default content here.  
    If this parameter is not passed in, the new configuration file will be empty.
- Return value: Open/created profile object.
- Return value type: `JsonConfigFile`
  - Throws exception if create/open fails.

We recommend that you create a directory named `BDS_Root_Directory/plugins/plugin_name/` with a config file named `config.json` to keep the configuration of each plugin uniform.

<br>

For a Json profile object `conf`, you have these read and write interfaces available.

#### Initialize Configuration Items (Convenience Function

`conf.init(name,default)`

- Parameters: 
  - name : `String`  
    Configuration item name
  - default : `Any type`  
    The value written when the configuration item is initialized.
- Return value: The data of the specified configuration item.
- Return value type: `Any type`, subject to the specific type of data stored.

Here is an easy way to initialize the configuration file, avoiding the trouble of handwriting the contents of the default configuration file:

If the accessed configuration item does not exist, then the engine will automatically create the item `init` in the configuration file and write the given default value.
If the accessed configuration item `init` already exists, the engine will read and return the existing value in the configuration file.
<br>

#### Write Configuration Item

`conf.set(name,data)`

- Parameters: 
  - name : `String`  
    Configuration item name
  - data : `Any type`  
    Configuration data to write. The allowed data types are:    
    `Integer` `Float` `String` `Boolean` `Array` `Object`  
    The above elements can only be nested inside `Array` and `Object`.

- Return value: Whether the write is successful.

- Return value type: `Boolean`

<br>

#### Read Configuration Items

`conf.get(name[,default])`

- Parameters: 
  - name : `String`  
    Configuration item name
  - default : `Any type`  
    (optional) The default value to return when the read fails.  
    The default is `Null`
- Return value: The data of the specified configuration item.
- Return value type: `Any type`, subject to the specific type of data stored.

<br>

#### Delete Configuration Item

`conf.delete(name)`

- Parameter:
  - name : `String`  
    Configuration item name
- Return value: Whether the deletion is successful.
- Return value type: `Boolean`

If you don't need this configuration item, in order to avoid confusion when others modify the configuration file, you can choose to delete it.

<br>

### 📄 Ini Format Configuration File

#### Create/Open an Ini Profile 

[JS] `new IniConfigFile(path[,default])`  
[Lua] `IniConfigFile(path[,default])`

- Parameters: 
  - path : `String`  
    The path where the configuration file is located, based on the BDS root directory.  
    LLSE will automatically create a directory in the configuration file path if it does not already exist.
  - default : `String`  
    (Optional parameter) Default content of the configuration file.  
    If during initialization it **does not exist**, the engine will create a new configuration file and write the default content here.  
    If this parameter is not passed in, the new configuration file will be empty.
- Return value: Open/created profile object.
- Return value type: `IniConfigFile`
  - Throws exception if create/open fails.

We recommend that you create a directory named `BDS_Root_Directory/plugins/plugin_name/` with a config file named `config.json` to keep the configuration of each plugin uniform.

<br>

For an ini profile object `conf`, you have these read and write interfaces available:

#### Initialize Configuration Items (Convenience Function)

`conf.init(section,name,default)`

- Parameters: 
  - section : `String`  
    Configuration item key name
  - name : `String`  
    Configuration item name
  - default : `Any type`  
    The value written when the configuration item is initialized. The allowed data types are:
    `Integer` `Float` `String` `Boolean`
- Return value: The data of the specified configuration item.
- Return value type: `Any type`, subject to the specific type of data stored.

Here is an easy way to initialize the configuration file, avoiding the trouble of handwriting the contents of the default configuration file.

If the accessed configuration item does not exist, then the engine will automatically create the item `init` in the configuration file and write the given default value.
If the accessed configuration item `init` already exists, the engine will read and return the existing value in the configuration file.

<br>

#### Write Configuration Item

`conf.set(section,name,data)`

- Parameters: 
  - section : `String`  
    Configuration item key name
  - name : `String`  
    Configuration item name
  - data : `Any type`  
    Configuration data to write. The allowed data types are:    
    `Integer` `Float` `String` `Boolean`

- Return value: Whether the write is successful.

- Return value type: `Boolean`

If the configuration item does not exist, the interface will be created automatically.

<br>

#### Read Configuration Items

Read string `conf.getStr(section,name[,default])`  
Read integer `conf.getInt(section,name[,default])`  
Read float `conf.getFloat(section,name[,default])`  
Read boolean `conf.getBool(section,name[,default])`  

- Parameters: 
  - section : `String`  
    Configuration item key name
  - name : `String`  
    Configuration item name
  - default :  `String`/ `Integer`/ `Float`/ `Boolean`  
    (optional) The default value to return when the read fails.  
    The default is `0`
- Return value: The data of the specified configuration item.
- Return value type: `String`/ `Integer`/ `Float`/ `Boolean`

<br>

#### Delete Configuration Item

`conf.delete(section,name)`

- Parameters: 
  - section : `String`  
    Configuration item key name
  - name : `String`  
    Configuration item name
- Return value: Whether the deletion is successful.
- Return value type: `Boolean`

If you don't need this configuration item, in order to avoid confusion when others modify the configuration file, you can choose to delete it.

<br>

### 💼 Other Common Interface Functions

For a profile object `conf`, you can use these generic interfaces for auxiliary purposes:

#### Reload the Configuration Items in the File

`conf.reload()`

- Return value: Whether the load was successful.

For performance reasons, the configuration file interface caches read operations, each read operation is read from direct memory, and writes are written directly to disk files. Considering that the configuration file may be modified by the user, after you confirm that the user has modified the configuration file, you need to use this function to refresh the memory cache data of the configuration file.

<br>

#### Close Config File

`conf.close()`

- Return value: Whether closing the file was successful.

After the profile is closed, do not continue to use it!

<br>

#### Get Configuration File Path

`conf.getPath()`

- Return value: The file path of the current configuration file.
- Return value type: `String`

<br>

#### Read the Content of the Entire Configuration File

`conf.read()`

- Return value: All contents of the current configuration file.
- Return value type: `String`

<br>

#### Write the Contents of the Entire Configuration File

`conf.write(content)`

- Parameter: 
  - content : `String`  
    The string that will be written to the configuration file.
- Return value: Whether the write is successful.
- Return value type: `Boolean`

<br>