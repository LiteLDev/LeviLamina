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

#include <ScriptX/ScriptX.h>

#include "LuaHelper.hpp"

namespace script {

Local<Object> Object::newObject() {
  auto lua = lua_backend::currentLua();
  lua_backend::luaEnsureStack(lua, 1);
  lua_newtable(lua);
  return Local<Object>{lua_gettop(lua)};
}

Local<Object> Object::newObjectImpl(const Local<Value>& type, size_t size,
                                    const Local<Value>* args) {
  return lua_backend::luaNewObject(type, size, args);
}

Local<String> String::newString(const char* utf8) {
  auto lua = lua_backend::currentLua();
  lua_backend::luaEnsureStack(lua, 1);
  lua_pushstring(lua, utf8);
  return Local<String>(lua_gettop(lua));
}

Local<String> String::newString(std::string_view utf8) {
  auto lua = lua_backend::currentLua();
  lua_backend::luaEnsureStack(lua, 1);
  lua_pushlstring(lua, utf8.data(), utf8.size());
  return Local<String>(lua_gettop(lua));
}

Local<String> String::newString(const std::string& utf8) {
  return newString(std::string_view(utf8));
}

#if defined(__cpp_char8_t)

Local<String> String::newString(const char8_t* utf8) {
  auto lua = lua_backend::currentLua();
  lua_backend::luaEnsureStack(lua, 1);
  lua_pushstring(lua, reinterpret_cast<const char*>(utf8));
  return Local<String>(lua_gettop(lua));
}

Local<String> String::newString(std::u8string_view utf8) {
  auto lua = lua_backend::currentLua();
  lua_backend::luaEnsureStack(lua, 1);
  lua_pushlstring(lua, reinterpret_cast<const char*>(utf8.data()), utf8.size());
  return Local<String>(lua_gettop(lua));
}

Local<String> String::newString(const std::u8string& utf8) {
  return newString(std::u8string_view(utf8));
}

#endif

Local<Number> Number::newNumber(float value) { return newNumber(static_cast<double>(value)); }

Local<Number> Number::newNumber(double value) {
  auto lua = lua_backend::currentLua();
  lua_backend::luaEnsureStack(lua, 1);
  lua_pushnumber(lua, value);
  return Local<Number>(lua_gettop(lua));
}

Local<Number> Number::newNumber(int32_t value) { return newNumber(static_cast<int64_t>(value)); }

Local<Number> Number::newNumber(int64_t value) {
  auto lua = lua_backend::currentLua();
  lua_backend::luaEnsureStack(lua, 1);
  lua_pushinteger(lua, value);
  return Local<Number>(lua_gettop(lua));
}

Local<Boolean> Boolean::newBoolean(bool value) {
  auto lua = lua_backend::currentLua();
  lua_backend::luaEnsureStack(lua, 1);
  lua_pushboolean(lua, value);
  return Local<Boolean>(lua_gettop(lua));
}

Local<Function> Function::newFunction(FunctionCallback callback) {
  auto engine = lua_backend::currentEngine();
  auto lua = engine->lua_;
  lua_backend::luaEnsureStack(lua, 2);

  using ContextData = std::pair<FunctionCallback, lua_backend::LuaEngine*>;

  auto context = std::make_unique<ContextData>(std::move(callback), engine);
  lua_backend::pushFinalizableUserData(lua, context.get(),
                                       [](void* data) { delete static_cast<ContextData*>(data); });

  lua_pushcclosure(
      lua,
      [](lua_State* lua) -> int {
        auto data = static_cast<ContextData*>(
            lua_backend::getUserDataFromFinalizableUserData(lua, lua_upvalueindex(1)));
        auto& func = data->first;
        auto engine = data->second;
        auto paramCount = static_cast<size_t>(lua_gettop(lua));

        std::optional<std::string> exception;
        try {
          Tracer trace(engine, "nativeFunction");
          auto ret = func(lua_backend::LuaEngine::makeArguments(engine, 1, paramCount, false));
          if (lua_backend::LuaEngine::localRefIndex(ret) == 0) {
            // no return value
            return 0;
          } else {
            lua_backend::pushValue(lua, ret);
          }
          return 1;
        } catch (const Exception& e) {
          exception = e.message();
        }
        lua_backend::luaThrow(lua, exception);
        return 0;
      },
      1);

  context.release();  // NOLINT

  return Local<Function>{lua_gettop(lua)};
}

Local<Array> Array::newArray(size_t size) {
  auto lua = lua_backend::currentLua();
  lua_backend::luaEnsureStack(lua, 1);
  lua_createtable(lua, static_cast<int>(size), 0);
  Local<Array> ret{lua_gettop(lua)};

  return ret;
}

Local<Array> Array::newArrayImpl(size_t size, const Local<Value>* args) {
  auto ret = newArray(size);
  for (size_t i = 0; i < size; ++i) {
    ret.add(args[i]);
  }
  return ret;
}

Local<ByteBuffer> ByteBuffer::newByteBuffer(size_t size) {
  try {
    return newByteBuffer(
        std::shared_ptr<void>(new uint8_t[size],
                              [](void* ptr) {
                                delete[] static_cast<uint8_t*>(ptr);  // NOLINT xxxxxxxxxx
                              }),
        size);
  } catch (const std::bad_alloc&) {
    throw Exception("ByteBuffer create failed, OutOfMemory!!!");
  }
}

Local<script::ByteBuffer> ByteBuffer::newByteBuffer(void* nativeBuffer, size_t size) {
  auto ret = newByteBuffer(size);
  std::memcpy(ret.getRawBytes(), nativeBuffer, size);
  return ret;
}

Local<ByteBuffer> ByteBuffer::newByteBuffer(std::shared_ptr<void> nativeBuffer, size_t size) {
  StackFrameScope stack;
  auto engine = lua_backend::currentEngine();
  auto ret = engine->byteBufferDelegate_->newByteBuffer(engine, std::move(nativeBuffer), size);
  return stack.returnValue(ret).asByteBuffer();
}

}  // namespace script