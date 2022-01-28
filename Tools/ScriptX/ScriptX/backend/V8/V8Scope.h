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
#include "../../src/types.h"
#include "V8Helper.h"

namespace script::v8_backend {

class V8EngineScope {
  v8::Locker locker_;
  v8::Isolate::Scope isolateScope_;
  v8::HandleScope handleScope_;
  v8::Context::Scope contextScope_;

 public:
  explicit V8EngineScope(V8Engine& engine);

  ~V8EngineScope() = default;
};

class V8ExitEngineScope {
  v8::Unlocker unlocker_;

 public:
  explicit V8ExitEngineScope(V8Engine& engine);
  ~V8ExitEngineScope() = default;
};

class V8HandleScope {
  v8::EscapableHandleScope handleScope_;

 public:
  explicit V8HandleScope(V8Engine& engine);

  ~V8HandleScope() = default;

  template <typename T>
  Local<T> returnValue(const Local<T>& localRef);
};

}  // namespace script::v8_backend
