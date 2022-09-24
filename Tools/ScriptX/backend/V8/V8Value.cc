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
#include "../../src/Utils.h"
#include "V8Engine.h"
#include "V8Helper.hpp"

namespace script {

Local<Number> Number::newNumber(int32_t value) {
  return Local<Number>(v8::Integer::New(v8_backend::currentEngineIsolateChecked(), value));
}

Local<Number> Number::newNumber(int64_t value) { return newNumber(static_cast<double>(value)); }

Local<Number> Number::newNumber(float value) { return newNumber(static_cast<double>(value)); }

Local<Number> Number::newNumber(double value) {
  return Local<Number>(v8::Number::New(v8_backend::currentEngineIsolateChecked(), value));
}

Local<Object> Object::newObject() {
  return Local<Object>(v8::Object::New(v8_backend::currentEngineIsolateChecked()));
}

Local<Object> Object::newObjectImpl(const Local<Value>& type, size_t size,
                                    const Local<Value>* args) {
  auto&& [isolate, context] = v8_backend::currentEngineIsolateAndContextChecked();

  v8::TryCatch tryCatch(isolate);

  auto ret = v8_backend::toV8ValueArray<v8::MaybeLocal<v8::Object>>(
      isolate, size, args, [&type, &size, iso = isolate, &ctx = context](auto* v8Args) {
        return v8_backend::V8Engine::toV8(iso, type.asFunction())
            ->NewInstance(ctx, static_cast<int>(size), v8Args);
      });
  v8_backend::checkException(tryCatch);
  return Local<Object>(ret.ToLocalChecked());
}

Local<String> String::newString(const char* utf8) {
  if (!utf8) throw Exception("null pointer");
  return newString(std::string_view(utf8));
}

Local<String> String::newString(std::string_view utf8) {
  auto isolate = v8_backend::currentEngineIsolateChecked();
  v8::TryCatch tryCatch(isolate);
  auto ret = v8::String::NewFromUtf8(isolate, utf8.data(), v8::NewStringType::kNormal,
                                     static_cast<int>(utf8.length()));

  v8_backend::checkException(tryCatch);
  return Local<String>(ret.ToLocalChecked());
}

Local<String> String::newString(const std::string& utf8) {
  return newString(std::string_view(utf8));
}

#if defined(__cpp_char8_t)

Local<String> String::newString(const char8_t* utf8) {
  if (!utf8) throw Exception("null pointer");
  return newString(std::u8string_view(utf8));
}

Local<String> String::newString(std::u8string_view utf8) {
  // we just cast char8_t* to char8_t for now.
  // remove cast once V8 have an overloaded version.
  v8::TryCatch tryCatch(v8_backend::currentEngineIsolateChecked());

  auto ret = v8::String::NewFromUtf8(v8_backend::currentEngineIsolateChecked(),
                                     reinterpret_cast<const char*>(utf8.data()),
                                     v8::NewStringType::kNormal, utf8.length());
  v8_backend::checkException(tryCatch);
  return Local<String>(ret.ToLocalChecked());
}

Local<String> String::newString(const std::u8string& utf8) {
  return newString(std::u8string_view(utf8));
}

#endif

Local<Boolean> Boolean::newBoolean(bool value) {
  return Local<Boolean>(v8::Boolean::New(v8_backend::currentEngineIsolateChecked(), value));
}

Local<Function> Function::newFunction(::script::FunctionCallback callback) {
  auto&& [isolate, context] = v8_backend::currentEngineIsolateAndContextChecked();

  v8::TryCatch tryCatch(isolate);

  struct FunctionData {
    v8_backend::V8Engine* engine = nullptr;
    ::script::FunctionCallback function;
  };

  auto data = std::make_unique<FunctionData>();
  data->engine = v8_backend::currentEngine();
  data->function = std::move(callback);

  auto param = v8::External::New(isolate, static_cast<void*>(data.get())).As<v8::Value>();
  auto funcTemplate = v8::FunctionTemplate::New(
      isolate,
      [](const v8::FunctionCallbackInfo<v8::Value>& info) {
        auto data = static_cast<FunctionData*>(info.Data().As<v8::External>()->Value());
        // we don't have a function name
        Tracer trace(data->engine, "NativeFunction");
        try {
          Arguments args = v8_backend::V8Engine::extractV8Arguments(data->engine, info);
          auto returnVal = (data->function)(args);
          info.GetReturnValue().Set(v8_backend::V8Engine::toV8(info.GetIsolate(), returnVal));
        } catch (Exception& e) {
          v8_backend::rethrowException(e);
        }
      },
      param);

  funcTemplate->RemovePrototype();
  auto func = funcTemplate->GetFunction(context);
  v8_backend::checkException(tryCatch);

  v8_backend::currentEngineChecked().addManagedObject(
      data.release(), func.ToLocalChecked(),
      [](void* ptr) { delete reinterpret_cast<FunctionData*>(ptr); });

  return Local<Function>(func.ToLocalChecked());
}

Local<Array> Array::newArray(size_t size) {
  return Local<Array>(
      v8::Array::New(v8_backend::currentEngineIsolateChecked(), static_cast<int>(size)));
}

template <typename It>
static v8::Local<v8::Array> newV8Array(size_t argc, It begin, It end) {
  auto isolate = v8_backend::currentEngineIsolateChecked();

  return v8_backend::toV8ValueArray<v8::Local<v8::Array>>(
      isolate, argc, begin, end,
      [argc, iso = isolate](auto* args) { return v8::Array::New(iso, args, argc); });
}

Local<Array> Array::newArrayImpl(size_t size, const Local<Value>* args) {
  auto isolate = v8_backend::currentEngineIsolateChecked();

  return v8_backend::toV8ValueArray<Local<Array>>(
      isolate, size, args,
      [size, iso = isolate](auto* args) { return Local<Array>{v8::Array::New(iso, args, size)}; });
}

Local<ByteBuffer> ByteBuffer::newByteBuffer(size_t size) {
  return Local<ByteBuffer>(v8::ArrayBuffer::New(v8_backend::currentEngineIsolateChecked(), size));
}

Local<class script::ByteBuffer> ByteBuffer::newByteBuffer(void* nativeBuffer, size_t size) {
  auto ret = newByteBuffer(size);
  std::memcpy(ret.getRawBytes(), nativeBuffer, size);
  return ret;
}

#if V8_MAJOR_VERSION >= 8

// v8 8.0 introduced new api for this
// https://docs.google.com/document/d/1sTc_jRL87Fu175Holm5SV0kajkseGl2r8ifGY76G35k/edit

Local<ByteBuffer> ByteBuffer::newByteBuffer(std::shared_ptr<void> buffer, size_t size) {
  auto data = buffer.get();
  auto backingStore = v8::ArrayBuffer::NewBackingStore(
      data, size,
      [](void* /*data*/, size_t /*length*/, void* deleter_data) {
        delete static_cast<std::shared_ptr<void>*>(deleter_data);
      },
      new std::shared_ptr<void>(std::move(buffer)));

  return Local<ByteBuffer>(
      v8::ArrayBuffer::New(v8_backend::currentEngineIsolateChecked(), std::move(backingStore)));
}

#else

Local<ByteBuffer> ByteBuffer::newByteBuffer(std::shared_ptr<void> buffer, size_t size) {
  auto arrayBuffer =
      v8::ArrayBuffer::New(v8_backend::currentEngineIsolateChecked(), buffer.get(), size);

  using BookKeep = std::shared_ptr<void>;
  auto bookKeep = std::make_unique<BookKeep>(std::move(buffer));
  v8_backend::currentEngine()->addManagedObject(
      bookKeep.get(), arrayBuffer, [](void* ptr) { delete static_cast<BookKeep*>(ptr); });

  Local<ByteBuffer> ret(arrayBuffer);
  static_cast<void>(bookKeep.release());

  return ret;
}

#endif

}  // namespace script
