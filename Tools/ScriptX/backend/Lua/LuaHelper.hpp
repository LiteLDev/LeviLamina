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

#include <cassert>
#include <optional>
#include <string>
#include "../../src/Reference.h"
#include "../../src/Scope.h"
#include "LuaEngine.h"
#include "LuaHelper.h"

namespace script::lua_backend {

inline LuaEngine* currentEngine() { return &EngineScope::currentEngineCheckedAs<LuaEngine>(); }

inline lua_State* currentLua() { return currentEngine()->lua_; }

/**
 * run a balanced stack scope
 */
template <typename Block>
inline void luaStackScope(lua_State* lua, Block&& block) {
#ifndef NDEBUG
  auto top = lua_gettop(lua);
  block();
  // assert the stack is balanced
  assert(top == lua_gettop(lua));
#else
  block();
#endif
}

inline void luaEnsureStack(lua_State* lua, int size) {
  if (!lua_checkstack(lua, size)) {
    throw Exception("stack overflow");
  }
}

/**
 * BE VERY CAREFUL with lua_error, it used longjmp to unwind stack, which WON'T CALL c++
 * DESTRUCTORS.
 */
inline void luaThrow(lua_State* lua, const char* message) {
  lua_pushstring(lua, message);
  lua_error(lua);
}

/**
 * BE VERY CAREFUL with lua_error, it used longjmp to unwind stack, which WON'T CALL c++
 * DESTRUCTORS.
 */
inline void luaThrow(lua_State* lua, std::optional<std::string>& message) {
  if (message.has_value()) {
    lua_pushstring(lua, message->c_str());
    // destruct std::string by hand
    message.~optional();
    lua_error(lua);
  }
}

inline void pushValue(lua_State* lua, const Local<Value>& local) {
  luaEnsureStack(lua, 1);
  auto val = LuaEngine::localRefIndex(local);

  if (val == 0) {
    lua_pushnil(lua);
  } else {
    lua_pushvalue(lua, val);
  }
}

template <typename It>
void pushValues(lua_State* lua, size_t count, It begin) {
  luaEnsureStack(lua, static_cast<int>(count));
  for (size_t i = 0; i < count; ++i) {
    auto val = LuaEngine::localRefIndex(*begin);

    if (val == 0) {
      lua_pushnil(lua);
    } else {
      lua_pushvalue(lua, val);
    }
    ++begin;
  }
}

inline void rethrowException(lua_State* lua) {
  Exception exp(LuaEngine::make<Local<Value>>(lua_gettop(lua)));
  lua_pop(lua, 1);
  throw exp;  // NOLINT
}

}  // namespace script::lua_backend

namespace script {

struct lua_interop {
  /**
   * get lua_State* from LuaEngine
   */
  static lua_State* getEngineLua(lua_backend::LuaEngine* engine) { return engine->lua_; }

  static lua_State* currentEngineLua() { return ::script::lua_backend::currentLua(); }

  /**
   * convert Local<T> to a lua local reference
   * @return the index in stack
   */
  template <typename T>
  static int toLua(const Local<T>& ref) {
    return lua_backend::LuaEngine::localRefIndex(ref);
  }

  /**
   * create Local from lua local reference
   * @param index the index in stack
   */
  template <typename T>
  static Local<T> makeLocal(int index) {
    return lua_backend::LuaEngine::make<Local<T>>(index);
  }

  static Arguments makeArguments(lua_backend::LuaEngine* engine, int stackBase, size_t paramCount,
                                 bool isInstanceFunc) {
    return lua_backend::LuaEngine::makeArguments(engine, stackBase, paramCount, isInstanceFunc);
  }

  using ArgumentsData = lua_backend::ArgumentsData;

  static ArgumentsData extractArguments(const Arguments& args) { return args.callbackInfo_; }
};

}  // namespace script
