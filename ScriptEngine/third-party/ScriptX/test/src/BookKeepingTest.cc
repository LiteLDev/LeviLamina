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

#include "../../src/utils/GlobalWeakBookkeeping.hpp"
#include "test.h"

using ::script::internal::GlobalWeakBookkeeping;
using HandleType = ::script::internal::GlobalWeakBookkeeping::HandleType;

namespace script::internal {

struct TestAccessor {
  using List = GlobalWeakBookkeeping::ListType;

  static const List& get(const GlobalWeakBookkeeping& bk) { return bk.bookkeeping_; }

  static bool isEmpty(const HandleType& handle) {
    return GlobalWeakBookkeeping::isHandleEmpty(handle);
  }
};

}  // namespace script::internal

using script::internal::TestAccessor;

namespace script::test {

namespace {

::script::internal::GlobalWeakBookkeeping testKeeper;
auto& list = script::internal::TestAccessor::get(testKeeper);

struct TestFetcher {
  template <typename Ref>
  static ::script::internal::GlobalWeakBookkeeping* get(Ref* r) {
    return &testKeeper;
  }

  template <typename T>
  static ::script::internal::GlobalWeakBookkeeping::HandleType& handle(const T* ref) {
    return const_cast<internal::GlobalWeakBookkeeping::HandleType&>(ref->handle_);
  }
};

using Helper = ::script::internal::GlobalWeakBookkeeping::Helper<TestFetcher>;

struct Ref {
  int value_{};
  ::script::internal::GlobalWeakBookkeeping::HandleType handle_{};

  explicit Ref(int x) : value_(x) { Helper::keep(this); }

  Ref(const Ref& ref) : value_(ref.value_) { Helper::afterCopy(true, this, &ref); }

  Ref(Ref&& ref) noexcept : value_(ref.value_) {
    ref.value_ = 0;
    Helper::afterMove(true, this, &ref);
  }

  Ref& operator=(const Ref& ref) {
    bool wasEmpty = isEmpty();
    value_ = ref.value_;
    Helper::afterCopy(wasEmpty, this, &ref);
    return *this;
  }

  Ref& operator=(Ref&& ref) noexcept {
    bool wasEmpty = isEmpty();
    value_ = ref.value_;
    ref.value_ = 0;
    Helper::afterMove(wasEmpty, this, &ref);
    return *this;
  }

  ~Ref() { reset(); }

  void reset() {
    if (!isEmpty()) {
      Helper::remove(this);
      value_ = 0;
    }
  }

  bool isEmpty() const { return value_ == 0; }
};

}  // namespace

TEST(BookKeeping, Empty) {
  Ref r(0);
  EXPECT_TRUE(TestAccessor::isEmpty(r.handle_));
  EXPECT_EQ(0, list.size());
}

TEST(BookKeeping, NonEmpty) {
  EXPECT_EQ(0, list.size());

  {
    Ref r(1);
    EXPECT_FALSE(TestAccessor::isEmpty(r.handle_));
    EXPECT_EQ(1, list.size());
  }
  EXPECT_EQ(0, list.size());
}

TEST(BookKeeping, Reset) {
  {
    Ref r(1);
    EXPECT_EQ(1, list.size());
    r.reset();
    EXPECT_TRUE(TestAccessor::isEmpty(r.handle_));
    EXPECT_EQ(0, list.size());
  }
  EXPECT_EQ(0, list.size());
}

TEST(BookKeeping, CopyCtor) {
  EXPECT_EQ(0, list.size());
  {
    Ref copy{1};
    EXPECT_EQ(1, list.size());

    {
      Ref copyCtor = copy;
      EXPECT_FALSE(TestAccessor::isEmpty(copyCtor.handle_));
      EXPECT_EQ(2, list.size());
    }
    EXPECT_EQ(1, list.size());
  }
}

TEST(BookKeeping, CopyAssign) {
  EXPECT_EQ(0, list.size());
  {
    Ref r{0};
    EXPECT_EQ(0, list.size());

    Ref copy{1};
    EXPECT_EQ(1, list.size());

    r = copy;
    EXPECT_FALSE(TestAccessor::isEmpty(r.handle_));
    EXPECT_EQ(2, list.size());
  }
}

TEST(BookKeeping, NonEmptyCopyAssign) {
  EXPECT_EQ(0, list.size());
  {
    Ref r{1};
    EXPECT_EQ(1, list.size());

    Ref copy{1};
    EXPECT_EQ(2, list.size());

    r = copy;
    EXPECT_FALSE(TestAccessor::isEmpty(r.handle_));
    EXPECT_EQ(2, list.size());
  }
}

TEST(BookKeeping, MoveCtor) {
  EXPECT_EQ(0, list.size());
  {
    Ref move{1};
    EXPECT_EQ(1, list.size());

    {
      Ref moveCtor = std::move(move);
      EXPECT_FALSE(moveCtor.isEmpty());
      EXPECT_TRUE(move.isEmpty());

      EXPECT_FALSE(TestAccessor::isEmpty(moveCtor.handle_));
      EXPECT_EQ(move.handle_, HandleType{});
      EXPECT_EQ(1, list.size());
    }
    EXPECT_EQ(0, list.size());
  }
}

TEST(BookKeeping, MoveAssign) {
  EXPECT_EQ(0, list.size());
  {
    Ref r{0};
    EXPECT_EQ(0, list.size());

    Ref move{1};
    EXPECT_EQ(1, list.size());

    {
      r = std::move(move);
      EXPECT_TRUE(move.isEmpty());
      EXPECT_FALSE(r.isEmpty());
      EXPECT_FALSE(TestAccessor::isEmpty(r.handle_));
      EXPECT_TRUE(TestAccessor::isEmpty(move.handle_));
      EXPECT_EQ(1, list.size());
    }
    EXPECT_EQ(1, list.size());
  }
}

TEST(BookKeeping, NonEmptyMoveAssign) {
  EXPECT_EQ(0, list.size());
  {
    Ref r{1};
    EXPECT_EQ(1, list.size());

    Ref move{1};
    EXPECT_EQ(2, list.size());

    {
      r = std::move(move);
      EXPECT_TRUE(move.isEmpty());
      EXPECT_FALSE(r.isEmpty());
      EXPECT_FALSE(TestAccessor::isEmpty(r.handle_));
      EXPECT_TRUE(TestAccessor::isEmpty(move.handle_));
      EXPECT_EQ(1, list.size());
    }
    EXPECT_EQ(1, list.size());
  }
}

}  // namespace script::test
