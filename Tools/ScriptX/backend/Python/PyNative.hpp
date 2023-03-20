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
#include "PyEngine.h"

namespace script {

template <typename T>
ScriptClass::ScriptClass(const ScriptClass::ConstructFromCpp<T>) : internalState_() {
  auto engine = py_backend::currentEngineChecked();
  internalState_.scriptEngine_ = engine;

  auto ref = engine->newNativeClass<T>({});
  internalState_.weakRef_ = ref;

  py_backend::extendLifeTimeToNextLoop(engine, py_interop::getPy(ref.asValue()));
}

template <typename T>
T* Arguments::engineAs() const {
  return static_cast<T*>(engine());
}

}  // namespace script