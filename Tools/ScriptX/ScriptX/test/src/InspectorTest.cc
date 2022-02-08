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

#include <ScriptX/ScriptX.h>
#include <iostream>

namespace script::test {
class IOAgent : public script::InspectorAgent {
 public:
  void sendMessageToDebugger(const std::string_view& utf8) override {
    std::cout << utf8 << std::endl;

    std::cerr << "<< " << utf8 << std::endl;
  }

  void sendMessageToEngine_(const std::string_view& utf8) {
    std::cerr << ">> " << utf8 << std::endl;
    sendMessageToEngine(utf8);
  }

  ~IOAgent() override = default;
  ;
};

}  // namespace script::test

// running steps
// websocketd --port=8080 --devconsole InspectorTest
// open chrome for: devtools://devtools/bundled/js_app.html?ws=localhost:8080
int main() {
  std::cerr << "Inspector run" << std::endl;

  //  using namespace script;
  using script::EngineScope;
  using script::InspectorAgent;
  using script::Number;
  using script::ScriptEngine;
  using script::ScriptEngineImpl;
  using script::ScriptInspector;
  ScriptEngine* engine = new ScriptEngineImpl();
  auto agent = new script::test::IOAgent();
  auto ins =
      ScriptInspector::create(engine, std::unique_ptr<InspectorAgent>(agent), {"young", false});
  bool wait = true;

  {
    EngineScope engineScope(engine);
    const char* src = R"(
            function fibo(x) {
                if (x <=1) return 1;
                return fibo(x-1) + fibo(x-2);
            }
        )";
    const char* url = "Test.js";
    engine->eval(src, url);
  }

  std::thread t([&]() {
    while (true) {
      EngineScope engineScope(engine);
      auto fibo = engine->get("fibo").asFunction();
      fibo.call({}, Number::newNumber(10));
      engine->messageQueue()->loopQueue(script::utils::MessageQueue::LoopType::kLoopOnce);
    }
  });
  //
  //    while (wait) {
  //        wait = wait;
  //    }

  const std::string_view line = R"(
{"id":1,"method":"Profiler.enable"}
{"id":2,"method":"Runtime.enable"}
{"id":3,"method":"Debugger.enable","params":{"maxScriptsCacheSize":10000000}}
{"id":4,"method":"Debugger.setPauseOnExceptions","params":{"state":"none"}}
{"id":5,"method":"Debugger.setAsyncCallStackDepth","params":{"maxDepth":32}}
{"id":6,"method":"Runtime.getIsolateId"}
{"id":7,"method":"Debugger.setBlackboxPatterns","params":{"patterns":[]}}
{"id":8,"method":"Runtime.runIfWaitingForDebugger"}
)";

  std::string s;
  while (true) {
    std::getline(std::cin, s);
    if (!s.empty()) {
      agent->sendMessageToEngine_(s);
    }
    s.clear();
  }
  agent->sendMessageToEngine_(R"({"id":1,"method":"Profiler.enable"})");
  agent->sendMessageToEngine_(R"({"id":2,"method":"Runtime.enable"})");
  agent->sendMessageToEngine_(
      R"({"id":3,"method":"Debugger.enable","params":{"maxScriptsCacheSize":10000000}})");
  agent->sendMessageToEngine_(
      R"({"id":4,"method":"Debugger.setPauseOnExceptions","params":{"state":"none"}})");
  agent->sendMessageToEngine_(
      R"({"id":5,"method":"Debugger.setAsyncCallStackDepth","params":{"maxDepth":32}})");
  agent->sendMessageToEngine_(R"({"id":6,"method":"Runtime.getIsolateId"})");
  agent->sendMessageToEngine_(
      R"({"id":7,"method":"Debugger.setBlackboxPatterns","params":{"patterns":[]}})");
  agent->sendMessageToEngine_(R"({"id":8,"method":"Runtime.runIfWaitingForDebugger"})");

  t.join();
}