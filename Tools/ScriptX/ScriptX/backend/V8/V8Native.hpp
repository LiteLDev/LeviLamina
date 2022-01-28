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
#include "V8Engine.hpp"

namespace script {

template <typename T>
ScriptClass::ScriptClass(const ScriptClass::ConstructFromCpp<T>) : internalState_() {
  auto v8Engine = v8_backend::currentEngine();
  auto symbol = v8Engine->constructorMarkSymbol_.Get(v8Engine->isolate_);
  auto pointer = v8::External::New(v8Engine->isolate_, this);

  auto obj = v8Engine->newNativeClass<T>(v8_backend::V8Engine::make<Local<Value>>(symbol),
                                         v8_backend::V8Engine::make<Local<Value>>(pointer));
  internalState_.scriptEngine_ = v8Engine;
  internalState_.weakRef_.Reset(v8Engine->isolate_,
                                v8_backend::V8Engine::toV8(v8Engine->isolate_, obj));
  internalState_.weakRef_.SetWeak();
}

template <typename T>
T *ScriptClass::getScriptEngineAs() const {
  return script::internal::scriptDynamicCast<T *>(internalState_.scriptEngine_);
}

template <typename T>
T *Arguments::engineAs() const {
  return script::internal::scriptDynamicCast<T *>(callbackInfo_.first);
}

}  // namespace script