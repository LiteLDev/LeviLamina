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

#include <atomic>
#include <condition_variable>
#include <cstddef>
#include <cstring>
#include <deque>
#include <functional>
#include <limits>
#include <mutex>
#include <vector>
#include "../foundation.h"
#include "MemoryPool.hpp"

namespace script::utils {

struct ArbitraryData {
  /** arbitrary data */
  int64_t data0 = 0;
  int64_t data1 = 0;
  int64_t data2 = 0;
  int64_t data3 = 0;

  /** arbitrary pointer */
  void* ptr0 = nullptr;
  void* ptr1 = nullptr;
  void* ptr2 = nullptr;
  void* ptr3 = nullptr;

  ArbitraryData() = default;

  ArbitraryData(const ArbitraryData& copy) { *this = copy; }

  ArbitraryData& operator=(const ArbitraryData&);

  ~ArbitraryData() = default;
};

inline ArbitraryData& ArbitraryData::operator=(const ArbitraryData& copy) {
  // copy ArbitraryData byte-by-byte
  // since is may be used as a chunk of memory to support placement new.
  std::memcpy(this, &copy, sizeof(copy));  // NOLINT
  return *this;
}

// because ArbitraryData is used as memory chunk,
// its better be standard layout
static_assert(std::is_standard_layout_v<ArbitraryData>);

class InplaceMessage;

/**
 * plain message used to post, contains only int or pointer types.
 */
class Message : public ArbitraryData {
 public:
  // We don't want the MessageProc to have capture(s),
  // which may cause memory allocation.
  // We just want caller store all context data inside message itself.
  // So a std::function is not applied here for now.
  // using MessageProc = std::function<void(const Message&)>;

  /**
   * the function type for handleMessage and cleanupMessage.
   */
  using MessageProc = void(Message&);

 protected:
  std::chrono::nanoseconds dueTime = std::chrono::nanoseconds(0);
  int32_t messageId = 0;

  MessageProc* handlerProc;
  MessageProc* cleanupProc;

 public:
  /**
   * Message priority: Messages are ordered according to due-time in the queue.
   * However, of the same due-time messages, higher priority messages are
   * ordered in the front (be executed first).
   *
   * default priority is 0, smaller number has higher priority.
   */
  int32_t priority = 0;

  /** arbitrary message type */
  int32_t what = 0;

  void* tag = nullptr;

  /** name of this message, used for debug purpose */
  const char* name = nullptr;

 private:
  Message();

 public:
  /**
   * @param handlerProc routine to handle the message
   * @param cleanupProc routine to clean resources related in message.
   * please don't do cleanup directly in handlerProc,
   * because shutdownNow() would require messages to be cleared without being handles.
   *
   * inplaceObject function can't be called with this constructor.
   *
   * note: you can do nearly everything inside handlerProc (except awaitTermination),
   * however in the cleanupProc, be careful, not to call post or removeMessage.
   */
  Message(MessageProc* handlerProc, MessageProc* cleanupProc);

  MessageProc* getHandlerProc() const;

  MessageProc* getCleanupProc() const;

 private:
  void performCleanup();

  void handle();

  bool due() const;

  bool due(std::chrono::nanoseconds now) const;

  friend class MessageQueue;
  friend class MemoryPool<Message>;
  friend class InplaceMessage;
};

class InplaceMessage : public Message {
 public:
  using HandlerPorc = void(InplaceMessage&);

  ~InplaceMessage() = default;

  SCRIPTX_DISALLOW_COPY_AND_MOVE(InplaceMessage);

  /**
   * create a class T in the memory of this message.
   * @return reference of T
   */
  template <typename T, typename... Args>
  T& inplaceObject(Args&&... args) {
    static_assert(sizeof(T) <= sizeof(ArbitraryData));
    static_assert(std::is_destructible_v<T>);

    if (cleanupProc) {
      throw std::runtime_error("inplaceObject can only be called once.");
    }

    auto buffer = static_cast<void*>(static_cast<ArbitraryData*>(this));
    auto ptr = new (buffer) T(std::forward<Args>(args)...);
    cleanupProc = [](Message& self) {
      reinterpret_cast<InplaceMessage&>(self).getObject<T>().~T();
    };
    return *ptr;
  }

  template <typename T>
  T& getObject() {
    return *reinterpret_cast<T*>(static_cast<ArbitraryData*>(this));
  }

 private:
  InplaceMessage() = default;

  friend class MessageQueue;

  friend class MemoryPool<InplaceMessage>;
};

// make sure we can cast InplaceMessage to Message and vice-versa.
static_assert(static_cast<Message*>(static_cast<InplaceMessage*>(nullptr)) == nullptr);
static_assert(static_cast<ArbitraryData*>(static_cast<InplaceMessage*>(nullptr)) ==
              static_cast<ArbitraryData*>(static_cast<Message*>(nullptr)));
static_assert(sizeof(InplaceMessage) == sizeof(Message));

/**
 * A MessageQueue support
 * 0. schedule task
 * 1. schedule task with delay
 * 2. thread safe
 * 3. support producer-consumer mode
 * 4. support N:M produce-consumer
 */
class MessageQueue {
 public:
  class Supervisor {
   protected:
    virtual void beforeMessage(Message& message) = 0;

    virtual void afterMessage(Message& message) = 0;

   private:
    friend MessageQueue;
  };

 private:
  enum class ShutdownType { kNone, kNow, kAwaitQueue };

  std::size_t maxMessageInQueue_;
  MemoryPool<Message> messagePool_;
  ShutdownType shutdown_;
  bool interrupt_;

  mutable std::mutex queueMutex_;
  std::condition_variable queueNotEmptyCondition_;
  std::condition_variable queueNotFullCondition_;
  std::deque<Message*> queue_;
  std::atomic_int32_t messageIdCounter_;
  std::atomic_uint32_t workerCount_;
  std::condition_variable workerQuitCondition_;

  std::shared_ptr<Supervisor> supervisor_;

  static constexpr std::size_t kDefaultPoolSize = 64;

  friend class Message;

  // used in the implementation
  friend class LoopQueueGuard;

 private:
  static std::chrono::nanoseconds timestamp();

  bool hasDueMessageLocked() const;

  std::deque<Message*>::const_iterator findInsertPositionLocked(std::chrono::nanoseconds dueTime,
                                                                int32_t priority) const;

  bool isQueueFull() const;

  void awaitNotFullLocked(std::unique_lock<std::mutex>& lock);

  void processMessage(Message* message);

  void releaseMessage(Message* message);

  void beforeMessage(Message& message);

  void afterMessage(Message& message);

  size_t dueMessageCount() const;

  /**
   * post a message to queue
   * @param message
   * @param delayNanos time in nano seconds for the message to delay before executing, default is 0
   * @return messageId used to removeMessage, return 0 for failure (already shutdown)
   */
  int32_t postMessage(Message* message, int64_t delayNanos = 0);

 public:
  static constexpr std::size_t kDefaultMaxMessageInQueue =
      // workaround windows.h "max()" marco
      (std::numeric_limits<std::size_t>::max)();

  /**
   * @param maxMessageInQueue if call postXXX when queue is full, will block.
   */
  explicit MessageQueue(std::size_t maxMessageInQueue = kDefaultMaxMessageInQueue);

  ~MessageQueue();

  SCRIPTX_DISALLOW_COPY_AND_MOVE(MessageQueue);

  /**
   * shut down the queue, after shut down, caller CAN NOT post message (would fail).
   * Immediately quit the queue, the remain message in queue are CLEARED.
   *
   * \code
   *
   * if (awaitTermination == true) {
   *  when this method returns the loopQueue() call is guaranteed to be
   *  returned first,
   * } else {
   *  this method will return immediately (issue a signal to quit the queue)
   *  and wait for all message to be executed (the loopQueue() call to return).
   * }
   *
   * \endcode
   *
   * @param awaitTermination wait the loopQueue() call to return.
   * Caller can wait for all message to be executed (the loopQueue() call to return).
   */
  void shutdownNow(bool awaitTermination = false);

  /**
   * shut down the queue, after shut down, caller CAN still post message.
   *
   * @param awaitTermination If true, wait the loopQueue() call to return
   * (wait for all message to be executed),
   * otherwise this method will return immediately (issue a signal to quit the queue).
   *
   */
  void shutdown(bool awaitTermination = false);

  /**
   * await the loopQueue to quit (after shutdown).
   */
  void awaitTermination();

  /**
   * @return if the MessageQueue is shut down or shutting down.
   */
  bool isShutdown();

  /**
   * causing current loopQueue() call return immediately.
   * and postMessage can stilled be called.
   */
  void interrupt();

  /**
   * @param supervisor a message supervisor oversees message handling
   * (both before handling and after handing)
   */
  void setSupervisor(const std::shared_ptr<Supervisor>& supervisor);

  /**
   * @param delay a std::chrono::duration type like milliseconds nanoseconds
   * @return messageId used to removeMessage, return 0 for failure (already shutdown)
   * @see postMessage(const Message&, int64_t)
   *
   * example:
   *
   * \code{.cc}
   * using namespace std::chrono;
   * postMessage(msg, std::chrono::milliseconds(10);
   * postMessage(msg, 10ms);
   * postMessage(msg, 20ns);
   * \endcode
   *
   */
  template <class Rep = int, class Period = std::milli>
  int32_t postMessage(const Message& message,
                      std::chrono::duration<Rep, Period> delay = std::chrono::milliseconds(0)) {
    using std::chrono::duration_cast;
    using std::chrono::nanoseconds;
    auto m = messagePool_.obtain();
    *m = message;
    return postMessage(m, duration_cast<nanoseconds>(delay).count());
  }

  /**
   * @return messageId used to removeMessage, return 0 for failure (already shutdown)
   */
  template <class Rep = int, class Period = std::milli>
  int32_t postMessage(std::unique_ptr<InplaceMessage>& message,
                      std::chrono::duration<Rep, Period> delay = std::chrono::milliseconds(0)) {
    if (!message->cleanupProc) {
      throw std::runtime_error("InplaceMessage haven't placed anything");
    }
    return postMessage(message.release(),
                       std::chrono::duration_cast<std::chrono::nanoseconds>(delay).count());
  }

  /**
   * obtain a InplaceMessage for placement new type in message.
   */
  std::unique_ptr<InplaceMessage> obtainInplaceMessage(InplaceMessage::HandlerPorc* handlerProc);

 public:
  /**
   * how long do you want to loop
   */
  enum class LoopType {
    /**
     * Loop and wait for up coming messages.
     * only quite when interrupt() or shutdown() is called.
     */
    kLoopAndWait,
    /**
     * run current due message and return.
     */
    kLoopOnce
  };

  /**
   * explain why the loopQueue() call is returned.
   */
  enum class LoopReturnType {
    /** called loopQueue() with loopType = LoopType::kLoopOnce */
    kRunOnce,
    /** interrupt() is called */
    kInterrupt,
    /** shutdown() is called */
    kShutDown,
  };

  LoopReturnType loopQueue(LoopType loopType = LoopType::kLoopAndWait);

 private:
  bool checkQuitLoopNowLocked(MessageQueue::LoopType loopType, size_t onceMessageCount,
                              MessageQueue::LoopReturnType& returnType);

  bool checkQuitLoopWhenNoDueMessageLocked(MessageQueue::LoopType loopType,
                                           MessageQueue::LoopReturnType& returnType);

  Message* awaitDueMessage(MessageQueue::LoopType loopType, size_t onceMessageCount,
                           MessageQueue::LoopReturnType& returnType);

 public:
  // removeMessage family
  enum class RemoveMessagePredReturnType {
    /**
     * dont remove this message, and continue search for message to remove;
     */
    kDontRemove,
    /**
     * remove this message, and don't search for any message.
     */
    kRemove,
    /**
     * remove this message, and continue search for message to remove;
     */
    kRemoveAndContinue,
  };

  bool removeMessageIf(const std::function<RemoveMessagePredReturnType(Message&)>& pred);

  bool removeMessage(int32_t messageId) {
    return removeMessageIf([messageId](const Message& msg) {
      return msg.messageId == messageId ? RemoveMessagePredReturnType::kRemove
                                        : RemoveMessagePredReturnType::kDontRemove;
    });
  }

  /**
   * @param what Message::what
   * @return removed or not
   */
  bool removeMessageByWhat(int32_t what) {
    return removeMessageIf([what](const Message& msg) {
      return msg.what == what ? RemoveMessagePredReturnType::kRemoveAndContinue
                              : RemoveMessagePredReturnType::kDontRemove;
    });
  }

  bool removeMessageByTag(void* tag) {
    return removeMessageIf([tag](const Message& msg) {
      return msg.tag == tag ? RemoveMessagePredReturnType::kRemoveAndContinue
                            : RemoveMessagePredReturnType::kDontRemove;
    });
  }

  /**
   *
   * @param proc
   * @return removed or not
   */
  bool removeMessageByHandlerProc(Message::MessageProc* proc) {
    return removeMessageIf([proc](const Message& msg) {
      return msg.handlerProc == proc ? RemoveMessagePredReturnType::kRemoveAndContinue
                                     : RemoveMessagePredReturnType::kDontRemove;
    });
  }
};

}  // namespace script::utils
