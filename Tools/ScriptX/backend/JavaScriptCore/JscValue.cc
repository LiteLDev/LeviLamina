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
#include "../../src/Scope.h"
#include "../../src/Value.h"
#include "JscEngine.hpp"
#include "JscHelper.hpp"

namespace script {

Local<Object> Object::newObject() {
  return Local<Object>(JSObjectMake(jsc_backend::currentEngineContextChecked(), nullptr, nullptr));
}

Local<Object> Object::newObjectImpl(const Local<Value>& type, size_t size,
                                    const Local<Value>* args) {
  auto context = jsc_backend::currentEngineContextChecked();

  return jsc_backend::toJscValues<Local<Object>>(
      context, size, args, [context, &type, size](JSValueRef* array) {
        JSValueRef jscException = nullptr;
        Local<Object> ret(
            JSObjectCallAsConstructor(context, type.asObject().val_, size, array, &jscException));
        jsc_backend::JscEngine::checkException(jscException);
        return ret;
      });
}

Local<String> String::newString(const char* utf8) {
  if (!utf8) throw Exception("null pointer");
  return Local<String>(jsc_backend::StringLocalRef(JSStringCreateWithUTF8CString(utf8)));
}

Local<String> String::newString(std::string_view utf8) {
  if (!utf8.empty() && utf8[utf8.size() - 1] == '\0') {
    // null-terminated
    return newString(utf8.data());
  } else {
    // create a null-terminated string
    return newString(std::string(utf8));
  }
}

Local<String> String::newString(const std::string& utf8) { return newString(utf8.c_str()); }

#if defined(__cpp_char8_t)

Local<String> String::newString(const char8_t* utf8) {
  if (!utf8) throw Exception("null pointer");
  return newString(reinterpret_cast<const char*>(utf8));
}

Local<String> String::newString(std::u8string_view utf8) {
  if (!utf8.empty() && utf8[utf8.size() - 1] == '\0') {
    // null-terminated
    return newString(utf8.data());
  } else {
    // create a null-terminated string
    return newString(std::u8string(utf8));
  }
}

Local<String> String::newString(const std::u8string& utf8) { return newString(utf8.c_str()); }

#endif

Local<Number> Number::newNumber(float value) { return newNumber(static_cast<double>(value)); }

Local<Number> Number::newNumber(double value) {
  return Local<Number>(JSValueMakeNumber(jsc_backend::currentEngineContextChecked(), value));
}

Local<Number> Number::newNumber(int32_t value) { return newNumber(static_cast<double>(value)); }

Local<Number> Number::newNumber(int64_t value) { return newNumber(static_cast<double>(value)); }

Local<Boolean> Boolean::newBoolean(bool value) {
  return Local<Boolean>(JSValueMakeBoolean(jsc_backend::currentEngineContextChecked(), value));
}

namespace {
std::once_flag newFunctionClazzObject;
JSClassRef newFunctionClazzObjectClass;

struct PrivateData {
  script::FunctionCallback callback_;
  jsc_backend::JscEngine* engine_;
};
}  // namespace

Local<Function> Function::newFunction(script::FunctionCallback callback) {
  std::call_once(newFunctionClazzObject, []() {
    JSClassDefinition func = kJSClassDefinitionEmpty;
    func.className = "anonymous";
    func.callAsFunction = [](JSContextRef ctx, JSObjectRef function, JSObjectRef thisObject,
                             // NOLINTNEXTLINE (cppcoreguidelines-avoid-c-arrays)
                             size_t argumentCount, const JSValueRef arguments[],
                             JSValueRef* exception) {
      auto data = static_cast<PrivateData*>(JSObjectGetPrivate(function));
      auto callbackFunc = data->callback_;
      auto engine = data->engine_;

      auto args =
          jsc_backend::JscEngine::newArguments(engine, thisObject, arguments, argumentCount);

      try {
        auto returnVal = (callbackFunc)(args);
        return jsc_backend::JscEngine::toJsc(engine->context_, returnVal);
      } catch (Exception& e) {
        *exception = jsc_backend::JscEngine::toJsc(engine->context_, e.exception());
        return JSValueMakeUndefined(ctx);
      }
    };

    func.finalize = [](JSObjectRef thiz) {
      auto privateData = static_cast<PrivateData*>(JSObjectGetPrivate(thiz));
      if (!privateData->engine_->isDestroying()) {
        utils::Message dtor([](auto&) {},
                            [](auto& msg) { delete static_cast<PrivateData*>(msg.ptr0); });
        dtor.tag = privateData->engine_;
        dtor.ptr0 = privateData;
        privateData->engine_->messageQueue()->postMessage(dtor);
      } else {
        delete privateData;
      }
    };
    newFunctionClazzObjectClass = JSClassCreate(&func);
  });

  auto param = new PrivateData{std::move(callback), jsc_backend::currentEngine()};

  return Local<Function>(JSObjectMake(jsc_backend::currentEngineContextChecked(),
                                      newFunctionClazzObjectClass, static_cast<void*>(param)));
}

Local<Array> Array::newArray(size_t size) {
  JSValueRef jscException = nullptr;

  auto context = jsc_backend::currentEngineContextChecked();
  auto array = Local<Array>(JSObjectMakeArray(context, 0, nullptr, &jscException));
  jsc_backend::JscEngine::checkException(jscException);

  if (size > 0) {
    array.set(size - 1, Local<Value>());
  }

  return array;
}

Local<Array> Array::newArrayImpl(size_t size, const Local<Value>* args) {
  auto context = jsc_backend::currentEngineContextChecked();

  return jsc_backend::toJscValues<Local<Array>>(
      context, size, args, [context, size](JSValueRef* value) {
        JSValueRef jscException = nullptr;

        Local<Array> ret(JSObjectMakeArray(context, size, value, &jscException));
        jsc_backend::JscEngine::checkException(jscException);
        return ret;
      });
}

Local<ByteBuffer> ByteBuffer::newByteBuffer(size_t size) {
  // NOLINTNEXTLINE (cppcoreguidelines-avoid-c-arrays)
  auto ptr = std::make_unique<uint8_t[]>(size);
  JSValueRef jscException = nullptr;

  auto ret = JSObjectMakeArrayBufferWithBytesNoCopy(
      jsc_backend::currentEngineContextChecked(), ptr.get(), size,
      [](void* bytes, void*) { delete[] static_cast<uint8_t*>(bytes); }, nullptr, &jscException);
  jsc_backend::JscEngine::checkException(jscException);
  ptr.release();
  return Local<ByteBuffer>(ret);
}

Local<script::ByteBuffer> ByteBuffer::newByteBuffer(void* nativeBuffer, size_t size) {
  auto ret = newByteBuffer(size);
  std::memcpy(ret.getRawBytes(), nativeBuffer, size);
  return ret;
}

Local<ByteBuffer> ByteBuffer::newByteBuffer(std::shared_ptr<void> nativeBuffer, size_t size) {
  JSValueRef jscException = nullptr;

  auto data = nativeBuffer.get();

  auto ctx = std::make_unique<std::shared_ptr<void>>(std::move(nativeBuffer));

  auto ret = JSObjectMakeArrayBufferWithBytesNoCopy(
      jsc_backend::currentEngineContextChecked(), data, size,
      [](void* /*bytes*/, void* ctx) { delete static_cast<std::shared_ptr<void>*>(ctx); },
      ctx.get(), &jscException);

  jsc_backend::JscEngine::checkException(jscException);
  static_cast<void>(ctx.release());

  return Local<ByteBuffer>(ret);
}

}  // namespace script
