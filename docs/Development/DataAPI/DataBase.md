## 📦 Database API

Database, generally used for plugins to persistently store data generated and processed by certain plugins.  
Unlike configuration files, databases generally have no readability requirements, but have considerable considerations for performance and stability.  
LLSE provides a consolidated database interface to accomplish this task.    
In terms of specific implementation, the engine provides two different database formats: NoSQL database in key-value pair format, and SQL database in tabular format. You can use either as needed.

<br>

### 🔑 Key-Value NoSQL Database 

Key-value databases are suitable for storing data in key-value form, such as `name:apple`, `value:5` and many more. 
This is accomplished with `leveldb`.

#### Create/Open a Key-Value Database

Before using the database, you need to give a database path, the interface will open/create the specified database and return a database object.  
A leveldb database is composed of multiple files, so you need to pass in the path of a folder where the database files will be stored.  
If this directory already contains a database, it will be opened, otherwise a new one will be created.

[JS] `new KVDatabase(dir)`  
[Lua] `KVDatabase(dir)`

- Parameters: 
  - dir : `String`  
    The storage directory path of the database, based on the BDS root directory.
- Return value: Open/created database objects
- Return value type: `KVDatabase`
  - If the return value is `Null`, it means the creation/opening failed 

When the given directory does not exist, it will try to automatically create the corresponding directory path layer by layer.

After successfully opening the database, you can use the following interfaces to perform related operations.  
For a database object `db`, with the following functions:

<br>

#### Write Data Item

`db.set(name,data)`

- Parameters: 
  - name : `String`  
    Data item name
  - data : `Any type`  
    Data to write. The allowed data types are:    
    `Integer` `Float` `String` `Boolean` `Array` `Object `  
    The above elements can only be nested inside an `Array` or an `Object`.
- Return value: Whether the write is successful.
- Return value type: `Boolean`

<br>

#### Read Data Item

`db.get(name)`

- Parameters: 
  - name : `String`  
    Data item name
- Return value: The data of this item stored in the database.
- Return value type: `Any type`, depending on the specific type of data stored.
  - If the return value is `Null` it means that the data does not exist.

<br>

#### Delete Data Item

`db.delete(name)`

- Parameters: 
  - name : `String`  
    Data item name
- Return value: Whether the deletion was successfu.
- Return value type: `Boolean`

<br>

#### Get All Data Item Names 

`db.listKey()`

- Return value: An array of all data item names.
- Return value type: `Array`

<br>

#### Close the Database

`db.close()`

- Return value: Whether the shutdown was successful
- Return value type: `Boolean`

After the database is closed, do not continue to use it!

<br>

------

### 📋 SQL Database

SQL databases are suitable for processing large amounts of relational data using SQL statements. The bottom layer of the interface is implemented using a cross-database operation framework, which can connect to most of the commonly used SQL databases in the market.

<br>