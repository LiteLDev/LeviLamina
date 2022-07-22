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

#include "Scope.h"
#include "utils/ThreadLocal.h"
#include SCRIPTX_BACKEND(Includes.h)

namespace script {

SCRIPTX_THREAD_LOCAL(EngineScope*, current_);

EngineScope::EngineScope(ScriptEngine& engine) : EngineScope(&engine) {}

EngineScope::EngineScope(script::ScriptEngine* engine)
    : EngineScope(internal::scriptDynamicCast<EngineImpl*>(engine)) {}

EngineScope::EngineScope(EngineImpl& engine) : EngineScope(&engine) {}

EngineScope::EngineScope(EngineImpl* engine)
    : EngineScope(EngineScope::InternalEnterEngine{}, engine) {
  // public api require engine to be non-null
  if (!engine_) {
    throw std::logic_error("create EngineScope with a nullptr");
  }
}

static inline EngineScope*& currentScope() { return internal::getThreadLocal(current_); }

EngineScope::EngineScope(EngineScope::InternalEnterEngine, EngineImpl* engine, bool needEnter)
    : needEnter_(false), engineScopeImpl_(), engine_(engine), prev_(currentScope()) {
  auto currentEngine = prev_ != nullptr ? prev_->engine_ : nullptr;
  needEnter_ = needEnter && engine != nullptr && engine != currentEngine;
  if (needEnter_) {
    if (engine->isDestroying()) {
      throw std::logic_error("enter EngineScope with a destroying ScriptEngine");
    }
    engineScopeImpl_.emplace(*engine, currentEngine);
  }

  currentScope() = this;
}

EngineScope::~EngineScope() {
  if (needEnter_) {
    engineScopeImpl_.reset();
  }
  currentScope() = prev_;
}

EngineScope* EngineScope::getCurrent() { return currentScope(); }

void EngineScope::ensureEngineScope(void* engine) {
  if (!engine) {
    throw std::logic_error("call engine APIs without a ::script::EngineScope");
  }
}

ScriptEngine* EngineScope::currentEngine() {
  auto& scope = currentScope();
  if (scope != nullptr) {
    return static_cast<ScriptEngine*>(scope->engine_);
  }
  return nullptr;
}

ScriptEngine& EngineScope::currentEngineChecked() {
  auto engine = EngineScope::currentEngine();
  ensureEngineScope(engine);
  return *engine;
}

ExitEngineScope::ExitEngineScope()
    : exitEngineScopeImpl_(EngineScope::currentEngineAs<EngineImpl>()),
      // enters to a null engine, so EngineScope::currentEngine() == nullptr
      nullEngineScope_(EngineScope::InternalEnterEngine{}, nullptr) {}

ExitEngineScope::ExitEngineHolder::ExitEngineHolder(ExitEngineScope::EngineImpl* engine)
    : exitEngineHolder_() {
  if (engine) {
    exitEngineHolder_.emplace(*engine);
  }
}

ExitEngineScope::~ExitEngineScope() = default;

StackFrameScope::StackFrameScope()
    : stackFrameScopeImpl_(EngineScope::currentEngineCheckedAs<EngineImpl>()) {}

StackFrameScope::~StackFrameScope() = default;
}  // namespace script
