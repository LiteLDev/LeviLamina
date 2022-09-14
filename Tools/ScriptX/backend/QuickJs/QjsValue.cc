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
#include "../../src/Utils.h"
#include "../../src/Value.h"
#include "../../src/utils/Helper.hpp"
#include "QjsEngine.h"
#include "QjsHelper.hpp"

namespace script {

Local<Object> Object::newObject() {
  auto obj = JS_NewObject(qjs_backend::currentContext());
  qjs_backend::checkException(obj);
  return qjs_interop::makeLocal<Object>(obj);
}

Local<Object> Object::newObjectImpl(const Local<Value>& type, size_t size,
                                    const Local<Value>* args) {
  auto& engine = qjs_backend::currentEngine();
  auto context = engine.context_;
  JSValue ret = JS_UNDEFINED;

  internal::withNArray<JSValue>(size, [context, &type, &ret, size, args](JSValue* array) {
    for (size_t i = 0; i < size; ++i) {
      array[i] = qjs_interop::peekLocal(args[i]);
    }

    ret = JS_CallConstructor(context, qjs_interop::peekLocal(type), static_cast<int>(size), array);
    qjs_backend::checkException(ret);
  });

  engine.scheduleTick();
  return qjs_interop::makeLocal<Object>(ret);
}

Local<String> String::newString(const char* utf8) { return newString(std::string_view(utf8)); }

Local<String> String::newString(std::string_view utf8) {
  auto str = JS_NewStringLen(qjs_backend::currentContext(), utf8.data(), utf8.length());
  qjs_backend::checkException(str);
  return qjs_interop::makeLocal<String>(str);
}

Local<String> String::newString(const std::string& utf8) {
  return newString(std::string_view(utf8));
}

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

Local<Number> Number::newNumber(double value) {
  return qjs_interop::makeLocal<Number>(JS_NewFloat64(qjs_backend::currentContext(), value));
}

Local<Number> Number::newNumber(int32_t value) {
  return qjs_interop::makeLocal<Number>(JS_NewInt32(qjs_backend::currentContext(), value));
}

Local<Number> Number::newNumber(int64_t value) {
  return qjs_interop::makeLocal<Number>(JS_NewInt64(qjs_backend::currentContext(), value));
}

Local<Boolean> Boolean::newBoolean(bool value) {
  return qjs_interop::makeLocal<Boolean>(JS_NewBool(qjs_backend::currentContext(), value));
}

Local<Function> Function::newFunction(script::FunctionCallback callback) {
  auto ptr = std::make_unique<script::FunctionCallback>(std::move(callback));

  auto& engine = qjs_backend::currentEngine();
  JSContext* context = engine.context_;

  auto funData = JS_NewObjectClass(context, qjs_backend::QjsEngine::kFunctionDataClassId);
  qjs_backend::checkException(funData);
  JS_SetOpaque(funData, ptr.release());

  auto engineData = JS_NewObjectClass(context, qjs_backend::QjsEngine::kPointerClassId);
  qjs_backend::checkException(engineData);
  JS_SetOpaque(engineData, &engine);

  JSValue arr[2] = {funData, engineData};

  auto fun = JS_NewCFunctionData(
      context,
      [](JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv, int /*magic*/,
         JSValue* func_data) {
        auto callback = static_cast<FunctionCallback*>(
            JS_GetOpaque(func_data[0], qjs_backend::QjsEngine::kFunctionDataClassId));
        auto engine = static_cast<qjs_backend::QjsEngine*>(
            JS_GetOpaque(func_data[1], qjs_backend::QjsEngine::kPointerClassId));

        Tracer trace(engine, "CppFunction");
        try {
          auto args = qjs_interop::makeArguments(engine, this_val, argc, argv);
          auto ret = (*callback)(args);
          return qjs_interop::getLocal(ret);
        } catch (const Exception& e) {
          return qjs_backend::throwException(e, engine);
        }
      },
      0, 0, 2, arr);
  qjs_backend::checkException(fun);
  JS_FreeValue(context, funData);
  JS_FreeValue(context, engineData);

  return Local<Function>{fun};
}

Local<Array> Array::newArray(size_t size) {
  auto& engine = qjs_backend::currentEngine();
  auto array = JS_NewArray(engine.context_);
  qjs_backend::checkException(array);
  if (size != 0) {
    auto number = JS_NewUint32(engine.context_, static_cast<uint32_t>(size));
    qjs_backend::checkException(JS_SetProperty(engine.context_, array, engine.lengthAtom_, number));
  }
  return qjs_interop::makeLocal<Array>(array);
}

Local<Array> Array::newArrayImpl(size_t size, const Local<Value>* args) {
  auto array = JS_NewArray(qjs_backend::currentContext());
  qjs_backend::checkException(array);

  auto context = qjs_backend::currentContext();
  for (size_t i = 0; i < size; ++i) {
    qjs_backend::checkException(JS_SetPropertyInt64(context, array, static_cast<int64_t>(i),
                                                    qjs_interop::getLocal(args[i])));
  }

  return qjs_interop::makeLocal<Array>(array);
}

Local<ByteBuffer> ByteBuffer::newByteBuffer(size_t size) { return newByteBuffer(nullptr, size); }

Local<script::ByteBuffer> ByteBuffer::newByteBuffer(void* nativeBuffer, size_t size) {
  auto ab = JS_NewArrayBufferCopy(qjs_backend::currentContext(),
                                  static_cast<uint8_t*>(nativeBuffer), size);
  qjs_backend::checkException(ab);
  return qjs_interop::makeLocal<ByteBuffer>(ab);
}

Local<ByteBuffer> ByteBuffer::newByteBuffer(std::shared_ptr<void> nativeBuffer, size_t size) {
  auto ptr = nativeBuffer.get();
  auto sharedPtrPtr = std::make_unique<std::shared_ptr<void>>(std::move(nativeBuffer));
  auto opaque = sharedPtrPtr.get();

  auto ab = JS_NewArrayBuffer(
      qjs_backend::currentContext(), static_cast<uint8_t*>(ptr), size,
      [](JSRuntime*, void* opaque, void* /*ptr*/) {
        delete static_cast<std::shared_ptr<void>*>(opaque);
      },
      opaque, false);
  qjs_backend::checkException(ab);

  sharedPtrPtr.release();  // NOLINT(bugprone-unused-return-value)
  return qjs_interop::makeLocal<ByteBuffer>(ab);
}

}  // namespace script