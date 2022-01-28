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

DEFINE_ENGINE_TEST(ExceptionTest);

TEST_F(ExceptionTest, Normal) {
  {
    // ok
    EngineScope engineScope(engine);
    try {
      throw Exception("inside");
    } catch (const Exception&) {
    }
  }
}

TEST_F(ExceptionTest, ExceptionOutOfEngineScope) {
  try {
    EngineScope engineScope(engine);
    throw Exception("inside");
    // exception go out of engine scope, still ok
  } catch (const Exception&) {
  }
}

TEST_F(ExceptionTest, Function) {
  EngineScope engineScope(engine);
  try {
    EXPECT_THROW(
        {
          engine->eval(TS().js("throw Error('hello error')").lua("error('hello error')").select());
        },
        Exception);

    auto func = Function::newFunction([](const script::Arguments& args) {
      if (args.size() == 0) {
        throw Exception("invalid argument");
      }
      return Number::newNumber(0);
    });

    func.call({}, {Object::newObject()});

    EXPECT_THROW({ func.call({}); }, Exception);

    engine->set("func", func);
    Local<Value> ret;
    ret = engine->eval(TS().js(R"(
try {
    func();
    false;
} catch (e) {
    true;
}
)")
                           .lua(R"(
       return not pcall(func)
  )")
                           .select());

    EXPECT_TRUE(ret.isBoolean());
    EXPECT_TRUE(ret.asBoolean().value());

    engine->set("func", {});

    try {
      func.call({});
      FAIL();
    } catch (Exception& e) {
      EXPECT_NE(e.message().find("invalid argument"), std::string::npos);
    }
  } catch (Exception& exception) {
    FAIL() << exception.message() << exception.stacktrace();
  }
}

TEST_F(ExceptionTest, StackTrace) {
  EngineScope engineScope(engine);
  Local<Value> func;

  func = engine->eval(TS().js(R"(
function exceptionStackTraceTestThrow() {
  throw new Error("recursive too deep");
}
function exceptionStackTraceTest(depth) {
  if (depth >= 10) exceptionStackTraceTestThrow();
  exceptionStackTraceTest(depth + 1);
}
exceptionStackTraceTest;
)")
                          .lua(R"(
function exceptionStackTraceTestThrow()
  error("recursive too deep")
end

function exceptionStackTraceTest(depth)
  if depth >= 10 then exceptionStackTraceTestThrow() end
  exceptionStackTraceTest(depth + 1)
end

return exceptionStackTraceTest
)")
                          .select());

  try {
    func.asFunction().call({}, Number::newNumber(0));
    FAIL() << "should thrown";
  } catch (const Exception& e) {
    EXPECT_NE(e.message().find("recursive too deep"), std::string::npos);
    EXPECT_NE(e.stacktrace().find("exceptionStackTraceTestThrow"), std::string::npos);
    EXPECT_NE(e.stacktrace().find("exceptionStackTraceTest"), std::string::npos);
  }
  Exception().stacktrace();
  std::ostringstream() << Exception();
}

TEST_F(ExceptionTest, Cross) {
  EngineScope engineScope(engine);

  Exception e("test");
  EXPECT_NE(e.message().find("test"), std::string::npos);
  EXPECT_NE(std::string(e.what()).find("test"), std::string::npos);

  auto exception = e.exception();
  try {
    EXPECT_FALSE(exception.isNull());
    auto throwIt = engine->eval(TS().js("function throwIt(e) { throw e; }; throwIt")
                                    .lua("return function (e) error(e) end;")
                                    .select());
    throwIt.asFunction().call({}, exception);
  } catch (Exception& ex) {
    EXPECT_NE(ex.message().find("test"), std::string::npos);
#ifdef SCRIPTX_LANG_JAVASCRIPT
    EXPECT_TRUE(exception == ex.exception());
#endif

#ifdef SCRIPTX_LANG_LUA
    auto exException = ex.exception();
    EXPECT_TRUE(exException.isObject());
    EXPECT_NE(exException.asObject().get("message").asString().toString().find(
                  exception.asString().toString()),
              std::string::npos);
#endif
  }

  {
    Exception ex(String::newString("test"));
    EXPECT_NE(ex.message().find("test"), std::string::npos);
  }
}

#ifndef SCRIPTX_BACKEND_WEBASSEMBLY
TEST_F(ExceptionTest, EngineScopeOnDestory) {
  bool executed = false;
  {
    EngineScope engineScope(engine);
    utils::Message m([](auto msg) {},
                     [](auto msg) {
                       *static_cast<bool*>(msg.ptr0) = true;
                       EXPECT_THROW({ EngineScope scope(static_cast<ScriptEngine*>(msg.ptr1)); },
                                    std::logic_error);
                     });
    m.tag = engine;
    m.ptr0 = &executed;
    m.ptr1 = engine;
    engine->messageQueue()->postMessage(m);
  }
  destroyEngine();
  EXPECT_TRUE(executed);
}
#endif

TEST_F(ExceptionTest, ThrowPerformance) {
  std::string chunk;
  chunk.resize(1024, '.');

  EngineScope engineScope(engine);
  for (int i = 0; i < 1000; ++i) {
    try {
      throw Exception(chunk);
    } catch (Exception&) {
    }
  }
}

}  // namespace script::test