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

#include "LuaHelper.hpp"
#include "../../src/Native.hpp"
#include "LuaReference.hpp"
#include "LuaScope.hpp"

namespace script::lua_backend {

// helpers

namespace {

int luaErrorMessageHandler(lua_State* L) {
  auto msg = LuaEngine::make<Local<Value>>(1);
  auto error = msg.isObject() ? msg.asObject() : Object::newObject();
  if (!msg.isObject() || error.has("message")) {
    // set message
    error.set("message", msg);
  }

  // set stacktrace
  luaL_traceback(L, L, nullptr, 1);

  auto stackTrace = LuaEngine::make<Local<Value>>(lua_gettop(L));

  error.set("stack", stackTrace);

  // return error object
  lua_settop(L, LuaEngine::localRefIndex(error));
  return 1;
}

}  // namespace

Local<Value> callFunction(const Local<Value>& func, const Local<Value>& thiz, size_t argsCount,
                          const Local<Value>* begin) {
  auto lua = currentLua();

  int base = lua_gettop(lua);

  auto funcIndex = LuaEngine::localRefIndex(func);
  if (funcIndex != 0) {
    base++;
    pushValue(lua, func);
  } else {
    // the function is already at stack top just call it
  }

  // push the handler and make it under function
  lua_pushcfunction(lua, luaErrorMessageHandler);
  lua_insert(lua, base);

  int nArgs = static_cast<int>(argsCount);

  auto thizIndex = lua_backend::LuaEngine::localRefIndex(thiz);
  if (thizIndex != 0) {
    nArgs++;
    pushValue(lua, thiz);
  }
  pushValues(lua, argsCount, begin);

  auto ret = lua_pcall(lua, nArgs, LUA_MULTRET, base);

  // remove the message handler
  lua_remove(lua, base);

  if (ret == LUA_OK) {
    // get the return value
    auto returnCount = lua_gettop(lua) - base + 1;
    if (returnCount == 0) {
      return {};
    } else if (returnCount == 1) {
      return lua_backend::LuaEngine::make<Local<Value>>(base);
    } else {
      auto array = Array::newArray();

      for (int i = 0; i < returnCount; ++i) {
        array.add(LuaEngine::make<Local<Value>>(base + i));
      }

      // danger: operate on the stack cause array invalid
      lua_replace(lua, base);
      lua_settop(lua, base);

      // array is now at base
      return LuaEngine::make<Local<Array>>(base);
    }
  } else {
    lua_backend::rethrowException(lua);
    return {};
  }
}

int handleReturnToLua(lua_State* lua, int retIndex) {
  if (retIndex == 0) {
    // no return value
    return 0;
  } else {
    // has return value

    // clear anything on top
    lua_settop(lua, retIndex);
    return 1;
  }
}

// [0, +1, -]
int pushFinalizableUserData(lua_State* lua, void* data, void finalizer(void*)) {
  luaEnsureStack(lua, 4);
  lua_newtable(lua);

  luaStackScope(lua, [lua, data, finalizer]() {
    lua_pushlightuserdata(lua, data);
    lua_rawseti(lua, -2, 1);

    lua_pushlightuserdata(lua, reinterpret_cast<void*>(finalizer));
    lua_rawseti(lua, -2, 2);

    // meta table
    lua_newtable(lua);

    lua_pushstring(lua, kLuaMetaMethodNewGc);
    lua_pushcfunction(lua, [](lua_State* lua) -> int {
      lua_rawgeti(lua, 1, 1);
      auto data = lua_touserdata(lua, -1);
      lua_pop(lua, 1);

      lua_rawgeti(lua, 1, 2);
      auto finalizer = reinterpret_cast<void (*)(void*)>(lua_touserdata(lua, -1));
      lua_pop(lua, 1);

      finalizer(data);

      return 0;
    });
    lua_settable(lua, -3);

    lua_setmetatable(lua, -2);
  });

  return lua_gettop(lua);
}

// [0, 0, -]
void* getUserDataFromFinalizableUserData(lua_State* lua, int finalizableUserDataIndex) {
  lua_rawgeti(lua, finalizableUserDataIndex, 1);
  auto data = lua_touserdata(lua, -1);
  lua_pop(lua, 1);
  return data;
}

void luaCopyTable(lua_State* lua, int from, int to) {
  luaStackScope(lua, [lua, from, to]() {
    luaEnsureStack(lua, 2);
    lua_pushnil(lua);  // first key
    while (lua_next(lua, from) != 0) {
      // dup the key
      lua_pushvalue(lua, -2);
      lua_insert(lua, -2);

      lua_rawset(lua, to);
    }
  });
}

Local<Object> luaNewObject(const Local<Value>& obj, size_t size, const Local<Value>* ptr) {
  StackFrameScope stack;

  auto lua = currentLua();
  auto type = lua_type(lua, LuaEngine::localRefIndex(obj));
  if (type == LUA_TFUNCTION || type == LUA_TTABLE) {
    // has __call meta function, let's call it
    return stack.returnValue(callFunction(obj, {}, size, ptr).asObject());
  }

  throw Exception("Object don't have constructor, ie. '__call' function in metatable");
}

}  // namespace script::lua_backend