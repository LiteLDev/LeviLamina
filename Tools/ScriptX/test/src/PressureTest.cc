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

DEFINE_ENGINE_TEST(PressureTest);

namespace {

std::string version = "0.1.0";

class TestClass;

int64_t testClassInstanceCount = 0;
class TestClass : public ScriptClass {
 public:
  std::string src = "https://github.com/LanderlYoung";

  explicit TestClass(const Local<Object>& scriptObj) : ScriptClass(scriptObj) {
    testClassInstanceCount++;
  }

  ~TestClass() override { testClassInstanceCount--; }

  std::string greetStr;

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

  static Local<Value> getVersion() { return String::newString(version); }

  static void setVersion(const Local<Value>& value) { version = value.asString().toString(); }

  static TestClass* create(const Arguments& args) { return new TestClass(args.thiz()); }
};

static ClassDefine<TestClass> TestClassDefAll =
    defineClass<TestClass>("TestClass")
        .nameSpace("script.engine.test")
        .constructor()
        .function("add", &TestClass::add)
        .property("version", &TestClass::getVersion, &TestClass::setVersion)
        .instanceFunction("age", &TestClass::age)
        .instanceProperty("src", &TestClass::getSrc, &TestClass::setSrc)
        .build();

TEST_F(PressureTest, All) {
  constexpr auto kRound = 1024;

  EXPECT_EQ(0, testClassInstanceCount);
  std::vector<Global<Value>> globals;
  std::vector<Weak<Value>> weaks;
  std::string chunk;
  chunk.resize(1024 * 1024, '.');

  {
    EngineScope scope(engine);
    engine->registerNativeClass(TestClassDefAll);
    try {
      for (int i = 0; i < kRound; ++i) {
        StackFrameScope stack;
        auto ins = engine->newNativeClass<TestClass>();

        auto ctor = engine
                        ->eval(TS().js("script.engine.test.TestClass")
                                   .lua("return script.engine.test.TestClass")
                                   .py("script.engine.test.TestClass")
                                   .select())
                        .asObject();

        // static prop
        EXPECT_STREQ(ctor.get("version").asString().toString().c_str(), version.c_str());

        String::newString(chunk);

        // static func
        auto add = ctor.get("add").asFunction();
        auto ret = add.call({}, Number::newNumber(1), Number::newNumber(i));
        EXPECT_EQ(ret.asNumber().toInt32(), i + 1);

        // ins prop
        auto src = ins.get("src").asString();
        EXPECT_STREQ(src.toString().c_str(), "https://github.com/LanderlYoung");

        // ins func
        auto age = ins.get("age").asFunction();
        EXPECT_EQ(age.call(ins, Number::newNumber(123)).asNumber().toInt32(), 123);

        globals.emplace_back(engine->eval(TS().js("({hello: 123, world: 456})")
                                              .lua("return {hello = 123, world = 456}")
                                              .py("{'hello': 123, 'world': 456}")
                                              .select()));
        weaks.emplace_back(engine->eval(TS().js("({hello: 123, world: 456})")
                                            .lua("return {hello = 123, world = 456}")
                                            .py("{'hello': 123, 'world': 456}")
                                            .select()));
        engine->messageQueue()->loopQueue(utils::MessageQueue::LoopType::kLoopOnce);
      }
    } catch (const Exception& e) {
      FAIL() << e.message() << e.stacktrace();
    }
  }

  {
    EngineScope scope(engine);
    try {
      for (int i = 0; i < kRound * 10; ++i) {
        // create a lot instance
        StackFrameScope stack;
        engine->newNativeClass<TestClass>();
        engine->eval(TS().js("new script.engine.test.TestClass();")
                         .lua("script.engine.test.TestClass();")
                         .py("script.engine.test.TestClass()")
                         .select());
        engine->messageQueue()->loopQueue(utils::MessageQueue::LoopType::kLoopOnce);
      }
    } catch (const Exception& e) {
      FAIL() << e;
    }
    engine->gc();
    engine->messageQueue()->loopQueue(utils::MessageQueue::LoopType::kLoopOnce);

    // at lease some of them are GCed. and 0 surely is better!!!
    EXPECT_LT(testClassInstanceCount, kRound * 11);
  }

  {
    EngineScope scope(engine);
    try {
      for (auto& g : globals) {
        auto l = g.get().asObject();
        EXPECT_EQ(l.get("hello").asNumber().toInt32(), 123);
      }

      for (auto& w : weaks) {
        auto l = w.getValue();
        if (l.isNull()) {
          SUCCEED();
        } else {
          EXPECT_EQ(l.asObject().get("hello").asNumber().toInt32(), 123);
        }
      }
    } catch (const Exception& e) {
      FAIL() << e.message() << e.stacktrace();
    }
  }
  {
    EngineScope scope(engine);
    try {
      globals.clear();
      weaks.clear();
    } catch (const Exception& e) {
      FAIL() << e.message() << e.stacktrace();
    }
  }

  destroyEngine();

  EXPECT_EQ(0, testClassInstanceCount);
}

}  // namespace
}  // namespace script::test
