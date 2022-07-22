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
#include "../../src/utils/Helper.hpp"
#include "trait/TraitReference.h"

namespace script {

#define REF_IMPL_BASIC_FUNC(ValueType)                                                     \
  Local<ValueType>::Local(const Local<ValueType>& copy) : val_(copy.val_) {                \
    qjs_backend::dupValue(val_);                                                           \
  }                                                                                        \
  Local<ValueType>::Local(Local<ValueType>&& move) noexcept : val_(std::move(move.val_)) { \
    move.val_ = JS_UNDEFINED;                                                              \
  }                                                                                        \
  Local<ValueType>::~Local() { qjs_backend::freeValue(val_); }                             \
  Local<ValueType>& Local<ValueType>::operator=(const Local& from) {                       \
    Local(from).swap(*this);                                                               \
    return *this;                                                                          \
  }                                                                                        \
  Local<ValueType>& Local<ValueType>::operator=(Local&& move) noexcept {                   \
    Local(std::move(move)).swap(*this);                                                    \
    return *this;                                                                          \
  }                                                                                        \
  void Local<ValueType>::swap(Local& rhs) noexcept {                                       \
    using std::swap;                                                                       \
    swap(val_, rhs.val_);                                                                  \
  }

#define REF_IMPL_BASIC_EQUALS(ValueType)                                               \
  bool Local<ValueType>::operator==(const script::Local<script::Value>& other) const { \
    return asValue() == other;                                                         \
  }

#define REF_IMPL_BASIC_NOT_VALUE(ValueType)                                         \
  Local<ValueType>::Local(InternalLocalRef val) : val_(std::move(val)) {}           \
  Local<String> Local<ValueType>::describe() const { return asValue().describe(); } \
  std::string Local<ValueType>::describeUtf8() const { return asValue().describeUtf8(); }

#define REF_IMPL_TO_VALUE(ValueType)                  \
  Local<Value> Local<ValueType>::asValue() const {    \
    return Local<Value>(qjs_backend::dupValue(val_)); \
  }

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

Local<Value>::Local() noexcept : val_(JS_UNDEFINED) {}

Local<Value>::Local(InternalLocalRef local) : val_(local) {}

bool Local<Value>::isNull() const {
  return JS_IsNull(val_) || JS_IsUninitialized(val_) || JS_IsUndefined(val_);
}

void Local<Value>::reset() { *this = Local<Value>(); }

ValueKind Local<Value>::getKind() const {
  if (isNull()) {
    return ValueKind::kNull;
  } else if (isString()) {
    return ValueKind::kString;
  } else if (isNumber()) {
    return ValueKind::kNumber;
  } else if (isBoolean()) {
    return ValueKind::kBoolean;
  }

  auto context = qjs_backend::currentContext();

  if (JS_IsFunction(context, val_)) {
    return ValueKind::kFunction;
  } else if (JS_IsArray(context, val_)) {
    return ValueKind::kArray;
  } else if (isByteBuffer()) {
    return ValueKind::kByteBuffer;
  } else if (isObject()) {
    return ValueKind::kObject;
  } else {
    return ValueKind::kUnsupported;
  }
}

bool Local<Value>::isString() const { return JS_IsString(val_); }

bool Local<Value>::isNumber() const { return JS_IsNumber(val_); }

bool Local<Value>::isBoolean() const { return JS_IsBool(val_); }

bool Local<Value>::isFunction() const { return JS_IsFunction(qjs_backend::currentContext(), val_); }

bool Local<Value>::isArray() const { return JS_IsArray(qjs_backend::currentContext(), val_); }

bool Local<Value>::isByteBuffer() const {
  if (!isObject()) return false;

  auto& engine = qjs_backend::currentEngine();
  auto context = engine.context_;

  auto fun = qjs_interop::makeLocal<Function>(
      qjs_backend::dupValue(engine.helperFunctionIsByteBuffer_, context));
  return fun.call({}, *this).asBoolean().value();
}

bool Local<Value>::isObject() const { return JS_IsObject(val_); }

bool Local<Value>::isUnsupported() const { return getKind() == ValueKind::kUnsupported; }

Local<String> Local<Value>::asString() const {
  if (isString()) return Local<String>(qjs_backend::dupValue(val_));
  throw Exception(u8"can't cast value as String");
}

Local<Number> Local<Value>::asNumber() const {
  if (isNumber()) return Local<Number>(qjs_backend::dupValue(val_));
  throw Exception(u8"can't cast value as Number");
}

Local<Boolean> Local<Value>::asBoolean() const {
  if (isBoolean()) return Local<Boolean>(qjs_backend::dupValue(val_));
  throw Exception(u8"can't cast value as Boolean");
}

Local<Function> Local<Value>::asFunction() const {
  if (isFunction()) return Local<Function>(qjs_backend::dupValue(val_));
  throw Exception(u8"can't cast value as Function");
}

Local<Unsupported> Local<Value>::asUnsupported() const {
  if (isUnsupported()) return Local<Unsupported>(qjs_backend::dupValue(val_));
  throw Exception(u8"can't cast value as Unsupported");
}

Local<Array> Local<Value>::asArray() const {
  if (isArray()) return Local<Array>(qjs_backend::dupValue(val_));
  throw Exception("can't cast value as Array");
}

Local<ByteBuffer> Local<Value>::asByteBuffer() const {
  if (isByteBuffer()) return qjs_interop::makeLocal<ByteBuffer>(qjs_backend::dupValue(val_));
  throw Exception("can't cast value as ByteBuffer");
}

Local<Object> Local<Value>::asObject() const {
  if (isObject()) return Local<Object>(qjs_backend::dupValue(val_));
  throw Exception("can't cast value as Object");
}

bool Local<Value>::operator==(const script::Local<script::Value>& other) const {
  if (isNull()) return other.isNull();

  auto& engine = qjs_backend::currentEngine();
  auto context = engine.context_;
#ifdef QUICK_JS_HAS_SCRIPTX_PATCH
  return JS_StrictEqual(context, val_, qjs_interop::peekLocal(other));
#else
  auto fun = qjs_interop::makeLocal<Function>(
      qjs_backend::dupValue(engine.helperFunctionStrictEqual_, context));
  return fun.call({}, *this, other).asBoolean().value();
#endif
}

Local<String> Local<Value>::describe() const {
  auto ret = JS_ToString(qjs_backend::currentContext(), val_);
  qjs_backend::checkException(ret);
  return Local<String>(ret);
}

Local<Value> Local<Object>::get(const script::Local<script::String>& key) const {
  auto sh = key.toStringHolder();
  auto ret = JS_GetPropertyStr(qjs_backend::currentContext(), val_, sh.c_str());
  qjs_backend::checkException(ret);
  return qjs_interop::makeLocal<Value>(ret);
}

void Local<Object>::set(const script::Local<script::String>& key,
                        const script::Local<script::Value>& value) const {
  auto ksh = key.toStringHolder();
  qjs_backend::checkException(JS_SetPropertyStr(qjs_backend::currentContext(), val_, ksh.c_str(),
                                                qjs_interop::getLocal(value)));
}

void Local<Object>::remove(const Local<class script::String>& key) const {
  auto context = qjs_backend::currentContext();
  auto ksh = key.toStringHolder();
  auto atom = JS_NewAtomLen(context, ksh.c_str(), ksh.length());

  auto ret = JS_DeleteProperty(context, val_, atom, 0);
  JS_FreeAtom(context, atom);

  qjs_backend::checkException(ret);
}

bool Local<Object>::has(const Local<class script::String>& key) const {
  auto context = qjs_backend::currentContext();
  auto ksh = key.toStringHolder();
  auto atom = JS_NewAtomLen(context, ksh.c_str(), ksh.length());

  auto ret = JS_HasProperty(context, val_, atom);
  JS_FreeAtom(context, atom);

  qjs_backend::checkException(ret);
  return ret != 0;
}

bool Local<Object>::instanceOf(const Local<class script::Value>& type) const {
  if (!type.isObject()) return false;
  auto ret = JS_IsInstanceOf(qjs_backend::currentContext(), val_, qjs_interop::peekLocal(type));

  qjs_backend::checkException(ret);

  return ret != 0;
}

std::vector<Local<String>> Local<Object>::getKeys() const {
  auto context = qjs_backend::currentContext();
  JSPropertyEnum* list = nullptr;
  uint32_t listLen = 0;

  qjs_backend::checkException(
      JS_GetOwnPropertyNames(context, &list, &listLen, val_,
                             JS_GPN_STRING_MASK | JS_GPN_SYMBOL_MASK | JS_GPN_PRIVATE_MASK));

  std::unique_ptr<JSPropertyEnum, std::function<void(JSPropertyEnum*)>> ptr(
      list, [context](JSPropertyEnum* list) {
        if (list) js_free(context, list);
      });

  std::vector<Local<String>> ret;
  ret.reserve(listLen);

  for (uint32_t i = 0; i < listLen; ++i) {
    ret.push_back(qjs_interop::makeLocal<String>(JS_AtomToString(context, list[i].atom)));
    JS_FreeAtom(context, list[i].atom);
  }
  return ret;
}

float Local<Number>::toFloat() const { return static_cast<float>(toDouble()); }

double Local<Number>::toDouble() const {
  double ret = 0;
  qjs_backend::checkException(JS_ToFloat64(qjs_backend::currentContext(), &ret, val_));
  return ret;
}

int32_t Local<Number>::toInt32() const {
  int32_t ret = 0;
  qjs_backend::checkException(JS_ToInt32(qjs_backend::currentContext(), &ret, val_));
  return ret;
}

int64_t Local<Number>::toInt64() const {
  int64_t ret = 0;
  qjs_backend::checkException(JS_ToInt64(qjs_backend::currentContext(), &ret, val_));
  return ret;
}

bool Local<Boolean>::value() const { return JS_ToBool(qjs_backend::currentContext(), val_) != 0; }

Local<Value> Local<Function>::callImpl(const Local<Value>& thiz, size_t size,
                                       const Local<Value>* args) const {
  auto& engine = qjs_backend::currentEngine();
  auto context = engine.context_;
  JSValue ret = JS_UNDEFINED;

  internal::withNArray<JSValue>(
      size, [this, &engine, context, &ret, &thiz, size, args](JSValue* array) {
        for (size_t i = 0; i < size; ++i) {
          array[i] = qjs_interop::peekLocal(args[i]);
        }

        ret = JS_Call(context, val_,
                      thiz.isObject() ? thiz.val_ : qjs_interop::peekLocal(engine.getGlobal()),
                      static_cast<int>(size), array);
        qjs_backend::checkException(ret);
      });

  engine.scheduleTick();
  return qjs_interop::makeLocal<Value>(ret);
}

size_t Local<Array>::size() const {
  auto& engine = qjs_backend::currentEngine();
  // length
  uint32_t size = 0;
  auto length = JS_GetProperty(engine.context_, val_, engine.lengthAtom_);
  qjs_backend::checkException(length);
  if (JS_IsNumber(length)) {
    JS_ToUint32(engine.context_, &size, length);
    JS_FreeValue(engine.context_, length);
  } else {
    JS_FreeValue(engine.context_, length);
    qjs_backend::checkException(-1, "Local<Array>::size got not a number");
  }

  return size;
}

Local<Value> Local<Array>::get(size_t index) const {
  // own
  auto ret =
      JS_GetPropertyUint32(qjs_backend::currentContext(), val_, static_cast<uint32_t>(index));
  qjs_backend::checkException(ret);
  return qjs_interop::makeLocal<Value>(ret);
}

void Local<Array>::set(size_t index, const script::Local<script::Value>& value) const {
  qjs_backend::checkException(JS_SetPropertyInt64(qjs_backend::currentContext(), val_,
                                                  static_cast<int64_t>(index),
                                                  qjs_interop::getLocal(value)));
}

void Local<Array>::add(const script::Local<script::Value>& value) const { set(size(), value); }

void Local<Array>::clear() const {
  auto& engine = qjs_backend::currentEngine();

  auto number = JS_NewUint32(engine.context_, static_cast<uint32_t>(0));
  qjs_backend::checkException(JS_SetProperty(engine.context_, val_, engine.lengthAtom_, number));
}

namespace qjs_backend {

ByteBufferState::ByteBufferState(JSValue val) : val_(val) {}

ByteBufferState::ByteBufferState(const ByteBufferState& copy) {
  if (JS_IsObject(copy.val_)) {
    qjs_backend::dupValue(copy.val_);
  }
  val_ = copy.val_;
  size_ = copy.size_;
  type_ = copy.type_;
  pointer_ = copy.pointer_;
}

ByteBufferState::ByteBufferState(ByteBufferState&& move) noexcept {
  val_ = move.val_;
  size_ = move.size_;
  type_ = move.type_;
  pointer_ = move.pointer_;

  move.val_ = JS_UNDEFINED;
  move.reset();
}

ByteBufferState::operator JSValue() const { return val_; }

void ByteBufferState::reset() const {
  if (JS_IsObject(val_)) {
    qjs_backend::freeValue(val_);
  }
  val_ = JS_UNDEFINED;
  size_ = kNoSize;
  type_ = ByteBuffer::Type::kUnspecified;
  pointer_ = nullptr;
}

ByteBufferState& ByteBufferState::operator=(JSValue what) {
  reset();
  val_ = what;
  return *this;
}

void ByteBufferState::fillTypeAndSize() const {
  if (size_ == kNoSize) {
    auto& engine = qjs_backend::currentEngine();
    auto context = engine.context_;

    auto fun = qjs_interop::makeLocal<Function>(
        qjs_backend::dupValue(engine.helperFunctionGetByteBufferInfo_, context));

    // ret: [byteBuffer, length, offset, type];
    auto ret =
        fun.call({}, qjs_interop::makeLocal<Value>(qjs_backend::dupValue(val_, context))).asArray();
    auto bufferRef = ret.get(0);
    auto buffer = qjs_interop::peekLocal(bufferRef);
    auto length = ret.get(1).asNumber().toInt64();
    auto offset = ret.get(2).asNumber().toInt64();
    type_ = static_cast<ByteBuffer::Type>(ret.get(3).asNumber().toInt32());

    size_t size;
    auto ptr = JS_GetArrayBuffer(context, &size, buffer);
    if (ptr == nullptr) {
      throw Exception("can't get ArrayBuffer pointer");
    }

    pointer_ = ptr + offset;
    size_ = length;
  }
}

void swap(ByteBufferState& lhs, ByteBufferState& rhs) {
  using std::swap;
  swap(lhs.val_, rhs.val_);
  swap(lhs.size_, rhs.size_);
  swap(lhs.type_, rhs.type_);
  swap(lhs.pointer_, rhs.pointer_);
}

}  // namespace qjs_backend

ByteBuffer::Type Local<ByteBuffer>::getType() const {
  val_.fillTypeAndSize();
  return val_.type_;
}

bool Local<ByteBuffer>::isShared() const { return true; }

void Local<ByteBuffer>::commit() const {}

void Local<ByteBuffer>::sync() const {}

size_t Local<ByteBuffer>::byteLength() const {
  val_.fillTypeAndSize();
  return val_.size_;
}

void* Local<ByteBuffer>::getRawBytes() const {
  val_.fillTypeAndSize();
  return val_.pointer_;
}

std::shared_ptr<void> Local<ByteBuffer>::getRawBytesShared() const {
  return std::shared_ptr<void>(getRawBytes(), [global = Global<ByteBuffer>(*this)](void* ptr) {});
}

}  // namespace script
