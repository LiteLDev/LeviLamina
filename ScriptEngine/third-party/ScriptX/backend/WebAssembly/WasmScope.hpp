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
#include "../../src/Scope.h"
#include "WasmEngine.h"

namespace script::wasm_backend {

template <typename T>
Local<T> WasmStackFrameScope::returnValue(const Local<T> &localRef) {
  hasReturnValue_ = true;
  return WasmEngine::make<Local<T>>(wasm_backend::Stack::set(stackTop_ + 1, localRef.asValue()));
}

}  // namespace script::wasm_backend