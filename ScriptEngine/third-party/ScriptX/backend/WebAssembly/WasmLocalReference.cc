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

#include "../../src/Native.hpp"
#include "../../src/Reference.h"
#include "WasmEngine.h"

namespace script {

#define REF_IMPL_BASIC_FUNC(ValueType)                                                            \
  Local<ValueType>::Local(const Local<ValueType>& copy) : val_(copy.val_) {}                      \
  Local<ValueType>::Local(Local<ValueType>&& move) noexcept : val_(move.val_) { move.val_ = -1; } \
  Local<ValueType>& Local<ValueType>::operator=(const Local& from) {                              \
    Local(from).swap(*this);                                                                      \
    return *this;                                                                                 \
  }                                                                                               \
  Local<ValueType>& Local<ValueType>::operator=(Local&& move) noexcept {                          \
    Local(std::move(move)).swap(*this);                                                           \
    return *this;                                                                                 \
  }                                                                                               \
  void Local<ValueType>::swap(Local& rhs) noexcept {                                              \
    using std::swap;                                                                              \
    swap(val_, rhs.val_);                                                                         \
  }

#define REF_IMPL_BASIC_EQUALS(ValueType)                                               \
  bool Local<ValueType>::operator==(const script::Local<script::Value>& other) const { \
    return asValue() == other;                                                         \
  }

#define REF_IMPL_BASIC_NOT_VALUE_CTOR_DTOR(ValueType)                      \
  Local<ValueType>::Local(InternalLocalRef val) : val_(val) {              \
    if (val < 0) {                                                         \
      throw Exception("create Local<" #ValueType "> with null reference"); \
    }                                                                      \
    wasm_backend::currentEngine();                                         \
  }                                                                        \
  Local<ValueType>::~Local() {}

#define REF_IMPL_BASIC_DESCRIBE(ValueType)                                          \
  Local<String> Local<ValueType>::describe() const { return asValue().describe(); } \
  std::string Local<ValueType>::describeUtf8() const { return asValue().describeUtf8(); }

#define REF_IMPL_TO_VALUE(ValueType) \
  Local<Value> Local<ValueType>::asValue() const { return Local<Value>(val_); }

REF_IMPL_BASIC_FUNC(Value)

REF_IMPL_BASIC_FUNC(Object)
REF_IMPL_BASIC_NOT_VALUE_CTOR_DTOR(Object)
REF_IMPL_BASIC_DESCRIBE(Object)
REF_IMPL_BASIC_EQUALS(Object)
REF_IMPL_TO_VALUE(Object)

REF_IMPL_BASIC_FUNC(String)
REF_IMPL_BASIC_NOT_VALUE_CTOR_DTOR(String)
REF_IMPL_BASIC_DESCRIBE(String)
REF_IMPL_BASIC_EQUALS(String)
REF_IMPL_TO_VALUE(String)

REF_IMPL_BASIC_FUNC(Number)
REF_IMPL_BASIC_NOT_VALUE_CTOR_DTOR(Number)
REF_IMPL_BASIC_DESCRIBE(Number)
REF_IMPL_BASIC_EQUALS(Number)
REF_IMPL_TO_VALUE(Number)

REF_IMPL_BASIC_FUNC(Boolean)
REF_IMPL_BASIC_NOT_VALUE_CTOR_DTOR(Boolean)
REF_IMPL_BASIC_DESCRIBE(Boolean)
REF_IMPL_BASIC_EQUALS(Boolean)
REF_IMPL_TO_VALUE(Boolean)

REF_IMPL_BASIC_FUNC(Function)
REF_IMPL_BASIC_NOT_VALUE_CTOR_DTOR(Function)
REF_IMPL_BASIC_DESCRIBE(Function)
REF_IMPL_BASIC_EQUALS(Function)
REF_IMPL_TO_VALUE(Function)

REF_IMPL_BASIC_FUNC(Array)
REF_IMPL_BASIC_NOT_VALUE_CTOR_DTOR(Array)
REF_IMPL_BASIC_DESCRIBE(Array)
REF_IMPL_BASIC_EQUALS(Array)
REF_IMPL_TO_VALUE(Array)

REF_IMPL_BASIC_FUNC(ByteBuffer)
REF_IMPL_BASIC_DESCRIBE(ByteBuffer)
REF_IMPL_BASIC_EQUALS(ByteBuffer)

REF_IMPL_BASIC_FUNC(Unsupported)
REF_IMPL_BASIC_NOT_VALUE_CTOR_DTOR(Unsupported)
REF_IMPL_BASIC_DESCRIBE(Unsupported)
REF_IMPL_BASIC_EQUALS(Unsupported)
REF_IMPL_TO_VALUE(Unsupported)

// ==== value ====

Local<Value>::Local() noexcept : val_(-1) {}

Local<Value>::Local(InternalLocalRef local) : val_(local) { wasm_backend::currentEngine(); }

Local<Value>::~Local() = default;

bool Local<Value>::isNull() const {
  return val_ < 0 || wasm_backend::Stack::isNullOrUndefined(val_);
}

void Local<Value>::reset() { val_ = -1; }

ValueKind Local<Value>::getKind() const {
  if (isNull()) {
    return ValueKind::kNull;
  } else if (isString()) {
    return ValueKind::kString;
  } else if (isNumber()) {
    return ValueKind::kNumber;
  } else if (isBoolean()) {
    return ValueKind::kBoolean;
  } else if (isFunction()) {
    return ValueKind::kFunction;
  } else if (isArray()) {
    return ValueKind::kArray;
  } else if (isByteBuffer()) {
    return ValueKind::kByteBuffer;
  } else if (isObject()) {
    return ValueKind::kObject;
  } else {
    return ValueKind::kUnsupported;
  }
}

bool Local<Value>::isString() const { return wasm_backend::Stack::isString(val_); }

bool Local<Value>::isNumber() const { return wasm_backend::Stack::isNumber(val_); }

bool Local<Value>::isBoolean() const { return wasm_backend::Stack::isBoolean(val_); }

bool Local<Value>::isFunction() const { return wasm_backend::Stack::isFunction(val_); }

bool Local<Value>::isArray() const { return wasm_backend::Stack::isArray(val_); }

bool Local<Value>::isByteBuffer() const { return wasm_backend::Stack::isByteBuffer(val_); }

bool Local<Value>::isObject() const { return wasm_backend::Stack::isObject(val_); }

bool Local<Value>::isUnsupported() const { return wasm_backend::Stack::isUnsupported(val_); }

Local<String> Local<Value>::asString() const {
  if (!isString()) throw Exception("can't cast value as String");
  return Local<String>{val_};
}

Local<Number> Local<Value>::asNumber() const {
  if (!isNumber()) throw Exception("can't cast value as Number");
  return Local<Number>(val_);
}

Local<Boolean> Local<Value>::asBoolean() const {
  if (!isBoolean()) throw Exception("can't cast value as Boolean");
  return Local<Boolean>(val_);
}

Local<Function> Local<Value>::asFunction() const {
  if (!isFunction()) throw Exception("can't cast value as Function");
  return Local<Function>{val_};
}

Local<Array> Local<Value>::asArray() const {
  if (!isArray()) throw Exception("can't cast value as Array");
  return Local<Array>(val_);
}

Local<ByteBuffer> Local<Value>::asByteBuffer() const {
  if (!isByteBuffer()) throw Exception("can't cast value as ByteBuffer");
  return Local<ByteBuffer>(wasm_backend::ByteBufferState(val_));
}

Local<Object> Local<Value>::asObject() const {
  if (!isObject()) throw Exception("can't cast value as Object");
  return Local<Object>(val_);
}

Local<Unsupported> Local<Value>::asUnsupported() const {
  if (!isUnsupported()) throw Exception("can't cast value as Unsupported");
  return Local<Unsupported>(val_);
}

bool Local<Value>::operator==(const script::Local<script::Value>& other) const {
  if (isNull()) return other.isNull();
  return wasm_backend::Stack::equals(val_, other.val_);
}

Local<String> Local<Value>::describe() const {
  return Local<String>(wasm_backend::Stack::toString(val_));
}

Local<Value> Local<Object>::get(const script::Local<script::String>& key) const {
  return Local<Value>(wasm_backend::Stack::objectGet(val_, key.val_));
}

void Local<Object>::set(const script::Local<script::String>& key,
                        const script::Local<script::Value>& value) const {
  wasm_backend::Stack::objectSet(val_, key.val_, value.val_);
}

void Local<Object>::remove(const Local<class script::String>& key) const {
  wasm_backend::Stack::objectRemove(val_, key.val_);
}
bool Local<Object>::has(const Local<class script::String>& key) const {
  return wasm_backend::Stack::objectHas(val_, key.val_);
}

bool Local<Object>::instanceOf(const Local<class script::Value>& type) const {
  return wasm_backend::Stack::objectInstanceOf(val_, type.val_);
}

std::vector<Local<String>> Local<Object>::getKeys() const {
  auto keys = Local<Array>(wasm_backend::Stack::objectGetKeys(val_));
  std::vector<Local<String>> ret;
  ret.reserve(keys.size());
  for (size_t i = 0; i < keys.size(); ++i) {
    ret.push_back(keys.get(i).asString());
  }
  return ret;
}

float Local<Number>::toFloat() const { return wasm_backend::Stack::toNumberFloat(val_); }

double Local<Number>::toDouble() const { return wasm_backend::Stack::toNumberDouble(val_); }

int32_t Local<Number>::toInt32() const { return wasm_backend::Stack::toNumberInt32(val_); }

int64_t Local<Number>::toInt64() const { return wasm_backend::Stack::toNumberInt64(val_); }

bool Local<Boolean>::value() const { return wasm_backend::Stack::toBoolean(val_); }

Local<Value> Local<Function>::callImpl(const Local<Value>& thiz, size_t size,
                                       const Local<Value>* args) const {
  return Local<Value>(wasm_backend::callFunction(*this, thiz, size, args));
}

size_t Local<Array>::size() const { return wasm_backend::Stack::arrayLength(val_); }

Local<Value> Local<Array>::get(size_t index) const {
  return Local<Value>(wasm_backend::Stack::arrayGet(val_, index));
}

void Local<Array>::set(size_t index, const script::Local<script::Value>& value) const {
  wasm_backend::Stack::arraySet(val_, index, value.val_);
}

void Local<Array>::add(const script::Local<script::Value>& value) const { set(size(), value); }

void Local<Array>::clear() const { wasm_backend::Stack::arrayClear(val_); }

// ByteBuffer

namespace wasm_backend {

ByteBufferState::ByteBufferState(int val) : val_(val) {}

ByteBufferState::ByteBufferState(std::shared_ptr<void> backingStore, size_t size)
    : val_(-1),
      backingStore_(std::move(backingStore)),
      size_(size),
      type_(ByteBuffer::Type::kUnspecified) {}

ByteBufferState::ByteBufferState(ByteBufferState&& move) noexcept
    : val_(move.val_),
      backingStore_(std::move(move.backingStore_)),
      size_(move.size_),
      type_(std::move(move.type_)) {
  move.val_ = -1;
  move.size_ = 0;
}

ByteBufferState& ByteBufferState::operator=(int what) {
  if (what != val_) {
    reset();
    val_ = what;
  }
  return *this;
}

void ByteBufferState::reset() const {
  val_ = -1;
  backingStore_.reset();
  size_ = 0;
  type_.reset();
}

void ByteBufferState::fillBackingStore() const {
  if (!backingStore_) {
    std::shared_ptr<void>* ptr = nullptr;
    void* buffer = nullptr;
    ByteBufferHelper::fillBackingStore(val_, &ptr, &buffer);
    if (ptr) {
      backingStore_ = *ptr;
    } else {
      backingStore_ = std::shared_ptr<void>(buffer, [](void* p) { std::free(p); });
    }
  }
}

void ByteBufferState::fillTypeAndSize() const {
  if (!type_.has_value()) {
    uint16_t type;
    ByteBufferHelper::fillTypeAndSize(val_, &type, &size_);
    type_ = ByteBuffer::Type(type);
  }
}

void ByteBufferState::fillWrapperIfNeed() const {
  if (val_ == -1 && backingStore_) {
    auto sharedPtr = std::make_unique<std::shared_ptr<void>>(backingStore_);
    val_ = ByteBufferHelper::fillWrapper(backingStore_.get(), sharedPtr.get(), size_);
    sharedPtr.release();
  }
}

void swap(ByteBufferState& lhs, ByteBufferState& rhs) {
  std::swap(lhs.val_, rhs.val_);
  std::swap(lhs.backingStore_, rhs.backingStore_);
  std::swap(lhs.size_, rhs.size_);
  std::swap(lhs.type_, rhs.type_);
}

}  // namespace wasm_backend

Local<ByteBuffer>::Local(InternalLocalRef val) : val_(val) {
  if (val.val_ < 0 && val_.backingStore_ == nullptr) {
    throw Exception("create Local<ByteBuffer> with null reference");
  }
  wasm_backend::currentEngine();
}

Local<ByteBuffer>::~Local() { commit(); }

ByteBuffer::Type Local<ByteBuffer>::getType() const {
  val_.fillTypeAndSize();
  return val_.type_.value();
}

Local<Value> Local<ByteBuffer>::asValue() const {
  val_.fillWrapperIfNeed();
  return Local<Value>(val_.val_);
}

size_t Local<ByteBuffer>::byteLength() const {
  val_.fillTypeAndSize();
  return val_.size_;
}

void* Local<ByteBuffer>::getRawBytes() const {
  val_.fillBackingStore();
  return val_.backingStore_.get();
}

std::shared_ptr<void> Local<ByteBuffer>::getRawBytesShared() const {
  val_.fillBackingStore();
  return val_.backingStore_;
}

bool Local<ByteBuffer>::isShared() const {
  return wasm_backend::ByteBufferHelper::isSharedByteBuffer(*this);
}

void Local<ByteBuffer>::commit() const { wasm_backend::ByteBufferHelper::commit(*this); }

void Local<ByteBuffer>::sync() const { wasm_backend::ByteBufferHelper::sync(*this); }

}  // namespace script
