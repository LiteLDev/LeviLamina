# node.js 平台

ScriptX因为支持V8，因此也可以用在node.js平台，给node提供扩展（addon）。

### demo工程可以参考`test/node_addon`子工程。

### build tools

ScriptX使用cmake组织，而node.js默认使用gyp作为构建工具。幸运的是社区贡献了`cmake-js`工具来提供CMake的支持，且该工具是被官方承认的（出现在官方教程中）。


### 和直接使用ScriptX的区别

由于node.js平台已经创建了v8的各项资源，因此ScriptX并不需要创建他们，而是直接"wrap"。这里V8的backend提供了一个重载的构造函数专门用于这个场景`V8Engine(std::shared_ptr<utils::MessageQueue> messageQueue, v8::Isolate* isolate, v8::Local<v8::Context> context)`. 这个构造函数不会再创建isolate和context因此，在destroy engine的时候也不会销毁他们。

另外，由于node.js调用到ScriptX的绑定函数时并不会在外层包装一个`EngineScope`，因此在上述构造函数里有一个**特殊逻辑**：给当前线程创建一个线程全局的`EngineScope`。

### 一些实现细节

#### 关于`MessageQueue`

因为V8有自己的`v8::Platform`，内部实现了一套消息循环，因此`V8Engine`本身并不强依赖`MessageQueue`（JSCore则是强依赖的）——即：`V8Engine`并不会往`MessageQueue`里post消息。
所以如果你的代码没有使用`MessageQueue`，理论上你可以不用`loopQueue`。但是为了代码的可以移植性仍然建议你周期性调用`loopQueue`，如果queue是空的，这个调用将立即返回，不会影响性能。
