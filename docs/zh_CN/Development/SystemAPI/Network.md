## 🌏 网络接口 API

下面这些API为脚本提供了基本的网络接口。  
如果有更复杂的需求，可以使用各自语言平台的网络库来完成任务  

### 发送一个异步HTTP(s) Get请求  

`network.httpGet(url[,header],callback)`

- 参数：
  - url : `String`  
    请求的目标地址（包括 Get 请求附带的参数）
  - header : `Object`  
    请求头（包括 Get 请求Request header）  
  - callback : `Function`  
    当请求返回时执行的回调函数，用于回传HTTP(s)响应结果。
- 返回值：是否成功发送请求
- 返回值类型：`Boolean`

注：参数callback的回调函数原型：`function(status,result)`  

- status : `Integer`    
  返回的HTTP(s)响应码，如200代表请求成功
- result : `String`  
  返回的具体数据

如果请求执行失败，status值将为 -1

<br>

### 发送一个异步HTTP(s) Post请求  

`network.httpPost(url[,header],data,type,callback)`

- 参数：
  - url : `String`  
    请求的目标地址
  - header : `Object`  
    请求头（包括 Post 请求Request header）  
  - data : `String`  
    发送的数据
  - type : `String`  
    发送的 Post 数据类型，形如 `text/plain` `application/x-www-form-urlencoded` 等
  - callback : `Function`  
    当请求返回时执行的回调函数，用于回传HTTP(s)响应结果。
- 返回值：是否成功发送请求
- 返回值类型：`Boolean`

注：参数callback的回调函数原型：`function(status,result)`  

- status : `Integer`    
  返回的HTTP(s)响应码，如200代表请求成功
- result : `String`  
  返回的具体数据

如果请求执行失败，status值将为 -1

<br>

## 🔌 WebSocket 客户端对象 API

在LLSE中，使用「WebSocket 对象」来操作某个 WebSocket 客户端的连接和工作

### 创建一个新的WebSocket 客户端对象

[Js] `new WSClient()`  
[Lua] `WSClient()`

- 返回值：一个新的 websocket 客户端对象
- 返回值类型：`WSClient`

<br>

### WebSocket 客户端对象 - 属性

每一个WS客户端对象都包含一些固定的对象属性。对于某个特定的文件对象`wsc`，有以下这些属性

| 属性       | 含义           | 类型   |
| ---------- | -------------- | ------ |
| wsc.status | 当前的连接状态 | `Enum` |

这些对象属性都是只读的，无法被修改

其中，wsc.status 枚举有如下几种情况：

`wsc.Open` - 处于正常连接中  
`wsc.Closing` - 正在断开连接  
`wsc.Closed` - 未连接  

<br>

### WebSocket 客户端对象 - 函数

每一个WS客户端对象都包含一些可以执行的成员函数（成员方法）。对于某个特定的文件对象`wsc`，可以通过以下这些函数对这个客户端进行一些操作

#### 创建连接

`wsc.connect(target)`

- 参数：
  - target : `String`  
    要连接的目标地址，形如`ws://hostname[:port][/path/path][?query=value]`
- 返回值：是否成功连接
- 返回值类型：`Boolean` 

<br>

#### 异步创建连接

`wsc.connectAsync(target,callback)`

- 参数：
  - target : `String`  
    要连接的目标地址，形如`ws://hostname[:port][/path/path][?query=value]`
  - callback : `Function`
    当连接成功或者失败时执行的回调函数。
- 返回值：是否成功开始尝试连接
- 返回值类型：`Boolean` 

注：参数callback的回调函数原型：`function(success)`  

- success : `Boolean`    
  WebSocket 连接是否成功

<br>

#### 发送文本 / 二进制消息

`wsc.send(msg)`

- 参数：
  - msg : `String` / `ByteBuffer`  
    要发送的文本 / 二进制数据
- 返回值：是否成功发送
- 返回值类型：`Boolean` 

如果传入的参数类型是`String`，会按照文本发送，如果是`ByteBuffer`将按照二进制数据发送

<br>

#### 监听WebSocket事件

在WS工作的过程中，当收到消息或发生错误时，需要对相关信息进行处理。这里给出了监听事件的接口

`wsc.listen(event,callback)`

- 参数：

  - event : `String`  
    要监听的事件名（见下方监听事件列表）

  - callback : `Functon`  
    注册的监听函数（函数相关参数见下）  
    当指定的事件发生时，LLSE会调用你给出的监听函数，并传入相应的参数
- 返回值：是否成功监听事件
- 返回值类型：`Boolean` 

<br>

#### 监听事件列表

##### `"onTextReceived"` - 收到文本消息

- 监听函数原型
  `function(msg)`
- 参数：
  - msg : `String`  
    收到的文本消息

##### `"onBinaryReceived"` - 收到二进制消息

- 监听函数原型
  `function(data)`
- 参数：
  - data : `ByteBuffer`  
    收到的二进制消息

##### `"onError"` - 发生错误

- 监听函数原型
  `function(msg)`
- 参数：
  - msg : `String`  
    错误的提示信息

##### `"onLostConnection"` - 连接丢失

- 监听函数原型
  `function(code)`
- 参数：
  - code : `Integer`  
    错误码

<br>

#### 关闭连接

`wsc.close()`

- 返回值：是否成功关闭连接
- 返回值类型：`Boolean` 

在处于关闭状态时，请勿继续使用此客户端对象！

<br>

#### 强制断开连接

`wsc.shutdown()`

- 返回值：是否成功断开连接
- 返回值类型：`Boolean` 

在处于关闭状态时，请勿继续使用此客户端对象！

<br>

#### 获取错误码

`wsc.errorCode()`

- 返回值：上一次错误产生的错误码
- 返回值类型：`Integer`

如果在上述接口使用中遇到了失败，可以从这里获取上一个错误码