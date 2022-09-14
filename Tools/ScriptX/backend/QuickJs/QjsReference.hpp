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
#include <utility>
#include "QjsHelper.hpp"

namespace script {

namespace qjs_backend {

struct QjsEngine::BookKeepFetcher {
  template <typename T>
  static ::script::internal::GlobalWeakBookkeeping* get(const T* ref) {
    if (!ref) return nullptr;
    auto& val = ref->val_;
    if (!val.engine_) return nullptr;
    return &val.engine_->globalWeakBookkeeping_;
  }

  template <typename T>
  static ::script::internal::GlobalWeakBookkeeping::HandleType& handle(const T* ref) {
    auto& val = const_cast<T*>(ref)->val_;
    return val.handle_;
  }
};

struct QjsBookKeepFetcher : QjsEngine::BookKeepFetcher {};

using BookKeep = ::script::internal::GlobalWeakBookkeeping::Helper<QjsBookKeepFetcher>;

inline GlobalRefState& GlobalRefState::operator=(const GlobalRefState& assign) {
  assert(this != &assign);
  bool wasEmpty = isEmpty();
  if (!wasEmpty) {
    qjs_backend::freeValue(ref_, engine_->context_);
  }

  ref_ = assign.ref_;
  engine_ = assign.engine_;
  if (engine_) qjs_backend::dupValue(ref_, engine_->context_);

  return *this;
}
inline GlobalRefState& GlobalRefState::operator=(GlobalRefState&& move) noexcept {
  assert(this != &move);
  bool wasEmpty = isEmpty();
  if (!wasEmpty) {
    qjs_backend::freeValue(ref_, engine_->context_);
  }

  ref_ = move.ref_;
  engine_ = move.engine_;
  move.ref_ = JS_UNDEFINED;
  move.engine_ = nullptr;

  return *this;
}
inline bool GlobalRefState::isEmpty() const { return engine_ == nullptr; }

template <typename GlobalOrWeak>
void GlobalRefState::reset(GlobalOrWeak* thiz) {
  if (!isEmpty()) {
    qjs_backend::freeValue(ref_, engine_->context_);
    qjs_backend::BookKeep::remove(thiz);
    ref_ = JS_UNDEFINED;
    engine_ = nullptr;
  }
}
inline void GlobalRefState::swap(GlobalRefState& other) {
  std::swap(ref_, other.ref_);
  std::swap(engine_, other.engine_);
}

template <typename GlobalOrWeak>
void GlobalRefState::dtor(GlobalOrWeak* thiz) {
  if (!isEmpty()) {
    EngineScope scope(engine_);
    reset(thiz);
  }
}

}  // namespace qjs_backend

template <typename T>
Global<T>::Global() noexcept : val_() {}

template <typename T>
Global<T>::Global(const script::Local<T>& localReference) : val_() {
  val_.ref_ = localReference.val_;
  val_.engine_ = &qjs_backend::currentEngine();
  qjs_backend::dupValue(val_.ref_, val_.engine_->context_);

  qjs_backend::BookKeep::keep(this);
}

template <typename T>
Global<T>::Global(const script::Weak<T>& weak)
    : Global(::script::converter::Converter<Local<T>>::toCpp(weak.getValue())) {}

template <typename T>
Global<T>::Global(const script::Global<T>& copy) : val_() {
  *this = copy;
}

template <typename T>
Global<T>::Global(script::Global<T>&& move) noexcept : val_() {
  *this = std::move(move);
}

template <typename T>
Global<T>::~Global() {
  val_.dtor(this);
}

template <typename T>
Global<T>& Global<T>::operator=(const script::Global<T>& assign) {
  if (this != &assign) {
    bool wasEmpty = isEmpty();
    val_ = assign.val_;
    qjs_backend::BookKeep::afterCopy(wasEmpty, this, &assign);
  }
  return *this;
}

template <typename T>
Global<T>& Global<T>::operator=(script::Global<T>&& move) noexcept {
  if (this != &move) {
    bool wasEmpty = isEmpty();
    val_ = std::move(move.val_);
    qjs_backend::BookKeep::afterMove(wasEmpty, this, &move);
  }
  return *this;
}

template <typename T>
void Global<T>::swap(Global& rhs) noexcept {
  val_.swap(rhs.val_);
  qjs_backend::BookKeep::afterSwap(this, &rhs);
}

template <typename T>
Global<T>& Global<T>::operator=(const script::Local<T>& assign) {
  *this = Global<T>(assign);
  return *this;
}

template <typename T>
Local<T> Global<T>::get() const {
  if (isEmpty()) throw Exception("get on empty Global");
  return qjs_interop::makeLocal<T>(qjs_backend::dupValue(val_.ref_, val_.engine_->context_));
}

template <typename T>
Local<Value> Global<T>::getValue() const {
  if (isEmpty()) return {};
  return qjs_interop::makeLocal<Value>(qjs_backend::dupValue(val_.ref_, val_.engine_->context_));
}

template <typename T>
bool Global<T>::isEmpty() const {
  return val_.isEmpty();
}

template <typename T>
void Global<T>::reset() {
  val_.reset(this);
}

// == Weak ==

template <typename T>
Weak<T>::Weak() noexcept : val_() {}

template <typename T>
Weak<T>::~Weak() {
  val_.dtor(this);
}

template <typename T>
Weak<T>::Weak(const script::Local<T>& localReference) : val_() {
  auto ref = qjs_interop::peekLocal(localReference);
  val_.engine_ = &qjs_backend::currentEngine();

  // if has our patch, use the real WeakRef impl.
#ifdef QUICK_JS_HAS_SCRIPTX_PATCH
  if (JS_IsObject(ref)) {
    val_.ref_ = JS_NewWeakRef(val_.engine_->context_, ref);
    qjs_backend::checkException(val_.ref_);
    qjs_backend::BookKeep::keep(this);
    return;
  }
#endif

  val_.ref_ = qjs_backend::dupValue(ref, val_.engine_->context_);
  qjs_backend::BookKeep::keep(this);
}

template <typename T>
Weak<T>::Weak(const script::Global<T>& globalReference)
    : Weak(::script::converter::Converter<Local<T>>::toCpp(globalReference.getValue())) {}

template <typename T>
Weak<T>::Weak(const script::Weak<T>& copy) : val_() {
  *this = copy;
}

template <typename T>
Weak<T>::Weak(script::Weak<T>&& move) noexcept : val_() {
  *this = std::move(move);
}

template <typename T>
Weak<T>& Weak<T>::operator=(const script::Weak<T>& assign) {
  if (this != &assign) {
    bool wasEmpty = isEmpty();
    val_ = assign.val_;
    qjs_backend::BookKeep::afterCopy(wasEmpty, this, &assign);
  }
  return *this;
}

template <typename T>
Weak<T>& Weak<T>::operator=(script::Weak<T>&& move) noexcept {
  if (this != &move) {
    bool wasEmpty = isEmpty();
    val_ = std::move(move.val_);
    qjs_backend::BookKeep::afterMove(wasEmpty, this, &move);
  }
  return *this;
}

template <typename T>
void Weak<T>::swap(Weak& rhs) noexcept {
  val_.swap(rhs.val_);
  qjs_backend::BookKeep::afterSwap(this, &rhs);
}

template <typename T>
Weak<T>& Weak<T>::operator=(const script::Local<T>& assign) {
  *this = Weak<T>(assign);
  return *this;
}

template <typename T>
Local<T> Weak<T>::get() const {
  auto value = getValue();
  if (value.isNull()) throw Exception("get on empty Weak");
  return converter::Converter<Local<T>>::toCpp(value);
}

template <typename T>
Local<Value> Weak<T>::getValue() const {
  if (isEmpty()) return {};
#ifdef QUICK_JS_HAS_SCRIPTX_PATCH
  if (JS_IsObject(val_.ref_)) {
    auto ref = JS_GetWeakRef(val_.engine_->context_, val_.ref_);
    qjs_backend::checkException(ref);
    return qjs_interop::makeLocal<Value>(ref);
  }
#endif
  return qjs_interop::makeLocal<Value>(qjs_backend::dupValue(val_.ref_, val_.engine_->context_));
}

template <typename T>
bool Weak<T>::isEmpty() const {
  return val_.isEmpty();
}

template <typename T>
void Weak<T>::reset() noexcept {
  val_.reset(this);
}

}  // namespace script
