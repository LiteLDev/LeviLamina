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

#include "QjsHelper.h"
#include "QjsEngine.h"

#include <ScriptX/ScriptX.h>
#include <array>

namespace script::qjs_backend {

JSContext* currentContext() { return currentEngine().context_; }

JSRuntime* currentRuntime() { return currentEngine().runtime_; }

QjsEngine& currentEngine() { return EngineScope::currentEngineCheckedAs<qjs_backend::QjsEngine>(); }

void checkException(JSValue value) {
  if (JS_IsException(value)) {
    checkException(-1);
  }
}

void checkException(int ret, const char* message) {
  if (ret < 0) {
    auto context = currentContext();
    auto pending = JS_GetException(currentContext());

    if (JS_IsObject(pending)) {
      throw Exception(qjs_interop::makeLocal<Value>(pending));
    } else {
      JS_FreeValue(context, pending);
      throw Exception(std::string(message));
    }
  }
}

JSValue dupValue(JSValue val, JSContext* context) {
  if (JS_VALUE_HAS_REF_COUNT(val)) {
    return JS_DupValue(context ? context : currentContext(), val);
  }
  return val;
}

void freeValue(JSValue val, JSContext* context) {
  if (JS_VALUE_HAS_REF_COUNT(val)) {
    JS_FreeValue(context ? context : currentContext(), val);
  }
}

JSValue throwException(const Exception& e, QjsEngine* engine) {
  JSContext* context = engine ? engine->context_ : currentContext();
  JS_Throw(context, qjs_interop::getLocal(e.exception()));
  return JS_EXCEPTION;
}

Local<Function> newRawFunction(QjsEngine* engine, void* data1, void* data2,
                               RawFunctionCallback callback) {
  auto newPointer = [](JSContext* context, void* data) -> JSValue {
    if (!data) return JS_UNDEFINED;
    auto funData = JS_NewObjectClass(context, qjs_backend::QjsEngine::kPointerClassId);
    qjs_backend::checkException(funData);
    JS_SetOpaque(funData, data);
    return funData;
  };

  auto context = engine->context_;

  auto funData1 = newPointer(context, data1);
  auto funData2 = newPointer(context, data2);
  auto engineData = newPointer(context, engine);
  auto funCallback = newPointer(context, reinterpret_cast<void*>(callback));

  std::array<JSValue, 4> funDataArray{funData1, funData2, engineData, funCallback};

  auto fun = JS_NewCFunctionData(
      context,
      [](JSContext* ctx, JSValueConst this_val, int argc, JSValueConst* argv, int magic,
         JSValue* func_data) {
        auto data_1 = JS_GetOpaque(func_data[0], qjs_backend::QjsEngine::kPointerClassId);
        auto data_2 = JS_GetOpaque(func_data[1], qjs_backend::QjsEngine::kPointerClassId);
        auto engine = static_cast<QjsEngine*>(
            JS_GetOpaque(func_data[2], qjs_backend::QjsEngine::kPointerClassId));
        auto callback = reinterpret_cast<RawFunctionCallback>(
            JS_GetOpaque(func_data[3], qjs_backend::QjsEngine::kPointerClassId));

        try {
          auto args = qjs_interop::makeArguments(engine, this_val, argc, argv);

          auto ret = callback(args, data_1, data_2, (magic & JS_CALL_FLAG_CONSTRUCTOR) != 0);
          return qjs_interop::getLocal(ret, engine->context_);
        } catch (const Exception& e) {
          return qjs_backend::throwException(e, engine);
        }
      },
      0, 0, funDataArray.size(), funDataArray.data());

  for (auto v : funDataArray) {
    JS_FreeValue(context, v);
  }

  qjs_backend::checkException(fun);

  return qjs_interop::makeLocal<Function>(fun);
}

}  // namespace script::qjs_backend
