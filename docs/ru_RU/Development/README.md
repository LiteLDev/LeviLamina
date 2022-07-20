# LLSE - Обзор разработки плагинов LLSE 

## ⛳ Начало

`LiteLoader ScriptEngine` именуемый в дальнейшем **LLSE** является официальным сервером для Bedrock Edition  `Bedrock Dedicated Server` именуемый в дальнейшем **BDS** инфраструктурой плагинов, обеспечивающей мощную поддержку подключаемых модулей сценариев на разных языках и стабильную разработку. Поддержка API.

> Доброе пожаловать в разработку плагинов на LLSE!

Здесь вы постепенно познакомитесь с основными элементами и процессами разработки подключаемых модулей LLSE.

Прежде чем приступить к разработке, вам необходимо получить базовое представление о LLSE. Документация поможет вам это сделать.

Сначала ознакомьтесь с ней, это важная часть обучения процесса разработки. 

<br>

## 💊 Типы переменных

As we all know, the type system is usually a more critical part of a design framework. 
So, first, you need to be familiar with several data types that you will use frequently when working with API documentation. 
The nouns of these data types appear frequently in the development documentation, so be sure to be familiar with them first. 

### Generic Data Type Conventions

Хотя скриптовые языки обычно слабо типизированы, нет необходимости обращать внимание на конкретные типы данных, но поскольку LLSE поддерживает множество различных скриптовых языков, для облегчения стыковки API, некоторых общих типов данных и отображения отношения к соответствующим типам языка сценариев определены ниже.

| Engine переменные| JS переменные     | Lua переменные | Описание переменных         |
| --------------- | ------------------ | ------------ | ---------------------- |
| `Null`          | `null` `undefined` | `nil`        | Пусто, не найден, дырка от бублика и т.д. |
| `Integer`       | `Number`           | `number`     | Число                |
| `Float`         | `Number`           | `number`     | Плавающие число(с точкой)   |
| `String`        | `String`           | `string`     | Строка                 |
| `Boolean`       | `Boolean`          | `boolean`    | Булева пременная (true/false)                |
| `Function`      | `Function`         | `function`   | Фукнция (Метод)      |
| `Array`         | `Array`            | `table`      | Массив (Лист)           |
| `Object`        | `Object`           | `table`      | Обьекты (Карты, Словари, Таблицы)  |
| `ByteBuffer`    | `ArrayBuffer`      | `table`      | Битовый массив           |

В дополнение к выше описанным типам данных существуют и те обьекты, которые определяются внутри LLSE. 

- `IntPos` - Обьект целочисленных координат 
- `FloatPos` - Обьект "плавающих" координат 
- `Player` - Обьект игрока 
- `Entity` - Обьект сущности
- `Block` - Обьект блока
- `BlockEntity` - Обьект блока-сущности
- `Item` - Обьект предмета в инвентаре 
- `Device` - Player equipment information object
- `Container` - container object
- `Objective` - Scored item object 
- `NBT` - NBT Tag object 
- `SimpleForm` - Normal form objects 
- `CustomForm` - Custom form objects 
- `Conf` - Configuration file object 
- `DB` - Database objects 
- `File` - File object 
- `WSClient` - WebSocket client object 
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
