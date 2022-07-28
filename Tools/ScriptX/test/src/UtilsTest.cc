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

DEFINE_ENGINE_TEST(UtilsTest);

TEST_F(UtilsTest, Log) {
  class L : public Logger::Delegate {
   public:
    std::string message;
    void log(const char *msg) override { message = msg; }
  };

  L l;

  Logger::setDelegate(&l);

  Logger::log("hello");
  EXPECT_EQ(l.message, "hello");

  Logger::log(std::string("hello"));
  EXPECT_EQ(l.message, "hello");

  Logger::log(std::string_view("hello"));
  EXPECT_EQ(l.message, "hello");

  Logger() << "hello " << 1;
  EXPECT_EQ(l.message, "hello 1");

  Logger::setDelegate(nullptr);
}

TEST_F(UtilsTest, Tracer) {
  class T : public Tracer::Delegate {
   public:
    mutable std::string begin;
    mutable bool end = false;
    void beginTrace(ScriptEngine *engine, const char *traceName) const noexcept override {
      begin = traceName;
    }
    void endTrace(ScriptEngine *engine) const noexcept override { end = true; }
  };

  T t;

  Tracer::setDelegate(&t);
  EngineScope scope(engine);
  engine->eval("");
  EXPECT_TRUE(!t.begin.empty());
  EXPECT_TRUE(t.end);

  Tracer::setDelegate(nullptr);
}

}  // namespace script::test