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

DEFINE_ENGINE_TEST(ManagedObjectTest);

namespace {

static void* instance = nullptr;

class Trace : public ScriptClass {
 public:
  explicit Trace(const Local<Object>& thiz) : ScriptClass(thiz) {
    EXPECT_EQ(instance, nullptr);
    instance = this;
  }

  ~Trace() override {
    EXPECT_EQ(instance, this);
    instance = nullptr;
  }
};

ClassDefine<Trace> trace = defineClass<Trace>("Trace").constructor().build();

}  // namespace

TEST_F(ManagedObjectTest, EngineDispose) {
  {
    EngineScope engineScope(engine);
    {
      Global<Value> leak;
      StackFrameScope stack;
      engine->registerNativeClass(trace);
      auto local = engine->newNativeClass<Trace>();
      leak = Global<Value>(local);

      EXPECT_TRUE(instance != nullptr);
    }
  }
  destroyEngine();

  EXPECT_EQ(instance, nullptr);
}

namespace {

class DestructWithGc : public ScriptClass {
 public:
  explicit DestructWithGc(const Local<Object>& thiz) : ScriptClass(thiz) {}

// protected:
  ~DestructWithGc() override { getScriptEngine()->gc(); }
};

ClassDefine<DestructWithGc> def = defineClass<DestructWithGc>("X").constructor().build();

}  // namespace

TEST_F(ManagedObjectTest, EngineDisposeWithGc) {
  {
    EngineScope engineScope(engine);
    {
      Global<Value> leak;
      StackFrameScope stack;
      engine->registerNativeClass(def);
      auto local = engine->newNativeClass<DestructWithGc>();
      leak = Global<Value>(local);
    }
  }
}

TEST_F(ManagedObjectTest, CallGcWhilGc) {
  {
    EngineScope engineScope(engine);
    {
      Global<Value> leak;
      StackFrameScope stack;
      engine->registerNativeClass(def);
      auto local = engine->newNativeClass<DestructWithGc>();
      leak = Global<Value>(local);
    }
  }
  engine->gc();
}

#ifdef SCRIPTX_BACKEND_V8
// V8Engine specific test

TEST_F(ManagedObjectTest, EngineDisposeWithSlave) {
  {
    auto slave = static_cast<ScriptEngineImpl*>(engine)->newSlaveEngine();
    EngineScope engineScope(slave.get());
    {
      slave->registerNativeClass(trace);
      Global<Value> leak;
      StackFrameScope stack;
      auto local = slave->newNativeClass<Trace>();
      leak = Global<Value>(local);

      EXPECT_TRUE(instance != nullptr);
    }
  }
  EXPECT_EQ(instance, nullptr);
  // gc should not destruct ScriptClass twice
}

#endif

namespace {
void* functionCallback = nullptr;

class FunctionCallbackTest {
  bool live_;

 public:
  FunctionCallbackTest() : live_(true) {
    EXPECT_EQ(functionCallback, nullptr);
    functionCallback = this;
  }

  FunctionCallbackTest(const FunctionCallbackTest& copy) : live_(true) { functionCallback = this; }

  FunctionCallbackTest(FunctionCallbackTest&& move) noexcept : live_(move.live_) {
    move.live_ = false;
    if (live_) functionCallback = this;
  }

  Local<Value> operator()(const Arguments& args) { return Boolean::newBoolean(true); }

  ~FunctionCallbackTest() {
    if (live_) {
      EXPECT_EQ(functionCallback, this);
      functionCallback = nullptr;
    }
  }
};
}  // namespace

TEST_F(ManagedObjectTest, FunctionCallback) {
  {
    EngineScope engineScope(engine);
    {
      // when use std::function with functor
      // be careful with move-constructor!
      auto function = Function::newFunction(FunctionCallbackTest());
      EXPECT_TRUE(functionCallback != nullptr);
    }
  }
  destroyEngine();

  EXPECT_EQ(functionCallback, nullptr);
}

}  // namespace script::test
