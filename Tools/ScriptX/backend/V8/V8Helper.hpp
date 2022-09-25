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
#include "V8Engine.h"
#include "V8Reference.hpp"

namespace script::v8_backend {

template <typename Ret, typename Closure>
Ret toV8ValueArray(v8::Isolate* isolate, size_t argc, const Local<Value>* args, Closure c) {
  std::optional<Ret> ret{std::nullopt};

  script::internal::withNArray<v8::Local<v8::Value>>(
      argc, [&ret, isolate, argc, args, &c](v8::Local<v8::Value>* arr) {
        for (size_t i = 0; i < argc; i++) {
          arr[i] = ::script::v8_backend::V8Engine::toV8(isolate, args[i]);
        }
        ret.emplace(c(arr));
      });

  return *ret;
}

}  // namespace script::v8_backend

namespace script {

struct v8_interop {
  /**
   * get v8::Isolate* from V8Engine
   */
  static v8::Isolate* getEngineIsolate(v8_backend::V8Engine* engine) { return engine->isolate_; }

  /**
   * get v8::Local<Context> from V8Engine, must be called under EngineScope
   */
  static v8::Local<v8::Context> getEngineContext(v8_backend::V8Engine* engine) {
    return engine->context_.Get(engine->isolate_);
  }

  static v8::Isolate* currentEngineIsolateChecked() {
    return ::script::v8_backend::currentEngineIsolateChecked();
  }

  static v8::Local<v8::Context> currentEngineContextChecked() {
    return ::script::v8_backend::currentEngineContextChecked();
  }

  /**
   * convert Local<T> to a v8::Local reference
   */
  template <typename T>
  static typename internal::ImplType<Local<T>>::type toV8(v8::Isolate* isolate,
                                                          const Local<T>& ref) {
    return v8_backend::V8Engine::toV8(isolate, ref);
  }

  /**
   * create Local from jsc local reference
   */
  template <typename T, typename Args>
  static Local<T> makeLocal(Args args) {
    return v8_backend::V8Engine::make<Local<T>>(std::forward<Args>(args));
  }

  static Arguments newArguments(v8_backend::V8Engine* engine,
                                const v8::FunctionCallbackInfo<v8::Value>& args) {
    return v8_backend::V8Engine::extractV8Arguments(engine, args);
  }

  struct ArgumentsData {
    v8_backend::V8Engine* engine;
    v8::FunctionCallbackInfo<v8::Value> args;
  };

  /**
   * Note: don't use v8::FunctionCallbackInfo::GetReturnValue to return value, it won't work.
   */
  static ArgumentsData extractArguments(const Arguments& args) {
    return ArgumentsData{args.callbackInfo_.first, args.callbackInfo_.second};
  }
};

}  // namespace script