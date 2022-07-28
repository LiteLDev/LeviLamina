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

#pragma once
#include "../../src/Native.h"
#include "QjsHelper.h"

namespace script {

namespace qjs_backend {

template <typename T>
struct MakeLocalInternal {
  static Local<T> make(JSValue value) { return QjsEngine::make<Local<T>>(value); }
};

template <>
struct MakeLocalInternal<ByteBuffer> {
  static Local<ByteBuffer> make(JSValue value) {
    return QjsEngine::make<Local<ByteBuffer>>(qjs_backend::ByteBufferState(value));
  }
};

}  // namespace qjs_backend

struct qjs_interop {
 public:
  static qjs_backend::QjsEngine& currentEngine() { return qjs_backend::currentEngine(); }
  static JSContext* currentContext() { return qjs_backend::currentContext(); }
  static JSRuntime* currentRuntime() { return qjs_backend::currentRuntime(); }

  static JSContext* getContext(qjs_backend::QjsEngine* engine) { return engine->context_; }
  static JSRuntime* getRuntime(qjs_backend::QjsEngine* engine) { return engine->runtime_; }

  /**
   * @tparam T
   * @param value owned(passing ownership)
   * @return
   */
  template <typename T>
  static Local<T> makeLocal(JSValue value) {
    return ::script::qjs_backend::MakeLocalInternal<T>::make(value);
  }

  /**
   *
   * @tparam T
   * @param ref
   * @return not owned
   */
  template <typename T>
  static JSValueConst peekLocal(const Local<T>& ref) {
    auto val = ref.val_;
    if (JS_IsNull(val)) {
      return JS_UNDEFINED;
    }
    return val;
  }

  /**
   *
   * @tparam T
   * @param ref
   * @return owned
   */
  template <typename T>
  static JSValue getLocal(const Local<T>& ref, JSContext* context = nullptr) {
    return qjs_backend::dupValue(peekLocal(ref), context);
  }

  /**
   * @param engine
   * @param thiz not own
   * @param argc
   * @param argv not own
   * @return
   */
  static script::Arguments makeArguments(qjs_backend::QjsEngine* engine, JSValueConst thiz,
                                         size_t argc, JSValueConst* argv) {
    return script::Arguments(qjs_backend::ArgumentsData{engine, thiz, argc, argv});
  }
};

namespace qjs_backend {

Local<Function> newRawFunction(QjsEngine* engine, void* data1, void* data2, RawFunctionCallback);

}  // namespace qjs_backend

}  // namespace script