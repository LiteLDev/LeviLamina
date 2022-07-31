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

namespace lua_backend {

int copyLocal(int index) {
  if (index == 0) {
    return 0;
  }

  auto lua = currentLua();
  luaEnsureStack(lua, 1);
  lua_pushvalue(lua, index);
  return lua_gettop(lua);
}

void ensureNonnull(int index) {
  if (index != 0) {
    if (!lua_isnoneornil(currentLua(), index)) {
      return;
    }
  }

  throw Exception("NullPointerException");
}

bool judgeIsArray(int index)
{
  auto lua = currentLua();
  int currectArrIndex = 0;

  lua_pushnil(lua); 
  
  while (lua_next(lua, index))
  {
      // Copy current key and judge it's type
      lua_pushvalue(lua, -2);
      if(!lua_isnumber(lua,-1) || lua_tonumber(lua,-1) != ++currectArrIndex)
      {
        lua_pop(lua, 3);
        return false;
      }
      lua_pop(lua, 2);
  }
  return true;
}


}  // namespace lua_backend

#define REF_IMPL_BASIC_FUNC(ValueType)                                                           \
  Local<ValueType>::Local(const Local<ValueType>& copy)                                          \
      : val_(lua_backend::copyLocal(copy.val_)) {}                                               \
  Local<ValueType>::Local(Local<ValueType>&& move) noexcept : val_(move.val_) { move.val_ = 0; } \
  Local<ValueType>::~Local() {}                                                                  \
  Local<ValueType>& Local<ValueType>::operator=(const Local& from) {                             \
    Local(from).swap(*this);                                                                     \
    return *this;                                                                                \
  }                                                                                              \
  Local<ValueType>& Local<ValueType>::operator=(Local&& move) noexcept {                         \
    Local(std::move(move)).swap(*this);                                                          \
    return *this;                                                                                \
  }                                                                                              \
  void Local<ValueType>::swap(Local& rhs) noexcept { std::swap(val_, rhs.val_); }

#define REF_IMPL_BASIC_EQUALS(ValueType)                                               \
  bool Local<ValueType>::operator==(const script::Local<script::Value>& other) const { \
    return asValue() == other;                                                         \
  }

#define REF_IMPL_BASIC_NOT_VALUE(ValueType)                                                      \
  Local<ValueType>::Local(InternalLocalRef val) : val_(val) { lua_backend::ensureNonnull(val); } \
  Local<String> Local<ValueType>::describe() const { return asValue().describe(); }              \
  std::string Local<ValueType>::describeUtf8() const { return asValue().describeUtf8(); }

#define REF_IMPL_TO_VALUE(ValueType) \
  Local<Value> Local<ValueType>::asValue() const { return Local<Value>(val_); }

REF_IMPL_BASIC_FUNC(Value)

REF_IMPL_BASIC_FUNC(Object)
REF_IMPL_BASIC_NOT_VALUE(Object)
REF_IMPL_BASIC_EQUALS(Object)
REF_IMPL_TO_VALUE(Object)

REF_IMPL_BASIC_FUNC(String)
REF_IMPL_BASIC_NOT_VALUE(String)
REF_IMPL_BASIC_EQUALS(String)
REF_IMPL_TO_VALUE(String)

REF_IMPL_BASIC_FUNC(Number)
REF_IMPL_BASIC_NOT_VALUE(Number)
REF_IMPL_BASIC_EQUALS(Number)
REF_IMPL_TO_VALUE(Number)

REF_IMPL_BASIC_FUNC(Boolean)
REF_IMPL_BASIC_NOT_VALUE(Boolean)
REF_IMPL_BASIC_EQUALS(Boolean)
REF_IMPL_TO_VALUE(Boolean)

REF_IMPL_BASIC_FUNC(Function)
REF_IMPL_BASIC_NOT_VALUE(Function)
REF_IMPL_BASIC_EQUALS(Function)
REF_IMPL_TO_VALUE(Function)

REF_IMPL_BASIC_FUNC(Array)
REF_IMPL_BASIC_NOT_VALUE(Array)
REF_IMPL_BASIC_EQUALS(Array)
REF_IMPL_TO_VALUE(Array)

REF_IMPL_BASIC_FUNC(ByteBuffer)
REF_IMPL_BASIC_NOT_VALUE(ByteBuffer)
REF_IMPL_BASIC_EQUALS(ByteBuffer)
REF_IMPL_TO_VALUE(ByteBuffer)

REF_IMPL_BASIC_FUNC(Unsupported)
REF_IMPL_BASIC_NOT_VALUE(Unsupported)
REF_IMPL_BASIC_EQUALS(Unsupported)
REF_IMPL_TO_VALUE(Unsupported)

// ==== value ====

Local<Value>::Local() noexcept : val_() {}

Local<Value>::Local(InternalLocalRef index) : val_(index) {}

void Local<Value>::reset() {
  if (val_ != 0) {
    auto lua = lua_backend::currentLua();
    lua_backend::luaEnsureStack(lua, 1);
    lua_pushnil(lua);
    lua_replace(lua, val_);
  }
  val_ = 0;
}

ValueKind Local<Value>::getKind() const {
  if (val_ == 0) {
    return ValueKind::kNull;
  }
  auto type = lua_type(lua_backend::currentLua(), val_);
  if (type <= 0) {
    return ValueKind::kNull;
  } else if (type == LUA_TSTRING) {
    return ValueKind::kString;
  } else if (type == LUA_TNUMBER) {
    return ValueKind::kNumber;
  } else if (type == LUA_TBOOLEAN) {
    return ValueKind::kBoolean;
  } else if (type == LUA_TFUNCTION) {
    return ValueKind::kFunction;
  } else if (isByteBuffer()) {
    return ValueKind::kByteBuffer;
  } else if (type == LUA_TTABLE) {
    // Traverse the table to judge whether it is an array
    if(isArray())
      return ValueKind::kArray;
    else
      return ValueKind::kObject;
  } else {
    return ValueKind::kUnsupported;
  }
}

bool Local<Value>::isNull() const {
  return val_ == 0 || lua_isnoneornil(lua_backend::currentLua(), val_);
}

bool Local<Value>::isString() const {
  return val_ != 0 && lua_type(lua_backend::currentLua(), val_) == LUA_TSTRING;
}

bool Local<Value>::isNumber() const {
  return val_ != 0 && lua_type(lua_backend::currentLua(), val_) == LUA_TNUMBER;
}

bool Local<Value>::isBoolean() const {
  return val_ != 0 && lua_type(lua_backend::currentLua(), val_) == LUA_TBOOLEAN;
}

bool Local<Value>::isFunction() const {
  return val_ != 0 && lua_type(lua_backend::currentLua(), val_) == LUA_TFUNCTION;
}

bool Local<Value>::isArray() const { 
  if(val_ == 0 || lua_type(lua_backend::currentLua(), val_) != LUA_TTABLE)
    return false;
  return lua_backend::judgeIsArray(val_);
}

bool Local<Value>::isByteBuffer() const {
  auto engine = lua_backend::currentEngine();
  return engine->byteBufferDelegate_->isByteBuffer(engine, *this);
}

bool Local<Value>::isObject() const {
  return val_ != 0 && lua_type(lua_backend::currentLua(), val_) == LUA_TTABLE;
}

bool Local<Value>::isUnsupported() const { return getKind() == ValueKind::kUnsupported; }

Local<String> Local<Value>::asString() const {
  if (isString()) return Local<String>{val_};
  throw Exception("can't cast value as String");
}

Local<Number> Local<Value>::asNumber() const {
  if (isNumber()) return Local<Number>{val_};
  throw Exception("can't cast value as Number");
}

Local<Boolean> Local<Value>::asBoolean() const {
  if (isBoolean()) return Local<Boolean>{val_};
  throw Exception("can't cast value as Boolean");
}

Local<Function> Local<Value>::asFunction() const {
  if (isFunction()) return Local<Function>{val_};
  throw Exception("can't cast value as Function");
}

Local<Array> Local<Value>::asArray() const {
  if (isArray()) return Local<Array>{val_};
  throw Exception("can't cast value as Array");
}

Local<ByteBuffer> Local<Value>::asByteBuffer() const {
  if (isByteBuffer()) return Local<ByteBuffer>{val_};
  throw Exception("can't cast value as ByteBuffer");
}

Local<Object> Local<Value>::asObject() const {
  if (isObject()) return Local<Object>{val_};
  throw Exception("can't cast value as Object");
}

Local<Unsupported> Local<Value>::asUnsupported() const {
  if (isUnsupported()) return Local<Unsupported>{val_};
  throw Exception("can't cast value as Unsupported");
}

bool Local<Value>::operator==(const script::Local<script::Value>& other) const {
  // both null
  if (val_ == 0 || other.val_ == 0) {
    return other.val_ == val_;
  }

  return lua_compare(lua_backend::currentLua(), val_, other.val_, LUA_OPEQ);
}

// [+1, 0, 0]
Local<String> Local<Value>::describe() const {
  if (isNull()) return String::newString("nil");

  auto lua = lua_backend::currentLua();
  lua_backend::luaEnsureStack(lua, 1);

  luaL_tolstring(lua, val_, nullptr);

  return Local<String>(lua_gettop(lua));
}

Local<Value> Local<Object>::get(const script::Local<script::String>& key) const {
  auto lua = lua_backend::currentLua();

  lua_backend::luaEnsureStack(lua, 1);
  lua_pushvalue(lua, key.val_);
  lua_gettable(lua, val_);

  return Local<Value>{lua_gettop(lua)};
}

void Local<Object>::set(const script::Local<script::String>& key,
                        const script::Local<script::Value>& value) const {
  auto lua = lua_backend::currentLua();

  lua_backend::luaStackScope(lua, [this, lua, &key, &value]() {
    lua_backend::luaEnsureStack(lua, 2);

    lua_pushvalue(lua, key.val_);
    lua_backend::pushValue(lua, value);
    lua_settable(lua, val_);
  });
}

void Local<Object>::remove(const Local<class script::String>& key) const {
  // lua has no remove, just set nil
  // http://lua-users.org/wiki/StoringNilsInTables
  set(key, {});
}

bool Local<Object>::has(const Local<class script::String>& key) const { return !get(key).isNull(); }

/**
 * Lua don't have built-in `instanceof` operator,
 * this functions has equivalent logic to lua code:
 *
 * \code
 *
 * if ScriptX.isInstanceOf(self, type) then
 *  return true
 * end
 *
 * local mt = getmetatable(self)
 * while mt ~= nil do
 *  if mt == type then
 *    return true
 *  end
 *  mt = getmetatable(self)
 * end
 *
 * return false
 *
 * \endcode
 *
 */
bool Local<Object>::instanceOf(const Local<class script::Value>& type) const {
  if (type.isNull() || !type.isObject()) return false;

  auto lua = lua_backend::currentLua();
  auto index = type.val_;

  if (lua_backend::LuaEngine::isInstanceOf(lua, val_, index)) {
    return true;
  }

  lua_backend::luaEnsureStack(lua, 1);

  lua_pushvalue(lua, val_);
  auto meta = lua_gettop(lua);

  // metatable checks
  while (lua_getmetatable(lua, meta)) {
    lua_replace(lua, meta);
    if (lua_rawequal(lua, meta, index)) {
      // pop meta
      lua_pop(lua, 1);
      return true;
    }
  }

  // pop meta
  lua_pop(lua, 1);

  return false;
}

std::vector<Local<String>> Local<Object>::getKeys() const {
  auto lua = lua_backend::currentLua();

  std::vector<Local<String>> ret;

  auto len = static_cast<int>(luaL_len(lua, val_));
  lua_backend::luaEnsureStack(lua, len + 1);

  lua_pushnil(lua);  // first key
  while (lua_next(lua, val_) != 0) {
    // pop value, we don't care
    lua_pop(lua, 1);

    if (lua_type(lua, -1) == LUA_TSTRING) {
      // dup key, one for result, one for next iteration
      lua_pushvalue(lua, -1);

      ret.emplace_back(Local<String>(lua_absindex(lua, -2)));

    } else {
      continue;
    }
  }

  return ret;
}

float Local<Number>::toFloat() const { return static_cast<float>(toDouble()); }

double Local<Number>::toDouble() const { return lua_tonumber(lua_backend::currentLua(), val_); }

int32_t Local<Number>::toInt32() const { return static_cast<int32_t>(toDouble()); }

int64_t Local<Number>::toInt64() const { return static_cast<int64_t>(toDouble()); }

bool Local<Boolean>::value() const { return lua_toboolean(lua_backend::currentLua(), val_); }

Local<Value> Local<Function>::callImpl(const Local<Value>& thiz, size_t size,
                                       const Local<Value>* args) const {
  return lua_backend::callFunction(*this, thiz, size, args);
}

size_t Local<Array>::size() const {
  return static_cast<int>(luaL_len(lua_backend::currentLua(), val_));
}

/**
 * LUA_NOTE: LUA array index are 1 based, OUR API IS TO 0 BASED.
 */
Local<Value> Local<Array>::get(size_t index) const {
  index++;

  auto lua = lua_backend::currentLua();

  lua_backend::luaEnsureStack(lua, 1);
  lua_rawgeti(lua, val_, index);

  return Local<Value>{lua_gettop(lua)};
}

void Local<Array>::set(size_t index, const script::Local<script::Value>& value) const {
  index++;

  auto lua = lua_backend::currentLua();

  lua_backend::luaStackScope(lua, [this, lua, index, &value]() {
    lua_backend::luaEnsureStack(lua, 1);

    lua_backend::pushValue(lua, value);
    lua_rawseti(lua, val_, index);
  });
}

void Local<Array>::add(const script::Local<script::Value>& value) const { set(size(), value); }

void Local<Array>::clear() const {
  auto len = size();
  for (size_t i = 0; i < len; ++i) {
    set(i, {});
  }
}

ByteBuffer::Type Local<ByteBuffer>::getType() const { return ByteBuffer::Type::kUnspecified; }

size_t Local<ByteBuffer>::byteLength() const {
  auto engine = lua_backend::currentEngine();
  return engine->byteBufferDelegate_->getByteBufferSize(engine, asValue());
}

void* Local<ByteBuffer>::getRawBytes() const { return getRawBytesShared().get(); }

std::shared_ptr<void> Local<ByteBuffer>::getRawBytesShared() const {
  auto engine = lua_backend::currentEngine();
  return engine->byteBufferDelegate_->getByteBuffer(engine, asValue());
}

bool Local<ByteBuffer>::isShared() const { return true; }

void Local<ByteBuffer>::commit() const {}

void Local<ByteBuffer>::sync() const {}

}  // namespace script