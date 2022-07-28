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

#include <thread>
#include "MessageQueue.h"

namespace script::utils {

/**
 * A fixed thread-pool based on MessageQueue.
 */
class ThreadPool {
  std::unique_ptr<MessageQueue> queue_;
  std::vector<std::unique_ptr<std::thread>> workers_;
  std::mutex threadMutex_;

 public:
  /**
   * @param workerThreads concurrency, default is 1
   * @param queue the MessageQueue to be used, can use default value
   *
   * note: std::thread::hardware_concurrency()
   */
  explicit ThreadPool(size_t workerThreads = 1, std::unique_ptr<MessageQueue>&& queue = {});

  ~ThreadPool();

  SCRIPTX_DISALLOW_COPY_AND_MOVE(ThreadPool);

  size_t workerCount();

  template <class Rep = int, class Period = std::milli>
  int32_t postMessage(const Message& message,
                      std::chrono::duration<Rep, Period> delay = std::chrono::milliseconds(0)) {
    return queue_->postMessage(message, delay);
  }

  /**
   * script::utils::MessageQueue#obtainInplaceMessage
   * @see
   */
  std::unique_ptr<InplaceMessage> obtainInplaceMessage(InplaceMessage::HandlerPorc* handlerProc) {
    return queue_->obtainInplaceMessage(handlerProc);
  }

  /**
   * script::utils::MessageQueue#postMessage
   */
  template <class Rep = int, class Period = std::milli>
  int32_t postMessage(std::unique_ptr<InplaceMessage>& message,
                      std::chrono::duration<Rep, Period> delay = std::chrono::milliseconds(0)) {
    return queue_->postMessage(message, delay);
  }

  void removeMessage(int32_t id);

  void shutdown(bool awaitTermination = false);

  void shutdownNow(bool awaitTermination = false);

  void awaitTermination();

 private:
  void joinWorkers();
};

}  // namespace script::utils
