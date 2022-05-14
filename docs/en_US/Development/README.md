# LLSE - Overview of LLSE Plugin Development

## ⛳ Start

`LiteLoader ScriptEngine` hereinafter referred to as **LLSE** is an official server for Bedrock Edition  `Bedrock Dedicated Server` hereinafter referred to as **BDS** plugin framework, providing powerful cross-language script plug-in support and stable development API support.  

> Welcome to LLSE's plug-in development!

From here, you will gradually become familiar with the basic elements and processes of LLSE plug-in development. 

Before engaging with development, you need to have a systematic understanding of LLSE. The documentation here, first of all, will help you establish a general knowledge framework. 
Familiarize yourself with them first, this will be a very important part of your learning development process. 

<br>

## 💊 Data Types

As we all know, the type system is usually a more critical part of a design framework. 
So, first, you need to be familiar with several data types that you will use frequently when working with API documentation. 
The nouns of these data types appear frequently in the development documentation, so be sure to be familiar with them first. 

### Generic Data Type Conventions

Although scripting languages ​​are usually weakly typed, there is no need to pay attention to specific data types, but since LLSE supports a variety of different scripting languages, in order to facilitate the docking of the API, some general data types and the mapping relationship to the corresponding scripting language types are defined below.

| Engine Data Type | JS Data Type        | Lua Data Type | Data Type Description           |
| --------------- | ------------------ | ------------ | ---------------------- |
| `Null`          | `null` `undefined` | `nil`        | Empty, undefined, does not exist, etc. |
| `Integer`       | `Number`           | `number`     | Integer                |
| `Float`         | `Number`           | `number`     | Float (Decimal, Real)   |
| `String`        | `String`           | `string`     | String                 |
| `Boolean`       | `Boolean`          | `boolean`    | Boolean                |
| `Function`      | `Function`         | `function`   | Function (Method)      |
| `Array`         | `Array`            | `table`      | Array (List)           |
| `Object`        | `Object`           | `table`      | Objects (Maps, Dictionaries, Tables)  |
| `ByteBuffer`    | `ArrayBuffer`      | `table`      | Byte Array             |

In addition to the above standard types, there are also some engine-defined object types. 

- `IntPos` - Integer coordinate object (see the base game interface for details)
- `FloatPos` - Floating point coordinate object (see the base game interface for details)
- `Player` - Player object (see Player for details)
- `Entity` - Entity objects (see Entity for details) 
- `Block` - Block objects (see Blocks for details)
- `BlockEntity` - Block entity object (see Block entity for details)
- `Item` - Inventory item object (see Items for details)
- `Device` - Player equipment information object (see player for details)
- `Container` - container object (see container for details)
- `Objective` - Scored item object (see Scoreboard for details)
- `NBT` - NBT Tag object (see NBT for details)
- `SimpleForm` - Normal form objects (see Form Builder for details)
- `CustomForm` - Custom form objects (see Form Builder for details)
- `Conf` - Configuration file object (see configuration file for details)
- `DB` - Database objects (see Database for details)
- `File` - File object (see file reading and writing for details)
- `WSClient` - WebSocket client object (see Network for details)
- `Enum` - Enumeration type, usually stored in some type, providing some limited range of options.

<br>

## 📌 API Documentation Description Conventions

As we all know, a good help document is naturally inseparable from a unified and concise format and a clear appearance. 
Therefore, in order to unify and standardize the format of the document, it is necessary to uniformly specify the description convention of LLSE's help document. 

> For all the API documentation you see next, there are writing rules like this: 

Regarding the description of function parameter types in the documentation:
Function parameters will be described in the format parameter name: parameter type
For example: cmd : String represents a string type variable cmd
If Array<...> appears in the parameter type, it means an array/list containing the variables within <>

1. About the description of **function parameter types** in the documentation:
   The function parameters will follow **Paameter Name : Parameter Type** Format description example: cmd : `String` means a **String** variable of type **cmd**  
   The parameter type `Array<...>`, represents an array/list containing the variables within <>.
   

2. About the description of **optional parameters** in the documentation:  
   If `optional parameters` appears in the parameter descripton, it means that you have the option to not pass this parameter.
   When you do not pass this parameter, the engine will use the default value given in the description.
   For example: `pl.tell(msg[,type])`, where `type` is an optional parameter.

<br>

After you are familiar with the above infrastructure, you can start to read the documentation for each other specific content step by step. 
If you come across something you forgot, you can look it up more. 

<br>

## 📜 Plugin Development Tips

Here, there are some suggestions when developing plugins, I hope they can help you 

- **Don't reinvent** the wheel
  When possible, try to use libraries that have been written by others for specific functions, rather than writing each function yourself. In this way, it is conducive to the integration and development of the ecology. 
- Think about the **user**
  When designing the interface and configuration, it is best to take the user's feelings into account. The content of external interaction such as UI and commands should be as clear and clear as possible, in line with normal usage habits. 
- From multiple perspectives, **innovation** occurs  
  Everyone is encouraged to learn from the excellent plugins already available in JE, and everyone is welcome to make their own innovations.