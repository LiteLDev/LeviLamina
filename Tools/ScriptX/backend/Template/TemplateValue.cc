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

namespace script {

Local<Object> Object::newObject() { TEMPLATE_NOT_IMPLEMENTED(); }

Local<Object> Object::newObjectImpl(const Local<Value>& type, size_t size,
                                    const Local<Value>* args) {
  TEMPLATE_NOT_IMPLEMENTED();
}

Local<String> String::newString(const char* utf8) { TEMPLATE_NOT_IMPLEMENTED(); }

Local<String> String::newString(std::string_view utf8) { TEMPLATE_NOT_IMPLEMENTED(); }

Local<String> String::newString(const std::string& utf8) { TEMPLATE_NOT_IMPLEMENTED(); }

#if defined(__cpp_char8_t)

Local<String> String::newString(const char8_t* utf8) {
  return newString(reinterpret_cast<const char*>(utf8));
}

Local<String> String::newString(std::u8string_view utf8) {
  return newString(std::string_view(reinterpret_cast<const char*>(utf8.data()), utf8.length()));
}

Local<String> String::newString(const std::u8string& utf8) { return newString(utf8.c_str()); }

#endif

Local<Number> Number::newNumber(float value) { return newNumber(static_cast<double>(value)); }

Local<Number> Number::newNumber(double value) { TEMPLATE_NOT_IMPLEMENTED(); }

Local<Number> Number::newNumber(int32_t value) { return newNumber(static_cast<double>(value)); }

Local<Number> Number::newNumber(int64_t value) { return newNumber(static_cast<double>(value)); }

Local<Boolean> Boolean::newBoolean(bool value) { TEMPLATE_NOT_IMPLEMENTED(); }

Local<Function> Function::newFunction(script::FunctionCallback callback) {
  TEMPLATE_NOT_IMPLEMENTED();
}

Local<Array> Array::newArray(size_t size) { TEMPLATE_NOT_IMPLEMENTED(); }

Local<Array> Array::newArrayImpl(size_t size, const Local<Value>* args) {
  TEMPLATE_NOT_IMPLEMENTED();
}

Local<ByteBuffer> ByteBuffer::newByteBuffer(size_t size) { TEMPLATE_NOT_IMPLEMENTED(); }

Local<script::ByteBuffer> ByteBuffer::newByteBuffer(void* nativeBuffer, size_t size) {
  TEMPLATE_NOT_IMPLEMENTED();
}

Local<ByteBuffer> ByteBuffer::newByteBuffer(std::shared_ptr<void> nativeBuffer, size_t size) {
  TEMPLATE_NOT_IMPLEMENTED();
}

}  // namespace script