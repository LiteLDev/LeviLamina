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

namespace script::jsc_backend {

class JscEngine;

class JscEngineScope {
 private:
  struct UnlockPrevious {
    JscEngine* previousEngine_;

    explicit UnlockPrevious(JscEngine* currentEngine, JscEngine* previous) : previousEngine_() {
      UnlockPrevious_Ctor(currentEngine, *this, previous);
    }

    ~UnlockPrevious() { UnlockPrevious_Dtor(*this); }
  };

  UnlockPrevious unlockPrevious_;
  std::lock_guard<std::recursive_mutex> lockGuard_;

 public:
  explicit JscEngineScope(JscEngine&, JscEngine*);

  ~JscEngineScope();

 private:
  static void UnlockPrevious_Ctor(JscEngine* engine, UnlockPrevious&, JscEngine* previous);

  static void UnlockPrevious_Dtor(UnlockPrevious&);
};

class JscExitEngineScope {
 private:
  std::recursive_mutex& virtualMachineLock_;

 public:
  explicit JscExitEngineScope(JscEngine&);

  ~JscExitEngineScope();
};

class JscStackFrameScope {
 public:
  explicit JscStackFrameScope(JscEngine&) {}

  template <typename T>
  Local<T> returnValue(const Local<T>& localRef) {
    return localRef;
  }
};

}  // namespace script::jsc_backend
