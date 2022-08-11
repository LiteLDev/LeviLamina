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

#include "LuaScope.hpp"
#include "trait/TraitScope.h"

namespace script::lua_backend {

StackFrameScopeImpl::StackFrameScopeImpl(LuaEngine &engine) : engine_(&engine) {
  pushValue(engine_->lua_, {});
  base_ = lua_gettop(engine_->lua_);
}

int StackFrameScopeImpl::returnRawValue(int val) {
  auto lua = engine_->lua_;
  auto returnIndex = base_;
  if (val == 0) {
    lua_pushnil(lua);
  } else {
    lua_pushvalue(lua, val);
  }
  lua_replace(lua, returnIndex);
  hasReturnValue_ = true;
  return returnIndex;
}

StackFrameScopeImpl::~StackFrameScopeImpl() {
  if (hasReturnValue_) {
    lua_settop(engine_->lua_, base_);
  } else {
    lua_settop(engine_->lua_, base_ - 1);
  }
}

EngineScopeImpl::EngineScopeImpl(LuaEngine &engine, LuaEngine *prevEngine)
    : lockGuard_(engine.lock_), stack_(engine) {
  if (prevEngine && prevEngine != stack_.engine_) {
    prevEngine_ = prevEngine;
    prevEngine->lock_.unlock();
  }
}

EngineScopeImpl::~EngineScopeImpl() {
  if (prevEngine_) {
    prevEngine_->lock_.lock();
  }
}

ExitEngineScopeImpl::ExitEngineScopeImpl(LuaEngine &engine) : engine_(&engine) {
  engine_->lock_.unlock();
}

ExitEngineScopeImpl::~ExitEngineScopeImpl() { engine_->lock_.lock(); }

}  // namespace script::lua_backend