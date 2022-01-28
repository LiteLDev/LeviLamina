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

DEFINE_ENGINE_TEST(EngineTest);

TEST_F(EngineTest, Misc) {
  engine->adjustAssociatedMemory(100);
  engine->gc();

  auto size = engine->getHeapSize();
#if defined(SCRIPTX_BACKEND_V8) || defined(SCRIPTX_BACKEND_LUA)
  EXPECT_GT(size, 0);
#endif

  EXPECT_FALSE(engine->getEngineVersion().empty());
  EXPECT_TRUE(::script::kVersionMajor != 0);
  EXPECT_TRUE(::script::kVersionString != nullptr);

#ifdef SCRIPTX_LANG_JAVASCRIPT
  EXPECT_EQ(engine->getLanguageType(), ScriptLanguage::kJavaScript);
#elif defined(SCRIPTX_LANG_LUA)
  EXPECT_EQ(engine->getLanguageType(), ScriptLanguage::kLua);
#endif
}

TEST_F(EngineTest, UserData) {
  EXPECT_TRUE(engine->getData() == nullptr);
  auto data = std::make_shared<bool>(false);
  engine->setData(data);
  EXPECT_TRUE(engine->getData() == data);
  EXPECT_TRUE(!*engine->getData<bool>());
  *data = true;
  EXPECT_TRUE(*engine->getData<bool>());

#ifndef SCRIPTX_BACKEND_WEBASSEMBLY
  std::weak_ptr<bool> weak = data;
  data.reset();
  destroyEngine();
  EXPECT_TRUE(weak.lock() == nullptr);
#endif
}

TEST_F(EngineTest, SmartPointer) {
  script::UniqueEnginePtr uniquePtr(engine);
  std::unique_ptr<ScriptEngine, ScriptEngine::Deleter> uniquePtr1(engine);
  std::shared_ptr<ScriptEngine> sharedPtr(engine, ScriptEngine::Deleter());

  uniquePtr->adjustAssociatedMemory(100);
  sharedPtr->gc();
  engine->getHeapSize();

  uniquePtr.release();
  uniquePtr1.release();
  engine = nullptr;
  // destory engine
  sharedPtr.reset();
}

#ifndef SCRIPTX_BACKEND_WEBASSEMBLY

TEST(EngineMessageQueueTest, MessageTag) {
  auto queue = std::make_shared<utils::MessageQueue>();
  auto engine = new ScriptEngineImpl(queue);

  utils::Message m1(nullptr, nullptr);
  m1.tag = engine;
  queue->postMessage(m1);

  utils::Message m2(nullptr, nullptr);
  m2.what = 42;
  queue->postMessage(m2);

  // on engine destroy
  // m1 is removed, because m1.tag == engine
  // m2 is not.
  engine->destroy();

  // already removed
  EXPECT_FALSE(queue->removeMessageByTag(engine));

  // not removed
  EXPECT_TRUE(queue->removeMessageByWhat(42));
}

#endif

#ifdef SCRIPTX_BACKEND_LUA

TEST_F(EngineTest, LuaBuiltIns) {
  auto define = defineClass<ScriptClass>("Class")
                    .constructor()
                    .instanceFunction("hello", [](ScriptClass*) {})
                    .build();

  EngineScope scope(engine);

  engine->registerNativeClass(define);

  try {
    engine->eval(R"(
      local meta = ScriptX.getInstanceMeta(Class);
      if meta == nil then error("meta is nil") end
      if meta.instanceFunction == nil then error("meta.instanceFunction is nil") end
      if meta.instanceFunction.hello == nil then error("meta.instanceFunction.hello is nil") end

      local ins = Class();
      if meta ~= getmetatable(ins) then error("metatable mismatch") end

      if not ScriptX.isInstanceOf(ins, Class) then error("isInstanceOf failed") end
    )");
  } catch (const Exception& e) {
    FAIL() << e;
  }
}

#endif

}  // namespace script::test