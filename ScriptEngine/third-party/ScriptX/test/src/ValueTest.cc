/*
 * Tencent is pleased to support the open source community by making ScriptX available.
 * Copyright (C) 2021 THL A29 Limited, a Tencent company.  All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "test.h"

namespace script::test {

DEFINE_ENGINE_TEST(ValueTest);

constexpr auto kLuaClassScript =
    u8R"(
f = {};
f.__index = f;
local mt = {};

mt.__call = function (self, name, age)
    local ret = {};
    ret.name = name;
    ret.age = age;
    setmetatable(ret, f);
    return ret;
end

setmetatable(f, mt)

function f:greet()
    return "Hello, I'm " .. self.name .. " " .. self.age .. " years old.";
end

return f;

)";

TEST_F(ValueTest, Object_NewObject) {
  EngineScope engineScope(engine);
  Local<Value> func = engine->eval(TS().js(u8R"(
function f(name, age) {
    this.name = name;
    this.age = age;
}

f.prototype.greet = function() {
    let str = "Hello, I'm " + this.name + " " + this.age + " years old.";
    // console.log(str);
    return str;
}

f;

)")
                                       .lua(kLuaClassScript)
                                       .select());

  ASSERT_TRUE(func.isObject());

  std::initializer_list<Local<Object>> jennyList{
      Object::newObject(func, {String::newString("Jenny"), Number::newNumber(5)}),
      // variadic helper
      Object::newObject(func, String::newString("Jenny"), Number::newNumber(5)),
      // C++ types
      Object::newObject(func, "Jenny", 5),
      // mixed
      Object::newObject(func, String::newString("Jenny"), 5)};

  for (auto& jenny : jennyList) {
    auto name = jenny.get(String::newString(u8"name"));
    auto age = jenny.get(String::newString(u8"age"));
    auto greet = jenny.get(String::newString(u8"greet"));

    ASSERT_TRUE(name.isString()) << name.describeUtf8();
    ASSERT_TRUE(age.isNumber()) << age.describeUtf8();

    ASSERT_STREQ(name.asString().toString().c_str(), "Jenny");
    ASSERT_EQ(age.asNumber().toInt32(), 5);

    ASSERT_TRUE(greet.isFunction());

    auto greetRet = greet.asFunction().call(jenny);

    ASSERT_TRUE(greetRet.isString()) << greetRet.describeUtf8();
    ASSERT_STREQ(greetRet.asString().toString().c_str(), "Hello, I'm Jenny 5 years old.");
  }
}

TEST_F(ValueTest, Object) {
  EngineScope engineScope(engine);
  try {
    auto hello = String::newString("hello");
    auto obj = Object::newObject();
    EXPECT_EQ(obj.asValue().getKind(), ValueKind::kObject);
    obj.set("hello", Number::newNumber(321));

    EXPECT_TRUE(obj.has(hello));
    ASSERT_TRUE(obj.get(hello).isNumber());
    EXPECT_EQ(obj.get(hello).asNumber().toInt32(), 321);

    obj.remove("hello");
    EXPECT_FALSE(obj.has(hello));
    EXPECT_TRUE(obj.get(hello).isNull());

    obj.set(hello, 1);
    ASSERT_TRUE(obj.get(hello).isNumber());
    EXPECT_EQ(obj.get(hello).asNumber().toInt32(), 1);

    obj.set("hello", Number::newNumber(1));
    ASSERT_TRUE(obj.get(hello).isNumber());
    EXPECT_EQ(obj.get(hello).asNumber().toInt32(), 1);

    obj.set("one", 1);
    ASSERT_TRUE(obj.get("one").isNumber());
    EXPECT_EQ(obj.get("one").asNumber().toInt32(), 1);

    obj.set("one", "1.1");
    ASSERT_TRUE(obj.get("one").isString());
    EXPECT_STREQ(obj.get("one").asString().toString().c_str(), "1.1");

    // won't compile, non-convertible type
    // obj.set("one", &obj);

    engine->set("one", "1.1");
    engine->set("one", 1);
    engine->set("hello", Number::newNumber(1));
    engine->set(hello, 1);
  } catch (const Exception& e) {
    FAIL() << e.message() << e.stacktrace();
  }
}

TEST_F(ValueTest, ObjectKeys) {
  EngineScope engineScope(engine);
  auto obj = Object::newObject();
  obj.set("hello", 1);
  obj.set("world", 2);

  auto keys = obj.getKeys();

  // the order is undefined
  std::set<std::string> keyNames;
  for (auto& k : keys) {
    keyNames.insert(k.toString());
  }
  ASSERT_EQ(keys.size(), 2);
  EXPECT_TRUE(keyNames.find("hello") != keyNames.end());
  EXPECT_TRUE(keyNames.find("world") != keyNames.end());

  auto names = obj.getKeyNames();
  ASSERT_EQ(names.size(), 2);
  EXPECT_TRUE(std::find(names.begin(), names.end(), "hello") != names.end());
  EXPECT_TRUE(std::find(names.begin(), names.end(), "world") != names.end());
}

TEST_F(ValueTest, String) {
  EngineScope engineScope(engine);
  auto string = "hello world";

  Local<Value> strVal = String::newString(string);
  EXPECT_FALSE(strVal.isNull());
  EXPECT_TRUE(strVal.isString());
  EXPECT_EQ(strVal.getKind(), ValueKind::kString);

  auto str = String::newString(string);
  EXPECT_STREQ(string, str.toString().c_str());
#ifdef __cpp_char8_t
  EXPECT_EQ(u8"hello world", str.toU8string());
#endif
  EXPECT_STREQ(string, str.describeUtf8().c_str());
  EXPECT_EQ(strVal, str);

  str = engine->eval(TS().js("'hello world'").lua("return 'hello world'").select()).asString();
  EXPECT_STREQ(string, str.toString().c_str());
}

#ifdef __cpp_char8_t

TEST_F(ValueTest, U8String) {
  EngineScope engineScope(engine);
  std::u8string string = u8"你好, 世界";

  auto str = String::newString(string);
  EXPECT_EQ(string, str.toU8string());

  str = engine->eval(TS().js(u8"'你好, 世界'").lua(u8"return '你好, 世界'").select()).asString();
  EXPECT_EQ(string, str.toU8string());
}

#endif

TEST_F(ValueTest, InstanceOf) {
  EngineScope engineScope(engine);
  try {
#ifdef SCRIPTX_LANG_JAVASCRIPT
    auto f = engine->eval("function instanceoftest() {}; instanceoftest");
    auto ins = engine->eval("new instanceoftest()");
    EXPECT_TRUE(ins.asObject().instanceOf(f));
#elif defined(SCRIPTX_LANG_LUA)
    auto f = engine->eval(kLuaClassScript);
    auto ins = engine->eval("return f()");
    EXPECT_TRUE(ins.asObject().instanceOf(f));
#else
    FAIL() << "add test impl here";
#endif
  } catch (const Exception& e) {
    FAIL() << e;
  }
}

namespace {

size_t i = 1;
std::string greet;

TEST_F(ValueTest, Function) {
  EngineScope engineScope(engine);

  auto func = Function::newFunction([this](const script::Arguments& args) {
    EXPECT_EQ(args.engine(), engine);
    EXPECT_EQ(args.engineAs<ScriptEngineImpl>(), engine);
    EXPECT_EQ(args.engineAs<ScriptEngine>(), engine);

    i = args.size();
    if (args.size() > 0 && args[0].isString()) {
      greet = args[0].asString().toString();
    }

    if (args.size() > 0 && args[0].isBoolean()) {
      // throw in here
      throw Exception("invalid arguments");
    }
    return Local<Value>{};
  });

  EXPECT_TRUE(func.asValue().isFunction());

  func.call({});
  EXPECT_EQ(i, 0);

  // call initializer_list
  func.call({}, {String::newString("hello")});
  EXPECT_EQ(i, 1);
  EXPECT_STREQ(greet.c_str(), "hello");

  // call vector
  std::vector<Local<Value>> args;
  args.emplace_back(String::newString("hello").asValue());
  func.call({}, args);

  // type-safe variadic template helper method
  func.call({}, String::newString("hello"), Object::newObject());
  func.call({}, String::newString("hello"));
  func.call({}, "hello2");
  EXPECT_EQ(i, 1);
  EXPECT_STREQ(greet.c_str(), "hello2");

  try {
    func.call({}, script::Boolean::newBoolean(true));
    FAIL();
  } catch (const Exception& e) {
    EXPECT_NE(e.message().find("invalid arguments"), std::string::npos);
  }
}

TEST_F(ValueTest, FunctionReceiver) {
  EngineScope engineScope(engine);

#ifdef SCRIPTX_LANG_JAVASCRIPT

  auto func = Function::newFunction([](const Arguments& args) { return args.thiz(); });

  auto obj = Object::newObject();

  auto g = static_cast<script::ScriptEngineImpl*>(engine)->getGlobal();
  auto ret = func.call({});
  EXPECT_EQ(ret, g);

  ret = func.call(obj);
  EXPECT_TRUE(ret.isObject());

  EXPECT_EQ(obj, ret);

  func = engine
             ->eval(R"(
(function() {
  return function() { return this; }
})();
)")
             .asFunction();

  ret = func.call({});
  EXPECT_EQ(ret, g);

  ret = func.call(obj);
  EXPECT_TRUE(ret.isObject());

  EXPECT_EQ(obj, ret);
#endif
}

TEST_F(ValueTest, FunctionCall) {
  EngineScope engineScope(engine);
  engine->eval(TS().js(R"(
function unitTestFuncCall(arg1, arg2) {
  if (arg1 == 0) return "hello world";
  if (arg2 == "x") return "hello X";
}
)")
                   .lua(R"(
function unitTestFuncCall(arg1, arg2)
  if arg1 == 0 then
    return "hello world";
  end

  if arg2 == "x" then
    return "hello X";
  end
end
)")
                   .select());

  auto func = engine->get("unitTestFuncCall").asFunction();

  auto ret = func.call({}, 0);
  ASSERT_TRUE(ret.isString());
  EXPECT_STREQ(ret.asString().toString().c_str(), "hello world");

  ret = func.call({}, 1, "x");
  ASSERT_TRUE(ret.isString());
  EXPECT_STREQ(ret.asString().toString().c_str(), "hello X");
}

TEST_F(ValueTest, FunctionReturn) {
  EngineScope engineScope(engine);

#if defined(SCRIPTX_LANG_LUA)
  auto func = engine
                  ->eval(R"(
    return function (count)
      if count ~= 2 then
        return "hello world";
      else
        return "hello", "world";
      end
    end
)")
                  .asFunction();

  auto ret = func.call({}, 0);
  ASSERT_TRUE(ret.isString());
  EXPECT_STREQ(ret.asString().toString().c_str(), "hello world");

  // multi return value
  ret = func.call({}, 2);
  ASSERT_TRUE(ret.isArray());
  EXPECT_STREQ(ret.asArray().get(0).asString().toString().c_str(), "hello");
  EXPECT_STREQ(ret.asArray().get(1).asString().toString().c_str(), "world");

#endif
}

TEST_F(ValueTest, FunctionArgumentsOutOfRange) {
  EngineScope engineScope(engine);
  auto func = Function::newFunction([](const Arguments& args) {
    EXPECT_TRUE(args[-1].isNull());
    EXPECT_TRUE(args[args.size() + 1].isNull());
    return Local<Value>{};
  });

  func.call({});
}

TEST_F(ValueTest, FunctionHasALotOfArguments) {
  EngineScope engineScope(engine);
  auto func = Function::newFunction([](const Arguments& args) {
    int total = 0;
    for (size_t j = 0; j < args.size(); ++j) {
      total += args[j].asNumber().toInt32();
    }
    return Number::newNumber(total);
  });

  for (int j = 0; j < 100; ++j) {
    StackFrameScope stack;
    std::vector<Local<Value>> args;
    args.reserve(j);

    for (int k = 0; k < j; ++k) {
      args.push_back(Number::newNumber(k));
    }

    auto ret = func.call({}, args).asNumber().toInt32();

    EXPECT_EQ(ret, (j * (j - 1)) / 2);
  }
}

TEST_F(ValueTest, FunctionHasThiz) {
  EngineScope engineScope(engine);
  auto func = Function::newFunction(
      [](const Arguments& args) { return Boolean::newBoolean(args.hasThiz()); });

  engine->set("func", func);
  auto hasThiz =
      engine->eval(TS().js("var x = {func: func}; x.func()").lua("return func()").select())
          .asBoolean()
          .value();

#ifdef SCRIPTX_LANG_JAVASCRIPT
  EXPECT_TRUE(hasThiz);
#elif SCRIPTX_LANG_Lua
  EXPECT_FALSE(hasThiz);
#endif
}

TEST_F(ValueTest, EngineEvalReturnValue) {
  EngineScope engineScope(engine);
  Local<Value> val;

#if defined(SCRIPTX_LANG_JAVASCRIPT)
  val = engine->eval(R"(3.14)");
#elif defined(SCRIPTX_LANG_LUA)
  val = engine->eval(R"(return 3.14)");
#else
  FAIL();
#endif

  ASSERT_TRUE(val.isNumber());
  EXPECT_DOUBLE_EQ(3.14, val.asNumber().toDouble());
}

}  // namespace

TEST_F(ValueTest, Binding) {
  EngineScope engineScope(engine);
  auto func = Function::newFunction([](int, int) { return 0; });

  EXPECT_TRUE(func.asValue().isFunction());

  func.call({}, Number::newNumber(1), Number::newNumber(2));
}

TEST_F(ValueTest, ExceptionDeath) {
  Global<Function> gf;
  {
    EngineScope engineScope(engine);
    gf = Function::newFunction([](const script::Arguments& args) {
      if (args.size() == 0) {
        throw Exception("invalid argument");
      }
      return Number::newNumber(0);
    });
  }

  try {
    EngineScope engineScope(engine);
    gf.get().call();
  } catch (Exception& e) {
    EngineScope engineScope(engine);
    // handle exception again...
    e.message();
  }

  EngineScope engineScope(engine);
  gf.reset();
}

TEST_F(ValueTest, Array) {
  EngineScope engineScope(engine);
  Local<Array> arr = Array::newArray(4);
#ifdef SCRIPTX_LANG_JAVASCRIPT
  EXPECT_EQ(arr.asValue().getKind(), ValueKind::kArray);
#elif defined(SCRIPTX_LANG_LUA)
  EXPECT_EQ(arr.asValue().getKind(), ValueKind::kObject);
#endif

#ifndef SCRIPTX_BACKEND_LUA
  EXPECT_EQ(arr.size(), 4);
#endif

  EXPECT_TRUE(arr.get(0).isNull());
  EXPECT_TRUE(arr.get(1).isNull());
  EXPECT_TRUE(arr.get(2).isNull());
  EXPECT_TRUE(arr.get(3).isNull());

  arr.set(0, String::newString("hello"));
  ASSERT_TRUE(arr.get(0).isString());
  EXPECT_STREQ(arr.get(0).asString().toString().c_str(), "hello");

  arr.clear();
  EXPECT_EQ(arr.size(), 0);

  arr = Array::newArray(
      {String::newString("hello"), Number::newNumber(1), ::script::Boolean::newBoolean(true)});
  EXPECT_EQ(arr.size(), 3);
  EXPECT_STREQ(arr.get(0).asString().toString().c_str(), "hello");
  EXPECT_EQ(arr.get(1).asNumber().toInt32(), 1);
  EXPECT_TRUE(arr.get(2).asBoolean().value());
  arr.set(2, {});
  EXPECT_TRUE(arr.get(2).isNull());
  arr.set(3, 1);
  EXPECT_TRUE(arr.get(3).isNumber());

  arr = Array::of("hello", 1, ::script::Boolean::newBoolean(true));
  EXPECT_EQ(arr.size(), 3);
  EXPECT_STREQ(arr.get(0).asString().toString().c_str(), "hello");
  EXPECT_EQ(arr.get(1).asNumber().toInt32(), 1);
  EXPECT_TRUE(arr.get(2).asBoolean().value());
  arr.set(2, {});
  EXPECT_TRUE(arr.get(2).isNull());
  arr.set(3, 1);
  EXPECT_TRUE(arr.get(3).isNumber());

  arr = Array::newArray();
  arr.add(Number::newNumber(42));
  EXPECT_EQ(arr.get(0).asNumber().toInt32(), 42);
}

TEST_F(ValueTest, Null) {
  EngineScope engineScope(engine);

  EXPECT_EQ(Local<Value>().getKind(), ValueKind::kNull);
  EXPECT_STREQ(Local<Value>().describeUtf8().c_str(), "null");

#ifdef SCRIPTX_LANG_JAVASCRIPT
  // JS: null & undefined -> script::Null
  EXPECT_TRUE(engine->eval(String::newString(u8"null")).isNull());
  EXPECT_EQ(engine->eval(String::newString(u8"null")), Local<Value>());
  EXPECT_TRUE(engine->eval(String::newString(u8"undefined")).isNull());
  EXPECT_EQ(engine->eval(String::newString(u8"undefined")), Local<Value>());

  // script::Null -> JS: undefined
  auto key = String::newString(u8"ValueTest_Null_null");
  engine->set(key, Local<Value>());
  auto isUndef = engine->eval(String::newString(u8"ValueTest_Null_null === undefined"));
  ASSERT_TRUE(isUndef.isBoolean());
  EXPECT_TRUE(isUndef.asBoolean().value());
#endif
}

template <typename T>
void testNumber(T value) {
  auto num = Number::newNumber(value);
  EXPECT_EQ(num.toInt32(), static_cast<int32_t>(value));
#ifndef SCRIPTX_BACKEND_WEBASSEMBLY
  EXPECT_EQ(num.toInt64(), static_cast<int64_t>(value));
#endif
  EXPECT_FLOAT_EQ(num.toFloat(), static_cast<float>(value));
  EXPECT_FLOAT_EQ(num.toDouble(), static_cast<double>(value));
}

TEST_F(ValueTest, Number) {
  EngineScope engineScope(engine);
  EXPECT_EQ(Number::newNumber(0).asValue().getKind(), ValueKind::kNumber);
  EXPECT_EQ(Number::newNumber(42).describeUtf8(), "42");

  testNumber<int32_t>(42);
  testNumber<int64_t>(42);
  testNumber<float>(3.14f);
  testNumber<double>(3.14);
}

TEST_F(ValueTest, Equals) {
  EngineScope engineScope(engine);
  auto n1 = Number::newNumber(1);
  auto n1_ = Number::newNumber(1);
  auto n2 = Number::newNumber(2);

  EXPECT_TRUE(n1 == n1_);
  EXPECT_FALSE(n1 == n2);
  EXPECT_TRUE(n1 != n2);

  EXPECT_TRUE(Local<Value>() == Local<Value>());

  auto s1 = String::newString("hello");
  auto s2 = String::newString("hello");
  auto s3 = String::newString("world");
  EXPECT_TRUE(s1 == s2);
  EXPECT_FALSE(s1 == s3);
  EXPECT_TRUE(s1 != s3);
}

TEST_F(ValueTest, Kinds) {
  auto test = [](const Local<Value>& v) {
    ValueKind kind = v.getKind();
    if (kind == ValueKind::kNull) {
      EXPECT_TRUE(v.isNull());
    }
#define CAST_TEST(TYPE)                         \
  if (kind != ValueKind::k##TYPE) {             \
    EXPECT_THROW({ v.as##TYPE(); }, Exception); \
  }
    CAST_TEST(String)
    CAST_TEST(Number)
    CAST_TEST(Boolean)
    CAST_TEST(Function)
    CAST_TEST(ByteBuffer)
#undef CAST_TEST
  };

  EngineScope engineScope(engine);
  test({});
  test(String::newString("hello"));
  test(Object::newObject());
  test(Number::newNumber(0));
  test(Boolean::newBoolean(false));
  test(Function::newFunction([]() {}));
  test(Array::newArray());
  test(ByteBuffer::newByteBuffer(0));

  EXPECT_THROW({ Number::newNumber(0).asValue().asObject(); }, Exception);
  EXPECT_THROW({ String::newString("hello").asValue().asArray(); }, Exception);
}

TEST_F(ValueTest, Unsupported) {
  EngineScope engineScope(engine);
#ifdef SCRIPTX_LANG_JAVASCRIPT
  auto strange = engine->eval("Symbol('x')");
#elif defined(SCRIPTX_LANG_LUA)
  auto lua = lua_interop::currentEngineLua();
  lua_newuserdata(lua, 4);
  auto strange = lua_interop::makeLocal<Value>(lua_gettop(lua));
#else
  FAIL() << "add test here";
  auto strange = Local<Value>();
#endif

  EXPECT_EQ(strange.getKind(), ValueKind::kUnsupported);
  strange.asUnsupported();

  EXPECT_THROW({ Number::newNumber(0).asValue().asUnsupported(); }, Exception);
}

TEST_F(ValueTest, KindNames) {
  EXPECT_STREQ(valueKindName(ValueKind::kNull), "Null");
  EXPECT_STREQ(valueKindName(ValueKind::kString), "String");
  EXPECT_STREQ(valueKindName(ValueKind::kObject), "Object");
  EXPECT_STREQ(valueKindName(ValueKind::kNumber), "Number");
  EXPECT_STREQ(valueKindName(ValueKind::kBoolean), "Boolean");
  EXPECT_STREQ(valueKindName(ValueKind::kFunction), "Function");
  EXPECT_STREQ(valueKindName(ValueKind::kArray), "Array");
  EXPECT_STREQ(valueKindName(ValueKind::kByteBuffer), "ByteBuffer");
  EXPECT_STREQ(valueKindName(ValueKind::kUnsupported), "Unsupported");

  std::ostringstream oss;
  oss << ValueKind::kNull;
  EXPECT_EQ(oss.str(), "Null");
}

}  // namespace script::test