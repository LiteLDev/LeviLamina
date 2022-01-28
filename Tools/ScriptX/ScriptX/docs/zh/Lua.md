# Lua语言

ScriptX和Lua语言类型对照表

| Lua | ScriptX |
| :--: | :--: |
| nil |  Null |
| table |  Object |
| table |  Array |
| string |  String |
| number |  Number |
| boolean |  Boolean |
| function |  Function |

## 1-based or 0-based?
Lua语言使用1作为基数，但是C++语言是用0作为基数。因此在ScriptX中，对于数据等的操作，仍然使用0-based逻辑。

比如:
```c++
Local<Array> arr;
arr.set(0, "hello");

// lua
arr[1] == "hello";
```

## Lua函数多返回值

Lua函数支持多返回值，但是ScriptX的API只支持返回 `Local<Value>`。

当Lua函数返回多个值的时候，ScriptX会把返回值用Array包起来。

## ByteBuffer

Lua语言没有ByteBuffer相关的API，因此ScriptX通过 binding API提供了一套实现。

同时在LuaEngine的构造函数里，使用者也可以传入自己的delegate实现ByteBuffer相关API

## instanceOf

Lua语言没有内建的 `instanceof` 操作符，为了实现相应能力，ScriptX会在Lua全局增加一个`ScriptX`工具类。

`ScriptX.isInstanceOf(instance, Class)`

```c++
// C++
class InstanceOfTest : public script::ScriptClass {
 public:
  using ScriptClass::ScriptClass;
};

auto instanceOfTestDefine = 
    defineClass<InstanceOfTest>("InstanceOfTest")
    .constructor()
    .build();
```
``` lua
# lua
local ins = InstanceOfTest();
ScriptX.isInstanceOf(ins, InstanceOfTest) == true;
```

## 绑定类的MetaData

由于Lua没有标准的OO，对于一个ClassDefine，ScriptX会在lua中定义如下声明：

```lua
Class = {}

local staticMeta = {
    // constructor call
    __call = function()
      local ins = {};
      setmetatable(inx, instanceMeta);
      return ins
    end
}

for staticFunc do
 Class[staticFunc.name] = function() ... end
end

setmetatable(Class, staticMeta)

local instanceMeta = {
    __index = function()
      1. find from `ClassDefine.instanceProperty`
      2. find from `ClassDefine.instanceFunction`
      3. return nil
end

    __newindex = function()
      1. find from `ClassDefine.instanceProperty`
      2. raw set to table

    __gc = function()
      1. delete this
    end

instanceFunction = {...}

}

ScriptX.getInstanceMeta(Class) == instanceMeta;
```

比如，要扩展一个绑定的类，可以如下：

```lua
local meta = ScriptX.getInstanceMeta(Class)
function meta:__add() print(self, "add") end
function meta.instanceFunction:hello()
    print(self, "hello")
end

// test
local ext = Class()
x = ext + ext
ext:hello();

// output 
table: 0x7fc873c18ed0 add
table: 0x7fc873c18ed0 hello
```
