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

#include <iostream>
#include "test.h"

namespace {
class Logger : public script::Logger::Delegate {
 public:
  void log(const char* msg) override { std::cout << msg << std::endl; }
};

Logger logger;

script::Local<script::Value> consoleLog(const script::Arguments& args) {
  for (size_t i = 0; i < args.size(); ++i) {
    if (args[i].isString()) {
      std::cout << args[i].asString().toString().c_str();
    } else {
      std::cout << args[i].describeUtf8();
    }
    if (i + 1 < args.size()) {
      std::cout << " ";
    }
  }
  std::cout << std::endl;
  return {};
}

}  // namespace

namespace script::test {

void ScriptXTestFixture::SetUp() {
#ifdef SCRIPTX_BACKEND_WEBASSEMBLY
  auto eng = script::ScriptEngineImpl::instance();
  script::ScriptEngineImpl::ignoreDestroyCall();
  eng->unitTestResetRetistry();
  engine = eng;
#else
  engine = new script::ScriptEngineImpl();
#endif
  {
    using script::EngineScope;
    using script::Function;
    using script::Object;
    using script::String;

    EngineScope engineScope(engine);
    auto log = Function::newFunction(consoleLog);
#ifndef SCRIPTX_BACKEND_WEBASSEMBLY
    auto console = Object::newObject();
    console.set(String::newString(u8"log"), log);
    engine->set(String::newString(u8"console"), console);
#endif
    engine->set(String::newString(u8"print"), log);
  }
}

void ScriptXTestFixture::TearDown() {
  if (engine) engine->destroy();
}

void ScriptXTestFixture::destroyEngine() {
  engine->destroy();
  engine = nullptr;
}

}  // namespace script::test

void initExternalData(int argc, char** argv) {
#ifdef SCRIPTX_BACKEND_V8
  v8::V8::InitializeExternalStartupData(argv[0]);
#endif
}

GTEST_API_ int main(int argc, char** argv) {
  printf("Running main() from %s\n", __FILE__);
  initExternalData(argc, argv);
  script::Logger::setDelegate(&logger);
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
