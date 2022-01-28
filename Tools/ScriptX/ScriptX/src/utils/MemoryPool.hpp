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

#include <cstddef>
#include <limits>
#include <memory>
#include <mutex>
#include <type_traits>
#include <vector>

#include "../foundation.h"

namespace script {

namespace internal {

template <bool>
struct MemoryPoolLockTrait {
  using Lock = std::mutex;
  using LockGuard = std::lock_guard<std::mutex>;
};

template <>
struct MemoryPoolLockTrait<false> {
  struct Lock {};
  struct LockGuard {
    explicit LockGuard(const Lock&) {}
  };
};

}  // namespace internal

namespace utils {

/**
 * @tparam T t must have a default constructor and visible destructor.
 */
template <typename T, bool ThreadSafe = true>
class MemoryPool {
 public:
  explicit MemoryPool(std::size_t capacity, bool preAllocate = false);

  ~MemoryPool();

  T* obtain();

  void release(T* item);

  void cleanup();

  SCRIPTX_DISALLOW_COPY_AND_MOVE(MemoryPool);

  template <size_t Capacity, bool PreloadAllocate = true>
  struct Allocator;

 private:
  using LockGuard = typename internal::MemoryPoolLockTrait<ThreadSafe>::LockGuard;
  using LockType = typename internal::MemoryPoolLockTrait<ThreadSafe>::Lock;

  std::size_t capacity_;
  std::vector<T*> pool_;
  LockType poolLock_;

  struct AllocatorBase;
};

template <typename T, bool ThreadSafe>
MemoryPool<T, ThreadSafe>::MemoryPool(std::size_t capacity, bool preAllocate)
    : capacity_(capacity), pool_(), poolLock_() {
  LockGuard lk(poolLock_);
  if (preAllocate) {
    pool_.reserve(capacity);
    auto size = sizeof(T);
    (void)size;
    for (size_t i = 0; i < capacity; ++i) {
      pool_.push_back(new T());
    }
  }
}

template <typename T, bool ThreadSafe>
MemoryPool<T, ThreadSafe>::~MemoryPool() {
  cleanup();
}

template <typename T, bool ThreadSafe>
T* MemoryPool<T, ThreadSafe>::obtain() {
  LockGuard lk(poolLock_);
  if (!pool_.empty()) {
    auto* ret = pool_.back();
    pool_.pop_back();
    return ret;
  } else {
    return new T();
  }
}

template <typename T, bool ThreadSafe>
void MemoryPool<T, ThreadSafe>::release(T* item) {
  LockGuard lk(poolLock_);
  if (pool_.size() < capacity_) {
    pool_.push_back(item);
  } else {
    delete item;
  }
}

template <typename T, bool ThreadSafe>
void MemoryPool<T, ThreadSafe>::cleanup() {
  LockGuard lk(poolLock_);
  for (auto* item : pool_) {
    delete item;
  }
  pool_.clear();
}

template <typename T, bool ThreadSafe>
struct MemoryPool<T, ThreadSafe>::AllocatorBase {
 private:
  using ElementType = std::aligned_storage_t<sizeof(T), alignof(T)>;
  std::shared_ptr<MemoryPool<ElementType, ThreadSafe>> pool_;

 public:
  using value_type = T;

  AllocatorBase(size_t cap, bool preAllocate)
      : pool_(std::make_shared<MemoryPool<ElementType, ThreadSafe>>(cap, preAllocate)) {}

  T* allocate(std::size_t n) {
    if (n >
        /* workaround windows.h "max()" marco */
        (std::numeric_limits<std::size_t>::max)() / sizeof(T)) {
      throw std::bad_alloc();
    }

    if (n == 1) {
      return reinterpret_cast<T*>(pool_->obtain());
    }

    if (auto p = static_cast<T*>(std::malloc(n * sizeof(T)))) {
      return p;
    }

    throw std::bad_alloc();
  }

  void deallocate(T* p, std::size_t n) noexcept {
    if (n == 1) {
      pool_->release(reinterpret_cast<ElementType*>(p));
    } else {
      std::free(p);
    }
  }

  template <class U, bool _ThreadSafe>
  bool operator==(const typename MemoryPool<U, ThreadSafe>::AllocatorBase& other) const {
    return false;
  }

  bool operator==(const MemoryPool<T, ThreadSafe>::AllocatorBase& other) const {
    return pool_ == other.pool_;
  }
};

template <typename T, bool ThreadSafe>
template <size_t capacity, bool preloadAllocate>
struct MemoryPool<T, ThreadSafe>::Allocator : public MemoryPool<T, ThreadSafe>::AllocatorBase {
  template <typename U>
  struct rebind {
    using other = typename MemoryPool<U, ThreadSafe>::template Allocator<capacity, preloadAllocate>;
  };

  Allocator() : MemoryPool<T, ThreadSafe>::AllocatorBase(capacity, preloadAllocate) {}

  template <class U>
  constexpr Allocator(const U&) noexcept : Allocator() {}
};

}  // namespace utils

}  // namespace script