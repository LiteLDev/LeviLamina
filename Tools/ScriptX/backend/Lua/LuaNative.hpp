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

#include "../../src/Native.hpp"
#include "LuaEngine.h"
#include "LuaHelper.hpp"

namespace script {

template <typename T>
ScriptClass::ScriptClass(const ScriptClass::ConstructFromCpp<T>) : internalState_() {
  auto engine = lua_backend::currentEngine();

  // Out must be outside of StackFrameScope.
  // Because we only has Weak<Object> hold to obj
  // to prevent obj from GCed, we relay on obj be the local ref.
  Local<Value> out;

  {
    StackFrameScope scope;
    auto lua = engine->lua_;

    lua_pushlightuserdata(lua,
                          const_cast<void *>(lua_backend::LuaEngine::kLuaNativeConstructorMarker_));
    auto mark = lua_gettop(lua);

    lua_pushlightuserdata(lua, this);
    auto thiz = lua_gettop(lua);

    auto obj = engine->newNativeClass<T>(lua_backend::LuaEngine::make<Local<Value>>(mark),
                                         lua_backend::LuaEngine::make<Local<Value>>(thiz));

    out = scope.returnValue(obj);
  }

  internalState_.scriptEngine_ = engine;
  internalState_.weakRef_ = out.asObject();
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