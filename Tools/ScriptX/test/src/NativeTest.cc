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

#include <sstream>
#include "test.h"

namespace script::test {

DEFINE_ENGINE_TEST(NativeTest);

namespace {
std::string version = "0.1.0";

class TestClass : public ScriptClass {
 public:
  std::string src = "https://github.com/LanderlYoung";

  explicit TestClass(const Local<Object>& scriptObj) : ScriptClass(scriptObj) {}

  ~TestClass() override = default;

  std::string greetStr;

  // intentionally make this virtual
  virtual Local<Value> greet(const Arguments& args) {
    if (args.size() > 0 && args[0].isString()) {
      greetStr = args[0].asString().toString().c_str();
    }
    return {};
  }

  int ageInt = -1;

  Local<Value> age(const Arguments& args) {
    if (args.size() > 0 && args[0].isNumber()) {
      ageInt = args[0].asNumber().toInt32();

      return Number::newNumber(ageInt);
    }
    return {};
  }

  Local<Value> getSrc() { return String::newString(src); }

  void setSrc(const Local<Value>& value) { src = value.asString().toString(); }

  static Local<Value> add(const Arguments& args) {
    if (args.size() >= 2 && args[0].isNumber() && args[1].isNumber()) {
      return Number::newNumber(args[0].asNumber().toDouble() + args[1].asNumber().toDouble());
    }
    return {};
  }

  static int add_1(int a, int b) { return a + b; }

  static Local<Value> getVersion() { return String::newString(version); }

  static void setVersion(const Local<Value>& value) { version = value.asString().toString(); }

  static TestClass* create(const Arguments& args) { return new TestClass(args.thiz()); }
};

const ClassDefine<TestClass> TestClassDefAll =
    defineClass<TestClass>("TestClass")
        .nameSpace("script.engine.test")
        .constructor()
        .function("add", &TestClass::add)
        .function("add1", &TestClass::add_1)
        .property("version", &TestClass::getVersion, &TestClass::setVersion)
        .instanceFunction("greet", &TestClass::greet)
        .instanceFunction("age", &TestClass::age)
        .instanceProperty("src", &TestClass::getSrc, &TestClass::setSrc)
        .build();

const ClassDefine<TestClass> TestClassDefStatic =
    defineClass<TestClass>("TestClass")
        .nameSpace("script.engine.test")
        .function("add", &TestClass::add)
        .property("version", &TestClass::getVersion, &TestClass::setVersion)
        .build();

const ClassDefine<TestClass> TestClassDefInstance =
    defineClass<TestClass>("TestClass")
        .nameSpace("script.engine.test")
        .constructor(TestClass::create)
        .instanceFunction("greet", &TestClass::greet)
        .instanceFunction("age", &TestClass::age)
        .instanceProperty("src", &TestClass::getSrc, &TestClass::setSrc)
        .build();

void testStatic(ScriptEngine* engine) {
  // prop: get version
  auto getVersion = engine->eval(TS().js("script.engine.test.TestClass.version")
                                     .lua("return script.engine.test.TestClass.version")
                                     .select());
  ASSERT_TRUE(getVersion.isString());
  EXPECT_EQ(getVersion.asString().toString(), version);

  // prop: set version
  engine->eval("script.engine.test.TestClass['version'] = '1.0-beta' ");
  EXPECT_EQ(std::string("1.0-beta"), version);

  // function: add
  auto addRet = engine->eval(TS().js("script.engine.test.TestClass.add(1, 2)")
                                 .lua("return script.engine.test.TestClass.add(1, 2)")
                                 .select());
  ASSERT_TRUE(addRet.isNumber());
  EXPECT_EQ(addRet.asNumber().toInt32(), 3);
}

void testInstance(ScriptEngine* engine, const ClassDefine<TestClass>& def) {
  auto ret = engine->eval(TS().js("new script.engine.test.TestClass()")
                              .lua("return script.engine.test.TestClass()")
                              .select());
  ASSERT_TRUE(ret.isObject());
  ASSERT_TRUE(engine->isInstanceOf<TestClass>(ret));
  EXPECT_FALSE(engine->isInstanceOf<TestClass>({}));
  EXPECT_FALSE(engine->isInstanceOf<TestClass>(script::Object::newObject()));

  TestClass* instance = engine->getNativeInstance<TestClass>(ret);
  ASSERT_TRUE(instance != nullptr);

  engine->set("instance", ret);

  auto srcRet = engine->eval(TS().js("instance.src").lua("return instance.src").select());
  ASSERT_TRUE(srcRet.isString());
  EXPECT_STREQ(srcRet.asString().toString().c_str(), instance->src.c_str());

  engine->eval("instance.src = 'new_src'");
  EXPECT_STREQ(instance->src.c_str(), "new_src");

  auto greet1Ret =
      engine->eval(TS().js("instance.greet('gh')").lua("return instance:greet('gh')").select());
  EXPECT_TRUE(greet1Ret.isNull());
  EXPECT_STREQ(instance->greetStr.c_str(), "gh");

  engine->eval(TS().js("instance.greet('hello world')")
                   .lua("return instance:greet('hello world')")
                   .select());
  EXPECT_STREQ(instance->greetStr.c_str(), "hello world");

  auto age1Ret = engine->eval(TS().js("instance.age()").lua("return instance:age()").select());
  ASSERT_TRUE(age1Ret.isNull());
  EXPECT_EQ(instance->ageInt, -1);

  auto age2Ret = engine->eval(TS().js("instance.age(18)").lua("return instance:age(18)").select());
  ASSERT_TRUE(age2Ret.isNumber());
  EXPECT_EQ(age2Ret.asNumber().toInt32(), 18);
  EXPECT_EQ(instance->ageInt, 18);

  engine->set("instance", {});
}

}  // namespace

TEST_F(NativeTest, All) {
  script::EngineScope engineScope(engine);

  engine->registerNativeClass<TestClass>(TestClassDefAll);
  auto ret = engine->eval(
      TS().js("script.engine.test.TestClass").lua("return script.engine.test.TestClass").select());
  ASSERT_TRUE(ret.isObject());

  testStatic(engine);

  testInstance(engine, TestClassDefAll);

  auto ins = engine->newNativeClass<TestClass>();
  ASSERT_TRUE(engine->isInstanceOf<TestClass>(ins));
  ASSERT_TRUE(engine->getNativeInstance<TestClass>(ins) != nullptr);
}

TEST_F(NativeTest, Static) {
  script::EngineScope engineScope(engine);

  engine->registerNativeClass<TestClass>(TestClassDefStatic);

  auto ret = engine->eval(
      TS().js("script.engine.test.TestClass").lua("return script.engine.test.TestClass").select());
  ASSERT_TRUE(ret.isObject());

  testStatic(engine);
}

TEST_F(NativeTest, Instance) {
  script::EngineScope engineScope(engine);
  try {
    engine->registerNativeClass<TestClass>(TestClassDefInstance);

    auto ret = engine->eval(TS().js("script.engine.test.TestClass")
                                .lua("return script.engine.test.TestClass")
                                .select());
    ASSERT_TRUE(ret.isObject());

    testInstance(engine, TestClassDefInstance);
  } catch (const Exception& e) {
    FAIL() << e;
  }
}

#ifdef SCRIPTX_LANG_JAVASCRIPT

TEST_F(NativeTest, ProtoType) {
  script::EngineScope engineScope(engine);
  try {
    engine->registerNativeClass<TestClass>(TestClassDefInstance);

    auto ret = engine->eval(R"(
        const obj = new script.engine.test.TestClass();
        if (Object.getPrototypeOf(obj) !== script.engine.test.TestClass.prototype) {
          throw Error("instance prototype != Class.prototype");
        }
    )");
  } catch (const Exception& e) {
    FAIL() << e;
  }
}

#endif

namespace {
auto NativeRegisterDef = TestClassDefAll;
}

TEST_F(NativeTest, NativeRegister) {
  script::EngineScope engineScope(engine);
  auto reg = NativeRegisterDef.getNativeRegister();
  reg.registerNativeClass(engine);
  auto ret = engine->eval(
      TS().js("script.engine.test.TestClass").lua("return script.engine.test.TestClass").select());
  ASSERT_TRUE(ret.isObject());

  testStatic(engine);

  testInstance(engine, NativeRegisterDef);

  // clear
  engine->set("script", {});

  auto ins = engine->newNativeClass<TestClass>();
  EXPECT_TRUE(engine->isInstanceOf<TestClass>(ins));
  EXPECT_TRUE(engine->getNativeInstance<TestClass>(ins) != nullptr);
}

TEST_F(NativeTest, NativeRegister2) {
  script::EngineScope engineScope(engine);
  auto reg = NativeRegisterDef.getNativeRegister();
  engine->registerNativeClass(reg);
  auto ret = engine->eval(
      TS().js("script.engine.test.TestClass").lua("return script.engine.test.TestClass").select());
  ASSERT_TRUE(ret.isObject());

  testStatic(engine);

  testInstance(engine, NativeRegisterDef);

  // clear
  engine->set("script", {});

  auto ins = engine->newNativeClass<TestClass>();
  EXPECT_TRUE(engine->isInstanceOf<TestClass>(ins));
  EXPECT_TRUE(engine->getNativeInstance<TestClass>(ins) != nullptr);
}

TEST_F(NativeTest, NotRegistered) {
  script::EngineScope engineScope(engine);
  EXPECT_THROW(
      {
        // forget to register
        // engine->registerNativeClass(TestClassDefAll);
        engine->newNativeClass<TestClass>();
      },
      Exception);
}
namespace {

class MyImage : public script::ScriptClass {
 public:
  using script::ScriptClass::getScriptObject;
  using script::ScriptClass::ScriptClass;

  MyImage() : script::ScriptClass(script::ScriptClass::ConstructFromCpp<MyImage>{}) {}

  int drawTo(void* canvas, int x, int y) const { return x + y; }
};

script::ClassDefine<MyImage> myClassDefine =
    script::defineClass<MyImage>("MyImage").constructor().build();
}  // namespace

TEST_F(NativeTest, ScriptClassConverter) {
  EngineScope scope(engine);
  try {
    engine->registerNativeClass(myClassDefine);

    // use MyImage* as argument
    auto drawImagePointer = Function::newFunction(
        [](MyImage* image, int x, int y) -> int { return image->drawTo(nullptr, x, y); });

    auto drawImagePointerConst = Function::newFunction(
        [](MyImage* const image, int x, int y) -> int { return image->drawTo(nullptr, x, y); });

    auto drawImageConstPointer = Function::newFunction(
        [](const MyImage* image, int x, int y) -> int { return image->drawTo(nullptr, x, y); });

    auto drawImageReference = Function::newFunction(
        [](MyImage& image, int x, int y) -> int { return image.drawTo(nullptr, x, y); });

    auto drawImageConstReference = Function::newFunction(
        [](const MyImage& image, int x, int y) -> int { return image.drawTo(nullptr, x, y); });

    // return MyImage*
    auto factory = Function::newFunction([]() -> MyImage* { return new MyImage(); });

    auto myClassValue = factory.call();
    auto myClass = engine->getNativeInstance<MyImage>(myClassValue);
    ASSERT_TRUE(myClass != nullptr);

    for (auto&& func : std::initializer_list<Local<Function>>{
             drawImagePointer, drawImageConstPointer, drawImagePointerConst, drawImageReference,
             drawImageConstReference}) {
      auto ret = func.call({}, myClass, 1, 2);
      ASSERT_TRUE(ret.isNumber());
      EXPECT_EQ(ret.asNumber().toInt32(), 3);
    }
  } catch (const Exception& e) {
    FAIL() << e;
  }
}

namespace {
auto SanityCheckDef = TestClassDefAll;

class SanityCheck2 : public script::ScriptClass {
 public:
  using ScriptClass::ScriptClass;
};

auto SanityCheck2Def = defineClass<SanityCheck2>("SanityCheck2").constructor().build();

}  // namespace

TEST_F(NativeTest, SanityCheck) {
  script::EngineScope engineScope(engine);

  engine->registerNativeClass<TestClass>(SanityCheckDef);
  engine->registerNativeClass<SanityCheck2>(SanityCheck2Def);

#ifdef SCRIPTX_LANG_JAVASCRIPT
  EXPECT_THROW(
      {
        // can't call as function
        engine->eval(u8"script.engine.test.TestClass();  new script.engine.test.TestClass();");
      },
      Exception);
#endif
  return;

  EXPECT_THROW(
      {
        // wrong receiver
        engine->eval(TS().js(
                             R"(
(function() {
    const t = new script.engine.test.TestClass();
    const obj = {};
    obj.g = t.greet;
    obj.g();
})()
)")
                         .lua(R"(
local t = script.engine.test.TestClass()
local obj = {}
obj.g = t.greet
obj.g()
)")
                         .select());
      },
      Exception);

  EXPECT_THROW(
      {
        // wrong receiver
        engine->eval(TS().js(
                             R"(
(function() {
    const t = new script.engine.test.TestClass();
    const obj = new SanityCheck2();
    obj.g = t.greet;
    obj.g();
})()
)")
                         .lua(R"(
local t = script.engine.test.TestClass()
local obj = SanityCheck2()
obj.g = t.greet
obj.g()
)")
                         .select());
      },
      Exception);
}

namespace {
ClassDefine<void> gns =
    defineClass("GnS").property("src", []() { return String::newString(u8"hello"); }).build();
}

TEST_F(NativeTest, GetNoSet) {
  script::EngineScope engineScope(engine);

  try {
    engine->registerNativeClass(gns);
    engine->eval(u8"GnS.src = 'x';");
    engine->eval(TS().js("if (GnS.src !== 'hello') throw new Error(GnS.src);")
                     .lua("if GnS.src ~= 'hello' then error(GnS.src) end")
                     .select());
  } catch (const Exception& e) {
    FAIL() << e;
  }
}

namespace {

ClassDefine<void> sng = defineClass("SnG")
                            .property("src", nullptr,
                                      [](const Local<Value>& val) {
                                        EXPECT_TRUE(val.isString());
                                        EXPECT_STREQ(val.asString().toString().c_str(), "hello");
                                      })
                            .build();
}

TEST_F(NativeTest, SetNoGet) {
  script::EngineScope engineScope(engine);
  engine->registerNativeClass(sng);

  try {
    engine->eval(TS().js(u8"if (SnG.src !== undefined) throw new Error();")
                     .lua(u8"if SnG.src ~= nil then error() end")
                     .select());
  } catch (Exception& e) {
    FAIL() << e;
  }

  engine->eval(u8"SnG.src = 'hello';");

  try {
    engine->eval(TS().js(u8"if (SnG.src !== undefined) throw new Error();")
                     .lua(u8"if SnG.src ~= nil then error() end")
                     .select());
  } catch (Exception& e) {
    FAIL() << e;
  }
  engine->set("SnG", {});
}

TEST_F(NativeTest, OverloadedBind) {
  auto f1 = [](int) { return "number"; };
  auto f2 = [](const std::string&) { return "string"; };
  auto f3 = [](const Local<Function>&) { return "func"; };
  auto f4 = [](const Arguments&) -> Local<Value> { return String::newString("other"); };

  EngineScope scope(engine);
  auto overload = script::adaptOverLoadedFunction(f1, f2, f3, f4);
  auto func = Function::newFunction(overload);

  auto ret = func.call({}, Number::newNumber(0));
  ASSERT_TRUE(ret.isString());
  EXPECT_EQ(ret.asString().toString(), "number");
  ret = func.call({}, String::newString("hello"));
  ASSERT_TRUE(ret.isString());
  EXPECT_EQ(ret.asString().toString(), "string");
  ret = func.call({}, func);
  ASSERT_TRUE(ret.isString());
  EXPECT_EQ(ret.asString().toString(), "func");

  ret = func.call({}, Object::newObject());
  ASSERT_TRUE(ret.isString());
  EXPECT_EQ(ret.asString().toString(), "other");
}

TEST_F(NativeTest, OverloadedInsBind) {
  class Ins : public ScriptClass {
   public:
    explicit Ins(const Local<Object>& scriptObject) : ScriptClass(scriptObject) {}
  };

  auto f1 = [](Ins*, int) { return "number"; };
  auto f2 = [](Ins*, const std::string&) { return "string"; };
  auto f3 = [](Ins*, const Local<Function>&) { return "func"; };

  EngineScope scope(engine);
  auto overload = script::adaptOverloadedInstanceFunction<Ins>(f1, f2, f3);
  static auto define =
      defineClass<Ins>("OverloadedInsBuild").constructor().instanceFunction("f", overload).build();

  engine->registerNativeClass(define);
  auto ins = engine->newNativeClass<Ins>();

  auto func = ins.get("f").asFunction();

  auto ret = func.call(ins, Number::newNumber(0));
  ASSERT_TRUE(ret.isString());
  EXPECT_EQ(ret.asString().toString(), "number");
  ret = func.call(ins, String::newString("hello"));
  ASSERT_TRUE(ret.isString());
  EXPECT_EQ(ret.asString().toString(), "string");
  ret = func.call(ins, func);
  ASSERT_TRUE(ret.isString());
  EXPECT_EQ(ret.asString().toString(), "func");
}

TEST_F(NativeTest, NewNativeClass) {
  class Ins : public ScriptClass {
   public:
    std::string name{};
    double score{};

    explicit Ins(const Arguments& args) : ScriptClass(args.thiz()) {
      name = args[0].asString().toString();
      score = args[1].asNumber().toDouble();
    }
  };

  static auto define = defineClass<Ins>("InsNewNativeClassTest").constructor().build();

  EngineScope scope(engine);

  engine->registerNativeClass(define);

  std::initializer_list<Local<Value>> insList{
      engine->newNativeClass<Ins>(String::newString("hello"), Number::newNumber(3.14)),
      engine->newNativeClass<Ins>(String::newString("hello"), 3.14),
      engine->newNativeClass<Ins>("hello", 3.14),
  };

  for (auto& ins : insList) {
    auto ptr = engine->getNativeInstance<Ins>(ins);
    EXPECT_EQ(ptr->name, "hello");
    EXPECT_EQ(ptr->score, 3.14);
  }
}

namespace {

class CppNew : public ScriptClass {
 public:
  explicit CppNew(std::vector<std::string> words);

  const std::string& greet() const { return words_; }

  using ScriptClass::getScriptObject;

 private:
  std::string words_;
};

Local<Object> create() {
  // pure cpp constructor
  auto ptr = new CppNew({"hello", "world", "cpp"});
  return ptr->getScriptObject();
}

static auto define = defineClass<CppNew>("CppNewTest")
                         .nameSpace("cppnewtest")
                         .constructor([](const Arguments&) -> CppNew* {
                           throw Exception("this class can't be created in script");
                           // or return nullptr, has the same effect
                         })
                         .instanceFunction("greet", &CppNew::greet)
                         .function("create", create)
                         .build();

CppNew::CppNew(std::vector<std::string> words)
    : ScriptClass(ScriptClass::ConstructFromCpp<CppNew>{}), words_() {
  for (auto& w : words) {
    words_ += w;
    words_ += " ";
  }
}

TEST_F(NativeTest, CppNew) {
  EngineScope scope(engine);
  engine->registerNativeClass(define);

  auto ret = engine->eval(TS().js(
                                  R"(
(function() {
    const ins = cppnewtest.CppNewTest.create();
    return ins.greet();
})()
)")
                              .lua(
                                  R"(
local ins = cppnewtest.CppNewTest.create();
return ins:greet();
)")
                              .select());

  ASSERT_TRUE(ret.isString());
  EXPECT_STREQ(ret.asString().toString().c_str(), "hello world cpp ");
}

}  // namespace

TEST_F(NativeTest, BindExceptionTest) {
  auto f1 = [](int i) {
    if (i == 42) {
      throw Exception("nonono");
    }
    return "number";
  };

  EngineScope scope(engine);
  auto funcHasThrow = Function::newFunction(f1, false);
  auto funcNoThrow = Function::newFunction(f1, true);

  auto ret = funcHasThrow.call({}, Number::newNumber(0));
  ASSERT_TRUE(ret.isString());
  EXPECT_EQ(ret.asString().toString(), "number");

  // invalid arguments
  EXPECT_THROW({ funcHasThrow.call({}, String::newString("hello")); }, Exception);
  try {
    funcHasThrow.call({}, String::newString("hello"));
    // no reach here
    EXPECT_TRUE(false);
  } catch (const Exception& e) {
    EXPECT_TRUE(e.message().find("can't cast value as Number") != std::string::npos);
  }
  try {
    funcHasThrow.call({}, Number::newNumber(42));
    // no reach here
    EXPECT_TRUE(false);
  } catch (const Exception& e) {
    EXPECT_TRUE(e.message().find("nonono") != std::string::npos);
  }

  EXPECT_NO_THROW({ funcNoThrow.call({}, String::newString("hello")); });
  EXPECT_THROW({ funcNoThrow.call({}, Number::newNumber(42)); }, Exception);
}

class InternalStorageTest : public ScriptClass {
 public:
  explicit InternalStorageTest(const Local<Object>& scriptObject) : ScriptClass(scriptObject) {}

  void setVal(const Local<Value>& val) { getInternalStore().set(0, val); }

  Local<Value> getVal() { return getInternalStore().get(0); }
};

ClassDefine<InternalStorageTest> internalStorageTest =
    defineClass<InternalStorageTest>("InternalStorageTest")
        .constructor()
        .instanceProperty("val", &InternalStorageTest::getVal, &InternalStorageTest::setVal)
        .build();

TEST_F(NativeTest, InternalStorage) {
  script::EngineScope engineScope(engine);
  engine->registerNativeClass(internalStorageTest);

  try {
    auto val = engine->eval(TS().js(
                                    R"(
              var x = new InternalStorageTest();
              x.val = "hello";
              x.val;
                        )")
                                .lua(R"(
              local x = InternalStorageTest();
              x.val = "hello";
              return x.val;
)")
                                .select());

    ASSERT_TRUE(val.isString());
    EXPECT_STREQ(val.asString().toString().c_str(), "hello");
  } catch (Exception& e) {
    FAIL() << e;
  }
}

namespace {

class BaseClass {
 public:
  int age = 0;
  int num = 1;
  const int length = 180;

  std::string name() { return "Base"; }

  int getNum() { return num; }

  void setNum(int n) { num = n; }
};

class BaseClassScriptWrapper : public BaseClass, public ScriptClass {
 public:
  explicit BaseClassScriptWrapper(const Local<Object>& thiz) : BaseClass(), ScriptClass(thiz) {}
};

const auto baseWrapperDefine =
    defineClass<BaseClassScriptWrapper>("BaseWrapper")
        .nameSpace("BindBaseClass")
        .constructor()
        .instanceProperty("age", &BaseClass::age)
        .instanceProperty("length", &BaseClass::length)  // const property has getter, no setter
        .instanceFunction("name", &BaseClass::name)
        .instanceProperty("num", &BaseClass::getNum, &BaseClass::setNum)
        .build();

}  // namespace

TEST_F(NativeTest, BindBaseClass) {
  EngineScope engineScope(engine);
  try {
    engine->registerNativeClass(baseWrapperDefine);
    auto base = engine->newNativeClass<BaseClassScriptWrapper>();
    auto ptr = engine->getNativeInstance<BaseClassScriptWrapper>(base);
    engine->set("base", base);

    engine->eval("base.age = 10");
    EXPECT_EQ(ptr->age, 10);

    // length is const, so no setter available
    engine->eval("base.length = 0");
    EXPECT_EQ(ptr->length, 180);

    ptr->setNum(42);
    auto num = engine->eval(TS().js("base.num").lua("return base.num").select());
    ASSERT_TRUE(num.isNumber());
    EXPECT_EQ(ptr->getNum(), num.asNumber().toInt32());
  } catch (const Exception& e) {
    FAIL() << e;
  }
}

namespace {

class InstanceOfTest : public script::ScriptClass {
 public:
  using ScriptClass::ScriptClass;
};

auto instanceOfTestDefine = defineClass<InstanceOfTest>("InstanceOfTest").constructor().build();

}  // namespace

TEST_F(NativeTest, InstanceOfTest) {
  EngineScope scope(engine);
  try {
    engine->registerNativeClass(instanceOfTestDefine);

    // script created object
    auto ins = engine->eval(TS().js("new InstanceOfTest()").lua("return InstanceOfTest()").select())
                   .asObject();
    EXPECT_TRUE(engine->isInstanceOf<InstanceOfTest>(ins));

    auto func = engine
                    ->eval(TS().js(
                                   R"(
        (function() {
          return function (ins) {
              return ins instanceof InstanceOfTest;
          }
        })();
    )")

                               .lua("return function (ins) return ScriptX.isInstanceOf(ins, "
                                    "InstanceOfTest) end")
                               .select())
                    .asFunction();

    auto scriptCreatedIsInstance = func.call({}, ins);
    EXPECT_TRUE(scriptCreatedIsInstance.asBoolean().value());

    // native create
    ins = engine->newNativeClass<InstanceOfTest>();
    ASSERT_TRUE(engine->isInstanceOf<InstanceOfTest>(ins));
    auto scriptInstanceOfFunc = func.call({}, ins);

    EXPECT_TRUE(scriptInstanceOfFunc.asBoolean().value());

    EXPECT_FALSE(func.call({}, Object::newObject()).asBoolean().value());
    EXPECT_FALSE(func.call({}, Number::newNumber(0)).asBoolean().value());
  } catch (const Exception& e) {
    FAIL() << e;
  }
}

TEST_F(NativeTest, TypedAPIClassDefineTest) {
  EngineScope engineScope(engine);
  engine->registerNativeClass(instanceOfTestDefine);
  auto ins = engine->newNativeClass<InstanceOfTest>();
  EXPECT_TRUE(engine->isInstanceOf<InstanceOfTest>(ins));
  EXPECT_TRUE(engine->getNativeInstance<InstanceOfTest>(ins) != nullptr);

  EXPECT_THROW({ engine->newNativeClass<BaseClassScriptWrapper>(); }, Exception);
  EXPECT_THROW({ engine->isInstanceOf<BaseClassScriptWrapper>(ins); }, Exception);
  EXPECT_THROW({ engine->getNativeInstance<BaseClassScriptWrapper>(ins); }, Exception);
}

TEST_F(NativeTest, MissMatchedType) {
  class Instance : public ScriptClass {
   public:
    using ScriptClass::ScriptClass;

    std::string name;

    static int getAge() { return 0; }
    static void setAge(int) {}

    void fun(int) {}

    static void sfun(int) {}
  };

  EngineScope scope(engine);

  auto def = defineClass<Instance>("Instance")
                 .constructor()
                 .function("sfun", &Instance::sfun)
                 .instanceFunction("fun", &Instance::fun)
                 .build();
  engine->registerNativeClass(def);

  auto sfun =
      engine->eval(TS().js("Instance.sfun;").lua("return Instance.sfun").select()).asFunction();
  auto ins = engine->newNativeClass<Instance>();
  auto fun = ins.get("fun").asFunction();

#ifdef SCRIPTX_NO_EXCEPTION_ON_BIND_FUNCTION
  ASSERT_TRUE(sfun.call().isNull());
  ASSERT_TRUE(sfun.call({}, "empty").isNull());
  ASSERT_TRUE(sfun.call({}, 0, 0).isNull());
  ASSERT_TRUE(fun.call().isNull());
  ASSERT_TRUE(fun.call(ins).isNull());
  ASSERT_TRUE(fun.call(ins, "empty").isNull());
  ASSERT_TRUE(fun.call(ins, 0, 0).isNull());
#else
  EXPECT_THROW({ sfun.call(); }, Exception);
  EXPECT_THROW({ sfun.call({}, "empty"); }, Exception);
  EXPECT_THROW({ sfun.call({}, 0, 0); }, Exception);
  EXPECT_THROW({ fun.call(); }, Exception);
  EXPECT_THROW({ fun.call(ins); }, Exception);
  EXPECT_THROW({ fun.call(ins, "empty"); }, Exception);
  EXPECT_THROW({ fun.call(ins, 0, 0); }, Exception);
#endif
}

namespace {

static const bool gender = true;

class Class : public ScriptClass {
  std::string name = "Native";

 public:
  int age = 0;

  explicit Class(const Local<Object>& thiz) : ScriptClass(thiz) {}

  static Local<Value> hello0(const Arguments& args) {
    if (args.size() == 1 && args[0].isString()) {
      return String::newString(std::string("hello ") + args[0].asString().toString());
    }
    return {};
  }

  static std::string hello(std::string_view who) {
    return std::string("hello ") + std::string(who);
  }

  Local<Value> helloMe0(const Arguments& args) {
    if (args.size() == 1 && args[0].isString()) {
      return String::newString(name + " hello " + args[0].asString().toString());
    }
    return {};
  }

  std::string helloMe(std::string_view who) {
    return name + std::string(" hello ") + std::string(who);
  }

  static Local<Value> getName0() { return String::newString("bala bala bala"); }

  static std::string getName00() { return "bala bala bala"; }

  static void setName0(const Local<Value>& value) {
    if (value.isString()) {
      /*xxx = */ value.asString().toString();
    }
  }

  static void setName00(const std::string& value) {}

  std::string getName() { return name; }

  void setName(std::string name) { this->name = std::move(name); }
};

static ClassDefine<Class> def = defineClass<Class>("BindInstanceFunc")
                                    .nameSpace("test")
                                    .constructor()
                                    .function("hello0", &Class::hello0)
                                    .function("hello", &Class::hello, false)
                                    .property("name0", &Class::getName0, &Class::setName0)
                                    .property("name00", &Class::getName00, &Class::setName0)
                                    .property("name01", &Class::getName00, &Class::setName00)
                                    .property("name02", &Class::getName0, &Class::setName00)
                                    .property("gender", &gender)
                                    .instanceFunction("helloMe0", &Class::helloMe0)
                                    .instanceFunction("helloMe", &Class::helloMe)
                                    .instanceProperty("name", &Class::getName, &Class::setName)
                                    .instanceProperty("age", &Class::age)
                                    .build();

// these are all the supported types
static_assert(converter::isConvertible<void>);
static_assert(converter::isConvertible<int8_t>);
static_assert(converter::isConvertible<uint8_t>);
static_assert(converter::isConvertible<int16_t>);
static_assert(converter::isConvertible<uint16_t>);
static_assert(converter::isConvertible<int32_t>);
static_assert(converter::isConvertible<uint32_t>);
static_assert(converter::isConvertible<int64_t>);
static_assert(converter::isConvertible<uint64_t>);
static_assert(converter::isConvertible<size_t>);
static_assert(converter::isConvertible<bool>);
static_assert(converter::isConvertible<float>);
static_assert(converter::isConvertible<double>);
static_assert(converter::isConvertible<std::string>);
static_assert(converter::isConvertible<std::string_view>);
static_assert(converter::isConvertible<const char*>);
#ifdef __cpp_lib_char8_t
static_assert(converter::isConvertible<std::u8string>);
static_assert(converter::isConvertible<std::u8string_view>);
static_assert(converter::isConvertible<const char8_t*>);
#endif
static_assert(converter::isConvertible<Local<Value>>);
static_assert(converter::isConvertible<Local<Object>>);
static_assert(converter::isConvertible<Local<String>>);
static_assert(converter::isConvertible<Local<Number>>);
static_assert(converter::isConvertible<Local<Boolean>>);
static_assert(converter::isConvertible<Local<Array>>);

TEST_F(NativeTest, ClassDefineBuilder) {
  EngineScope engineScope(engine);
  engine->registerNativeClass(def);
  auto ret1 = engine->eval(TS().js("test.BindInstanceFunc.hello('js');")
                               .lua("return test.BindInstanceFunc.hello('js');")
                               .select());
  ASSERT_TRUE(ret1.isString());
  ASSERT_EQ(ret1.asString().toString(), "hello js");

  EXPECT_THROW({ engine->eval("test.BindInstanceFunc.hello(0);"); }, Exception);

  ret1 = engine->eval(TS().js("test.BindInstanceFunc.hello0('js');")
                          .lua("return test.BindInstanceFunc.hello0('js');")
                          .select());
  ASSERT_TRUE(ret1.isString());
  ASSERT_EQ(ret1.asString().toString(), "hello js");

  ret1 = engine->eval(
      TS().js("test.BindInstanceFunc.name0;").lua("return test.BindInstanceFunc.name0;").select());
  ASSERT_TRUE(ret1.isString());
  ASSERT_EQ(ret1.asString().toString(), "bala bala bala");

  ret1 = engine->eval(TS().js("test.BindInstanceFunc.gender;")
                          .lua("return test.BindInstanceFunc.gender;")
                          .select());
  ASSERT_TRUE(ret1.isBoolean());
  ASSERT_EQ(ret1.asBoolean().value(), true);

  ret1 = engine->eval(TS().js("new test.BindInstanceFunc().helloMe0(\"js\");")
                          .lua("return test.BindInstanceFunc():helloMe0(\"js\");")
                          .select());
  ASSERT_TRUE(ret1.isString());
  ASSERT_EQ(ret1.asString().toString(), "Native hello js");

  ret1 = engine->eval(TS().js("new test.BindInstanceFunc().helloMe('js');")
                          .lua("return test.BindInstanceFunc():helloMe('js');")
                          .select());
  ASSERT_TRUE(ret1.isString());
  ASSERT_EQ(ret1.asString().toString(), "Native hello js");

  ret1 = engine->eval(TS().js("new test.BindInstanceFunc().name;")
                          .lua("return test.BindInstanceFunc().name;")
                          .select());
  ASSERT_TRUE(ret1.isString());
  ASSERT_EQ(ret1.asString().toString(), "Native");

  ret1 = engine->eval(TS().js(R"""(
        var i = new test.BindInstanceFunc();
        i.name = "What";
        i.name;
    )""")
                          .lua(R"""(
        local i = test.BindInstanceFunc();
        i.name = "What";
        return i.name;
    )""")
                          .select());
  ASSERT_TRUE(ret1.isString());
  ASSERT_EQ(ret1.asString().toString(), "What");

  ret1 = engine->eval(TS().js("new test.BindInstanceFunc().age;")
                          .lua("return test.BindInstanceFunc().age;")
                          .select());
  ASSERT_TRUE(ret1.isNumber());
  ASSERT_EQ(ret1.asNumber().toInt32(), 0);
}
}  // namespace

namespace {

int overload(int) { return 0; }
int overload(double) { return 1; }

class X {
 public:
  int overload(int) { return 0; }
  int overload(int&) { return 1; }
  int overload(double) { return 2; }
  int overload(double) const { return 3; }
};

}  // namespace

TEST_F(NativeTest, NativeFounction) {
  EngineScope scope(engine);
  auto func = Function::newFunction([](int) {});
  func.call({}, 0);
  EXPECT_THROW({ func.call(); }, Exception);
  EXPECT_THROW({ func.call({}, 1, 2); }, Exception);
  EXPECT_THROW({ func.call({}, ""); }, Exception);

  class Instance : public ScriptClass {
   public:
    using ScriptClass::ScriptClass;
  };

  auto def = defineClass<Instance>("Instance")
                 .constructor()
                 .instanceFunction("f", [](Instance*, int) {})
                 .build();
  engine->registerNativeClass(def);
  auto ins = engine->newNativeClass<Instance>();
  auto insFunc = ins.get("f");

  func.call({}, 0);
  EXPECT_THROW({ func.call(ins); }, Exception);
  EXPECT_THROW({ func.call(ins, 1, 2); }, Exception);
  EXPECT_THROW({ func.call(ins, ""); }, Exception);
}

TEST_F(NativeTest, OverloadedFunction) {
  EngineScope scope(engine);
  auto func1 = [](int) { return 1; };
  auto func2 = [](const std::string&) { return 2; };
  auto func3 = [](int, int) { return 3; };

  auto overloaded = script::adaptOverLoadedFunction(func1, func2, func3);
  auto fun = Function::newFunction(overloaded);

  auto ret = fun.call({}, 0);
  EXPECT_EQ(ret.asNumber().toInt32(), 1);

  ret = fun.call({}, 3.14);
  EXPECT_EQ(ret.asNumber().toInt32(), 1);

  ret = fun.call({}, "hello");
  EXPECT_EQ(ret.asNumber().toInt32(), 2);

  ret = fun.call({}, 1, 2);
  EXPECT_EQ(ret.asNumber().toInt32(), 3);

  EXPECT_THROW({ fun.call({}, false); }, Exception);
}

TEST_F(NativeTest, SelectOverloadedFunction) {
  auto o1 = script::selectOverloadedFunc<int(int)>(overload);
  auto o2 = script::selectOverloadedFunc<int(double)>(overload);

  EXPECT_EQ(0, o1(0));
  EXPECT_EQ(1, o2(0.0));

  auto x0 = script::selectOverloadedFunc<int (X::*)(int)>(&X::overload);
  auto x1 = script::selectOverloadedFunc<int (X::*)(int&)>(&X::overload);
  auto x2 = script::selectOverloadedFunc<int (X::*)(double)>(&X::overload);
  auto x3 = script::selectOverloadedFunc<int (X::*)(double) const>(&X::overload);

  X x;
  X* p = &x;
  int i = 0;

  EXPECT_EQ(0, (p->*x0)(0));
  EXPECT_EQ(1, (p->*x1)(i));
  EXPECT_EQ(2, (p->*x2)(0.0));
  EXPECT_EQ(3, (p->*x3)(0.0));
}

TEST_F(NativeTest, FunctionWrapper) {
  std::function<int(int, int)> add;

  {
    EngineScope scope(engine);

    auto func = engine
                    ->eval(TS().js("(function (ia, ib) { return ia + ib;})")
                               .lua("return function (ia, ib) return ia + ib end")
                               .select())
                    .asFunction();
    auto f = func.wrapper<int(int, int)>();
    EXPECT_EQ(f(1, 2), 3);
    add = std::move(f);

    func.wrapper<void(int, int)>();

    auto wrongRetType = func.wrapper<const char*(int, int)>();
    EXPECT_THROW({ wrongRetType(1, 2); }, Exception);

    auto wrongParamType = func.wrapper<int(const char*, int)>();
    EXPECT_THROW({ wrongParamType("hello", 2); }, Exception);
  }

  EXPECT_EQ(add(1, 1), 2) << "Out of EngineScope test";
}

TEST_F(NativeTest, FunctionWrapperReceiver) {
  EngineScope scope(engine);
  try {
    auto func =
        engine
            ->eval(
                TS().js("(function () { if (this && this.num) return this.num; else return -1 ;})")
                    .lua("return function (self) if self ~= nil then return self.num else return "
                         "-1 end end")
                    .select())
            .asFunction();

    auto receiver =
        engine->eval(TS().js("({ num: 42})").lua("num = {}; num.num = 42; return num;").select())
            .asObject();

    auto withReceiver = func.wrapper<int()>(receiver);
    EXPECT_EQ(withReceiver(), 42);

    auto noReceiver = func.wrapper<int()>();
    EXPECT_EQ(noReceiver(), -1);
  } catch (const Exception& e) {
    FAIL() << e;
  }
}

TEST_F(NativeTest, ValidateClassDefine) {
  // static & instance are empty
  EXPECT_THROW({ defineClass("hello").build(); }, std::runtime_error);

  {
    EngineScope scope(engine);
    EXPECT_THROW({ defineClass("hello").build(); }, Exception);
  }

  // empty func name
  EXPECT_THROW({ defineClass("hello").function("", []() {}).build(); }, std::runtime_error);

  // empty prop name
  EXPECT_THROW({ defineClass("hello").property("", &version).build(); }, std::runtime_error);

  // empty func func
  EXPECT_THROW(
      {
        defineClass("hello").function("x", std::function<Local<Value>(const Arguments&)>()).build();
      },
      std::runtime_error);

  EXPECT_TRUE(std::function<void()>() == nullptr);

  // empty prop func
  EXPECT_THROW({ defineClass("hello").property("x", std::function<Local<Value>()>()).build(); },
               std::runtime_error);

  // no ctor
  EXPECT_THROW(
      {
        defineClass<InternalStorageTest>("hello")
            .instanceFunction("x", &InternalStorageTest::getVal)
            .build();
      },
      std::runtime_error);
  // empty func name
  EXPECT_THROW(
      {
        defineClass<InternalStorageTest>("hello")
            .constructor()
            .instanceFunction("", &InternalStorageTest::getVal)
            .build();
      },
      std::runtime_error);

  // empty prop name
  EXPECT_THROW(
      {
        defineClass<TestClass>("hello").constructor().instanceProperty("", &TestClass::src).build();
      },
      std::runtime_error);

  // empty func func
  EXPECT_THROW(
      {
        defineClass<TestClass>("hello")
            .constructor()
            .instanceFunction("x",
                              std::function<Local<Value>(const TestClass*, const Arguments&)>())
            .build();
      },
      std::runtime_error);

  // empty prop func
  EXPECT_THROW(
      {
        defineClass<TestClass>("hello")
            .constructor()
            .instanceProperty("x", std::function<Local<Value>(TestClass*)>())
            .build();
      },
      std::runtime_error);
}

TEST_F(NativeTest, ClassDefineVisitor) {
  static std::ostringstream out;
  class V : public ClassDefineVisitor {
   public:
    void beginClassDefine(const std::string& name, const std::string& nameSpace) override {}
    void endClassDefine() override {}
    void visitConstructor(const std::type_info& type) override {
      out << "constructor: " << std::endl << type.name() << std::endl << std::endl;
    }
    void visitStaticProperty(const std::string& name, const std::type_info& getter,
                             const std::type_info& setter) override {
      out << "prop: " << std::endl
          << name << std::endl
          << getter.name() << std::endl
          << setter.name() << std::endl;
    }
    void visitStaticFunction(const std::string& name, const std::type_info& callback) override {
      out << "function: " << std::endl << name << std::endl << callback.name() << std::endl;
    }
    void visitInstanceProperty(const std::string& name, const std::type_info& getter,
                               const std::type_info& setter) override {
      out << "insProp: " << std::endl
          << name << std::endl
          << getter.name() << std::endl
          << setter.name() << std::endl;
    }
    void visitInstanceFunction(const std::string& name, const std::type_info& callback) override {
      out << "insFunction: " << std::endl << name << std::endl << callback.name() << std::endl;
    }
  };

#ifdef __cpp_rtti
  V v;
  TestClassDefAll.visit(v);
  EXPECT_FALSE(out.str().empty());
  TestClassDefAll.getNativeRegister().visit(v);
#endif
}

#ifdef SCRIPTX_BACKEND_WEBASSEMBLY

class WasmScriptClassDestroyScriptClass : public ScriptClass {
 public:
  static bool destroyed_;

  using ScriptClass::ScriptClass;
  ~WasmScriptClassDestroyScriptClass() override { destroyed_ = true; }
};

bool WasmScriptClassDestroyScriptClass::destroyed_ = false;

static ClassDefine<WasmScriptClassDestroyScriptClass> wasmScriptClassDestroyScriptClassDefine =
    defineClass<WasmScriptClassDestroyScriptClass>("WasmScriptClassDestroyScriptClass")
        .constructor()
        .build();

TEST_F(NativeTest, WasmScriptClassDestroyTest) {
  EngineScope scope(engine);
  engine->registerNativeClass(wasmScriptClassDestroyScriptClassDefine);

  WasmScriptClassDestroyScriptClass::destroyed_ = false;
  auto ins = engine->newNativeClass<WasmScriptClassDestroyScriptClass>();
  wasm_interop::destroyScriptClass(ins);
  EXPECT_TRUE(WasmScriptClassDestroyScriptClass::destroyed_);

  WasmScriptClassDestroyScriptClass::destroyed_ = false;
  engine->eval(R"(
    const ins = new WasmScriptClassDestroyScriptClass();
    ScriptX.destroyScriptClass(ins);
  )");
  EXPECT_TRUE(WasmScriptClassDestroyScriptClass::destroyed_);
}

#endif
}  // namespace script::test
