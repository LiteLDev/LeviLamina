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
#include "WasmEngine.h"
#include "WasmReference.hpp"

namespace script {

Arguments::Arguments(InternalCallbackInfoType callbackInfo) : callbackInfo_(callbackInfo) {}

Arguments::~Arguments() = default;

Local<Object> Arguments::thiz() const {
  if (!hasThiz()) {
    throw Exception("arguments don't have 'this' argument");
  }
  return wasm_backend::WasmEngine::make<Local<Object>>(callbackInfo_.thiz_);
}

bool Arguments::hasThiz() const {
  return wasm_backend::WasmEngine::make<Local<Value>>(callbackInfo_.thiz_).isObject();
}

size_t Arguments::size() const { return static_cast<size_t>(callbackInfo_.argsCount_); }

Local<Value> Arguments::operator[](size_t i) const {
  if (i >= static_cast<size_t>(callbackInfo_.argsCount_)) {
    return {};
  }
  return wasm_backend::WasmEngine::make<Local<Value>>(callbackInfo_.argsBase_ + i);
}

ScriptEngine* Arguments::engine() const { return callbackInfo_.engine_; }

ScriptClass::ScriptClass(const script::Local<script::Object>& scriptObject) : internalState_() {
  internalState_.scriptEngine_ = &wasm_backend::currentEngine();
  internalState_.weakRef_ = scriptObject;
}

Local<Object> ScriptClass::getScriptObject() const { return internalState_.weakRef_.get(); }

Local<Array> ScriptClass::getInternalStore() const {
  int ret = wasm_backend::NativeHelper::getInternalStore(
      wasm_backend::WasmEngine::refIndex(internalState_.weakRef_));
  if (ret == -1) {
    throw Exception("script object already destroyed");
  }
  return wasm_backend::WasmEngine::make<Local<Array>>(ret);
}

ScriptEngine* ScriptClass::getScriptEngine() const { return internalState_.scriptEngine_; }

ScriptClass::~ScriptClass() = default;
}  // namespace script