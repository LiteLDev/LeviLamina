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

#include <JavaScriptCore/JavaScript.h>
#include <list>
#include <type_traits>
#include "../../../src/foundation.h"
#include "../../../src/utils/GlobalWeakBookkeeping.hpp"
#include "../JscWeakRef.h"

namespace script {

namespace jsc_backend {
class JscEngine;

template <typename SE_Type>
struct RefTypeMap {
  using jscType = JSValueRef;
};

template <>
struct RefTypeMap<Object> {
  using jscType = JSObjectRef;
};

template <>
struct RefTypeMap<Array> {
  using jscType = JSObjectRef;
};

template <>
struct RefTypeMap<Function> {
  using jscType = JSObjectRef;
};

template <>
struct RefTypeMap<ByteBuffer> {
  using jscType = JSObjectRef;
};

class StringLocalRef {
 public:
  class SharedStringRef {
    JSStringRef ref_;

   public:
    /**
     * @param ref pass ownership of ref to this
     */
    explicit SharedStringRef(JSStringRef ref) : ref_(ref) {}

    SharedStringRef(const SharedStringRef& copy) : ref_(copy.ref_) {
      if (ref_) {
        JSStringRetain(ref_);
      }
    }

    SharedStringRef(SharedStringRef&& move) noexcept : ref_(move.ref_) { move.ref_ = nullptr; }

    SharedStringRef& operator=(SharedStringRef other) {
      std::swap(ref_, other.ref_);
      return *this;
    }

    SharedStringRef& operator=(std::nullptr_t) {
      if (ref_) {
        JSStringRelease(ref_);
        ref_ = nullptr;
      }
      return *this;
    }

    ~SharedStringRef() { *this = nullptr; }

    JSStringRef get() const { return ref_; }

    operator bool() const { return ref_ != nullptr; }
  };

 private:
  mutable JSValueRef stringRef_ = nullptr;
  mutable SharedStringRef rawStringRef_{nullptr};

 public:
  StringLocalRef(JSValueRef stringRef);  // NOLINT

  /**
   * @param rawStringRef transfer ownership to this
   */
  explicit StringLocalRef(JSStringRef rawStringRef);

  JSValueRef getValue(JSContextRef context) const;

  JSStringRef getString(JSContextRef context) const;

  operator JSValueRef() const;  // NOLINT

  StringLocalRef& operator=(nullptr_t);

  SharedStringRef getSharedStringRef(JSContextRef context) const;
};

}  // namespace jsc_backend

template <typename T>
struct internal::ImplType<Local<T>> {
  using type = typename jsc_backend::RefTypeMap<T>::jscType;
};

template <>
struct internal::ImplType<Local<String>> {
  using type = jsc_backend::StringLocalRef;
};

template <typename T>
struct internal::ImplType<Global<T>> {
  struct type {
    typename jsc_backend::RefTypeMap<T>::jscType ref_ = nullptr;
    jsc_backend::JscEngine* engine_ = nullptr;
    GlobalWeakBookkeeping::HandleType handle_{};
  };
};

template <typename T>
struct internal::ImplType<Weak<T>> {
  struct type {
    jsc_backend::JscWeakRef ref_{};
    jsc_backend::JscEngine* engine_ = nullptr;
    GlobalWeakBookkeeping::HandleType handle_{};

    type() = default;
    type(JSValueRef value, jsc_backend::JscEngine* engine) : ref_(value), engine_(engine) {}
  };
};

}  // namespace script
