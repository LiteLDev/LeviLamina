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

#include "../../src/types.h"

SCRIPTX_BEGIN_INCLUDE_LIBRARY
#include <v8.h>
SCRIPTX_END_INCLUDE_LIBRARY

namespace script::v8_backend {

class V8Engine;

// forward declare to solve recursive include issue
// implemented in V8Engine.h
V8Engine* currentEngine();

V8Engine& currentEngineChecked();

v8::Isolate* currentEngineIsolateChecked();

v8::Local<v8::Context> currentEngineContextChecked();

std::tuple<v8::Isolate*, v8::Local<v8::Context>> currentEngineIsolateAndContextChecked();

void checkException(v8::TryCatch& tryCatch);

void rethrowException(const Exception& exception);

}  // namespace script::v8_backend

namespace script {
struct v8_interop;
}