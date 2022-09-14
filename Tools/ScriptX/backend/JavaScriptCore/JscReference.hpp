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

#include <utility>
#include "../../src/Exception.h"
#include "../../src/NativeConverter.hpp"
#include "../../src/Reference.h"
#include "../../src/Scope.h"
#include "../../src/utils/GlobalWeakBookkeeping.hpp"
#include "JscHelper.h"

namespace script {

namespace jsc_backend {

inline void retain(JSContextRef context, JSValueRef val) {
  if (val) JSValueProtect(context, val);
}

inline void release(JSContextRef context, JSValueRef val) {
  if (val) JSValueUnprotect(context, val);
}

struct JscBookKeepFetcher {
  template <typename T>
  static ::script::internal::GlobalWeakBookkeeping* get(const T* ref) {
    if (!ref) return nullptr;
    auto& val = JscEngine::refVal(const_cast<T*>(ref));
    if (!val.engine_) return nullptr;
    return &val.engine_->globalWeakBookkeeping_;
  }

  template <typename T>
  static ::script::internal::GlobalWeakBookkeeping::HandleType& handle(const T* ref) {
    auto& val = JscEngine::refVal(const_cast<T*>(ref));
    return val.handle_;
  }
};

using BookKeep = ::script::internal::GlobalWeakBookkeeping::Helper<JscBookKeepFetcher>;

}  // namespace jsc_backend

template <typename T>
Global<T>::Global() noexcept : val_() {}

template <typename T>
Global<T>::Global(const script::Local<T>& localReference)
    : val_{localReference.val_, jsc_backend::currentEngine()} {
  if (val_.ref_) jsc_backend::retain(val_.engine_->context_, val_.ref_);
  jsc_backend::BookKeep::keep(this);
}

template <typename T>
Global<T>::Global(const script::Weak<T>& weak)
    : val_{const_cast<typename jsc_backend::RefTypeMap<T>::jscType>(weak.val_.ref_.get()),
           weak.val_.engine_} {
  if (val_.ref_) jsc_backend::retain(val_.engine_->context_, val_.ref_);
  jsc_backend::BookKeep::keep(this);
}

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
  if (!isEmpty()) {
    EngineScope scope(val_.engine_);
    reset();
  }
}

template <typename T>
Global<T>& Global<T>::operator=(const script::Global<T>& assign) {
  bool wasEmtpy = isEmpty();
  if (!wasEmtpy) {
    jsc_backend::release(val_.engine_->context_, val_.ref_);
  }

  val_.ref_ = assign.val_.ref_;
  val_.engine_ = assign.val_.engine_;
  if (val_.ref_) jsc_backend::retain(val_.engine_->context_, val_.ref_);

  jsc_backend::BookKeep::afterCopy(wasEmtpy, this, &assign);
  return *this;
}

template <typename T>
Global<T>& Global<T>::operator=(script::Global<T>&& move) noexcept {
  bool wasEmtpy = isEmpty();
  if (!wasEmtpy) {
    wasEmtpy = false;
    jsc_backend::release(val_.engine_->context_, val_.ref_);
  }

  val_.ref_ = move.val_.ref_;
  val_.engine_ = move.val_.engine_;
  move.val_.ref_ = nullptr;
  move.val_.engine_ = nullptr;
  jsc_backend::BookKeep::afterMove(wasEmtpy, this, &move);
  return *this;
}

template <typename T>
void Global<T>::swap(Global& rhs) noexcept {
  std::swap(val_.ref_, rhs.val_.ref_);
  std::swap(val_.engine_, rhs.val_.engine_);
  jsc_backend::BookKeep::afterSwap(this, &rhs);
}

template <typename T>
Global<T>& Global<T>::operator=(const script::Local<T>& assign) {
  *this = Global<T>(assign);
  return *this;
}

template <typename T>
Local<T> Global<T>::get() const {
  if (isEmpty()) throw Exception("get on empty Global");
  return Local<T>(val_.ref_);
}

template <typename T>
Local<Value> Global<T>::getValue() const {
  return Local<Value>(val_.ref_);
}

template <typename T>
bool Global<T>::isEmpty() const {
  return val_.ref_ == nullptr;
}

template <typename T>
void Global<T>::reset() {
  if (!isEmpty()) {
    jsc_backend::release(val_.engine_->context_, val_.ref_);
    jsc_backend::BookKeep::remove(this);
    val_.ref_ = nullptr;
    val_.engine_ = nullptr;
  }
}

// == Weak ==

template <typename T>
Weak<T>::Weak() noexcept : val_() {}

template <typename T>
Weak<T>::~Weak() {
  if (!isEmpty()) {
    EngineScope scope(val_.engine_);
    reset();
  }
}

template <typename T>
Weak<T>::Weak(const script::Local<T>& localReference)
    : val_(localReference.val_, jsc_backend::currentEngine()) {
  jsc_backend::BookKeep::keep(this);
}

template <typename T>
Weak<T>::Weak(const script::Global<T>& globalReference)
    : val_(globalReference.val_.ref_, jsc_backend::currentEngine()) {
  jsc_backend::BookKeep::keep(this);
}

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
  bool wasEmtpy = isEmpty();
  val_.ref_ = assign.val_.ref_;
  val_.engine_ = assign.val_.engine_;
  jsc_backend::BookKeep::afterCopy(wasEmtpy, this, &assign);
  return *this;
}

template <typename T>
Weak<T>& Weak<T>::operator=(script::Weak<T>&& move) noexcept {
  bool wasEmpty = isEmpty();
  val_.ref_ = std::move(move.val_.ref_);
  val_.engine_ = std::move(move.val_.engine_);
  jsc_backend::BookKeep::afterMove(wasEmpty, this, &move);
  return *this;
}

template <typename T>
void Weak<T>::swap(Weak& rhs) noexcept {
  std::swap(val_.ref_, rhs.val_.ref_);
  std::swap(val_.engine_, rhs.val_.engine_);
  jsc_backend::BookKeep::afterSwap(this, &rhs);
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
  using type = typename jsc_backend::RefTypeMap<Value>::jscType;
  return Local<Value>(const_cast<type>(val_.ref_.get()));
}

template <typename T>
bool Weak<T>::isEmpty() const {
  return val_.ref_.isEmpty();
}

template <typename T>
void Weak<T>::reset() noexcept {
  if (!isEmpty()) {
    jsc_backend::BookKeep::remove(this);
    val_.ref_.reset(val_.engine_);
    val_.engine_ = nullptr;
  }
}

}  // namespace script
