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

#include <atomic>
#include "test.h"

namespace script::utils {

TEST(MessageQueue, LoopOnce) {
  // normal loop once
  size_t count = 0;

  Message inc([](Message& m) { (*static_cast<size_t*>(m.ptr0))++; }, nullptr);
  inc.ptr0 = &count;

  MessageQueue queue;

  queue.postMessage(inc);
  queue.loopQueue(MessageQueue::LoopType::kLoopOnce);
  // one executed
  EXPECT_EQ(count, 1);

  count = 0;
  queue.postMessage(inc);
  queue.postMessage(inc);
  queue.postMessage(inc);
  queue.loopQueue(MessageQueue::LoopType::kLoopOnce);
  EXPECT_EQ(count, 3);

  count = 0;
  queue.postMessage(inc);
  queue.postMessage(inc, std::chrono::milliseconds(2));
  queue.loopQueue(MessageQueue::LoopType::kLoopOnce);
  EXPECT_EQ(count, 1);
  std::this_thread::sleep_for(std::chrono::milliseconds(2));
  queue.loopQueue(MessageQueue::LoopType::kLoopOnce);
  EXPECT_EQ(count, 2);

  queue.shutdown(true);
}

TEST(MessageQueue, Interrupt) {
  // normal loop once
  std::atomic_int32_t count = 0;

  Message inc([](Message& m) { (*static_cast<std::atomic_int32_t*>(m.ptr0))++; }, nullptr);
  inc.ptr0 = &count;

  MessageQueue queue;

  std::thread([&queue]() { queue.loopQueue(MessageQueue::LoopType::kLoopAndWait); }).detach();

  queue.postMessage(inc);
  queue.postMessage(inc, std::chrono::seconds(1));

  // 1. wait for thread to start
  while (count == 0) {
  }

  // 2. then interrupt immediately, make sure "inc" is not executed
  queue.interrupt();

  EXPECT_EQ(count, 1);
}

TEST(MessageQueue, Shutdown) {
  // normal loop once
  std::atomic_int32_t count = 0;

  MessageQueue queue;

  std::thread([&queue, &count]() {
    Message inc([](Message& m) { (*static_cast<std::atomic_int32_t*>(m.ptr0))++; }, nullptr);
    inc.ptr0 = &count;

    queue.postMessage(inc);
    queue.postMessage(inc);
    queue.postMessage(inc);

    queue.postMessage(inc, std::chrono::milliseconds(1));
    queue.postMessage(inc, std::chrono::milliseconds(1));
    queue.postMessage(inc, std::chrono::milliseconds(1));
    queue.loopQueue(MessageQueue::LoopType::kLoopAndWait);
  }).detach();

  // wait for thread to start
  while (count == 0) {
  }

  queue.shutdown(true);
  EXPECT_EQ(count, 6);
}

// this test should be run many times,
// to check if it can quit normally
TEST(MessageQueue, ShutdownNow) {
  MessageQueue q;

  Message msg(
      [](auto m) {
        try {
          static_cast<MessageQueue*>(m.ptr0)->postMessage(m);
        } catch (std::runtime_error&) {
          // ignore
        }
      },
      nullptr);
  msg.ptr0 = &q;

  q.postMessage(msg);
  std::thread t([&]() { q.loopQueue(); });

  q.shutdownNow(true);
  t.join();
}

TEST(MessageQueue, ArbitraryDataPlcementNewClass) {
  MessageQueue queue;

  bool hasRan = false;

  class MyRunnable {
   private:
    bool& hasRan_;

   public:
    explicit MyRunnable(bool& hasRan) : hasRan_(hasRan) {}

    // make it virtual, so it's easy to crash on dangling pointer
    virtual void run() { hasRan_ = true; }

    ~MyRunnable() = default;
  };

  auto m =
      queue.obtainInplaceMessage([](InplaceMessage& msg) { msg.getObject<MyRunnable>().run(); });

  m->inplaceObject<MyRunnable>(hasRan);

  queue.postMessage(m);
  queue.loopQueue(MessageQueue::LoopType::kLoopOnce);

  EXPECT_TRUE(hasRan);
}

TEST(MessageQueue, ArbitraryDataPlcementNewLambdaWithCapture) {
  MessageQueue queue;

  bool hasRan = false;

  auto lambda = [&]() { hasRan = true; };
  typedef decltype(lambda) Lambda;

  auto m = queue.obtainInplaceMessage([](InplaceMessage& msg) { (msg.getObject<Lambda>())(); });
  m->inplaceObject<Lambda>(std::move(lambda));

  queue.postMessage(m);
  queue.loopQueue(MessageQueue::LoopType::kLoopOnce);

  EXPECT_TRUE(hasRan);
}

// this test should be run many times,
// to check if it can quit normally
TEST(MessageQueue, FullAndPostInsideLoopQueue) {
  MessageQueue q(10);

  std::atomic_bool started = false;

  Message postSelf(
      [](auto m) {
        try {
          static_cast<std::atomic_bool*>(m.ptr1)->store(true);
          static_cast<MessageQueue*>(m.ptr0)->postMessage(Message(nullptr, nullptr));
          // the second post should not wait
          static_cast<MessageQueue*>(m.ptr0)->postMessage(Message(nullptr, nullptr));
        } catch (std::runtime_error&) {
        }
      },
      nullptr);
  postSelf.ptr0 = &q;
  postSelf.ptr1 = &started;

  q.postMessage(postSelf);
  for (int i = 0; i < 9; ++i) {
    q.postMessage(Message(nullptr, nullptr));
  }

  // now the queue is full
  std::thread([&] { q.loopQueue(); }).detach();

  while (!started) {
  }
  q.shutdown(true);
}

}  // namespace script::utils
