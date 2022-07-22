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

#include "V8Scope.h"
#include "V8Engine.h"
#include "V8Helper.h"
#include "V8Reference.hpp"

namespace script::v8_backend {

V8EngineScope::V8EngineScope(V8Engine& engine)
    : locker_(engine.isolate_),
      isolateScope_(engine.isolate_),
      handleScope_(engine.isolate_),
      contextScope_(engine.context_.Get(engine.isolate_)) {}

V8ExitEngineScope::V8ExitEngineScope(V8Engine& engine) : unlocker_(engine.isolate_) {}

V8HandleScope::V8HandleScope(V8Engine& engine) : handleScope_(engine.isolate_) {}

}  // namespace script::v8_backend
