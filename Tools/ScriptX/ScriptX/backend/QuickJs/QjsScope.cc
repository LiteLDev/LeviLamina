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

#include "QjsEngine.hpp"
#include "trait/TraitScope.h"

namespace script::qjs_backend {

EngineScopeImpl::EngineScopeImpl(QjsEngine &current)
    : previous_(EngineScope::currentEngineAs<QjsEngine>()), current_(&current) {
  if (previous_) {
    previous_->runtimeLock_.unlock();
  }
  current_->runtimeLock_.lock();
}

EngineScopeImpl::~EngineScopeImpl() {
  current_->runtimeLock_.unlock();
  if (previous_) {
    previous_->runtimeLock_.lock();
  }
}

ExitEngineScopeImpl::ExitEngineScopeImpl(QjsEngine &current) : current_(&current) {
  current_->runtimeLock_.unlock();
}

ExitEngineScopeImpl::~ExitEngineScopeImpl() { current_->runtimeLock_.lock(); }

}  // namespace script::qjs_backend