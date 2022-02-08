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

#include <utility>
#include <vector>

#include "../../src/Native.hpp"
#include "../../src/Reference.h"
#include "../../src/Utils.h"
#include "../../src/Value.h"
#include "JscEngine.hpp"
#include "JscHelper.hpp"
#include "JscReference.hpp"
#include "trait/TraitReference.h"

namespace script {

namespace jsc_backend {

StringLocalRef::StringLocalRef(JSStringRef rawStringRef) : rawStringRef_(rawStringRef) {
  assert(rawStringRef);
}

StringLocalRef::StringLocalRef(JSValueRef stringRef) : stringRef_(stringRef) { assert(stringRef); }

JSValueRef StringLocalRef::getValue(JSContextRef context) const {
  if (!stringRef_) {
    stringRef_ = JSValueMakeString(context, rawStringRef_.get());
  }
  return stringRef_;
}

JSStringRef StringLocalRef::getString(JSContextRef context) const {
  if (!rawStringRef_) {
    JSValueRef jscException = nullptr;
    rawStringRef_ =
        StringLocalRef::SharedStringRef{JSValueToStringCopy(context, stringRef_, &jscException)};
    JscEngine::checkException(jscException);
  }
  return rawStringRef_.get();
}

StringLocalRef::operator JSValueRef() const {
  return getValue(jsc_backend::currentEngineContextChecked());
}

StringLocalRef& StringLocalRef::operator=(nullptr_t) {
  stringRef_ = nullptr;
  rawStringRef_ = nullptr;
  return *this;
}

StringLocalRef::SharedStringRef StringLocalRef::getSharedStringRef(JSContextRef context) const {
  getString(context);
  return rawStringRef_;
}

bool isNullOrUndefined(JSValueRef value) {
  if (value == nullptr) return true;
  auto ctx = jsc_backend::currentEngineContextChecked();
  auto type = JSValueGetType(ctx, value);
  return type == JSType::kJSTypeNull || type == JSType::kJSTypeUndefined;
}

JSObjectRef valueToObj(JSGlobalContextRef context, JSValueRef value) {
  JSValueRef jscException = nullptr;
  auto ret = JSValueToObject(context, value, &jscException);
  jsc_backend::JscEngine::checkException(jscException);
  return ret;
}

void valueConstructorCheck(JSValueRef value) {
  SCRIPTX_UNUSED(value);
#ifndef NDEBUG
  if (jsc_backend::isNullOrUndefined(value)) throw Exception("null reference");
#endif
}

void valueConstructorCheck(const StringLocalRef&) {}

}  // namespace jsc_backend

// val is created from JSC, so its ref-count is 1
// the create Local directly owns it
// Local<ValueType>::Local(InternalLocalRef val)

#define REF_IMPL_BASIC_FUNC(ValueType)                                                     \
  Local<ValueType>::Local(const Local<ValueType>& copy) : val_(copy.val_) {}               \
  Local<ValueType>::Local(Local<ValueType>&& move) noexcept : val_(std::move(move.val_)) { \
    move.val_ = nullptr;                                                                   \
  }                                                                                        \
  Local<ValueType>::~Local() { val_ = nullptr; }                                           \
  Local<ValueType>& Local<ValueType>::operator=(const Local& from) {                       \
    Local(from).swap(*this);                                                               \
    return *this;                                                                          \
  }                                                                                        \
  Local<ValueType>& Local<ValueType>::operator=(Local&& move) noexcept {                   \
    Local(std::move(move)).swap(*this);                                                    \
    return *this;                                                                          \
  }                                                                                        \
  void Local<ValueType>::swap(Local& rhs) noexcept { std::swap(val_, rhs.val_); }

#define REF_IMPL_BASIC_EQUALS(ValueType)                                               \
  bool Local<ValueType>::operator==(const script::Local<script::Value>& other) const { \
    return asValue() == other;                                                         \
  }

#define REF_IMPL_BASIC_NOT_VALUE(ValueType)                                         \
  Local<ValueType>::Local(InternalLocalRef val) : val_(std::move(val)) {            \
    jsc_backend::valueConstructorCheck(val_);                                       \
  }                                                                                 \
  Local<String> Local<ValueType>::describe() const { return asValue().describe(); } \
  std::string Local<ValueType>::describeUtf8() const { return asValue().describeUtf8(); }

#define REF_IMPL_TO_VALUE(ValueType) \
  Local<Value> Local<ValueType>::asValue() const { return Local<Value>(val_); }

REF_IMPL_BASIC_FUNC(Value)

REF_IMPL_BASIC_FUNC(Object)
REF_IMPL_BASIC_NOT_VALUE(Object)
REF_IMPL_BASIC_EQUALS(Object)
REF_IMPL_TO_VALUE(Object)

REF_IMPL_BASIC_FUNC(String)
REF_IMPL_BASIC_NOT_VALUE(String)
REF_IMPL_BASIC_EQUALS(String)

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

bool Local<Value>::isNull() const { return jsc_backend::isNullOrUndefined(val_); }

void Local<Value>::reset() { val_ = nullptr; }

ValueKind Local<Value>::getKind() const {
  if (val_ == nullptr) {
    return ValueKind::kNull;
  }

  auto ctx = jsc_backend::currentEngineContextChecked();
  auto type = JSValueGetType(ctx, val_);

  if (type == JSType::kJSTypeUndefined || type == JSType::kJSTypeNull) {
    return ValueKind::kNull;
  } else if (type == JSType::kJSTypeString) {
    return ValueKind::kString;
  } else if (type == JSType::kJSTypeNumber) {
    return ValueKind::kNumber;
  } else if (type == JSType::kJSTypeBoolean) {
    return ValueKind::kBoolean;
  } else if (JSValueIsArray(ctx, val_)) {
    return ValueKind::kArray;
  } else if (JSValueIsObject(ctx, val_)) {
    auto obj = jsc_backend::valueToObj(ctx, val_);
    if (JSObjectIsFunction(ctx, obj)) {
      return ValueKind::kFunction;
    }
    if (isByteBuffer()) {
      return ValueKind::kByteBuffer;
    }
    return ValueKind::kObject;
  } else {
    return ValueKind::kUnsupported;
  }
}

bool Local<Value>::isString() const {
  if (val_ == nullptr) return false;
  return JSValueGetType(jsc_backend::currentEngineContextChecked(), val_) == JSType::kJSTypeString;
}

bool Local<Value>::isNumber() const {
  if (val_ == nullptr) return false;
  return JSValueGetType(jsc_backend::currentEngineContextChecked(), val_) == JSType::kJSTypeNumber;
}

bool Local<Value>::isBoolean() const {
  if (val_ == nullptr) return false;
  return JSValueGetType(jsc_backend::currentEngineContextChecked(), val_) == JSType::kJSTypeBoolean;
}

bool Local<Value>::isFunction() const {
  if (val_ == nullptr) return false;
  auto ctx = jsc_backend::currentEngineContextChecked();
  return JSValueIsObject(ctx, val_) && JSObjectIsFunction(ctx, const_cast<JSObjectRef>(val_));
}

bool Local<Value>::isArray() const {
  if (val_ == nullptr) return false;
  return JSValueIsArray(jsc_backend::currentEngineContextChecked(), val_);
}

bool Local<Value>::isByteBuffer() const {
  if (val_ == nullptr) return false;

  if (jsc_backend::JscEngine::hasByteBufferAPI_) {
    JSValueRef jscException = nullptr;
    auto context = jsc_backend::currentEngineContextChecked();

    bool ret = JSValueGetTypedArrayType(context, val_, &jscException) != kJSTypedArrayTypeNone;
    jsc_backend::JscEngine::checkException(jscException);
    if (ret) return true;

    // check is DataView
    if (JSValueIsObject(context, val_)) {
      auto ptr = JSObjectGetTypedArrayBytesPtr(context, jsc_backend::valueToObj(context, val_),
                                               &jscException);
      jsc_backend::JscEngine::checkException(jscException);
      return ptr != nullptr;
    }
  } else {
    return jsc_backend::currentEngine()->isByteBuffer_.get().call({}, *this).asBoolean().value();
  }
  return false;
}

bool Local<Value>::isObject() const {
  return val_ != nullptr && JSValueIsObject(jsc_backend::currentEngineContextChecked(), val_);
}

bool Local<Value>::isUnsupported() const { return getKind() == ValueKind::kUnsupported; }

Local<String> Local<Value>::asString() const {
  if (isString()) return Local<String>{jsc_backend::StringLocalRef(val_)};
  throw Exception("can't cast value as String");
}

Local<Number> Local<Value>::asNumber() const {
  if (isNumber()) return Local<Number>{val_};
  throw Exception("can't cast value as Number");
}

Local<Boolean> Local<Value>::asBoolean() const {
  if (isBoolean()) return Local<Boolean>{val_};
  throw Exception("can't cast value as Boolean");
}

Local<Function> Local<Value>::asFunction() const {
  if (isFunction()) {
    return Local<Function>{
        jsc_backend::valueToObj(jsc_backend::currentEngineContextChecked(), val_)};
  }
  throw Exception("can't cast value as Function");
}

Local<Array> Local<Value>::asArray() const {
  if (isArray()) {
    return Local<Array>{jsc_backend::valueToObj(jsc_backend::currentEngineContextChecked(), val_)};
  }
  throw Exception("can't cast value as Array");
}

Local<ByteBuffer> Local<Value>::asByteBuffer() const {
  if (isByteBuffer()) {
    return Local<ByteBuffer>{
        jsc_backend::valueToObj(jsc_backend::currentEngineContextChecked(), val_)};
  }
  throw Exception("can't cast value as ByteBuffer");
}

Local<Object> Local<Value>::asObject() const {
  if (isObject()) {
    return Local<Object>{jsc_backend::valueToObj(jsc_backend::currentEngineContextChecked(), val_)};
  }
  throw Exception("can't cast value as Object");
}

Local<Unsupported> Local<Value>::asUnsupported() const {
  if (isUnsupported()) return Local<Unsupported>{val_};
  throw Exception("can't cast value as Unsupported");
}

bool Local<Value>::operator==(const script::Local<script::Value>& other) const {
  if (isNull()) return other.isNull();
  return JSValueIsStrictEqual(jsc_backend::currentEngineContextChecked(),
                              const_cast<JSValueRef>(val_), const_cast<JSValueRef>(other.val_));
}

Local<String> Local<Value>::describe() const {
  if (isNull()) return String::newString("null");

  if (isString()) {
    return asString();
  } else {
    JSValueRef jscException = nullptr;
    auto context = jsc_backend::currentEngineContextChecked();

    auto str = JSValueToStringCopy(context, val_, &jscException);
    jsc_backend::JscEngine::checkException(jscException);
    return Local<String>(jsc_backend::StringLocalRef(str));
  }
}

Local<Value> Local<String>::asValue() const {
  return Local<Value>(val_.getValue(jsc_backend::currentEngineContextChecked()));
}

Local<Value> Local<Object>::get(const script::Local<script::String>& key) const {
  JSValueRef jscException = nullptr;
  auto context = jsc_backend::currentEngineContextChecked();

  Local<Value> ret(JSObjectGetProperty(context, jsc_backend::JscEngine::toJsc(context, *this),
                                       key.val_.getString(context), &jscException));
  jsc_backend::JscEngine::checkException(jscException);
  return ret;
}

void Local<Object>::set(const script::Local<script::String>& key,
                        const script::Local<script::Value>& value) const {
  JSValueRef jscException = nullptr;
  auto context = jsc_backend::currentEngineContextChecked();

  JSObjectSetProperty(context, jsc_backend::JscEngine::toJsc(context, *this),
                      key.val_.getString(context), jsc_backend::JscEngine::toJsc(context, value),
                      kJSPropertyAttributeNone, &jscException);
  jsc_backend::JscEngine::checkException(jscException);
}

void Local<Object>::remove(const Local<class script::String>& key) const {
  JSValueRef jscException = nullptr;
  auto context = jsc_backend::currentEngineContextChecked();

  JSObjectDeleteProperty(context, jsc_backend::JscEngine::toJsc(context, *this),
                         key.val_.getString(context), &jscException);

  jsc_backend::JscEngine::checkException(jscException);
}

bool Local<Object>::has(const Local<class script::String>& key) const {
  auto context = jsc_backend::currentEngineContextChecked();

  return JSObjectHasProperty(context, jsc_backend::JscEngine::toJsc(context, *this),
                             key.val_.getString(context));
}

bool Local<Object>::instanceOf(const Local<class script::Value>& type) const {
  if (!type.isObject()) {
    return false;
  }
  JSValueRef jscException = nullptr;
  auto context = jsc_backend::currentEngineContextChecked();

  auto ret = JSValueIsInstanceOfConstructor(context, jsc_backend::JscEngine::toJsc(context, *this),
                                            jsc_backend::JscEngine::toJsc(context, type.asObject()),
                                            &jscException);

  jsc_backend::JscEngine::checkException(jscException);

  return ret;
}

std::vector<Local<String>> Local<Object>::getKeys() const {
  auto context = jsc_backend::currentEngineContextChecked();

  auto array = JSObjectCopyPropertyNames(context, val_);
  auto count = JSPropertyNameArrayGetCount(array);

  std::vector<Local<String>> ret;
  ret.reserve(count);

  for (size_t i = 0; i < count; ++i) {
    auto name = JSPropertyNameArrayGetNameAtIndex(array, i);
    JSStringRetain(name);
    ret.push_back(Local<String>(jsc_backend::StringLocalRef(name)));
  }

  JSPropertyNameArrayRelease(array);

  return ret;
}

float Local<Number>::toFloat() const { return static_cast<float>(toDouble()); }

double Local<Number>::toDouble() const {
  JSValueRef jscException = nullptr;

  double ret = JSValueToNumber(jsc_backend::currentEngineContextChecked(), val_, &jscException);
  jsc_backend::JscEngine::checkException(jscException);
  return ret;
}

int32_t Local<Number>::toInt32() const { return static_cast<int32_t>(toDouble()); }

int64_t Local<Number>::toInt64() const { return static_cast<int64_t>(toDouble()); }

bool Local<Boolean>::value() const {
  return JSValueToBoolean(jsc_backend::currentEngineContextChecked(), val_);
}

Local<Value> Local<Function>::callImpl(const script::Local<script::Value>& thiz, size_t size,
                                       const Local<Value>* args) const {
  JSValueRef jscException = nullptr;
  auto context = jsc_backend::currentEngineContextChecked();

  return jsc_backend::toJscValues<Local<Value>>(
      context, size, args, [this, context, &thiz, size, &jscException](JSValueRef* array) {
        Local<Value> ret(JSObjectCallAsFunction(
            context, val_,
            thiz.isObject() ? jsc_backend::JscEngine::toJsc(context, thiz.asObject()) : nullptr,
            size, array, &jscException));
        jsc_backend::JscEngine::checkException(jscException);
        return ret;
      });
}

size_t Local<Array>::size() const {
  auto len = Local<Object>(val_).get("length");
  if (!len.isNull()) return len.asNumber().toInt32();
  return 0;
}

Local<Value> Local<Array>::get(size_t index) const {
  JSValueRef jscException = nullptr;

  Local<Value> ret(JSObjectGetPropertyAtIndex(jsc_backend::currentEngineContextChecked(), val_,
                                              static_cast<unsigned>(index), &jscException));
  jsc_backend::JscEngine::checkException(jscException);
  return ret;
}

void Local<Array>::set(size_t index, const script::Local<script::Value>& value) const {
  JSValueRef jscException = nullptr;
  auto context = jsc_backend::currentEngineContextChecked();

  JSObjectSetPropertyAtIndex(context, val_, static_cast<unsigned>(index),
                             jsc_backend::JscEngine::toJsc(context, value), &jscException);
  jsc_backend::JscEngine::checkException(jscException);
}

void Local<Array>::add(const script::Local<script::Value>& value) const { set(size(), value); }

void Local<Array>::clear() const {
  JSValueRef jscException = nullptr;

  Local<Object>(val_).set("length", Number::newNumber(0));
  jsc_backend::JscEngine::checkException(jscException);
}

namespace {
ByteBuffer::Type mapType(JSTypedArrayType type) {
  switch (type) {
    case kJSTypedArrayTypeInt8Array:
      return ByteBuffer::Type::kInt8;
    case kJSTypedArrayTypeUint8Array:
    case kJSTypedArrayTypeUint8ClampedArray:
      return ByteBuffer::Type::kUint8;
    case kJSTypedArrayTypeInt16Array:
      return ByteBuffer::Type::kInt16;
    case kJSTypedArrayTypeUint16Array:
      return ByteBuffer::Type::kUint16;
    case kJSTypedArrayTypeInt32Array:
      return ByteBuffer::Type::kInt32;
    case kJSTypedArrayTypeUint32Array:
      return ByteBuffer::Type::kUint32;
    case kJSTypedArrayTypeFloat32Array:
      return ByteBuffer::Type::KFloat32;
    case kJSTypedArrayTypeFloat64Array:
      return ByteBuffer::Type::kFloat64;
    case kJSTypedArrayTypeArrayBuffer:
    default:
      return ByteBuffer::Type::kUnspecified;
  }
}
}  // namespace

static void assertLowLevelApiUsageOfByteBuffer(bool has) {
  if (!has) {
    throw std::runtime_error(
        "Calling script::ByteBuffer related api on iOS-9/macOS-10.11 or lower is not supported for "
        "now");
  }
}
ByteBuffer::Type Local<ByteBuffer>::getType() const {
  assertLowLevelApiUsageOfByteBuffer(jsc_backend::JscEngine::hasByteBufferAPI_);

  JSValueRef jscException = nullptr;

  auto type =
      JSValueGetTypedArrayType(jsc_backend::currentEngineContextChecked(), val_, &jscException);
  jsc_backend::JscEngine::checkException(jscException);

  return mapType(type);
}

size_t Local<ByteBuffer>::byteLength() const {
  assertLowLevelApiUsageOfByteBuffer(jsc_backend::JscEngine::hasByteBufferAPI_);

  JSValueRef jscException = nullptr;

  auto context = jsc_backend::currentEngineContextChecked();
  auto type = JSValueGetTypedArrayType(context, val_, &jscException);
  jsc_backend::JscEngine::checkException(jscException);

  if (type == kJSTypedArrayTypeArrayBuffer) {
    auto len = JSObjectGetArrayBufferByteLength(context, val_, &jscException);
    jsc_backend::JscEngine::checkException(jscException);
    return len;
  } else {
    auto len = JSObjectGetTypedArrayByteLength(context, val_, &jscException);
    jsc_backend::JscEngine::checkException(jscException);
    return len;
  }
}

void* Local<ByteBuffer>::getRawBytes() const {
  assertLowLevelApiUsageOfByteBuffer(jsc_backend::JscEngine::hasByteBufferAPI_);

  auto context = jsc_backend::currentEngineContextChecked();

  JSValueRef jscException = nullptr;
  auto type = JSValueGetTypedArrayType(context, val_, &jscException);
  jsc_backend::JscEngine::checkException(jscException);

  if (type == kJSTypedArrayTypeArrayBuffer) {
    auto ret = JSObjectGetArrayBufferBytesPtr(context, val_, &jscException);
    jsc_backend::JscEngine::checkException(jscException);
    return ret;
  } else {
    auto ret = JSObjectGetTypedArrayBytesPtr(context, val_, &jscException);
    jsc_backend::JscEngine::checkException(jscException);

    auto offset = JSObjectGetTypedArrayByteOffset(context, val_, &jscException);
    jsc_backend::JscEngine::checkException(jscException);

    // NOLINTNEXTLINE (cppcoreguidelines-pro-bounds-pointer-arithmetic)
    return static_cast<uint8_t*>(ret) + offset;
  }
}

std::shared_ptr<void> Local<ByteBuffer>::getRawBytesShared() const {
  assertLowLevelApiUsageOfByteBuffer(jsc_backend::JscEngine::hasByteBufferAPI_);

  auto ptr = getRawBytes();
  auto engine = jsc_backend::currentEngine();

  auto id = engine->keepReference(*this);
  return std::shared_ptr<void>(ptr, [engine, id](void*) { engine->removeKeptReference(id); });
}

bool Local<ByteBuffer>::isShared() const { return true; }

void Local<ByteBuffer>::commit() const {}

void Local<ByteBuffer>::sync() const {}

}  // namespace script
