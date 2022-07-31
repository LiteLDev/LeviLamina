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

#include "../../src/Exception.h"
#include "../../src/Reference.h"
#include "../../src/Scope.h"
#include "../../src/Value.h"
#include "WasmEngine.hpp"

namespace script {

Local<Object> Object::newObject() { return Local<Object>(wasm_backend::Stack::newObject()); }

Local<Object> Object::newObjectImpl(const Local<Value>& type, size_t size,
                                    const Local<Value>* args) {
  auto base = wasm_backend::Stack::top() + 1;
  for (size_t i = 0; i < size; ++i) {
    wasm_backend::Stack::pushValue(args[i]);
  }
  return Local<Object>(
      wasm_backend::Stack::newObject(wasm_backend::WasmEngine::refIndex(type.asObject()), base));
}

Local<String> String::newString(const char* utf8) {
  return Local<String>(wasm_backend::Stack::newString(utf8));
}

Local<String> String::newString(std::string_view utf8) {
  return Local<String>(wasm_backend::Stack::newString(utf8.data(), utf8.length()));
}

Local<String> String::newString(const std::string& utf8) {
  return Local<String>(wasm_backend::Stack::newString(utf8.data(), utf8.length()));
}

#if defined(__cpp_char8_t)

Local<String> String::newString(const char8_t* utf8) {
  return newString(reinterpret_cast<const char*>(utf8));
}

Local<String> String::newString(std::u8string_view utf8) {
  return newString(std::string_view(reinterpret_cast<const char*>(utf8.data()), utf8.length()));
}

Local<String> String::newString(const std::u8string& utf8) {
  return newString(std::string_view(reinterpret_cast<const char*>(utf8.data()), utf8.length()));
}

#endif

Local<Number> Number::newNumber(float value) {
  return Local<Number>(wasm_backend::Stack::newNumber(static_cast<double>(value)));
}

Local<Number> Number::newNumber(double value) {
  return Local<Number>(wasm_backend::Stack::newNumber(value));
}

Local<Number> Number::newNumber(int32_t value) {
  return Local<Number>(wasm_backend::Stack::newNumber(value));
}

Local<Number> Number::newNumber(int64_t value) {
  return Local<Number>(wasm_backend::Stack::newNumber(static_cast<double>(value)));
}

Local<Boolean> Boolean::newBoolean(bool value) {
  return Local<Boolean>(wasm_backend::Stack::newBoolean(value));
}

Local<Function> Function::newFunction(script::FunctionCallback callback) {
  auto copy = std::make_unique<FunctionCallback>(std::move(callback));
  auto ret = wasm_backend::Stack::newFunction(
      [](const Arguments& args, void* ptr0, void*) -> Local<Value> {
        auto& callback = *static_cast<FunctionCallback*>(ptr0);
        return callback(args);
      },
      copy.get());
  copy.release();
  return Local<Function>(ret);
}

Local<Array> Array::newArray(size_t size) {
  return Local<Array>(wasm_backend::Stack::newArray(size));
}

Local<Array> Array::newArrayImpl(size_t size, const Local<Value>* args) {
  auto ret = newArray(size);
  {
    StackFrameScope stackFrame;
    for (size_t i = 0; i < size; ++i) {
      ret.set(i, args[i]);
    }
  }
  return ret;
}

Local<ByteBuffer> ByteBuffer::newByteBuffer(size_t size) {
  return Local<ByteBuffer>(wasm_backend::Stack::pushArrayBuffer(size));
}

Local<script::ByteBuffer> ByteBuffer::newByteBuffer(void* nativeBuffer, size_t size) {
  auto buffer = newByteBuffer(size);
  std::memcpy(buffer.getRawBytes(), nativeBuffer, size);
  buffer.commit();
  return buffer;
}

Local<ByteBuffer> ByteBuffer::newByteBuffer(std::shared_ptr<void> nativeBuffer, size_t size) {
  return Local<ByteBuffer>(wasm_backend::ByteBufferState(std::move(nativeBuffer), size));
}

}  // namespace script