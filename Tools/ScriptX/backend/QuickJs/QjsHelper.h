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
#include "../../src/foundation.h"
#include "../../src/types.h"

SCRIPTX_BEGIN_INCLUDE_LIBRARY
#include <quickjs.h>
#include <quickjs-libc.h>
SCRIPTX_END_INCLUDE_LIBRARY

namespace script::qjs_backend {
class QjsEngine;

JSContext* currentContext();

JSRuntime* currentRuntime();

QjsEngine& currentEngine();

/**
 * @param value  owned
 */
void checkException(JSValueConst value);

/**
 * throw if ret < 0
 * @param ret
 */
void checkException(int ret, const char* message = "Unknown Error");

JSValue throwException(const Exception& e, QjsEngine* engine = nullptr);

JSValue dupValue(JSValueConst val, JSContext* context = nullptr);

void freeValue(JSValueConst val, JSContext* context = nullptr);

}  // namespace script::qjs_backend
