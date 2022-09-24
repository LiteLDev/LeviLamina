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

#include <mutex>
#include "../../src/types.h"

namespace script {

namespace lua_backend {

class LuaEngine;

class StackFrameScopeImpl {
 private:
  LuaEngine *engine_ = nullptr;
  int base_ = 0;
  bool hasReturnValue_ = false;

 public:
  explicit StackFrameScopeImpl(LuaEngine &);

  ~StackFrameScopeImpl();

  template <typename T>
  Local<T> returnValue(const Local<T> &localRef);

  int returnRawValue(int index);

  friend class EngineScopeImpl;
};

class EngineScopeImpl {
  LuaEngine *prevEngine_ = nullptr;
  std::lock_guard<std::mutex> lockGuard_;
  StackFrameScopeImpl stack_;

 public:
  explicit EngineScopeImpl(LuaEngine &, LuaEngine *);

  ~EngineScopeImpl();
};

class ExitEngineScopeImpl {
  LuaEngine *engine_ = nullptr;

 public:
  explicit ExitEngineScopeImpl(LuaEngine &);

  ~ExitEngineScopeImpl();
};

}  // namespace lua_backend

template <>
struct internal::ImplType<EngineScope> {
  using type = lua_backend::EngineScopeImpl;
};

template <>
struct internal::ImplType<ExitEngineScope> {
  using type = lua_backend::ExitEngineScopeImpl;
};

template <>
struct internal::ImplType<StackFrameScope> {
  using type = lua_backend::StackFrameScopeImpl;
};

}  // namespace script