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
#include <cassert>
#include <cstring>
#include <list>
#include "../foundation.h"
#include "MemoryPool.hpp"

namespace script::internal {

class GlobalWeakBookkeeping {
 private:
  class Bookkeeping {
   private:
    using Releaser = void(const void*);
    const void* ref_ = nullptr;
    Releaser* releaser_ = nullptr;

   public:
    template <typename T>
    explicit Bookkeeping(const T* ref) noexcept {
      ref_ = ref;
      releaser_ = [](const void* ref) { static_cast<T*>(const_cast<void*>(ref))->reset(); };
    }

    bool operator==(const Bookkeeping& other) const noexcept { return ref_ == other.ref_; }

    void perform() const {
      if (releaser_) {
        releaser_(ref_);
      }
    }
  };

  using ListType =
      std::list<Bookkeeping, script::utils::MemoryPool<Bookkeeping, /*thread safe*/ false>::
                                 Allocator<64, /*pre allocate*/ false>>;

 public:
  using HandleType = typename ListType::iterator;

 private:
  ListType bookkeeping_{};
  bool isClearing_ = false;

  // for unit-test only
  friend struct TestAccessor;

  template <typename T>
  void add(const T* ref, HandleType& handle) noexcept {
    assert(isHandleEmpty(handle));
    bookkeeping_.push_front(Bookkeeping{ref});
    handle = bookkeeping_.begin();
  }

  static bool isHandleEmpty(const HandleType& handle) {
#if defined(_ITERATOR_DEBUG_LEVEL) && _ITERATOR_DEBUG_LEVEL != 0
    // MSVC has extra logic to assert iterator from differenc list... WTF
    // this method is only used in debug and UnitTest, use simple hack...
    return *(const void**)(&handle) == nullptr;
#else
    return handle == HandleType{};
#endif
  };

 public:
  GlobalWeakBookkeeping() = default;

  SCRIPTX_DISALLOW_COPY_AND_MOVE(GlobalWeakBookkeeping);

  /**
   * add if non-empty
   * @tparam T Global<X> or Weak<X>
   * @param ref
   */
  template <typename T>
  void keep(const T* ref, HandleType& handle) noexcept {
    if (!ref->isEmpty()) {
      add(ref, handle);
    }
  }

  template <typename T>
  void remove(const T* ref, HandleType& handle) noexcept {
    SCRIPTX_UNUSED(ref);
    assert(!isHandleEmpty(handle));
    if (!isClearing_) {
      bookkeeping_.erase(handle);
    }
    handle = {};
  }

  template <typename T>
  void afterCopy(bool wasEmpty, const T* thiz, HandleType& thizH, const T* ref) noexcept {
    if (thiz != ref) {
      auto isEmpty = thiz->isEmpty();
      if (wasEmpty != isEmpty) {
        if (wasEmpty) {
          add(thiz, thizH);
        } else {
          remove(thiz, thizH);
        }
      }
    }
  }

  template <typename T>
  void afterMove(bool wasEmtpy, const T* thiz, HandleType& thizH, const T* ref,
                 HandleType& refH) noexcept {
    if (thiz != ref) {
      auto isEmpty = thiz->isEmpty();
      if (wasEmtpy) {
        if (!isEmpty) {
          add(thiz, thizH);
          remove(ref, refH);
        }
      } else {
        if (isEmpty) {
          remove(thiz, thizH);
        } else {
          remove(ref, refH);
        }
      }
      refH = {};
    }
  };

  template <typename T>
  void afterSwap(const T* lhs, HandleType& lhsH, const T* rhs, HandleType& rhsH) noexcept {
    if (lhs != rhs && lhs->isEmpty() != rhs->isEmpty()) {
      if (lhs->isEmpty()) {
        remove(lhs, lhsH);
        add(rhs, rhsH);
      } else {
        add(lhs, lhsH);
        remove(rhs, rhsH);
      }
    }
  }

  void clear() noexcept {
    isClearing_ = true;
    for (auto&& b : bookkeeping_) {
      b.perform();
    }
    bookkeeping_.clear();
    isClearing_ = false;
  }

  /**
   * \code
   * struct Fetcher {
   *   template <typename T>
   *   static internal::GlobalWeakBookkeeping* get(const T* ref);
   *
   *   template <typename T>
   *   static internal::GlobalWeakBookkeeping::HandleType& handle(const T* ref);
   * };
   * \endcode
   * @tparam Fetcher
   */
  template <typename Fetcher>
  struct Helper {
    template <typename T>
    static void keep(const T* ref) {
      auto bk = Fetcher::get(ref);
      if (bk) {
        bk->keep(ref, Fetcher::handle(ref));
      }
    }

    template <typename T>
    static void remove(const T* ref) {
      auto bk = Fetcher::get(ref);
      assert(bk);
      bk->remove(ref, Fetcher::handle(ref));
    }

    template <typename T>
    static void afterCopy(bool wasEmpty, const T* thiz, const T* ref) {
      auto bk = Fetcher::get(thiz);
      if (!bk) {
        bk = Fetcher::get(ref);
      }
      if (bk) {
        bk->afterCopy(wasEmpty, thiz, Fetcher::handle(thiz), ref);
      }
    }

    template <typename T>
    static void afterMove(bool wasEmpty, const T* thiz, const T* ref) {
      auto bk = Fetcher::get(thiz);
      if (!bk) {
        bk = Fetcher::get(ref);
      }
      if (bk) {
        bk->afterMove(wasEmpty, thiz, Fetcher::handle(thiz), ref, Fetcher::handle(ref));
      }
    }

    template <typename T>
    static void afterSwap(const T* lhs, const T* rhs) {
      auto bk = Fetcher::get(lhs);
      if (!bk) {
        bk = Fetcher::get(rhs);
      }
      if (bk) {
        bk->afterSwap(lhs, Fetcher::handle(lhs), rhs, Fetcher::handle(rhs));
      }
    }
  };

  template <typename>
  struct EmptyHelper {
    template <typename T>
    static void keep(const T*) {}

    template <typename T>
    static void remove(const T*) {}

    template <typename T>
    static void afterCopy(bool, const T*, const T*) {}

    template <typename T>
    static void afterMove(bool, const T*, const T*) {}

    template <typename T>
    static void afterSwap(const T*, const T*) {}
  };
};

}  // namespace script::internal