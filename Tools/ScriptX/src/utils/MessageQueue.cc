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

#include "MessageQueue.h"
#include <algorithm>
#include <unordered_map>
#include "ThreadLocal.h"

namespace script::utils {

// <queue, nested count>
using RunnineQueueMap = std::unordered_map<MessageQueue*, int>;
SCRIPTX_THREAD_LOCAL(RunnineQueueMap, runningQueue_);

static inline RunnineQueueMap& getRunningQueue() { return internal::getThreadLocal(runningQueue_); }

class LoopQueueGuard {
  MessageQueue* queue_;

 public:
  explicit LoopQueueGuard(MessageQueue* queue) : queue_(queue) {
    queue_->workerCount_++;
    getRunningQueue()[queue]++;
  }

  SCRIPTX_DISALLOW_COPY_AND_MOVE(LoopQueueGuard);

  ~LoopQueueGuard() {
    auto q = getRunningQueue();
    if (--q[queue_] == 0) {
      q.erase(queue_);
    }

    queue_->workerCount_--;
    queue_->workerQuitCondition_.notify_all();
  }

  /**
   * @return if current method call is already inside a loopQueue() stack hierarchy.
   */
  static bool isCallerNestedInsideLoop(MessageQueue* queue) {
    auto q = getRunningQueue();
    return q.find(queue) != q.end();
  }
};

Message::Message() : handlerProc(nullptr), cleanupProc(nullptr) {}

Message::Message(MessageProc* handlerProc, MessageProc* cleanupProc)
    : handlerProc(handlerProc), cleanupProc(cleanupProc) {}

bool Message::due() const { return due(MessageQueue::timestamp()); }

bool Message::due(std::chrono::nanoseconds now) const { return dueTime <= now; }

void Message::performCleanup() {
  if (cleanupProc) {
    cleanupProc(*this);
  }
  data0 = data1 = data2 = data3 = 0;
  ptr0 = ptr1 = ptr2 = ptr3 = nullptr;
  name = nullptr;

  priority = what = 0;
  handlerProc = cleanupProc = nullptr;
  dueTime = std::chrono::nanoseconds(0);
  messageId = 0;
}

void Message::handle() {
  if (handlerProc) {
    handlerProc(*this);
  }
}

Message::MessageProc* Message::getHandlerProc() const { return handlerProc; }

Message::MessageProc* Message::getCleanupProc() const { return cleanupProc; }

MessageQueue::MessageQueue(std::size_t maxMessageInQueue)
    : maxMessageInQueue_(maxMessageInQueue),
      messagePool_(kDefaultPoolSize),
      shutdown_(ShutdownType::kNone),
      interrupt_(false),
      queueMutex_(),
      queueNotEmptyCondition_(),
      queueNotFullCondition_(),
      queue_(),
      messageIdCounter_(1),
      workerCount_(0),
      workerQuitCondition_(),
      supervisor_() {}

MessageQueue::~MessageQueue() { shutdownNow(true); }

std::unique_ptr<InplaceMessage> MessageQueue::obtainInplaceMessage(
    InplaceMessage::HandlerPorc* handlerProc) {
  auto msg = messagePool_.obtain();
  // InplaceMessage is essentially a Message with some extra non-virtual method.
  // so it's safe to cast
  msg->handlerProc = reinterpret_cast<void (*)(Message&)>(reinterpret_cast<void*>(handlerProc));
  return std::unique_ptr<InplaceMessage>(reinterpret_cast<InplaceMessage*>(msg));
}

void MessageQueue::releaseMessage(Message* message) {
  message->performCleanup();
  messagePool_.release(message);
}

void MessageQueue::beforeMessage(Message& message) {
  if (auto supervisor = supervisor_) {
    supervisor->beforeMessage(message);
  }
}

void MessageQueue::afterMessage(Message& message) {
  if (auto supervisor = supervisor_) {
    supervisor->afterMessage(message);
  }
}

void MessageQueue::setSupervisor(const std::shared_ptr<MessageQueue::Supervisor>& supervisor) {
  supervisor_ = supervisor;
}

void MessageQueue::shutdownNow(bool awaitTermination) {
  {
    std::lock_guard<std::mutex> lk(queueMutex_);
    shutdown_ = ShutdownType::kNow;
    for (auto r : queue_) {
      releaseMessage(r);
    }
    queue_.clear();
  }

  // wake up postMessage
  queueNotFullCondition_.notify_all();

  // wake up looper
  queueNotEmptyCondition_.notify_all();

  if (awaitTermination) {
    this->awaitTermination();
  }
}

void MessageQueue::shutdown(bool awaitTermination) {
  {
    std::unique_lock<std::mutex> lk(queueMutex_);
    shutdown_ = ShutdownType::kAwaitQueue;
  }

  // wake up postMessage
  queueNotFullCondition_.notify_all();

  // wake up looper
  queueNotEmptyCondition_.notify_all();

  if (awaitTermination) {
    this->awaitTermination();
  }
}

void MessageQueue::awaitTermination() {
  std::unique_lock<std::mutex> lk(queueMutex_);
  workerQuitCondition_.wait(lk, [this] { return workerCount_ == 0; });
}

bool MessageQueue::isShutdown() {
  std::unique_lock<std::mutex> lk(queueMutex_);
  return shutdown_ != ShutdownType::kNone;
}

void MessageQueue::interrupt() {
  {
    std::lock_guard<std::mutex> lk(queueMutex_);
    interrupt_ = true;
  }

  // wake up looper to return immediately
  queueNotEmptyCondition_.notify_all();
}

bool MessageQueue::isQueueFull() const { return queue_.size() >= maxMessageInQueue_; }

void MessageQueue::awaitNotFullLocked(std::unique_lock<std::mutex>& lock) {
  if (isQueueFull() && LoopQueueGuard::isCallerNestedInsideLoop(this)) {
    // This method call is already inside loopQueue call,
    // can't wait again, which would cause a dead-lock...
    // Just return, and allow the queue to be over-full.
    return;
  }
  queueNotFullCondition_.wait(lock, [this] { return !isQueueFull(); });
}

int32_t MessageQueue::postMessage(Message* msg, int64_t delayNanos) {
  auto id = messageIdCounter_++;
  // avoid a "0 id"
  while (id == 0) {
    id = messageIdCounter_++;
  }

  msg->dueTime = timestamp() + std::chrono::nanoseconds(delayNanos);
  msg->messageId = id;

  {
    std::unique_lock<std::mutex> lk(queueMutex_);
    awaitNotFullLocked(lk);
    if (shutdown_ == ShutdownType::kNow) {
      releaseMessage(msg);
      return 0;
    }
    auto pos = findInsertPositionLocked(msg->dueTime, msg->priority);
    queue_.insert(pos, msg);
  }
  queueNotEmptyCondition_.notify_all();

  return id;
}

std::deque<Message*>::const_iterator MessageQueue::findInsertPositionLocked(
    std::chrono::nanoseconds dueTime, int32_t priority) const {
  auto it = queue_.begin();
  // search by due-time
  while (it != queue_.end() && (*it)->dueTime < dueTime) {
    ++it;
  }

  // search by priority
  while (it != queue_.end() && (*it)->dueTime == dueTime && (*it)->priority <= priority) {
    ++it;
  }

  return it;
}

bool MessageQueue::removeMessageIf(
    const std::function<RemoveMessagePredReturnType(Message&)>& pred) {
  bool removed = false;
  {
    std::lock_guard<std::mutex> lk(queueMutex_);
    for (auto it = queue_.begin(); it != queue_.end();) {
      auto type = pred(**it);
      if (type == RemoveMessagePredReturnType::kRemoveAndContinue ||
          type == RemoveMessagePredReturnType::kRemove) {
        auto msg = *it;
        it = queue_.erase(it);
        releaseMessage(msg);
        removed = true;
        if (type == RemoveMessagePredReturnType::kRemove) break;
      } else {
        ++it;
      }
    }
  }
  if (removed) {
    queueNotFullCondition_.notify_all();
  }
  return removed;
}

bool MessageQueue::hasDueMessageLocked() const { return !queue_.empty() && queue_.front()->due(); }

size_t MessageQueue::dueMessageCount() const {
  std::lock_guard<std::mutex> lk(queueMutex_);
  auto now = timestamp();
  auto firstNotDue = std::find_if_not(queue_.begin(), queue_.end(),
                                      [now](const Message* msg) { return msg->due(now); });
  return firstNotDue - queue_.begin();
}

bool MessageQueue::checkQuitLoopNowLocked(MessageQueue::LoopType loopType, size_t onceMessageCount,
                                          MessageQueue::LoopReturnType& returnType) {
  if (shutdown_ == ShutdownType::kNow) {
    returnType = LoopReturnType::kShutDown;
    return true;
  }

  if (interrupt_) {
    interrupt_ = false;
    returnType = LoopReturnType::kInterrupt;
    return true;
  }

  if (loopType == LoopType::kLoopOnce && onceMessageCount == 0) {
    returnType = LoopReturnType::kRunOnce;
    return true;
  }
  return false;
}

bool MessageQueue::checkQuitLoopWhenNoDueMessageLocked(MessageQueue::LoopType loopType,
                                                       MessageQueue::LoopReturnType& returnType) {
  if (loopType == LoopType::kLoopOnce) {
    returnType = LoopReturnType::kRunOnce;
    return true;
  }

  if (shutdown_ == ShutdownType::kAwaitQueue && queue_.empty()) {
    // We have done await queue.
    // avoid user call loopQueue again.
    shutdown_ = ShutdownType::kNow;
    returnType = LoopReturnType::kShutDown;
    return true;
  }
  return false;
}

Message* MessageQueue::awaitDueMessage(MessageQueue::LoopType loopType, size_t onceMessageCount,
                                       MessageQueue::LoopReturnType& returnType) {
  Message* dueMessage = nullptr;
  while (true) {
    std::unique_lock<std::mutex> lk(queueMutex_);

    if (checkQuitLoopNowLocked(loopType, onceMessageCount, returnType)) {
      return nullptr;
    }

    if (!hasDueMessageLocked()) {
      if (checkQuitLoopWhenNoDueMessageLocked(loopType, returnType)) {
        return nullptr;
      }

      if (queue_.empty()) {
        // await for new message
        queueNotEmptyCondition_.wait(lk);
      } else {
        // await for next message due
        auto timeToWait = queue_.front()->dueTime - timestamp();
        if (timeToWait.count() > 0) {
          queueNotEmptyCondition_.wait_for(lk, timeToWait);
        }
      }

      // await complete, maybe for reasons
      // 1. have new message arrived
      // 2. interrupted
      // 3. shutdown
      // 4. ...
      // so we need to check again

      continue;
    }

    dueMessage = queue_.front();
    queue_.pop_front();
    break;
  }

  queueNotFullCondition_.notify_all();

  return dueMessage;
}

MessageQueue::LoopReturnType MessageQueue::loopQueue(MessageQueue::LoopType loopType) {
  LoopQueueGuard loopQueueGuard(this);

  // Find out how many due message we have on loopOnce call.
  // We can execute at most so many messages on LoopType::kLoopOnce
  // to prevent from corner case where processed message post another message(s)
  // making the loop infinite.
  auto onceMessageCount = static_cast<size_t>(-1);
  if (loopType == LoopType::kLoopOnce) {
    onceMessageCount = dueMessageCount();
  }
  MessageQueue::LoopReturnType returnType = LoopReturnType::kRunOnce;

  while (true) {
    Message* message = awaitDueMessage(loopType, onceMessageCount, returnType);
    if (message == nullptr) {
      return returnType;
    }

    processMessage(message);
    onceMessageCount--;
  }
}

void MessageQueue::processMessage(Message* message) {
  // process message
  beforeMessage(*message);

  message->handle();

  afterMessage(*message);

  releaseMessage(message);
}

/*static*/
std::chrono::nanoseconds MessageQueue::timestamp() {
#ifdef __ANDROID__
  // android NDK r16b is buggy with steady_clock, workaround it...
  using std::chrono::nanoseconds;
  using std::chrono::seconds;
  ::timespec tp{};
  clock_gettime(CLOCK_MONOTONIC, &tp);
  // in milli-seconds
  return seconds(tp.tv_sec) + nanoseconds(tp.tv_nsec);
#else
  return std::chrono::steady_clock::now().time_since_epoch();
#endif
}

}  // namespace script::utils