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

#include "JscScope.h"
#include "../../src/Scope.h"
#include "JscEngine.h"

namespace script::jsc_backend {

JscEngineScope::JscEngineScope(JscEngine& engine)
    : unlockPrevious_(&engine), lockGuard_(*engine.virtualMachineLock_) {}

void JscEngineScope::UnlockPrevious_Ctor(JscEngine* currentEngine,
                                         JscEngineScope::UnlockPrevious& u) {
  // we are building new frame, so "current" is actually the previous frame.
  auto previous = ::script::EngineScope::currentEngineAs<JscEngine>();
  if (previous && previous != currentEngine) {
    u.previousEngine_ = previous;
    previous->virtualMachineLock_->unlock();
  }
}

void JscEngineScope::UnlockPrevious_Dtor(JscEngineScope::UnlockPrevious& u) {
  if (u.previousEngine_) {
    u.previousEngine_->virtualMachineLock_->lock();
  }
}

JscEngineScope::~JscEngineScope() = default;

JscExitEngineScope::JscExitEngineScope(JscEngine& engine)
    : virtualMachineLock_(*engine.virtualMachineLock_) {
  virtualMachineLock_.unlock();
}

JscExitEngineScope::~JscExitEngineScope() { virtualMachineLock_.lock(); }

}  // namespace script::jsc_backend
