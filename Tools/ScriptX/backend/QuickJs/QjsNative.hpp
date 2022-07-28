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
#include "QjsEngine.h"

namespace script {

template <typename T>
ScriptClass::ScriptClass(const ScriptClass::ConstructFromCpp<T>) : internalState_() {
  auto& engine = qjs_backend::currentEngine();
  internalState_.engine = &engine;

  auto pointer = JS_NewObjectClass(engine.context_, qjs_backend::QjsEngine::kPointerClassId);
  qjs_backend::checkException(pointer);
  JS_SetOpaque(pointer, this);

  auto ret = engine.template newNativeClass<T>({qjs_interop::makeLocal<Value>(pointer)});
  auto ref = qjs_interop::getLocal(ret);

  internalState_.weakRef_ = ref;

  // schedule -> JS_Free(ref)
  engine.extendLifeTimeToNextLoop(ref);
}

template <typename T>
T* Arguments::engineAs() const {
  return script::internal::scriptDynamicCast<T*>(callbackInfo_.engine_);
}

}  // namespace script