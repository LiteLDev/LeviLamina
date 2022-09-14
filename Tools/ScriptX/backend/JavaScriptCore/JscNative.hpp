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

#include "JscEngine.hpp"

namespace script {

template <typename T>
ScriptClass::ScriptClass(ScriptClass::ConstructFromCpp<T>) : internalState_() {
  auto jscEngine = jsc_backend::currentEngine();
  auto symbol = jscEngine->constructorMarkSymbol_.get();
  auto thiz = jsc_backend::JscEngine::make<Local<Value>>(
      JSObjectMake(jscEngine->context_, jsc_backend::JscEngine::externalClass_, this));

  auto obj = jscEngine->newNativeClass<T>(symbol, thiz);

  internalState_.scriptEngine_ = jscEngine;
  jsc_backend::JscWeakRef(jsc_interop::toJsc(jscEngine->context_, obj))
      .swap(internalState_.weakRef_);
}

template <typename T>
T *ScriptClass::getScriptEngineAs() const {
  return script::internal::scriptDynamicCast<T *>(internalState_.scriptEngine_);
}

template <typename T>
T *Arguments::engineAs() const {
  return script::internal::scriptDynamicCast<T *>(callbackInfo_.engine);
}

}  // namespace script