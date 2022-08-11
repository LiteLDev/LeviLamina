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

DEFINE_ENGINE_TEST(ShowCaseTest);

/**
 * show how to implement a `setTimeout(function, delayMs)`
 */
namespace {

void defineSetTimeout(ScriptEngine* engine) {
  EngineScope scope(engine);
  auto setTimeOut = Function::newFunction([](const Arguments& args) -> Local<Value> {
    // make a global ref, we are going to pass it beyond stack-frame lifecycle
    auto callback = Global<Function>(args[0].asFunction());
    auto delayMs = args[1].asNumber().toInt64();
    auto engine = args.engine();

    auto runner = [fun = std::move(callback), engine]() {
      // make a scope
      EngineScope scope(engine);
      try {
        // run the callback function
        fun.get().call();
      } catch (const Exception& e) {
        Logger() << "error in setTimeout:" << e;
      }
    };
    using RunnerType = decltype(runner);

    auto&& queue = args.engine()->messageQueue();
    auto msg = queue->obtainInplaceMessage(
        [](utils::InplaceMessage& msg) { msg.getObject<RunnerType>()(); });
    msg->inplaceObject<RunnerType>(std::move(runner));
    queue->postMessage(msg, std::chrono::milliseconds(delayMs));

    return {};
  });

  engine->set("test_setTimeout", setTimeOut);
}

}  // namespace

TEST_F(ShowCaseTest, SetTimeout) {
  defineSetTimeout(engine);
  {
    EngineScope scope(engine);
    int mark = 0;

    engine->set("setMark", Function::newFunction([&mark](int v) { mark = v; }));

    engine->eval(TS().js(u8R"(
      test_setTimeout(() => {
        setMark(1);
        test_setTimeout(() => setMark(2), 0);
      }, 0);
      )")
                     .lua(u8R"(
      test_setTimeout(
        function()
          setMark(1);
          test_setTimeout(function() setMark(2) end, 0);
        end,
       0);
      )")
                     .select());
    auto&& queue = engine->messageQueue();
    ASSERT_EQ(mark, 0);
    queue->loopQueue(utils::MessageQueue::LoopType::kLoopOnce);
    ASSERT_EQ(mark, 1);
    queue->loopQueue(utils::MessageQueue::LoopType::kLoopOnce);
    ASSERT_EQ(mark, 2);
  }
}

}  // namespace script::test
