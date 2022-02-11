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

#include "../../src/foundation.h"

#include <cassert>

SCRIPTX_BEGIN_INCLUDE_LIBRARY
#include <v8-inspector.h>
SCRIPTX_END_INCLUDE_LIBRARY

#include "../../src/Inspector.h"
#include "../../src/Utils.h"
#include "V8Engine.h"
#include "thirdparty/utfcpp/utf8-min.h"

namespace script::v8_backend {

class InspectorFrontend final : public v8_inspector::V8Inspector::Channel {
 public:
  explicit InspectorFrontend(script::InspectorAgent* agent) : agent_(agent) {}

  SCRIPTX_DISALLOW_COPY_AND_MOVE(InspectorFrontend);

  ~InspectorFrontend() override = default;

  void sendResponse(int /*callId*/, std::unique_ptr<v8_inspector::StringBuffer> message) override {
    sendToDebugger(message->string());
  }

  void sendNotification(std::unique_ptr<v8_inspector::StringBuffer> message) override {
    sendToDebugger(message->string());
  }

  void flushProtocolNotifications() override {}

 private:
  void sendToDebugger(const v8_inspector::StringView& string) {
    if (string.is8Bit()) {
      std::string_view u8(reinterpret_cast<const char*>(string.characters8()), string.length());
      agent_->sendMessageToDebugger(u8);
    } else {
      // convert u16 string to u8
      try {
        std::string u8;
        auto u16 = string.characters16();
        // NOLINTNEXTLINE (cppcoreguidelines-pro-bounds-pointer-arithmetic)
        utf8::utf16to8(u16, u16 + string.length(), std::back_inserter(u8));

        agent_->sendMessageToDebugger(u8);
      } catch (const std::exception& e) {
        Logger() << "invalid utf string in sendToDebugger " << e.what();
      }
    }
  }

  script::InspectorAgent* agent_;
};

class InspectorClient : public v8_inspector::V8InspectorClient, public script::ScriptInspector {
 public:
  InspectorClient(script::ScriptEngine* engine, std::unique_ptr<script::InspectorAgent>&& agent,
                  const Options& options)
      : agent_(std::move(agent)),
        engine_(script::internal::scriptDynamicCast<script::v8_backend::V8Engine*>(engine)) {
    assert(engine_);
    assert(agent_);

    script::EngineScope scope(engine);
    isolate_ = engine_->isolate_;
    auto context = engine_->context_.Get(isolate_);

    channel_ = std::make_unique<InspectorFrontend>(agent_.get());
    inspector_ = v8_inspector::V8Inspector::create(isolate_, this);
    session_ = inspector_->connect(kContextGroupId, channel_.get(), v8_inspector::StringView());

    inspector_->contextCreated(v8_inspector::V8ContextInfo(
        context, kContextGroupId,
        v8_inspector::StringView(reinterpret_cast<const uint8_t*>(options.debugName.data()),
                                 options.debugName.length())));

    setListenerToInspectorAgent(
        agent_.get(), [this](const std::string_view& utf8) { dispatchMessageToEngine(utf8); });

    context_.Reset(isolate_, context);

    waitForDebugger(options);
  }

  SCRIPTX_DISALLOW_COPY_AND_MOVE(InspectorClient);

  void waitForDebugger(const Options& options) const {
    if (options.waitForDebugger) {
      while (!debuggerAttached_) {
        std::this_thread::sleep_for(std::chrono::milliseconds(kTimeToWaitOnThreadPause));
      }
    }
  }

  void runMessageLoopOnPause(int /*contextGroupId*/) override {
    paused_ = true;

    // before wait, we must exit current engine scope
    // so others can run.

    script::ExitEngineScope exit;
    while (paused_) {
      while (engine_->v8Platform_->pumpMessageQueue(isolate_)) {
      }

      // avoid 100% cpu usage
      std::this_thread::sleep_for(std::chrono::milliseconds(kTimeToWaitOnThreadPause));
    }
  }

  void quitMessageLoopOnPause() override { paused_ = false; }

  ~InspectorClient() override {
    script::EngineScope engineScope(engine_);
    context_.Reset();
  };

 private:
  static constexpr auto kTimeToWaitOnThreadPause = 5;

  v8::Local<v8::Context> ensureDefaultContextInGroup(int group_id) override {
    assert(isolate_);
    assert(kContextGroupId == group_id);
    static_cast<void>(group_id);
    return context_.Get(isolate_);
  }

  void dispatchMessageToEngine(const std::string_view& utf8) {
    class DispatchMessageToEngineTask : public v8::Task {
      script::ScriptEngine* engine_;
      v8_inspector::V8InspectorSession* session_;
      std::unique_ptr<v8_inspector::StringBuffer> msg_;

     public:
      DispatchMessageToEngineTask(script::ScriptEngine* engine,
                                  v8_inspector::V8InspectorSession* session,
                                  std::unique_ptr<v8_inspector::StringBuffer> msg)
          : engine_(engine), session_(session), msg_(std::move(msg)) {}

      void Run() override {
        script::EngineScope engine(engine_);
        session_->dispatchProtocolMessage(msg_->string());
      }
    };

    debuggerAttached_ = true;

    v8_inspector::StringView message(reinterpret_cast<const uint8_t*>(utf8.data()), utf8.length());
    engine_->v8Platform_->GetForegroundTaskRunner(isolate_)->PostTask(
        std::make_unique<DispatchMessageToEngineTask>(engine_, session_.get(),
                                                      v8_inspector::StringBuffer::create(message)));
  }

  static const int kContextGroupId = 1;

  std::unique_ptr<script::InspectorAgent> agent_;
  script::v8_backend::V8Engine* engine_;
  std::unique_ptr<v8_inspector::V8Inspector> inspector_ = {};
  std::unique_ptr<v8_inspector::V8InspectorSession> session_ = {};
  std::unique_ptr<v8_inspector::V8Inspector::Channel> channel_ = {};
  v8::Global<v8::Context> context_ = {};
  v8::Isolate* isolate_ = nullptr;

  std::atomic_bool paused_ = false;
  std::atomic_bool debuggerAttached_ = false;
};

}  // namespace script::v8_backend

namespace script {

std::unique_ptr<ScriptInspector> ScriptInspector::create(script::ScriptEngine* engine,
                                                         std::unique_ptr<InspectorAgent> agent,
                                                         const Options& options) {
  return std::make_unique<v8_backend::InspectorClient>(engine, std::move(agent), options);
}

}  // namespace script
