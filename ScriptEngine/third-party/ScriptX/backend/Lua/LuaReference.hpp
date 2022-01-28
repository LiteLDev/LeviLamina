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

#include "../../src/NativeConverter.hpp"
#include "../../src/Reference.h"
#include "../../src/utils/GlobalWeakBookkeeping.hpp"
#include "LuaHelper.hpp"

namespace script {

namespace lua_backend {

struct LuaBookKeepFetcher {
  template <typename T>
  static ::script::internal::GlobalWeakBookkeeping* get(const T* ref) {
    if (!ref) return nullptr;
    auto& val = LuaEngine::refVal(const_cast<T*>(ref));
    if (!val.engine) return nullptr;
    return &val.engine->globalWeakBookkeeping_;
  }

  template <typename T>
  static ::script::internal::GlobalWeakBookkeeping::HandleType& handle(const T* ref) {
    auto& val = LuaEngine::refVal(const_cast<T*>(ref));
    return val.handle;
  }
};

using BookKeep = ::script::internal::GlobalWeakBookkeeping::Helper<LuaBookKeepFetcher>;

}  // namespace lua_backend

template <typename T>
Global<T>::Global() noexcept : val_() {}

template <typename T>
Global<T>::Global(const script::Local<T>& localReference) : val_() {
  auto engine = lua_backend::currentEngine();
  val_.engine = engine;
  val_.index = engine->putGlobalOrWeakTable(localReference,
                                            lua_backend::LuaEngine::kLuaGlobalRegistryToken_);
  lua_backend::BookKeep::keep(this);
}

template <typename T>
Global<T>::Global(const script::Weak<T>& weak) : val_() {
  auto engine = weak.val_.engine;
  if (engine) {
    auto lua = engine->lua_;

    val_.engine = engine;

    lua_backend::luaStackScope(lua, [lua, &weak, this, engine]() {
      auto local = weak.getValue();
      if (local.val_ != 0) {
        val_.index =
            engine->putGlobalOrWeakTable(local, lua_backend::LuaEngine::kLuaGlobalRegistryToken_);
        lua_pop(lua, 1);
      }
    });
  }
  lua_backend::BookKeep::keep(this);
}

template <typename T>
Global<T>::Global(const script::Global<T>& copy) : val_() {
  auto engine = copy.val_.engine;
  if (engine) {
    auto lua = engine->lua_;
    val_.engine = engine;

    lua_backend::luaStackScope(lua, [lua, &copy, this, engine]() {
      auto local = copy.getValue();
      assert(local.val_ != 0);
      val_.index =
          engine->putGlobalOrWeakTable(local, lua_backend::LuaEngine::kLuaGlobalRegistryToken_);
      lua_pop(lua, 1);
    });
  }
  lua_backend::BookKeep::afterCopy(true, this, &copy);
}

template <typename T>
Global<T>::Global(script::Global<T>&& move) noexcept : val_(std::move(move.val_)) {
  lua_backend::BookKeep::afterMove(true, this, &move);
}

template <typename T>
Global<T>::~Global() {
  if (!isEmpty()) {
    EngineScope scope(val_.engine);
    reset();
  }
}

template <typename T>
Global<T>& Global<T>::operator=(const script::Global<T>& assign) {
  Global(assign).swap(*this);
  return *this;
}

template <typename T>
Global<T>& Global<T>::operator=(script::Global<T>&& move) noexcept {
  Global(std::move(move)).swap(*this);
  return *this;
}

template <typename T>
void Global<T>::swap(Global& rhs) noexcept {
  std::swap(val_.engine, rhs.val_.engine);
  std::swap(val_.index, rhs.val_.index);
  lua_backend::BookKeep::afterSwap(this, &rhs);
}

template <typename T>
Global<T>& Global<T>::operator=(const script::Local<T>& assign) {
  *this = Global<T>(assign);
  return *this;
}

template <typename T>
Local<T> Global<T>::get() const {
  auto value = getValue();
  if (value.val_ == 0) throw Exception("get on empty Global");
  return Local<T>{value.val_};
}

template <typename T>
Local<Value> Global<T>::getValue() const {
  if (!val_.engine) return {};
  return val_.engine->getGlobalOrWeakTable(val_.index,
                                           lua_backend::LuaEngine::kLuaGlobalRegistryToken_);
}

template <typename T>
bool Global<T>::isEmpty() const {
  return val_.index == 0;
}

template <typename T>
void Global<T>::reset() {
  if (!isEmpty()) {
    val_.engine->removeGlobalOrWeakTable(val_.index,
                                         lua_backend::LuaEngine::kLuaGlobalRegistryToken_);

    lua_backend::BookKeep::remove(this);
    val_.index = 0;
    val_.engine = nullptr;
  }
}

// == Weak ==

template <typename T>
Weak<T>::Weak() noexcept : val_() {}

template <typename T>
Weak<T>::~Weak() {
  if (!isEmpty()) {
    EngineScope scope(val_.engine);
    reset();
  }
}

template <typename T>
Weak<T>::Weak(const script::Local<T>& localReference) {
  auto engine = lua_backend::currentEngine();
  val_.engine = engine;
  val_.index =
      engine->putGlobalOrWeakTable(localReference, lua_backend::LuaEngine::kLuaWeakRegistryToken_);
  lua_backend::BookKeep::keep(this);
}

template <typename T>
Weak<T>::Weak(const script::Global<T>& globalReference) {
  auto engine = globalReference.val_.engine;
  if (engine) {
    auto lua = engine->lua_;

    val_.engine = engine;

    lua_backend::luaStackScope(lua, [lua, &globalReference, this, engine]() {
      auto local = globalReference.getValue();
      assert(local.val_ != 0);
      val_.index =
          engine->putGlobalOrWeakTable(local, lua_backend::LuaEngine::kLuaWeakRegistryToken_);
      lua_pop(lua, 1);
    });
  }
  lua_backend::BookKeep ::keep(this);
}

template <typename T>
Weak<T>::Weak(const script::Weak<T>& copy) : val_() {
  auto engine = copy.val_.engine;
  if (engine) {
    auto lua = engine->lua_;

    val_.engine = engine;

    lua_backend::luaStackScope(lua, [lua, &copy, this, engine]() {
      auto local = copy.getValue();
      if (local.val_ != 0) {
        val_.index =
            engine->putGlobalOrWeakTable(local, lua_backend::LuaEngine::kLuaWeakRegistryToken_);
        lua_pop(lua, 1);
      }
    });
  }

  lua_backend::BookKeep ::keep(this);
}

template <typename T>
Weak<T>::Weak(script::Weak<T>&& move) noexcept : val_(std::move(move.val_)) {
  lua_backend::BookKeep ::afterMove(true, this, &move);
}

template <typename T>
Weak<T>& Weak<T>::operator=(const script::Weak<T>& assign) {
  Weak(assign).swap(*this);
  return *this;
}

template <typename T>
Weak<T>& Weak<T>::operator=(script::Weak<T>&& move) noexcept {
  Weak(std::move(move)).swap(*this);
  return *this;
}

template <typename T>
void Weak<T>::swap(Weak& rhs) noexcept {
  std::swap(val_.engine, rhs.val_.engine);
  std::swap(val_.index, rhs.val_.index);
  lua_backend::BookKeep ::afterSwap(this, &rhs);
}

template <typename T>
Weak<T>& Weak<T>::operator=(const script::Local<T>& assign) {
  Weak(assign).swap(*this);
  return *this;
}

template <typename T>
Local<T> Weak<T>::get() const {
  auto value = getValue();
  if (value.isNull()) throw Exception("get on empty Weak");
  return converter::Converter<Local<T>>::toCpp(value);
}

template <typename T>
Local<Value> Weak<T>::getValue() const {
  if (isEmpty()) return {};
  return val_.engine->getGlobalOrWeakTable(val_.index,
                                           lua_backend::LuaEngine::kLuaWeakRegistryToken_);
}

template <typename T>
bool Weak<T>::isEmpty() const {
  return val_.index == 0;
}

template <typename T>
void Weak<T>::reset() noexcept {
  if (!isEmpty()) {
    lua_backend::currentEngine()->removeGlobalOrWeakTable(
        val_.index, lua_backend::LuaEngine::kLuaWeakRegistryToken_);
    lua_backend::BookKeep ::remove(this);
    val_.index = 0;
    val_.engine = nullptr;
  }
}

}  // namespace script
