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

#include <lua.hpp>
#include "../../src/types.h"
#include "../../src/utils/GlobalWeakBookkeeping.hpp"

namespace script::lua_backend {
class LuaEngine;
}

namespace script::internal {

template <typename T>
struct ImplType<Local<T>> {
  using type = int;
};

template <typename T>
struct ImplType<Global<T>> {
  struct type {
    lua_backend::LuaEngine* engine = nullptr;
    lua_Integer index = 0;
    GlobalWeakBookkeeping::HandleType handle{};

    type() = default;

    type(const type& copy) : engine(copy.engine), index(copy.index) {}
    type(type&& move) noexcept : engine(move.engine), index(move.index) {
      move.index = 0;
      move.engine = nullptr;
    }

    type& operator=(const type& copy) {
      index = copy.index;
      engine = copy.engine;
      return *this;
    }

    type& operator=(type&& copy) noexcept {
      index = copy.index;
      engine = copy.engine;

      copy.index = 0;
      copy.engine = nullptr;
    }
  };
};

template <typename T>
struct ImplType<Weak<T>> {
  using type = typename ImplType<Global<T>>::type;
};

}  // namespace script::internal