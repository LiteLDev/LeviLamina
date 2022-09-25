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

#include <JavaScriptCore/JavaScript.h>
#include <atomic>
#include "../../src/foundation.h"

namespace script::jsc_backend {

class JscEngine;

class JscWeakRef {
 public:
  JscWeakRef();

  explicit JscWeakRef(JSValueRef value);

  ~JscWeakRef();

  JscWeakRef(const JscWeakRef& copy);

  JscWeakRef& operator=(const JscWeakRef& copy);

  JscWeakRef(JscWeakRef&& move) noexcept;

  JscWeakRef& operator=(JscWeakRef&& move) noexcept;

  void reset(JscEngine* engine);

  void swap(JscWeakRef& rhs) noexcept;

  JSValueRef get() const;

  bool isEmpty() const;

 private:
  // this header should be valid as a pure-cpp header
  // so we don't using Objective-C types
  // JSManagedObject* -> JscWeakRef.mm
  void* managedValue_ = nullptr;

  // if it's not a object, just keep the ordinary value
  JSValueRef nonObject_ = nullptr;
};

}  // namespace script::jsc_backend
