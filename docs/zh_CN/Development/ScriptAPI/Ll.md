## 💡 插件加载相关 API

这里提供了一些与加载器操作相关的接口。

### 获取LiteLoader加载器版本

`ll.version()`

- 返回值：加载器版本对象（`Object`）

- 返回值类型： `Object<Integer,Integer,Integer,Boolean>`

  - 对于返回的某个加载器版本对象 ver，有如下这些成员：

  | 成员         | 含义                                  | 类型      |
  | ------------ | ------------------------------------- | --------- |
  | ver.major    | 主版本号（如 **2**.1.0 里的 **2**）   | `Integer` |
  | ver.minor    | 次版本号（如 2.**1**.0 里的 **1**）   | `Integer` |
  | ver.revision | 修订版本号（如 2.1.**0** 里的 **0**） | `Integer` |
  | ver.isBeta   | 当前版本是否为测试版                  | `Boolean` |

<br>

### 获取LiteLoader加载器版本字符串

`ll.versionString()`

- 返回值：加载器版本
- 返回值类型： `String`

<br>

### 检查LiteLoader加载器版本

`ll.requireVersion(major[,minor,revision])`

- 参数：
  - major: `Integer`  
    检查当前已安装LL的主版本号是否 >= 此值
  - minor: `Integer`（可选参数）  
    检查当前已安装LL的次版本号是否 >= 此值
  - revision: `Integer`（可选参数）  
    检查当前已安装LL的修订版本号是否 >= 此值
- 返回值：检查结果
- 返回值类型： `Boolean`

如果检测发现当前安装的LLSE版本低于传入的数值，将返回`false`。  
你可以选择根据结果判断并报错，提醒用户升级自己的LiteLoader(LLSE)版本

<br>

### 列出所有已加载的插件

`ll.listPlugins()`

- 返回值：已加载的所有的插件名字列表
- 返回值类型： `Array<String,String,...>`

<br>

### 远程函数调用

为了可以让开发者开发的前置插件能够为其他插件提供接口和服务，这里提供了远程函数调用功能，让一个LLSE插件可以调用另一个插件中已有的函数。

#### 导出函数

首先，为了你的插件中的函数可以被其他插件定位，你首先将你插件中的某些函数导出，让别人可以通过名字找到你的接口所在。使用这个函数来导出你想要共享的函数

`ll.export(func,name)`

- 参数：
  - func : `Function`  
    要导出的函数
  - name : `String`  
    函数的导出名称。其他插件根据导出名称来调用这个函数
- 返回值：是否成功导出
- 返回值类型： `Boolean`

注意：如果导出时出现名字冲突，将会导出失败。你可能需要给导出名字加一些特有的前缀或者后缀，来避免可能和其他插件发生的冲突。

<br>

#### 导出函数

为了可以让开发者开发的前置插件能够为其他插件提供接口和服务，这里提供了远程函数调用功能，让一个 LL 或 LLSE 插件可以调用另一个插件中已有的函数。

`ll.export(func,namespace,name)`

- 参数：
  - func : `Function`  
    要导出的函数
  - namespace : `String`  
    函数的命名空间名，只是方便用于区分不同插件导出的API
  - name : `String`  
    函数的导出名称。其他插件根据导出名称来调用这个函数
- 返回值：是否成功导出
- 返回值类型： `Boolean`

注意：如果导出已有现命名空间和名字的函数，将会导出失败。此 API 暂时仅在 `debugMode` 下可用

<br>

#### 导入函数

当你已经得知有插件导出函数之后，为了可以使用他导出的函数，首先需要将这个函数导入到你自己的脚本系统中  
LLSE提供了接口 import 来导入其他插件已经导出的函数。

`ll.import(name)`

- 参数：
  - name : `String`  
    要导入的函数使用的导出名称
- 返回值：导入的函数
- 返回值类型： `Function`

`ll.import` 将把目标函数直接导入到你的脚本环境中。因此，你可以像使用一个已经存在的函数那样调用一个被导入的函数。跨插件调用的流程将在后台自动完成，你不需要担心任何这方面的问题。

注意：在远程调用的过程中，不能在参数传递类似于玩家对象这类的自定义数据对象。你可以用玩家Xuid信息等作为替代

<br>

#### 导入函数

当你已经得知有插件导出函数之后，为了可以使用他导出的函数，首先需要将这个函数导入到你自己的脚本系统中  
LLSE提供了接口 import 来导入其他插件已经导出的函数。

`ll.import(namespace,name)`

- 参数：
  - namespace : `String`  
    要导入的函数使用的命名空间名称
  - name : `String`  
    要导入的函数使用的导出名称
- 返回值：导入的函数
- 返回值类型： `Function`

`ll.import` 将把目标函数直接导入到你的脚本环境中。因此，你可以像使用一个已经存在的函数那样调用一个被导入的函数。跨插件调用的流程将在后台自动完成，你不需要担心任何这方面的问题。

注意：在远程调用的过程中，不能在参数传递类似于玩家对象这类的自定义数据对象。你可以用玩家Xuid信息等作为替代
注意：此 API 暂时仅在 `debugMode` 下可用

<br>

#### 远程调用参数类型对照，其中Type可以为其他受支持的类型

| 内部类型 | C++ | ScriptEngine | .NET |
| -- | -- | -- | -- | 
| `std::nullptr_t` | `std::nullptr_t` | `Null` | `null` / `Nothing` / `nullptr`
 | 
| `bool` | `bool` | `Boolean` | `Boolean` | 
| `RemoteCall::NumberType` | `__int64`, `double`... | `Number` | `Int64`, `Double`... | 
| `std::string` | `std::string` | `String` | `String` | 
| `std::vector<Type>` | `std::vector<Type>` | `Array` | `List<Type>` | 
| `std::unordered_map<std::string,Type>` | `std::unordered_map<std::string,Type>` | `Object` | `Dictionary<String,Type>` | 
| `Actor*` | `Actor*` | `Entity` | `MC.Actor` | 
| `Player*` | `Player*` | `Player` | `MC.Player` | 
| `RemoteCall::ItemType` | `ItemStack*`, `std::unique_ptr<ItemStack>` | `Item` | `RemoteCall.ItemType` | 
| `RemoteCall::BlockType` | `Block*`, `BlockInstance` | `Block` | `RemoteCall.BlockType` | 
| `BlockActor*` | `BlockActor*` | `BlockActor` | `MC.BlockActor` | 
| `Container*` | `Container*` | `Container` | `MC.Container` | 
| `RemoteCall::WorldPosType` | `Vec3`,`std::pair<Vec3,int>` | `FloatPos` | `MC.Vec3`,`RemoteCall.WorldPosType` | 
| `RemoteCall::BlockPosType` | `BlockPos`,`std::pair<BlockPos, int>` | `IntPos` | `MC.BlockPos`,`RemoteCall.BlockPosType` | 
| `RemoteCall::NbtType` | `CompoundTag*`,`std::unique_ptr<CompoundTag>` | `NBTCompound` | `RemoteCall.NbtType` | 

#### 远程调用函数举例说明

比如，有一个插件导出了某个函数，函数的导出名称为 AAA_Welcome  
当你使用 `welcome = ll.import("AAA_Welcome"); ` 完成导入之后，你就可以直接在下面执行：

`welcome("hello",2,true);`   

就像这个函数本来就已经存在了一样。  
函数的参数将被自动转发到对应的目标函数执行，执行完毕之后将返回回应的目标函数的返回值，整个过程都是自动完成的。

注意！在调用函数的时候，需要保证你传入的参数和目标函数接受的参数数量和类型都是正确且一一对应的。否则，将会发生错误。

<br>

### 判断远程函数是否已导出
`ll.hasExported(namespace,name)`

- 参数：
  - namespace : `String`  
    函数使用的命名空间名称
  - name : `String`  
    函数使用的导出名称
- 返回值：函数是否已导出
- 返回值类型： `Boolean`

<br>

### 设置插件依赖库

有的时候，你需要确保某些插件在你自己的插件之前加载，以使用他们提供的前置服务，我们称这些前置插件为**依赖库**。

在使用上述提到的导入函数时，你需要注意：能够导入一个函数的前提是要被调用的前置插件已经被LLSE加载。  
因此，你可能需要用下面的函数来设置依赖库，让你需要的前置插件被优先加载，保证导入成功

LLSE提供了下面的接口来提前加载插件所需要的依赖库，从本地文件，甚至可以从远程HTTP(s)地址下载你所需的依赖库文件

`ll.require(path[,remotePath])`

- 参数：
  - path : `String`  
    依赖库文件名（如`addplugin.js`)
  - remotePath : `String`  
    （可选参数）查找并装载依赖库的路径，说明见下
- 返回值：是否加载依赖库成功
- 返回值类型： `Boolean`

在执行`ll.require`后，LLSE将进行如下一系列操作

- 搜索已加载插件列表。如果依赖库已经被加载，则直接返回成功。
- 搜索 **plugins** 和 **plugins/lib** 目录，如果发现对应的依赖库文件，则加载，并返回加载结果
- 如果搜索完毕之后未发现对应的依赖库文件，且 remotePath 参数也未传入，则直接返回失败
- 使用 HTTP(s) 协议请求 remotePath 参数对应的下载地址，并下载依赖库文件到 **plugins/lib** 目录。如果下载失败，则返回失败
- 加载下载成功的依赖库文件，并返回加载结果

<br>

依赖库作者可以将相关代码托管在GitHub或Gitee等稳定的大型网站上，并将外链提供给其他开发者以供远程下载使用。

<br>

### 将字符串作为脚本代码执行

`ll.eval(str)`

- 参数：
  - str : `String`  
    要作为脚本代码执行的字符串
- 返回值：执行结果
- 返回值类型： `任意类型`

不同于上面提到的的`ll.require`，此处执行的脚本代码是在当前插件对应的引擎中直接执行的，类似于各语言的 eval 机制