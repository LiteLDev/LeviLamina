# Lua Language

ScriptX and Lua language type comparison table

| Lua | ScriptX |
| :--: | :--: |
| nil | Null |
| table | Object |
| table | Array |
| string | String |
| number | Number |
| boolean | Boolean |
| function | Function |

## 1-based or 0-based?
The Lua language uses 1 as the base, but the C++ language uses 0 as the base. Therefore, in ScriptX, 0-based logic is still used for data operations.

such as:
```c++
Local<Array> arr;
arr.set(0, "hello");

// lua
arr[1] == "hello";
```

## Lua functions with multiple return values

Lua functions support multiple return values, but the ScriptX API only supports returning `Local<Value>`.

When a Lua function returns multiple values, ScriptX will wrap the return value in an Array.

## ByteBuffer

Lua language does not have ByteBuffer related API, so ScriptX provides a set of implementations through binding API.

At the same time, in the constructor of LuaEngine, users can also pass in their own delegate to implement ByteBuffer related APIs

## instanceOf

Lua language does not have a built-in `instanceof` operator. In order to achieve the corresponding capabilities, ScriptX will add a `ScriptX` tool class globally in Lua.

`ScriptX.isInstanceOf(instance, Class)`

```c++
// C++
class InstanceOfTest: public script::ScriptClass {
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

## Binding MetaData of the class

Since Lua does not have a standard OO, for a ClassDefine, ScriptX will define the following declaration in Lua:

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

For example, to extend a bound class, it can be as follows:

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