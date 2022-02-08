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
#include "../../src/NativeConverter.hpp"
#include "../../src/Reference.h"
#include "../../src/Value.h"
#include "../../src/types.h"
#include "../../src/utils/GlobalWeakBookkeeping.hpp"
#include "V8Engine.h"
#include "V8Helper.h"

namespace script {

namespace v8_backend {

template <typename T>
GlobalRefState<T>::GlobalRefState(V8Engine* scriptEngine, const GlobalRefState::V8Global& v8Global)
    : engine_(scriptEngine), ref_(v8Global) {}

template <typename T>
GlobalRefState<T>::GlobalRefState(V8Engine* scriptEngine, const Local<T>& localReference)
    : engine_(scriptEngine),
      ref_{engine_->isolate_, v8_backend::V8Engine::toV8(engine_->isolate_, localReference)} {}

struct V8BookKeepFetcher {
  template <typename T>
  static ::script::internal::GlobalWeakBookkeeping* get(const T* ref) {
    if (!ref) return nullptr;
    auto& val = V8Engine::refVal(const_cast<T*>(ref));
    if (!val.engine_) return nullptr;
    return &val.engine_->globalWeakBookkeeping_;
  }

  template <typename T>
  static ::script::internal::GlobalWeakBookkeeping::HandleType& handle(const T* ref) {
    auto& val = V8Engine::refVal(const_cast<T*>(ref));
    return val.handle_;
  }
};

using V8BookKeep = internal::GlobalWeakBookkeeping::Helper<V8BookKeepFetcher>;

}  // namespace v8_backend

// == Global ==
template <typename T>
Global<T>::Global() noexcept : val_() {}

template <typename T>
Global<T>::Global(const script::Local<T>& localReference)
    : val_(v8_backend::currentEngine(), localReference) {
  v8_backend::V8BookKeep::keep(this);
}

template <typename T>
Global<T>::Global(const script::Weak<T>& weakReference)
    : val_(v8_backend::currentEngine(), weakReference.val_.ref_) {
  v8_backend::V8BookKeep::keep(this);
}

template <typename T>
Global<T>::Global(const script::Global<T>& copy) : val_(copy.val_) {
  v8_backend::V8BookKeep::afterCopy(true, this, &copy);
}

template <typename T>
Global<T>::Global(script::Global<T>&& move) noexcept : val_(std::move(move.val_)) {
  v8_backend::V8BookKeep::afterMove(true, this, &move);
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
  bool wasEmpty = isEmpty();
  val_ = assign.val_;
  v8_backend::V8BookKeep::afterCopy(wasEmpty, this, &assign);
  return *this;
}

template <typename T>
Global<T>& Global<T>::operator=(Global&& move) noexcept {
  if (&move != this) {
    bool wasEmpty = isEmpty();
    val_ = std::move(move.val_);
    v8_backend::V8BookKeep::afterMove(wasEmpty, this, &move);
  }
  return *this;
}

template <typename T>
void Global<T>::swap(Global& rhs) noexcept {
  if (&rhs != this) {
    val_.swap(rhs.val_);
    v8_backend::V8BookKeep::afterSwap(this, &rhs);
  }
}

template <typename T>
Global<T>& Global<T>::operator=(const script::Local<T>& assign) {
  *this = Global<T>(assign);
  return *this;
}

template <typename T>
Local<T> Global<T>::get() const {
  if (isEmpty()) throw Exception("get on empty Global");
  return Local<T>(val_.ref_.Get(v8_backend::currentEngineIsolateChecked()));
}

template <typename T>
Local<Value> Global<T>::getValue() const {
  return Local<Value>(val_.ref_.Get(v8_backend::currentEngineIsolateChecked()));
}

template <typename T>
bool Global<T>::isEmpty() const {
  return val_.ref_.IsEmpty();
}

template <typename T>
void Global<T>::reset() {
  if (!isEmpty()) {
    val_.ref_.Reset();
    v8_backend::V8BookKeep::remove(this);
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
    : val_(v8_backend::currentEngine(), localReference) {
  val_.makeWeak();
  v8_backend::V8BookKeep::keep(this);
}

template <typename T>
Weak<T>::Weak(const script::Global<T>& globalReference)
    : val_(globalReference.val_.engine_, globalReference.val_.ref_) {
  val_.makeWeak();
  v8_backend::V8BookKeep::keep(this);
}

template <typename T>
Weak<T>::Weak(const script::Weak<T>& copy) : val_(copy.val_) {
  val_.makeWeak();
  v8_backend::V8BookKeep::afterCopy(true, this, &copy);
}

template <typename T>
Weak<T>::Weak(script::Weak<T>&& move) noexcept : val_(std::move(move.val_)) {
  val_.makeWeak();
  v8_backend::V8BookKeep::afterMove(true, this, &move);
}

template <typename T>
Weak<T>& Weak<T>::operator=(const script::Weak<T>& assign) {
  if (&assign != this) {
    bool wasEmpty = isEmpty();
    val_ = assign.val_;
    val_.makeWeak();
    v8_backend::V8BookKeep::afterCopy(wasEmpty, this, &assign);
  }
  return *this;
}

template <typename T>
Weak<T>& Weak<T>::operator=(script::Weak<T>&& move) noexcept {
  if (&move != this) {
    bool wasEmpty = isEmpty();
    val_ = std::move(move.val_);
    val_.makeWeak();
    v8_backend::V8BookKeep::afterMove(wasEmpty, this, &move);
  }
  return *this;
}

template <typename T>
void Weak<T>::swap(Weak& rhs) noexcept {
  if (&rhs != this) {
    val_.swap(rhs.val_);
    val_.makeWeak();
    rhs.val_.makeWeak();
    v8_backend::V8BookKeep::afterSwap(this, &rhs);
  }
}

template <typename T>
Weak<T>& Weak<T>::operator=(const script::Local<T>& assign) {
  *this = Weak<T>(assign);
  return *this;
}

template <typename T>
Local<T> Weak<T>::get() const {
  auto value = getValue();
  if (value.isNull()) throw Exception("get on null Weak");
  return converter::Converter<Local<T>>::toCpp(value);
}

template <typename T>
Local<Value> Weak<T>::getValue() const {
  if (isEmpty()) return {};
  return Local<Value>(val_.ref_.Get(val_.engine_->isolate_));
}

template <typename T>
bool Weak<T>::isEmpty() const {
  // V8 PersistentBase::IsEmpty will be true after gc
  // differs with our semantics, so we use then engine_ field to check this.
  return val_.engine_ == nullptr;
}

template <typename T>
void Weak<T>::reset() noexcept {
  if (!isEmpty()) {
    val_.ref_.Reset();
    v8_backend::V8BookKeep::remove(this);
    val_.engine_ = nullptr;
  }
}

}  // namespace script
