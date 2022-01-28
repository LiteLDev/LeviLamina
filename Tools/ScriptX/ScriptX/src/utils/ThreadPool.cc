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

#include "ThreadPool.h"

namespace script::utils {

ThreadPool::ThreadPool(size_t workerThreads, std::unique_ptr<MessageQueue>&& queue)
    : queue_(std::move(queue)), workers_(workerThreads), threadMutex_() {
  std::lock_guard<std::mutex> lg(threadMutex_);

  if (!queue_) {
    queue_ = std::make_unique<MessageQueue>();
  }

  for (auto& w : workers_) {
    w = std::make_unique<std::thread>([this]() {
      while (this->queue_->loopQueue() != MessageQueue::LoopReturnType::kShutDown) {
      }
    });
  }
}

ThreadPool::~ThreadPool() { shutdownNow(true); }

size_t ThreadPool::workerCount() { return workers_.size(); }

void ThreadPool::removeMessage(int32_t id) { queue_->removeMessage(id); }

void ThreadPool::shutdown(bool awaitTermination) {
  queue_->shutdown(awaitTermination);
  if (awaitTermination) {
    joinWorkers();
  }
}

void ThreadPool::shutdownNow(bool awaitTermination) {
  queue_->shutdownNow(awaitTermination);
  if (awaitTermination) {
    joinWorkers();
  }
}

void ThreadPool::awaitTermination() {
  queue_->awaitTermination();
  joinWorkers();
}

void ThreadPool::joinWorkers() {
  std::lock_guard<std::mutex> lg(threadMutex_);
  for (auto& w : workers_) {
    if (w->joinable()) {
      w->join();
    }
  }
}

}  // namespace script::utils