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

#include "V8Platform.h"
#include <libplatform/libplatform.h>
#include "../../src/Utils.h"
#include "V8Engine.h"

namespace script::v8_backend {

class MessageQueueTaskRunner : public v8::TaskRunner {
 private:
  V8Platform* platform_{};
  v8::Isolate* isolate_{};
  std::shared_ptr<v8::TaskRunner> defaultTaskRunner_{};

  V8Engine* engine_{};

  std::atomic_bool isPumpScheduled_{false};

 public:
  MessageQueueTaskRunner() = default;

  SCRIPTX_DISALLOW_COPY_AND_MOVE(MessageQueueTaskRunner);

  ~MessageQueueTaskRunner() override = default;

  bool hasRunner() const { return defaultTaskRunner_ != nullptr; }

  void setQueue(V8Platform* platform, v8::Isolate* isolate,
                std::shared_ptr<v8::TaskRunner> defaultTaskRunner) {
    platform_ = platform;
    isolate_ = isolate;
    defaultTaskRunner_ = std::move(defaultTaskRunner);
  }

  void setEngine(V8Engine* engine) { engine_ = engine; }

  void PostTask(std::unique_ptr<v8::Task> task) override {
    defaultTaskRunner_->PostTask(std::move(task));
    schedulePump();
  }

  void PostDelayedTask(std::unique_ptr<v8::Task> task, double delay_in_seconds) override {
    defaultTaskRunner_->PostDelayedTask(std::move(task), delay_in_seconds);
    schedulePump();
  }

  void PostIdleTask(std::unique_ptr<v8::IdleTask> task) override {
    defaultTaskRunner_->PostIdleTask(std::move(task));
    schedulePump();
  }

  bool IdleTasksEnabled() override { return defaultTaskRunner_->IdleTasksEnabled(); }

  void PostNonNestableTask(std::unique_ptr<v8::Task> task) override { PostTask(std::move(task)); }

  void PostNonNestableDelayedTask(std::unique_ptr<v8::Task> task,
                                  double delay_in_seconds) override {
    PostDelayedTask(std::move(task), delay_in_seconds);
  }

  bool NonNestableTasksEnabled() const override { return true; }

  bool NonNestableDelayedTasksEnabled() const override { return true; }

 private:
  void schedulePump() {
    bool expected = false;
    if (engine_ && isPumpScheduled_.compare_exchange_strong(expected, true)) {
      script::utils::Message s(
          [](auto& msg) {
            static_cast<MessageQueueTaskRunner*>(msg.ptr0)->isPumpScheduled_ = false;
            auto platform = static_cast<V8Platform*>(msg.ptr1);
            auto isolate = static_cast<v8::Isolate*>(msg.ptr2);

            while (platform->pumpMessageQueue(isolate)) {
              // loop until no more message to pump
            }
          },
          nullptr);

      s.name = "SchedulePump";
      s.ptr0 = this;
      s.ptr1 = platform_;
      s.ptr2 = isolate_;
      s.tag = engine_;

      engine_->messageQueue()->postMessage(s);
    }
  }
};

V8Platform::EngineData::EngineData()
    : messageQueueRunner(std::make_shared<MessageQueueTaskRunner>()) {}

std::weak_ptr<V8Platform> V8Platform::weakInstance_;
std::mutex V8Platform::lock_;

std::shared_ptr<V8Platform> V8Platform::getPlatform() {
  std::lock_guard<std::mutex> lock(lock_);
  auto ins = weakInstance_.lock();
  if (!ins) {
    ins = std::shared_ptr<V8Platform>(new V8Platform());
    weakInstance_ = ins;
  }
  return ins;
}

void V8Platform::addEngineInstance(v8::Isolate* isolate, script::v8_backend::V8Engine* engine) {
  std::lock_guard<std::mutex> lock(lock_);
  engineMap_[isolate].messageQueueRunner->setEngine(engine);
}

void V8Platform::removeEngineInstance(v8::Isolate* isolate) {
  std::lock_guard<std::mutex> lock(lock_);
  auto it = engineMap_.find(isolate);
  if (it != engineMap_.end()) {
    engineMap_.erase(isolate);
  }
}

V8Platform::V8Platform() : defaultPlatform_(v8::platform::NewDefaultPlatform()) {
  // constructor is called inside lock_guard of lock_
  v8::V8::InitializePlatform(this);
}

V8Platform::~V8Platform() {
  std::lock_guard<std::mutex> lock(lock_);
  v8::V8::ShutdownPlatform();
}

std::shared_ptr<v8::TaskRunner> V8Platform::GetForegroundTaskRunner(v8::Isolate* isolate) {
  std::lock_guard<std::mutex> lock(lock_);
  auto queueRunner = engineMap_[isolate].messageQueueRunner;
  if (!queueRunner->hasRunner()) {
    // this method may be called during creating Isolate...
    // set anything we now ASAP
    queueRunner->setQueue(this, isolate, defaultPlatform_->GetForegroundTaskRunner(isolate));
  }

  return queueRunner;
}

bool V8Platform::pumpMessageQueue(v8::Isolate* isolate) {
  v8::Locker locker(isolate);
  return v8::platform::PumpMessageLoop(defaultPlatform_.get(), isolate);
}

void V8Platform::OnCriticalMemoryPressure() {
  Logger() << "V8Platform::OnCriticalMemoryPressure()";
  return defaultPlatform_->OnCriticalMemoryPressure();
}

bool V8Platform::OnCriticalMemoryPressure(size_t length) {
  Logger() << "V8Platform::OnCriticalMemoryPressure(" << length << ")";
  return defaultPlatform_->OnCriticalMemoryPressure(length);
}

}  // namespace script::v8_backend
