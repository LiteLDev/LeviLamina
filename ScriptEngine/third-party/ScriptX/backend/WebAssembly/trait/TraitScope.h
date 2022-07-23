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

#include "../WasmHelper.h"

namespace script {

namespace wasm_backend {

class WasmEngineScope {
  int stackTop_;

 public:
  explicit WasmEngineScope(WasmEngine &, WasmEngine *);

  ~WasmEngineScope() {
    // restore stack top
    wasm_backend::Stack::setTop(stackTop_);
  }
};

class WasmExitEngineScope {
 public:
  explicit WasmExitEngineScope(WasmEngine &) {
    // exit current entered engine
  }

  ~WasmExitEngineScope() {
    // reenter engine;
  }
};

class WasmStackFrameScope {
  int stackTop_;
  bool hasReturnValue_ = false;

 public:
  explicit WasmStackFrameScope(WasmEngine &) : stackTop_(wasm_backend::Stack::top()) {
    // reserved for return value
    wasm_backend::Stack::pushNull();
  }

  ~WasmStackFrameScope() {
    if (hasReturnValue_) {
      // preserve ths return value
      wasm_backend::Stack::setTop(stackTop_ + 1);
    } else {
      wasm_backend::Stack::setTop(stackTop_);
    }
  }

  template <typename T>
  Local<T> returnValue(const Local<T> &localRef);
};
}  // namespace wasm_backend

template <>
struct internal::ImplType<EngineScope> {
  using type = wasm_backend::WasmEngineScope;
};

template <>
struct internal::ImplType<ExitEngineScope> {
  using type = wasm_backend::WasmExitEngineScope;
};

template <>
struct internal::ImplType<StackFrameScope> {
  using type = wasm_backend::WasmStackFrameScope;
};

}  // namespace script