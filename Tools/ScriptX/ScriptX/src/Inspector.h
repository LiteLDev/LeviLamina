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

#pragma once

#include <memory>
#include <string_view>
#include "foundation.h"
#include SCRIPTX_BACKEND(Engine.h)

namespace script {

class InspectorAgent {
 public:
  InspectorAgent() : sendToEngine_() {}

  SCRIPTX_DISALLOW_COPY_AND_MOVE(InspectorAgent);

  virtual ~InspectorAgent() = default;

  /**
   * Engine call this method to send message to debugger.
   * override this method.
   * @param utf8
   */
  virtual void sendMessageToDebugger(const std::string_view& utf8) = 0;

  /**
   * Call this method to dispatch debugger message to Engine.
   * This method can only be called after a ScriptInspector is created using this agent.
   * @param utf8
   */
  void sendMessageToEngine(const std::string_view& utf8) { sendToEngine_(utf8); }

 private:
  /**
   * Engine install a listener, so that debugger can dispatch message to Engine.
   * @param listener
   */
  void setOnDebuggerMessageListener(std::function<void(const std::string_view& utf8)>&& listener) {
    sendToEngine_ = std::move(listener);
  }

  std::function<void(const std::string_view& utf8)> sendToEngine_;

  friend class ScriptInspector;
};

class ScriptInspector {
 public:
  ScriptInspector() = default;

  SCRIPTX_DISALLOW_COPY_AND_MOVE(ScriptInspector);

  virtual ~ScriptInspector() = default;

  struct Options {
    std::string_view debugName;
    /**
     * pause engine and wait for debugger to connect.
     */
    bool waitForDebugger;
  };

  static std::unique_ptr<ScriptInspector> create(script::ScriptEngine* engine,
                                                 std::unique_ptr<InspectorAgent> agent,
                                                 const Options& options = {});

 protected:
  // helper method
  static void setListenerToInspectorAgent(
      InspectorAgent* agent, std::function<void(const std::string_view& utf8)> listener) {
    agent->setOnDebuggerMessageListener(std::move(listener));
  }
};

}  // namespace script
