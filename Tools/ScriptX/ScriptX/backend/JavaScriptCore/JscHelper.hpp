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

#include <utility>
#include "../../src/utils/Helper.hpp"
#include "JscEngine.h"
#include "JscHelper.h"

namespace script::jsc_backend {

template <typename R, typename Fn>
R toJscValues(JSGlobalContextRef context, size_t length, const Local<Value>* args, Fn fn) {
  std::optional<R> ret{std::nullopt};
  script::internal::withNArray<JSValueRef>(length,
                                           [&ret, context, length, args, &fn](JSValueRef* arr) {
                                             for (size_t i = 0; i < length; ++i) {
                                               arr[i] = JscEngine::toJsc(context, args[i]);
                                             }

                                             ret.emplace(fn(arr));
                                           });
  return *ret;
}

}  // namespace script::jsc_backend

namespace script {

namespace internal {

template <typename T, typename Args>
struct MakeLocalHelper {
  static Local<T> makeLocal(Args args) {
    return jsc_backend::JscEngine::make<Local<T>>(std::forward<Args>(args));
  }
};

template <>
struct MakeLocalHelper<String, JSStringRef> {
  static Local<String> makeLocal(JSStringRef ref) {
    return jsc_backend::JscEngine::make<Local<String>>(jsc_backend::StringLocalRef(ref));
  }
};

}  // namespace internal

struct jsc_interop {
  /**
   * get JSGlobalContextRef from JscEngine
   */
  static JSGlobalContextRef getEngineContext(jsc_backend::JscEngine* engine) {
    return engine->context_;
  }

  /**
   * get JSContextGroupRef from JscEngine
   */
  static JSContextGroupRef getEngineContextGroup(jsc_backend::JscEngine* engine) {
    return engine->virtualMachine_;
  }

  /**
   * get JSGlobalContextRef from EngineScope
   */
  static JSGlobalContextRef currentEngineContextChecked() {
    return ::script::jsc_backend::currentEngineContextChecked();
  }

  /**
   * get JSContextGroupRef from EngineScope
   */
  static JSContextGroupRef currentEngineContextGroupChecked() {
    return ::script::jsc_backend::currentEngineContextGroupChecked();
  }

  /**
   * convert Local<T> to a jsc local reference
   */
  template <typename T>
  static typename jsc_backend::RefTypeMap<T>::jscType toJsc(JSGlobalContextRef context,
                                                            const Local<T>& ref) {
    return jsc_backend::JscEngine::toJsc(context, ref);
  }

  /**
   * create Local from jsc local reference
   * NOTE: when create String from JSStringRef, it also transfer ownership to the created
   * Local<String>
   */
  template <typename T, typename Args>
  static Local<T> makeLocal(Args args) {
    return script::internal::MakeLocalHelper<T, Args>::makeLocal(args);
  }

  static Arguments newArguments(jsc_backend::JscEngine* engine, JSObjectRef thisObject,
                                const JSValueRef* arguments, size_t size) {
    return jsc_backend::JscEngine::newArguments(engine, thisObject, arguments, size);
  }

  using ArgumentsData = jsc_backend::ArgumentsData;
  static ArgumentsData extractArguments(const Arguments& args) { return args.callbackInfo_; }
};

}  // namespace script
