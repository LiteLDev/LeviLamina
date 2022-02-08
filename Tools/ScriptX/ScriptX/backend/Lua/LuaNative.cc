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

#include "LuaNative.hpp"
#include "LuaHelper.hpp"
#include "LuaReference.hpp"
#include "LuaScope.hpp"

namespace script {

Arguments::Arguments(InternalCallbackInfoType callbackInfo) : callbackInfo_(callbackInfo) {
  if (callbackInfo_.isInstanceFunc) {
    if (callbackInfo_.size >= 1) {
      callbackInfo_.size--;
      callbackInfo_.stackBase++;
    } else {
      throw Exception("invalid param");
    }
  }
}

Arguments::~Arguments() = default;

Local<Object> Arguments::thiz() const {
  if (callbackInfo_.isInstanceFunc) {
    return lua_backend::LuaEngine::make<Local<Object>>(callbackInfo_.stackBase - 1);
  }
  throw Exception("function has no this");
}

bool Arguments::hasThiz() const {
  return callbackInfo_.isInstanceFunc &&
         !lua_isnoneornil(lua_backend::currentLua(), callbackInfo_.stackBase - 1);
}

size_t Arguments::size() const { return callbackInfo_.size; }

Local<Value> Arguments::operator[](size_t i) const {
  if (i < size()) {
    return lua_backend::LuaEngine::make<Local<Value>>(
        static_cast<int>(callbackInfo_.stackBase + i));
  }
  return {};
}

ScriptEngine* Arguments::engine() const { return callbackInfo_.engine; }

ScriptClass::ScriptClass(const script::Local<script::Object>& scriptObject) : internalState_() {
  internalState_.scriptEngine_ = lua_backend::currentEngine();
  internalState_.weakRef_ = scriptObject;
}

Local<Object> ScriptClass::getScriptObject() const { return internalState_.weakRef_.get(); }

Local<Array> ScriptClass::getInternalStore() const {
  StackFrameScope stack;
  auto lua =
      script::internal::scriptDynamicCast<lua_backend::LuaEngine*>(internalState_.scriptEngine_)
          ->lua_;
  auto obj = lua_backend::LuaEngine::localRefIndex(getScriptObject());

  lua_rawgetp(lua, obj, lua_backend::LuaEngine::kLuaNativeInternalStorageToken_);
  if (!lua_istable(lua, -1)) {
    lua_pop(lua, 1);
    lua_newtable(lua);
    lua_pushvalue(lua, -1);
    lua_rawsetp(lua, obj, lua_backend::LuaEngine::kLuaNativeInternalStorageToken_);
  }

  return stack.returnValue(lua_backend::LuaEngine::make<Local<Array>>(lua_gettop(lua)));
}

ScriptEngine* ScriptClass::getScriptEngine() const { return internalState_.scriptEngine_; }

ScriptClass::~ScriptClass() = default;
}  // namespace script