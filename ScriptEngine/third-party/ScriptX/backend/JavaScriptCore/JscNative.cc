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

#include "JscNative.hpp"
#include "../../src/Native.hpp"
#include "JscEngine.hpp"
#include "JscReference.hpp"

namespace script {

Arguments::Arguments(jsc_backend::ArgumentsData callbackInfo) : callbackInfo_(callbackInfo) {}

Arguments::~Arguments() = default;

Local<Object> Arguments::thiz() const {
  return jsc_backend::JscEngine::make<Local<Value>>(callbackInfo_.thisObject).asObject();
}

bool Arguments::hasThiz() const { return callbackInfo_.thisObject != nullptr; }

size_t Arguments::size() const { return callbackInfo_.size; }

Local<Value> Arguments::operator[](size_t i) const {
  if (i >= size()) {
    return {};
  }
  // NOLINTNEXTLINE(cppcoreguidelines-pro-bounds-pointer-arithmetic)
  return jsc_backend::JscEngine::make<Local<Value>>(callbackInfo_.arguments[i]);
}

ScriptEngine* Arguments::engine() const { return callbackInfo_.engine; }

ScriptClass::ScriptClass(const script::Local<script::Object>& scriptObject) : internalState_() {
  auto engine = &jsc_backend::currentEngineChecked();
  internalState_.scriptEngine_ = engine;
  jsc_backend::JscWeakRef(jsc_interop::toJsc(engine->context_, scriptObject))
      .swap(internalState_.weakRef_);
}

Local<Object> ScriptClass::getScriptObject() const {
  return jsc_interop::makeLocal<Value>(internalState_.weakRef_.get()).asObject();
}

Local<Array> ScriptClass::getInternalStore() const {
  auto engine = getScriptEngineAs<jsc_backend::JscEngine>();
  return engine->getInternalStorageBySymbolFunction_.get()
      .call({}, getScriptObject(), engine->internalStorageSymbol_.get())
      .asArray();
}

ScriptEngine* ScriptClass::getScriptEngine() const { return internalState_.scriptEngine_; }

ScriptClass::~ScriptClass() {
  auto engine = internalState_.scriptEngine_;
  internalState_.weakRef_.reset(engine);
}

}  // namespace script