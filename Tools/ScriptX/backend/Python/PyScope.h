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
#include "../../src/Reference.h"

namespace script::py_backend {

class PyEngine;

class EngineScopeImpl {
  // Previous thread state
  PyThreadState* prevThreadState;

 public:
  explicit EngineScopeImpl(PyEngine &, PyEngine *);

  ~EngineScopeImpl();
};

class ExitEngineScopeImpl {
  // Entered thread state
  PyThreadState* enteredThreadState;

 public:
  explicit ExitEngineScopeImpl(PyEngine &);

  ~ExitEngineScopeImpl();
};

class StackFrameScopeImpl {
 public:
  explicit StackFrameScopeImpl(PyEngine &) {}

  template <typename T>
  Local<T> returnValue(const Local<T> &localRef) {
    // create a new ref for localRef
    return Local<T>(localRef);
  }
};
}  // namespace script::py_backend
