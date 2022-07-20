# LLSE - System Functional Interface Documentation

> This provides an interface for connecting to **underlying system functions**, including operating the file system, accessing the network, etc.

For plugin development, the realization of interoperability with the underlying interface of the system is an important extension, which greatly enhances the flexibility of plug-in development.

## 📝 Simple File Read and Write API

The following APIs provide a simple interface for reading and writing files, which is convenient for occasional reading and writing of files. 
LLSE uses the file class `File` to encapsulate file-related operations.
If you need to manipulate files frequently, use the file classes below to improve performance.

> Note: All text-related operations use UTF-8 encoding.  

### Read in All the Contents of the File

`File.readFrom(path)`

- Parameter: 
  - path : `String`  
    The path of the target file, the relative path is based on the BDS root directory.
- Return value: All data in the file
- Return value type: `String`
  - If the return value is `Null`, the read failed.

<br>

### Write Content to the Specified File

`File.writeTo(path,text)`

- Parameter: 
  - path : `String`  
    The path of the target file, the relative path is based on the BDS root directory.

  - text : `String`  
    What will be written to the file.

- Return value: Whether the write is successful or not.

- Return value type: `Boolean`

> Note: If the file does not exist, it will be created automatically. If it exists, it will be **emptied** before writing.

<br>

### Append a Line to the Specified File

`File.writeLine(path,text)`

- Parameter: 
  - path : `String`  
    The path of the target file, the relative path is based on the BDS root directory.

  - text : `String`  
    What will be written to the file.
- Return value: Whether the write is successful or not.
- Return value type: `Boolean`

<br>

## 📋 File Object API

In LLSE, "file objects" are used to manipulate and read and write to a particular file.

### Create a New File Object

[JS] `new File(path,mode[,isBinary])`  
[Lua] `File(path,mode[,isBinary])`

- Parameter: 
  - path : `String`  
    The path of the file you want to open 
  - mode : `Enum`  
    File open mode
  - isBinary : `Boolean`  
    (optional parameter) whether to open the file in binary mode, the default is `false`  
    In normal mode, during file reading and writing, newlines will be converted according to the local format. If you open the file in binary mode, indicating that the file is not in normal text format, these automatic conversions will not occur.
- Return value: The open file object.
- Return value type: `File`
  - If the open fails, an exception will be thrown

The file opening mode has the following options:

| Open Mode         | Meaning                                                |
| ----------------- | ------------------------------------------------------ |
| `file.ReadMode`   | Open file for reading                                  |
| `file.WriteMode`  | Open and overwrite file, or create new file for writing|
| `file.AppendMode` | Open and write at the end of the file |

When using `ReadMode` and `WriteMode`, you can use `seekTo` to manually move the file pointer position.

> If the file with the given path exists, the existing file will be opened directly; if the file does not exist, a new file will be created automatically. If some directories in the opened path do not exist, the interface will automatically create directories.

After opening the file, you can use the interface of the file object described below to read and write the file. 

<br>


### File Object - Properties

Every file object contains some fixed object properties. for a specific file object `fi`, has the following properties

| Attributes            | Meaning               | Data Types      |
| --------------- | ------------------ | --------- |
| fi.path         | Current File Path       | `String`  |
| fi.absolutePath | Absolute current file path | `String`  |
| fi.size         | Current file size       | `Integer` |

These object properties are read-only and cannot be modified.

<br>

### File Object - Function

Each file object contains some member functions (member methods) that can be executed. for a specific file object `fi`, you can perform some operations on this file through the following functions

#### Synchronous Read and Write 

When using the synchronous read/write interface, you need to pay attention. If the file is too large or the read and write content is too large, the consumption time is too long, which may cause the game to freeze.
If there is not much content to read and write, use the synchronous interface to have a better development experience.
If there is a lot of content, you can use the following asynchronous read and write interface.

##### Read Text/Binary Data From File

`fi.readSync(cnt)`

- Parameter: 
  - cnt : `Number`  
    Number of characters/bytes to read
- Return value: read string content/binary data
- Return value type: `String` / `ByteBuffer`
  - If the return value is `Null`, the read failed.

Start reading from the current file pointer. Returns if the file was opened in binary mode `ByteBuffer`, otherwise return `String`.

<br>

##### Read a Line of Text From a File

`fi.readLineSync()`

- Return value: Read String Content
- Return value type: `String`
  - If the return value is `Null`, the read failed.

> Note that the newline at the end of the string should be handled by itself 

<br>

##### Read Everything From File

`fi.readAllSync()`

- Return value: Read string content/binary data
- Return value type: `String` / `ByteBuffer`
  - If the return value is `Null`, the read failed.

Reading starts at the current file pointer and continues until the end of the file. 
Returns if the file was opened in binary mode `ByteBuffer`, otherwise return `String`.

<br>

##### Write Text/Binary Data to File 

`fi.writeSync(str)`

- Parameter: 
  - str : `String` / `ByteBuffer`  
    The data that will be written
- Return value: Whether the write succeeded or not.
- Return value type: `Boolean`

If the file is opened in binary mode, the passed arguments will be written as binary bytes, otherwise they will be written as normal text.

<br>

##### Write a Line of Text to a File

`fi.writeLineSync(str)`

- Parameter: 
  - str : `String`  
    The `String` that will be written
- Return value: Whether the write succeeded or not.
- Return value type: `Boolean`

When this function executes, it will automatically add a newline at the end of the string.

<br>

#### Asynchronous Read and Write

When the amount of data is large and it takes a long time, it is recommended to use the asynchronous read/write interface to reduce the impact on the server.

##### Read Text/Binary Data From File (Async)

`fi.read(cnt,callback)`

- Parameter: 
  - cnt : `Number`  
    Number of characters/bytes to read
  - callback : `Function`  
    Callback function to get the result
- Return value: Whether the request was successfully sent.
- Return value type: `Boolean`

Note: The prototype of the callback function of the parameter callback: `function(result)`  

- result : `String` / `ByteBuffer`  
  read text/binary data  
  If result is `Null` it means that the read failed 

Start reading from the current file pointer. Returns if the file was opened in binary mode `ByteBuffer`, otherwise return `String`.

<br>

##### Read a Line of Text From a File (Async)

`fi.readLine(callback)`

- Parameter: 
  - callback : `Function`  
    Callback function to get the result.
- Return value: Whether the request was successfully sent.
- Return value type: `Boolean`

Note: The prototype of the callback function of the parameter callback:  `function(result)`  

- result : `String`  
  The text that was read from the file.

> Note that the newline at the end of the string should be handled by itself.

<br>

##### Read Everything From File (Async)

`fi.readAll(callback)`

- Parameter: 
  - callback : `Function`  
    Callback function to get the result.
- Return value: Whether the request was successfully sent.
- Return value type: `Boolean`

Note: The prototype of the callback function of the parameter callback:  `function(result)`  

- result : `String` / `ByteBuffer`  
  Text/Binary data read from the file.  
  If result is `Null` it means that the read failed.

Reading starts at the current file pointer and continues until the end of the file. 
Returns if the file was opened in binary mode `ByteBuffer`, otherwise return `String`.

<br>

##### Write Text/Binary Data to File (Async)

`fi.write(str[,callback])`

- Parameter: 
  - str : `String` / `ByteBuffer`  
    The data that will be written.
  - callback : `Function`  
    (optional parameter) Callback function to get the result.
- Return value: Whether the request was successfully sent.
- Return value type: `Boolean`

If the file is opened in binary mode, pass in a `ByteBuffer`, otherwise you need to pass in `String`.

Note: The prototype of the callback function of the parameter callback:  `function(result)`  

- result : `Boolean`  
  Whether the write is successful.

<br>

##### Write a Line of Text to a File (Async)

`fi.writeLine(str[,callback])`

- Parameter: 
  - str : `String`  
    The data that will be written
  - callback : `Function`  
    (optional parameter) Callback function to get the result.
- Return value: Whether the request was successfully sent.
- Return value type: `Boolean`

Note: The prototype of the callback function of the parameter callback:  `function(result)`  

- result : `Boolean`  
  Whether the write is successful.

> When this function executes, it will automatically add a newline at the end of the string.

<br>

#### Other Common Interfaces  

In addition to the above-mentioned read and write interfaces, other general interfaces for manipulating file objects are also provided here.

##### Move the File Pointer 

`fi.seekTo(pos,isRelative)`

- Parameter: 
  - pos : `Number`  
    The position to move the file pointer to.
  - isRelative : `Boolean`  
    Whether it is moving relative to the current file pointer position.
- Return value: Whether the move was successful.
- Return value type: `Boolean`

If isRelative is `true`pos means moving relative to the current position, a positive number means moving backward, and a negative number means moving forward.  
If isRelative is `false`, pos means move relative to the beginning of the file, which is `0` or a positive number. If `-1`, which means move to the end of the file.

<br>

##### Set File Size

`fi.setSize(size)`

- Parameter: 
  - size : `Number`  
    The size the file will be set to.
- Return value: Whether the setting was successful.
- Return value type: `Boolean`

The new size can be set larger than the current size of the file.
If the new size set is smaller than the current size of the file, the original file will be truncated.

<br>

##### Close File

`fi.close()`

- Return value: Whether closing the file was successful.
- Return value type: `Boolean`

Once the file is closed, it cannot be used until it is opened again.

<br>

##### Whether the File Pointer Is at the End of the File 

`fi.isEOF()`

- Return value: Whether the file pointer is at the end of the file.
- Return value type: `Boolean`

<br>

##### Flush File Buffer 

`fi.flush()`

- Return value: Whether the refresh was successful.
- Return value type: `Boolean`

<br>

##### Get Error Code 

`fi.errorCode()`

- Return value: the error code generated by the last IO operation.
- Return value type: `Integer`

If you encounter a failure in the use of the above interface, you can get the last error code from here.

<br>

##### Clear Error Status

`fi.clear()`

- Return value: whether the error was cleared successfully
- Return value type: `Boolean`

If a failure is encountered in the use of the above interface, after obtaining the error code, use this function to clear the error state to continue to use the file object normally.

<br>
