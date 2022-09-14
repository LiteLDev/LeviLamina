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

#include <mutex>
#include <unordered_map>

#include "../../src/foundation.h"

SCRIPTX_BEGIN_INCLUDE_LIBRARY
#include <v8-platform.h>
SCRIPTX_END_INCLUDE_LIBRARY

#include "V8Helper.h"

namespace script::v8_backend {

class V8Engine;

class MessageQueueTaskRunner;

class V8Platform : public v8::Platform {
 private:
  std::unique_ptr<v8::Platform> defaultPlatform_;

  V8Platform();

  SCRIPTX_DISALLOW_COPY_AND_MOVE(V8Platform);

 public:
  // this method is used in v8 internally, we should handle it properly, since V8 7.1.1
  std::shared_ptr<v8::TaskRunner> GetForegroundTaskRunner(v8::Isolate* isolate) override;

  // call in V8Engine
  bool pumpMessageQueue(v8::Isolate* isolate);

  void OnCriticalMemoryPressure() override;

  bool OnCriticalMemoryPressure(size_t length) override;

 public:
  // directly delegate to default platform
  int NumberOfWorkerThreads() override { return defaultPlatform_->NumberOfWorkerThreads(); }

  void CallOnWorkerThread(std::unique_ptr<v8::Task> task) override {
    return defaultPlatform_->CallOnWorkerThread(std::move(task));
  }

  void CallDelayedOnWorkerThread(std::unique_ptr<v8::Task> task, double delay_in_seconds) override {
    return defaultPlatform_->CallDelayedOnWorkerThread(std::move(task), delay_in_seconds);
  }

  double MonotonicallyIncreasingTime() override {
    return defaultPlatform_->MonotonicallyIncreasingTime();
  }

  double CurrentClockTimeMillis() override { return defaultPlatform_->CurrentClockTimeMillis(); }

  v8::TracingController* GetTracingController() override {
    return defaultPlatform_->GetTracingController();
  }

  v8::PageAllocator* GetPageAllocator() override {
    // V8 has a bug around this, we always return null to use the default one
    // return defaultPlatform_->GetPageAllocator();
    return nullptr;
  }

#define V8_VERSION_AT_LEAST(major, minor) \
  (V8_MAJOR_VERSION > (major) || (V8_MAJOR_VERSION == (major) && V8_MINOR_VERSION >= (minor)))

  // v8::Platform::PostJob, introduced since 8.4
  // https://chromium.googlesource.com/v8/v8/+/05b6268126c1435d1c964ef81799728088b72c76
  // NOTE: not available in node 14.x (node.js modified v8 code...)
  // https://nodejs.org/en/download/releases/
  // and node 15.x uses v8 8.6+
#if defined(BUILDING_NODE_EXTENSION) ? V8_VERSION_AT_LEAST(8, 6) : V8_VERSION_AT_LEAST(8, 4)
  virtual std::unique_ptr<v8::JobHandle> PostJob(v8::TaskPriority priority,
                                                 std::unique_ptr<v8::JobTask> job_task) override {
    return defaultPlatform_->PostJob(priority, std::move(job_task));
  }
#endif

#if !V8_VERSION_AT_LEAST(8, 0)
  // v8 8.0 added default impl
  // v8 8.1 removed those function
  // so we won't override them since v8 8.0
  // https://github.com/v8/v8/commit/95aba36b52eecdec56752956a7960b916f986a39

  void CallOnForegroundThread(v8::Isolate* isolate, v8::Task* task) override {
    return GetForegroundTaskRunner(isolate)->PostTask(std::unique_ptr<v8::Task>(task));
  }

  void CallDelayedOnForegroundThread(v8::Isolate* isolate, v8::Task* task,
                                     double delay_in_seconds) override {
    return GetForegroundTaskRunner(isolate)->PostDelayedTask(std::unique_ptr<v8::Task>(task),
                                                             delay_in_seconds);
  }
#endif

#undef V8_VERSION_AT_LEAST

 public:
  ~V8Platform() override;

 private:
  static std::mutex lock_;
  static std::weak_ptr<V8Platform> weakInstance_;

  struct EngineData {
    // auto created in the default ctor
    std::shared_ptr<MessageQueueTaskRunner> messageQueueRunner;
    EngineData();
  };

  std::unordered_map<v8::Isolate*, EngineData> engineMap_;

 public:
  static std::shared_ptr<V8Platform> getPlatform();

  void addEngineInstance(v8::Isolate* isolate, V8Engine* engine);

  void removeEngineInstance(v8::Isolate* isolate);
};

}  // namespace script::v8_backend
