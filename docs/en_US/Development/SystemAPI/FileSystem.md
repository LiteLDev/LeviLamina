## 📂 Directory and File API 

The following APIs provide interfaces for manipulating files, directories, etc. to interact with the file system.

> Note: The relative paths of all incoming functions are based on the BDS root directory 

### Create Folder   

`File.createDir(dir)`  
`File.mkdir(dir)`

- Parameter: 
  - dir : `String`  
    The path to the destination folder.  
    Multiple folders can be created directly, no need to create one at a time. 
- Return value: Whether the folder or folders were created successfully.
- Return value type: `Boolean`

<br>

### Delete File/Folder  

`File.delete(path)`

- Parameter: 
  - path : `String`  
    Path to target file/folder
- Return value: Whether the deletion was successful.
- Return value type: `Boolean`

<br>

### Check if a File/Folder Exists

`File.exists(path)`

- Parameter: 
  - path : `String`  
    Path to target file/folder.
- Return value: Whether the target exists.
- Return value type: `Boolean`

<br>

### Copy Files/Folders to Specified Location 

`File.copy(from,to)`

- Parameters: 
  - from : `String`  
    Path to source file/folder.

  - to : `String`  
    The location of the target file/folder.
- Return value: Whether the copy is successful.
- Return value type: `Boolean`

<br>

### Move File/Folder to Specified Location  

`File.move(from,to)`

- Parameters: 
  - from : `String`  
    Path to source file/folder.

  - to : `String`  
    The location of the target file/folder.
- Return value: Whether the copy is successful.
- Return value type: `Boolean`

<br>

### Rename specified file/folder  

`File.rename(from,to)`

- Parameters: 
  - from : `String`  
    Current name of file/folder.

  - to : `String`  
    New name of the file/folder.
- Return value: Whether the rename is successful.
- Return value type: `Boolean`

<br>

### Get the Size of the Specified File

`File.getFileSize(path)`

- Parameter: 
  - path : `String`  
    The file path to be manipulated.

- Return value: the size of the file (bytes).
- Return value type: `Integer`

If the path location passed in is a folder, returns `-1`.

<br>

### Determine if the Specified Path Is a Folder

`File.checkIsDir(path)`

- Parameter: 
  - path : `String`  
    Determined path.
- Return value: Whether the target path is a folder.
- Return value type: `Boolean`

If the target path does not exist, it will also return `false`

<br>

### List All Files/Folders Under the Specified Folder

`File.getFilesList(dir)`

- Parameter: 
  - dir: `String`  
    Folder path.

- Return value: Array of file names, folder names.
- Return value type: `Array<String,String,...>`

<br>