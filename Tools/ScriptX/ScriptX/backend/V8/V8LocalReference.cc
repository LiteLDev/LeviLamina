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

#include <cassert>
#include <utility>
#include "../../src/Native.hpp"
#include "../../src/Reference.h"
#include "../../src/Utils.h"
#include "V8Engine.h"
#include "V8Helper.h"
#include "V8Helper.hpp"

namespace script {

#define REF_IMPL_BASIC_FUNC(ValueType)                                          \
  Local<ValueType>::Local(const Local<ValueType>& copy) : val_(copy.val_) {}    \
  Local<ValueType>::Local(Local<ValueType>&& from) noexcept : val_(from.val_) { \
    from.val_.Clear();                                                          \
  }                                                                             \
  Local<ValueType>::~Local() {                                                  \
    assert(val_.IsEmpty() || EngineScope::currentEngine() != nullptr);          \
  }                                                                             \
  Local<ValueType>& Local<ValueType>::operator=(const Local& from) {            \
    if (&from != this) {                                                        \
      val_ = from.val_;                                                         \
    }                                                                           \
    return *this;                                                               \
  }                                                                             \
  Local<ValueType>& Local<ValueType>::operator=(Local&& move) noexcept {        \
    if (&move != this) {                                                        \
      val_ = move.val_;                                                         \
      move.val_.Clear();                                                        \
    }                                                                           \
    return *this;                                                               \
  }                                                                             \
  void Local<ValueType>::swap(Local& rhs) noexcept {                            \
    if (&rhs != this) {                                                         \
      std::swap(val_, rhs.val_);                                                \
    }                                                                           \
  }

// if Local is created with null ref, it's an error
#define REF_IMPL_BASIC_NOT_VALUE(ValueType)                                               \
  Local<ValueType>::Local(InternalLocalRef v8Local) : val_(v8Local) {                     \
    if (val_.IsEmpty() || val_->IsNullOrUndefined()) throw Exception("null reference");   \
  }                                                                                       \
  Local<String> Local<ValueType>::describe() const { return asValue().describe(); }       \
  std::string Local<ValueType>::describeUtf8() const { return asValue().describeUtf8(); } \
  bool Local<ValueType>::operator==(const script::Local<script::Value>& other) const {    \
    if (other.isNull()) return false;                                                     \
    return val_->StrictEquals(other.val_);                                                \
  }

#define REF_IMPL_TO_VALUE(ValueType) \
  Local<Value> Local<ValueType>::asValue() const { return Local<Value>(val_.As<v8::Value>()); }

REF_IMPL_BASIC_FUNC(Value)

REF_IMPL_BASIC_FUNC(Object)
REF_IMPL_BASIC_NOT_VALUE(Object)
REF_IMPL_TO_VALUE(Object)

REF_IMPL_BASIC_FUNC(String)
REF_IMPL_BASIC_NOT_VALUE(String)
REF_IMPL_TO_VALUE(String)

REF_IMPL_BASIC_FUNC(Number)
REF_IMPL_BASIC_NOT_VALUE(Number)
REF_IMPL_TO_VALUE(Number)

REF_IMPL_BASIC_FUNC(Boolean)
REF_IMPL_BASIC_NOT_VALUE(Boolean)
REF_IMPL_TO_VALUE(Boolean)

REF_IMPL_BASIC_FUNC(Function)
REF_IMPL_BASIC_NOT_VALUE(Function)
REF_IMPL_TO_VALUE(Function)

REF_IMPL_BASIC_FUNC(Array)
REF_IMPL_BASIC_NOT_VALUE(Array)
REF_IMPL_TO_VALUE(Array)

REF_IMPL_BASIC_FUNC(ByteBuffer)
REF_IMPL_BASIC_NOT_VALUE(ByteBuffer)
REF_IMPL_TO_VALUE(ByteBuffer)

REF_IMPL_BASIC_FUNC(Unsupported)
REF_IMPL_BASIC_NOT_VALUE(Unsupported)
REF_IMPL_TO_VALUE(Unsupported)

// ==== value ====

Local<Value>::Local() noexcept : val_() {}

Local<Value>::Local(InternalLocalRef v8Local) : val_(v8Local) {}

bool Local<Value>::isNull() const { return val_.IsEmpty() || val_->IsNullOrUndefined(); }

void Local<Value>::reset() { val_.Clear(); }

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

bool Local<Value>::operator==(const script::Local<script::Value>& other) const {
  if (isNull()) return other.isNull();
  return val_->StrictEquals(other.val_);
}

bool Local<Value>::isObject() const { return !isNull() && val_->IsObject(); }

Local<Object> Local<Value>::asObject() const {
  if (isObject()) return Local<Object>(val_.As<v8::Object>());
  throw Exception(u8"can't cast value as Object");
}

bool Local<Value>::isArray() const { return !isNull() && val_->IsArray(); }

Local<Array> Local<Value>::asArray() const {
  if (isArray()) return Local<Array>(val_.As<v8::Array>());
  throw Exception(u8"can't cast value as Array");
}

bool Local<Value>::isByteBuffer() const {
  return !isNull() && (val_->IsArrayBuffer() || val_->IsArrayBufferView());
}

Local<ByteBuffer> Local<Value>::asByteBuffer() const {
  if (isByteBuffer()) return Local<ByteBuffer>(val_);
  throw Exception(u8"can't cast value as ByteBuffer");
}

bool Local<Value>::isString() const { return !isNull() && val_->IsString(); }

Local<String> Local<Value>::asString() const {
  if (isString()) return Local<String>(val_.As<v8::String>());
  throw Exception(u8"can't cast value as String");
}

bool Local<Value>::isNumber() const { return !isNull() && val_->IsNumber(); }

Local<Number> Local<Value>::asNumber() const {
  if (isNumber()) return Local<Number>(val_.As<v8::Number>());
  throw Exception(u8"can't cast value as Number");
}

bool Local<Value>::isBoolean() const { return !isNull() && val_->IsBoolean(); }

Local<Boolean> Local<Value>::asBoolean() const {
  if (isBoolean()) return Local<Boolean>(val_.As<v8::Boolean>());
  throw Exception(u8"can't cast value as Boolean");
}

bool Local<Value>::isFunction() const { return !isNull() && val_->IsFunction(); }

Local<Function> Local<Value>::asFunction() const {
  if (isFunction()) return Local<Function>(val_.As<v8::Function>());
  throw Exception(u8"can't cast value as Function");
}

bool Local<Value>::isUnsupported() const {
  return !isNull() && !isObject() && !isString() && !isNumber() && !isBoolean() && !isFunction();
}

Local<Unsupported> Local<Value>::asUnsupported() const {
  if (isUnsupported()) return Local<Unsupported>(val_.As<v8::Value>());
  throw Exception(u8"can't cast value as Unsupported");
}

Local<String> Local<Value>::describe() const {
  if (isNull()) return String::newString(u8"null");

  auto&& [isolate, context] = v8_backend::currentEngineIsolateAndContextChecked();

  v8::TryCatch tryCatch(isolate);
  auto maybe = val_->ToString(context);
  return Local<String>(maybe.ToLocalChecked());
}

Local<Value> Local<Object>::get(const script::Local<script::String>& key) const {
  auto&& [isolate, context] = v8_backend::currentEngineIsolateAndContextChecked();

  v8::TryCatch tryCatch(isolate);
  auto v8Key = v8_backend::V8Engine::toV8(isolate, key);
  auto maybe = val_->Get(context, v8Key);
  v8_backend::checkException(tryCatch);
  return v8_backend::V8Engine::make<Local<Value>>(maybe.ToLocalChecked());
}

void Local<Object>::set(const script::Local<script::String>& key,
                        const script::Local<script::Value>& value) const {
  auto&& [isolate, context] = v8_backend::currentEngineIsolateAndContextChecked();

  v8::TryCatch tryCatch(isolate);
  auto v8Key = v8_backend::V8Engine::toV8(isolate, key);
  auto v8Value = v8_backend::V8Engine::toV8(isolate, value);
  auto ret = val_->Set(context, v8Key, v8Value);
  (void)ret;
  v8_backend::checkException(tryCatch);
}

void Local<Object>::remove(const Local<class script::String>& key) const {
  auto&& [isolate, context] = v8_backend::currentEngineIsolateAndContextChecked();

  v8::TryCatch tryCatch(isolate);

  auto success = val_->Delete(context, v8_backend::V8Engine::toV8(isolate, key));
  (void)success;

  v8_backend::checkException(tryCatch);
}

bool Local<Object>::has(const Local<class script::String>& key) const {
  auto&& [isolate, context] = v8_backend::currentEngineIsolateAndContextChecked();

  v8::TryCatch tryCatch(isolate);

  auto ret = val_->Has(context, v8_backend::V8Engine::toV8(isolate, key));

  v8_backend::checkException(tryCatch);

  return ret.ToChecked();
}

bool Local<Object>::instanceOf(const Local<class script::Value>& type) const {
  if (!type.isObject()) {
    return false;
  }

  auto&& [isolate, context] = v8_backend::currentEngineIsolateAndContextChecked();

  v8::TryCatch tryCatch(isolate);

  auto ret = val_->InstanceOf(context, v8_backend::V8Engine::toV8(isolate, type.asObject()));

  v8_backend::checkException(tryCatch);

  return ret.ToChecked();
}

std::vector<Local<String>> Local<Object>::getKeys() const {
  auto isolate = v8_backend::currentEngineIsolateChecked();
  auto context = v8_backend::currentEngineContextChecked();
  v8::TryCatch tryCatch(isolate);

  auto maybeArray = val_->GetOwnPropertyNames(context);

  v8_backend::checkException(tryCatch);

  auto array = maybeArray.ToLocalChecked();
  std::vector<Local<String>> ret;
  ret.reserve(array->Length());

  for (uint32_t i = 0; i < array->Length(); ++i) {
    v8::EscapableHandleScope scope(isolate);
    auto maybeValue = array->Get(context, i);
    v8_backend::checkException(tryCatch);
    auto value = maybeValue.ToLocalChecked();
    if (value->IsString()) {
      ret.push_back(
          v8_backend::V8Engine::make<Local<String>>(scope.Escape(value.As<v8::String>())));
    }
  }

  return ret;
}

int32_t Local<Number>::toInt32() const { return static_cast<int32_t>(val_->Value()); }

int64_t Local<Number>::toInt64() const { return static_cast<int64_t>(val_->Value()); }

float Local<Number>::toFloat() const { return static_cast<float>(toDouble()); }

double Local<Number>::toDouble() const { return val_->Value(); }

bool Local<Boolean>::value() const { return val_->Value(); }

Local<Value> Local<Function>::callImpl(const script::Local<script::Value>& thiz, size_t size,
                                       const Local<Value>* args) const {
  auto [isolate, context] = v8_backend::currentEngineIsolateAndContextChecked();
  return v8_backend::toV8ValueArray<Local<Value>>(
      isolate, size, args, [this, &thiz, size, iso = isolate, &ctx = context](auto* v8Args) {
        v8::TryCatch tryCatch(iso);
        const v8::Local<v8::Value>& receiver = v8_backend::V8Engine::toV8(iso, thiz);
        auto ret = val_->Call(ctx, receiver, static_cast<int>(size), v8Args);
        v8_backend::checkException(tryCatch);
        return Local<Value>{ret.ToLocalChecked()};
      });
}

size_t Local<Array>::size() const { return val_->Length(); }

Local<Value> Local<Array>::get(size_t index) const {
  auto&& [isolate, context] = v8_backend::currentEngineIsolateAndContextChecked();

  v8::TryCatch tryCatch(isolate);
  auto ret = val_->Get(context, static_cast<uint32_t>(index));
  v8_backend::checkException(tryCatch);

  return Local<Value>(ret.ToLocalChecked());
}

void Local<Array>::set(size_t index, const script::Local<script::Value>& value) const {
  auto&& [isolate, context] = v8_backend::currentEngineIsolateAndContextChecked();

  v8::TryCatch tryCatch(isolate);
  auto ret =
      val_->Set(context, static_cast<uint32_t>(index), v8_backend::V8Engine::toV8(isolate, value));
  (void)ret;
  v8_backend::checkException(tryCatch);
}

void Local<Array>::add(const script::Local<script::Value>& value) const { set(size(), value); }

void Local<Array>::clear() const {
  auto&& [isolate, context] = v8_backend::currentEngineIsolateAndContextChecked();

  v8::TryCatch tryCatch(isolate);
  auto ret = val_.As<v8::Object>()->Set(
      context, v8_backend::V8Engine::toV8(isolate, String::newString(u8"length")),
      v8::Number::New(isolate, 0));
  (void)ret;
  v8_backend::checkException(tryCatch);
}

ByteBuffer::Type Local<ByteBuffer>::getType() const {
  if (val_->IsArrayBuffer()) {
    return ByteBuffer::Type::kUnspecified;
  } else if (val_->IsArrayBufferView()) {
    if (val_->IsDataView()) {
      return ByteBuffer::Type::kUnspecified;
    } else if (val_->IsInt8Array()) {
      return ByteBuffer::Type::kInt8;
    } else if (val_->IsUint8Array() || val_->IsUint8ClampedArray()) {
      return ByteBuffer::Type::kUint8;
    } else if (val_->IsInt16Array()) {
      return ByteBuffer::Type::kInt16;
    } else if (val_->IsUint16Array()) {
      return ByteBuffer::Type::kUint16;
    } else if (val_->IsInt32Array()) {
      return ByteBuffer::Type::kInt32;
    } else if (val_->IsUint32Array()) {
      return ByteBuffer::Type::kUint32;
    } else if (val_->IsBigInt64Array()) {
      return ByteBuffer::Type::kInt64;
    } else if (val_->IsBigUint64Array()) {
      return ByteBuffer::Type::kUint64;
    } else if (val_->IsFloat32Array()) {
      return ByteBuffer::Type::KFloat32;
    } else if (val_->IsFloat64Array()) {
      return ByteBuffer::Type::kFloat64;
    }
  }
  throw Exception(u8"unsupported ArrayBufferView type");
}

size_t Local<ByteBuffer>::byteLength() const {
  if (val_->IsArrayBuffer()) {
    return val_.As<v8::ArrayBuffer>()->ByteLength();
  } else if (val_->IsArrayBufferView()) {
    auto view = val_.As<v8::ArrayBufferView>();
    return view->ByteLength();
  }
  throw Exception(u8"unsupported ArrayBufferView type");
}

#if V8_MAJOR_VERSION >= 8

// v8 8.0 introduced new api for this
// https://docs.google.com/document/d/1sTc_jRL87Fu175Holm5SV0kajkseGl2r8ifGY76G35k/edit

void* Local<ByteBuffer>::getRawBytes() const {
  if (val_->IsArrayBuffer()) {
    return val_.As<v8::ArrayBuffer>()->GetBackingStore()->Data();
  } else if (val_->IsArrayBufferView()) {
    auto view = val_.As<v8::ArrayBufferView>();
    auto offset = view->ByteOffset();
    auto data = view->Buffer()->GetBackingStore()->Data();

    // NOLINTNEXTLINE(cppcoreguidelines-pro-bounds-pointer-arithmetic)
    return static_cast<uint8_t*>(data) + offset;
  }
  throw Exception(u8"unsupported ArrayBufferView type");
}

std::shared_ptr<void> Local<ByteBuffer>::getRawBytesShared() const {
  if (val_->IsArrayBuffer()) {
    auto store = val_.As<v8::ArrayBuffer>()->GetBackingStore();
    return {std::move(store), store->Data()};  // NOLINT(performance-move-const-arg)
  } else if (val_->IsArrayBufferView()) {
    auto view = val_.As<v8::ArrayBufferView>();
    auto offset = view->ByteOffset();
    auto store = view->Buffer()->GetBackingStore();

    // NOLINTNEXTLINE(cppcoreguidelines-pro-bounds-pointer-arithmetic)
    auto data = static_cast<uint8_t*>(store->Data()) + offset;

    return {std::move(store), data};  // NOLINT(performance-move-const-arg)
  }
  throw Exception(u8"unsupported ArrayBufferView type");
}

#else

void* Local<ByteBuffer>::getRawBytes() const {
  if (val_->IsArrayBuffer()) {
    return val_.As<v8::ArrayBuffer>()->GetContents().Data();
  } else if (val_->IsArrayBufferView()) {
    auto view = val_.As<v8::ArrayBufferView>();
    auto offset = view->ByteOffset();
    auto data = view->Buffer()->GetContents().Data();

    return static_cast<uint8_t*>(data) + offset;
  }
  throw Exception(u8"unsupported ArrayBufferView type");
}

std::shared_ptr<void> Local<ByteBuffer>::getRawBytesShared() const {
  void* ptr;
  if (val_->IsArrayBuffer()) {
    ptr = val_.As<v8::ArrayBuffer>()->GetContents().Data();
  } else if (val_->IsArrayBufferView()) {
    auto view = val_.As<v8::ArrayBufferView>();
    auto offset = view->ByteOffset();
    auto data = view->Buffer()->GetContents().Data();

    ptr = static_cast<uint8_t*>(data) + offset;
  } else {
    throw Exception(u8"unsupported ArrayBufferView type");
  }

  auto engine = v8_backend::currentEngine();
  auto id = engine->keepReference(*this);

  return std::shared_ptr<void>(ptr, [engine, id](void*) { engine->removeKeptReference(id); });
}

#endif

bool Local<ByteBuffer>::isShared() const { return true; }

void Local<ByteBuffer>::commit() const {}

void Local<ByteBuffer>::sync() const {}

}  // namespace script
