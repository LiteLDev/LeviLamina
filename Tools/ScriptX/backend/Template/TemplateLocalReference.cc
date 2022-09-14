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

#include <ScriptX/ScriptX.h>

namespace script {

#define REF_IMPL_BASIC_FUNC(ValueType)                                           \
  Local<ValueType>::Local(const Local<ValueType>& copy) : val_(copy.val_) {}     \
  Local<ValueType>::Local(Local<ValueType>&& move) noexcept : val_(move.val_) {} \
  Local<ValueType>::~Local() {}                                                  \
  Local<ValueType>& Local<ValueType>::operator=(const Local& from) {             \
    Local(from).swap(*this);                                                     \
    return *this;                                                                \
  }                                                                              \
  Local<ValueType>& Local<ValueType>::operator=(Local&& move) noexcept {         \
    Local(std::move(move)).swap(*this);                                          \
    return *this;                                                                \
  }                                                                              \
  void Local<ValueType>::swap(Local& rhs) noexcept { std::swap(val_, rhs.val_); }

#define REF_IMPL_BASIC_EQUALS(ValueType)                                               \
  bool Local<ValueType>::operator==(const script::Local<script::Value>& other) const { \
    return asValue() == other;                                                         \
  }

#define REF_IMPL_BASIC_NOT_VALUE(ValueType)                                         \
  Local<ValueType>::Local(InternalLocalRef val) : val_(val) {}                      \
  Local<String> Local<ValueType>::describe() const { return asValue().describe(); } \
  std::string Local<ValueType>::describeUtf8() const { return asValue().describeUtf8(); }

#define REF_IMPL_TO_VALUE(ValueType) \
  Local<Value> Local<ValueType>::asValue() const { return Local<Value>(/*TMPL: value*/); }

REF_IMPL_BASIC_FUNC(Value)

REF_IMPL_BASIC_FUNC(Object)
REF_IMPL_BASIC_NOT_VALUE(Object)
REF_IMPL_BASIC_EQUALS(Object)
REF_IMPL_TO_VALUE(Object)

REF_IMPL_BASIC_FUNC(String)
REF_IMPL_BASIC_NOT_VALUE(String)
REF_IMPL_BASIC_EQUALS(String)
REF_IMPL_TO_VALUE(String)

REF_IMPL_BASIC_FUNC(Number)
REF_IMPL_BASIC_NOT_VALUE(Number)
REF_IMPL_BASIC_EQUALS(Number)
REF_IMPL_TO_VALUE(Number)

REF_IMPL_BASIC_FUNC(Boolean)
REF_IMPL_BASIC_NOT_VALUE(Boolean)
REF_IMPL_BASIC_EQUALS(Boolean)
REF_IMPL_TO_VALUE(Boolean)

REF_IMPL_BASIC_FUNC(Function)
REF_IMPL_BASIC_NOT_VALUE(Function)
REF_IMPL_BASIC_EQUALS(Function)
REF_IMPL_TO_VALUE(Function)

REF_IMPL_BASIC_FUNC(Array)
REF_IMPL_BASIC_NOT_VALUE(Array)
REF_IMPL_BASIC_EQUALS(Array)
REF_IMPL_TO_VALUE(Array)

REF_IMPL_BASIC_FUNC(ByteBuffer)
REF_IMPL_BASIC_NOT_VALUE(ByteBuffer)
REF_IMPL_BASIC_EQUALS(ByteBuffer)
REF_IMPL_TO_VALUE(ByteBuffer)

REF_IMPL_BASIC_FUNC(Unsupported)
REF_IMPL_BASIC_NOT_VALUE(Unsupported)
REF_IMPL_BASIC_EQUALS(Unsupported)
REF_IMPL_TO_VALUE(Unsupported)

// ==== value ====

Local<Value>::Local() noexcept : val_() {}

Local<Value>::Local(InternalLocalRef v8Local) : val_(v8Local) {}

bool Local<Value>::isNull() const { return false; }

void Local<Value>::reset() {}

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

bool Local<Value>::isString() const { return false; }

bool Local<Value>::isNumber() const { return false; }

bool Local<Value>::isBoolean() const { return false; }

bool Local<Value>::isFunction() const { return false; }

bool Local<Value>::isArray() const { return false; }

bool Local<Value>::isByteBuffer() const { return false; }

bool Local<Value>::isObject() const { return false; }

bool Local<Value>::isUnsupported() const { return false; }

Local<String> Local<Value>::asString() const { throw Exception("can't cast value as String"); }

Local<Number> Local<Value>::asNumber() const { throw Exception("can't cast value as Number"); }

Local<Boolean> Local<Value>::asBoolean() const { throw Exception("can't cast value as Boolean"); }

Local<Function> Local<Value>::asFunction() const {
  throw Exception("can't cast value as Function");
}

Local<Array> Local<Value>::asArray() const { throw Exception("can't cast value as Array"); }

Local<ByteBuffer> Local<Value>::asByteBuffer() const {
  throw Exception("can't cast value as ByteBuffer");
}

Local<Object> Local<Value>::asObject() const { throw Exception("can't cast value as Object"); }

Local<Unsupported> Local<Value>::asUnsupported() const {
  throw Exception("can't cast value as Unsupported");
}

bool Local<Value>::operator==(const script::Local<script::Value>& other) const { return false; }

Local<String> Local<Value>::describe() const { TEMPLATE_NOT_IMPLEMENTED(); }

Local<Value> Local<Object>::get(const script::Local<script::String>& key) const { return {}; }

void Local<Object>::set(const script::Local<script::String>& key,
                        const script::Local<script::Value>& value) const {}

void Local<Object>::remove(const Local<class script::String>& key) const {}
bool Local<Object>::has(const Local<class script::String>& key) const { return true; }

bool Local<Object>::instanceOf(const Local<class script::Value>& type) const { return false; }

std::vector<Local<String>> Local<Object>::getKeys() const { return {}; }

float Local<Number>::toFloat() const { return static_cast<float>(toDouble()); }

double Local<Number>::toDouble() const { return 0; }

int32_t Local<Number>::toInt32() const { return static_cast<int32_t>(toDouble()); }

int64_t Local<Number>::toInt64() const { return static_cast<int64_t>(toDouble()); }

bool Local<Boolean>::value() const { return false; }

Local<Value> Local<Function>::callImpl(const Local<Value>& thiz, size_t size,
                                       const Local<Value>* args) const {
  return {};
}

size_t Local<Array>::size() const { return 0; }

Local<Value> Local<Array>::get(size_t index) const { return {}; }

void Local<Array>::set(size_t index, const script::Local<script::Value>& value) const {}

void Local<Array>::add(const script::Local<script::Value>& value) const { set(size(), value); }

void Local<Array>::clear() const {}

ByteBuffer::Type Local<ByteBuffer>::getType() const { return ByteBuffer::Type::KFloat32; }

bool Local<ByteBuffer>::isShared() const { return true; }

void Local<ByteBuffer>::commit() const {}

void Local<ByteBuffer>::sync() const {}

size_t Local<ByteBuffer>::byteLength() const { return 0; }

void* Local<ByteBuffer>::getRawBytes() const { return nullptr; }

std::shared_ptr<void> Local<ByteBuffer>::getRawBytesShared() const { return {}; }

}  // namespace script
