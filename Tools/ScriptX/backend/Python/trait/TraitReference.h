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

#include <cstdint>
#include "../../src/types.h"
#include "../PyHelper.h"

namespace script {

namespace py_backend {

struct GlobalRefState {
  PyObject* _ref;
  PyEngine *_engine;

  GlobalRefState();
  GlobalRefState(PyObject* obj);
  GlobalRefState(const GlobalRefState& assign);
  GlobalRefState(GlobalRefState&& move) noexcept;

  GlobalRefState& operator=(const GlobalRefState& assign);
  GlobalRefState& operator=(GlobalRefState&& move) noexcept;
  void swap(GlobalRefState& other);

  bool isEmpty() const;
  PyObject *get() const;    // ref count + 1
  PyObject *peek() const;   // ref count no change
  void reset();
  void dtor(bool eraseFromList = true);
};

struct WeakRefState {
  PyObject* _ref;
  bool _isRealWeakRef = false;  
  PyEngine* _engine;  
  // if true, _ref is a real weak ref, or _ref will be a global ref instead 
  // (some builtin types like <int, string, ...> cannot have native weak ref)

  WeakRefState();
  WeakRefState(PyObject* obj);
  WeakRefState(const WeakRefState& assign);
  WeakRefState(WeakRefState&& move) noexcept;

  WeakRefState& operator=(const WeakRefState& assign);
  WeakRefState& operator=(WeakRefState&& move) noexcept;
  void swap(WeakRefState& other);

  bool isEmpty() const;
  bool isRealWeakRef() const;

  PyObject *get() const;          // ref count + 1
  PyObject *peek() const;   // ref count no change
  void reset();
  void dtor(bool eraseFromList = true);
};

}   // namespace script::py_backend

namespace internal {

template <typename T>
struct ImplType<Local<T>> {
  using type = PyObject*;
};

template <typename T>
struct ImplType<Global<T>> {
  using type = py_backend::GlobalRefState;
};

template <typename T>
struct ImplType<Weak<T>> {
  using type = py_backend::WeakRefState;
};

}  // namespace script::internal

}// namespace script