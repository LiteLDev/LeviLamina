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
#include "WasmEngine.h"
#include "WasmHelper.h"

namespace script {

template <typename T>
ScriptClass::ScriptClass(const ScriptClass::ConstructFromCpp<T>) : internalState_() {
  auto engine = &wasm_backend::currentEngine();

  // Because we only has Weak<Object> hold to obj
  // to prevent obj from GCed, we relay on obj be the local ref.
  Local<Value> out;

  static_assert(sizeof(int32_t) == sizeof(void*), "32-bit wasm assert");
  {
    StackFrameScope scope;
    auto mark =
        wasm_backend::WasmEngine::make<Local<Value>>(wasm_backend::NativeHelper::pushCppNewMark());
    Local<Number> ins = Number::newNumber(reinterpret_cast<int32_t>(this));

    auto obj = engine->newNativeClass<T>(mark, ins);
    out = scope.returnValue(obj);
  }

  internalState_.scriptEngine_ = engine;
  internalState_.weakRef_ = out.asObject();
}

template <typename T>
T* Arguments::engineAs() const {
  return script::internal::scriptDynamicCast<T*>(callbackInfo_.engine_);
}

}  // namespace script