# node.js platform

Because ScriptX supports V8, it can also be used on the node.js platform to provide node extensions (addon).

### For the demo project, please refer to the `test/node_addon` subproject.

### build tools

ScriptX uses cmake to organize, and node.js uses gyp as the build tool by default. Fortunately, the community contributed the `cmake-js` tool to provide CMake support, and this tool is officially recognized (appears in the official tutorial).


### The difference between using ScriptX directly

Since the node.js platform has created various resources of v8, ScriptX does not need to create them, but directly "wrap" them. Here V8's backend provides an overloaded constructor specifically for this scenario `V8Engine(std::shared_ptr<utils::MessageQueue> messageQueue, v8::Isolate* isolate, v8::Local<v8::Context> context )`. This constructor will no longer create isolate and context. Therefore, they will not be destroyed when the engine is destroyed.

In addition, because node.js does not wrap an `EngineScope` in the outer layer when calling the binding function of ScriptX, there is a **special logic** in the above constructor: create a thread-global `EngineScope` for the current thread.

### Some implementation details

#### About `MessageQueue`

Because V8 has its own `v8::Platform`, which implements a set of message loops internally, `V8Engine` itself does not strongly depend on `MessageQueue` (JSCore is strongly dependent)—that is: `V8Engine` does not Post a message to `MessageQueue`.
So if your code does not use `MessageQueue`, in theory you don't need to `loopQueue`. However, for code portability, it is still recommended that you call `loopQueue` periodically. If the queue is empty, this call will return immediately without affecting performance.