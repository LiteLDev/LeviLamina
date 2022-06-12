## 🌏 网络接口 API

下面这些API为脚本提供了基本的网络接口。  
如果有更复杂的需求，可以使用各自语言平台的网络库来完成任务  

## 目录
- 🔌 [WebSocket 客户端对象 API](#🔌-websocket-客户端对象-api)
- 📡 [Http 服务端对象 API](#📡-http-服务端对象-api)
  - [Http 请求对象 API](#http-请求对象-api)
  - [Http 响应对象 API](#http-响应对象-api)

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

## 📡 Http 服务端对象 API

LLSE提供了简易的Http服务端服务，可以用于Webhook等**数据传输量较小**的Web服务。  
如果您想搭建网站，更推荐使用老牌Web服务软件如Apache, Nginx等。

### 创建一个新的服务器对象

[Js]  `new HttpServer()`  
[Lua] `HttpServer()`

- 返回值：新的服务器对象
- 返回值类型：`HttpServer`

<br>

### 监听 Get 请求

`svr.onGet(path, callback)`

- 参数：
  - path : `String`  
    请求目录，以`/`开头，可以包含正则表达式。如: `/test/(.+)`
  - callback : `Function<(HttpRequest, HttpResponse)>`  
    回调函数，在收到符合path的GET请求回调
- 返回值：处理完毕的服务器对象（便于连锁进行其他操作）
- 返回值类型：`HttpServer`

<br>

### 监听 Put 请求

`svr.onPut(path, callback)`

- 参数：
  - path : `String`  
    请求目录，以`/`开头，可以包含正则表达式。如: `/test/(.+)`
  - callback : `Function<(HttpRequest, HttpResponse)>`  
    回调函数，在收到符合path的PUT请求回调
- 返回值：处理完毕的服务器对象（便于连锁进行其他操作）
- 返回值类型：`HttpServer`

<br>

### 监听 Post 请求

`svr.onPost(path, callback)`

- 参数：
  - path : `String`  
    请求目录，以`/`开头，可以包含正则表达式。如: `/test/(.+)`
  - callback : `Function<(HttpRequest, HttpResponse)>`  
    回调函数，在收到符合path的POST请求回调
- 返回值：处理完毕的服务器对象（便于连锁进行其他操作）
- 返回值类型：`HttpServer`

<br>

### 监听 Patch 请求

`svr.onPatch(path, callback)`

- 参数：
  - path : `String`  
    请求目录，以`/`开头，可以包含正则表达式。如: `/test/(.+)`
  - callback : `Function<(HttpRequest, HttpResponse)>`  
    回调函数，在收到符合path的PATCH请求回调
- 返回值：处理完毕的服务器对象（便于连锁进行其他操作）
- 返回值类型：`HttpServer`

<br>

### 监听 Delete 请求

`svr.onDelete(path, callback)`

- 参数：
  - path : `String`  
    请求目录，以`/`开头，可以包含正则表达式。如: `/test/(.+)`
  - callback : `Function<(HttpRequest, HttpResponse)>`  
    回调函数，在收到符合path的DELETE请求回调
- 返回值：处理完毕的服务器对象（便于连锁进行其他操作）
- 返回值类型：`HttpServer`

<br>

### 监听 Options 请求

`svr.onOptions(path, callback)`

- 参数：
  - path : `String`  
    请求目录，以`/`开头，可以包含正则表达式。如: `/test/(.+)`
  - callback : `Function<(HttpRequest, HttpResponse)>`  
    回调函数，在收到符合path的OPTIONS请求回调
- 返回值：处理完毕的服务器对象（便于连锁进行其他操作）
- 返回值类型：`HttpServer`

<br>

### 监听请求 - 说明

请注意，请求监听是有优先级的。  
如果有多个路径同时满足正则表达式，则选择先定义的路径。  
例如：  
```js
svr.onGet('/test/123', (req, res) => {
  res.write('test');
}).onGet('/test/(.+)', (req, res) => {
  res.write('get /test/');
}).onGet('/test/foo', (req, res) => {
  res.write("bar");
});
// 请求 /test/123 时，第一个回调函数将被调用; 而请求 /test/foo 时，第二个回调函数将被调用（尽管第三个回调函数的路径更匹配）
```

### 监听 PreRouting 预路由事件

`svr.onPreRouting(callback)`

- 参数：
  - callback : `Function<bool(HttpRequest, HttpResponse)>`  
    回调函数，在收到请求时调用。在回调函数中可以修改响应，如果返回`false`，则不会继续路由至对应路径的回调函数(但仍然会触发PostRouting事件)。
- 返回值：处理完毕的服务器对象（便于连锁进行其他操作）
- 返回值类型：`HttpServer`

<br>

### 监听 PostRouting 后路由事件

`svr.onPostRouting(callback)`

- 参数：
  - callback : `Function<(HttpRequest, HttpResponse)>`  
    回调函数，在对应目录的回调函数(或PreRouting事件)执行完毕后调用，在回调函数中可以修改响应
- 返回值：处理完毕的服务器对象（便于连锁进行其他操作）
- 返回值类型：`HttpServer`

<br>

### 监听 Error 错误事件

`svr.onError(callback)`

- 参数：
  - callback : `Function<(HttpRequest, HttpResponse)>`  
    回调函数，在错误(状态码 >= 400)时调用
- 返回值：处理完毕的服务器对象（便于连锁进行其他操作）
- 返回值类型：`HttpServer`

<br>

### 监听 Exception 异常事件

`svr.onException(callback)`

- 参数：
  - callback : `Function<(HttpRequest, HttpResponse, String)>`  
    回调函数，在handler中有抛出异常时调用，参数3为异常信息
- 返回值：处理完毕的服务器对象（便于连锁进行其他操作）
- 返回值类型：`HttpServer`

<br>

### 监听端口并开启服务器

`svr.listen(addr, port)`  
`svr.startAt(addr, port)`

- 参数：
  - addr : `String`  
    监听地址，可以是IP地址或域名
  - port : `Number`  
    监听端口
- 返回值：处理完毕的服务器对象（便于连锁进行其他操作）
- 返回值类型：`HttpServer`

<br>

### 停止服务器

`svr.stop()`

- 返回值：无

<br>

### 获取服务器是否正在运行

`svr.isRunning()`

- 返回值：服务器正在运行与否
- 返回值类型：`Boolean`

<br>

## Http 请求对象 API

### Http请求对象 - 属性
| 属性             | 含义               | 类型     | 例                           |
|------------------|-------------------|----------|-----------------------------|
| `req.method`     | 请求方法           | `String` | `'GET'`                     |
| `req.path`       | 请求路径           | `String` | `'/233'`                    |
| `req.query`      | 请求查询参数        | `Object` | `{a: 'b', c: ['d', 'e']}`   |
| `req.params`      | 请求查询参数(同上)  | `Object` | `{a: 'b', c: ['d', 'e']}`   |
| `req.headers`    | 请求头             | `Object` | `{a: ['b'], c: ['d', 'e']}` |
| `req.body`       | 请求内容           | `String` | `'awa'`                     |
| `req.remoteAddr` | 请求源地址         | `String` | `'114.51.41.91'`            |
| `req.remotePort` | 请求源端口         | `Number` | `11451`                     |
| `req.version`    | 请求版本           | `String` | `'HTTP/1.1'`                |
| `req.matches`    | 请求路径正则匹配结果 | `Array`  | `['/test11', '11']`         |

这些对象属性都是只读的，无法被修改，并且只能在请求回调函数中使用(理论上复制到外部也可以，但不推荐)。  

***注意：***
1. **`req.matches[0]` 为原始文本，其后面的元素才是匹配结果**
2. **`req.header["Name"]` 为数组而不是字符串**

***扩展例子：***
1. `?k=v1&k=v2&k1=v1` => `{k: ['v1', 'v2'], k1: 'v1'}`
2. `/test/(.+)/(.+)` => `/test/ll/233` => `['/test/ll/233', 'll', '233']`

<br>

### 获取指定请求头的值

`req.getHeader(name)`

- 参数：
  - name : `String`  
    请求头名称
- 返回值：请求头的值数组(如果没有该请求头，则返回`[]`空数组)
- 返回值类型：`Array<String>`

<br>

## Http 响应对象 API

### Http响应对象 - 属性
| 属性             | 含义               | 类型     | 例                           |
|------------------|-------------------|----------|-----------------------------|
| `res.status`     | 响应状态码         | `Number` | `200`                       |
| `res.headers`    | 响应头             | `Object` | `{a: ['b'], c: ['d', 'e']}` |
| `res.body`       | 响应内容           | `String` | `'awa'`                     |
| `res.version`    | 响应版本           | `String` | `'HTTP/1.1'`                |
| `res.reason`     | 错误原因           | `String` | `'OK'`                      |

这些属性可以修改且应当被修改，但只有在回调函数中修改才有效

<br>

### 获取指定响应头的值

`req.getHeader(name)`

- 参数：
  - name : `String`  
    响应头名称
- 返回值：响应头的值数组(如果没有该响应头，则返回`[]`空数组)
- 返回值类型：`Array<String>`

<br>

### 设置指定响应头的值

`req.setHeader(name, value)`

- 参数：
  - name : `String`  
    响应头名称
  - value : `Any`  
    响应头值
- 返回值：处理完毕的响应对象
- 返回值类型：`HttpResponse`

<br>

### 写入响应内容

`res.write(content1, content2, ...)`

- 参数：
  - content : `Any`  
    响应内容
- 返回值：处理完毕的响应对象
- 返回值类型：`HttpResponse`
- 注：本函数在目前相当于`res.body += content1 + content2 + ...`

<br>

## Http API 样例

```js
let server = new HttpServer();
server.onGet("/hello(.+)", (req, resp) => {
	logger.info("http_server_test: run: onGet: Received a request from ", req.remoteAddr, 
				':', req.remotePort, " for ", req.path);
	resp.write("<html><body>")
		.write("<h1>It works!</h1>")
		.write("<br/>")
		.write("<p>Request Headers: ", JSON.stringify(req.headers, null, 4), "</p>")
		.write("<p>Request Body: ", req.body, "</p>")
		.write("<p>Your Address: ", req.remoteAddr, ':', req.remotePort, "</p>")
		.write("<p>HTTP Version: ", req.version, "</p>")
		.write("<p>Method: ", req.method, "</p>")
		.write("<p>Path: ", req.path, "</p>")
		.write("<p>Parsed Query: ", JSON.stringify(req.query, null, 4), "</p>")
		.write("<p>Path Regex Matches: ", JSON.stringify(req.matches), "</p>")
		.write("</body></html>")
	resp.status = 200;
	resp.reason = "OK";
	resp.setHeader("Content-Type", "text/html");
}).onGet("/404", (req, resp) => {
	resp.status = 404;
	resp.reason = "Not Found";
	resp.write("Not Found");
}).onGet("/test-redirect", (req, resp) => {
	// https://developer.mozilla.org/zh-CN/docs/Web/HTTP/Redirections
	resp.status = 301;
	resp.reason = "Moved Permanently";
	resp.setHeader("Location", "https://github.com");
}).onGet("/(.+)", (req, resp) => {
	resp.write("Hello World! ", req.matches);
}).onPreRouting((req, resp) => {
	logger.info("http_server_test: run: onPreRouting: resp.body.length: ", resp.body.length);
	if (req.path == "/test-prerouting") {
		resp.body = "Hello World!";
		resp.status = 200;
		resp.reason = "OK";
		return false;
	}
}).onPostRouting((req, resp) => {
	logger.info("http_server_test: run: onPostRouting: resp.body.length: ", resp.body.length);
}).onError((req, resp) => {
	resp.write("\nonError called");
}).listen(this.listen_address, this.listen_port);
logger.info("http_server_test: run: Server listening on " + this.listen_address + ":" + this.listen_port);
```
请查看 [UnitTest](https://github.com/LiteLDev/LiteLoaderBDS/tree/main/Test/UnitTest.js)
