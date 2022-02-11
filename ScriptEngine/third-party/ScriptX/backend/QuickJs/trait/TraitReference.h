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

#include <cstdint>
#include <string>
#include "../../src/types.h"
#include "../../src/utils/GlobalWeakBookkeeping.hpp"
#include "../QjsHelper.h"

namespace script {

namespace qjs_backend {

// this class acts like a plain JSValue
struct ByteBufferState {
  static constexpr size_t kNoSize = static_cast<size_t>(-1);
  mutable JSValue val_ = JS_UNDEFINED;
  mutable size_t size_ = kNoSize;
  mutable ByteBuffer::Type type_ = ByteBuffer::Type::kUnspecified;
  mutable uint8_t* pointer_ = nullptr;

  /**
   * constructor to create ByteBuffer wrapping ArrayBuffer of SharedByteBuffer
   * @param val
   */
  explicit ByteBufferState(JSValue val);  // NOLINT

  ByteBufferState(ByteBufferState&& move) noexcept;

  ByteBufferState(const ByteBufferState&);

  ByteBufferState* operator=(ByteBufferState&) = delete;
  ByteBufferState* operator=(ByteBufferState&&) = delete;

  ByteBufferState& operator=(JSValue);

  operator JSValue() const;  // NOLINT

  void reset() const;

  void fillTypeAndSize() const;

  friend void swap(ByteBufferState& lhs, ByteBufferState& rhs);
};

void swap(ByteBufferState& lhs, ByteBufferState& rhs);

struct GlobalRefState {
  JSValue ref_ = JS_UNDEFINED;
  QjsEngine* engine_ = nullptr;
  internal::GlobalWeakBookkeeping::HandleType handle_{};

  GlobalRefState() = default;
  GlobalRefState(const GlobalRefState& cp) = delete;
  GlobalRefState(GlobalRefState&& mv) noexcept = delete;

  GlobalRefState& operator=(const GlobalRefState& assign);
  GlobalRefState& operator=(GlobalRefState&& move) noexcept;
  bool isEmpty() const;
  void swap(GlobalRefState& other);

  template <typename GlobalOrWeak>
  void reset(GlobalOrWeak* thiz);

  template <typename GlobalOrWeak>
  void dtor(GlobalOrWeak* thiz);
};

}  // namespace qjs_backend

namespace internal {

template <typename T>
struct ImplType<Local<T>> {
  using type = JSValue;
};

template <>
struct ImplType<Local<ByteBuffer>> {
  using type = qjs_backend::ByteBufferState;
};

template <typename T>
struct ImplType<Global<T>> {
  using type = qjs_backend::GlobalRefState;
};

template <typename T>
struct ImplType<Weak<T>> {
  using type = qjs_backend::GlobalRefState;
};

}  // namespace internal
}  // namespace script