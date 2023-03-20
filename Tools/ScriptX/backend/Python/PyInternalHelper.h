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

SCRIPTX_BEGIN_INCLUDE_LIBRARY
#include <pystate.h>
SCRIPTX_END_INCLUDE_LIBRARY

// =========================================
// - Attention! Functions and definitions below is copied from CPython source code so they 
//  may need to be re-adapted as the CPython backend's version is updated.
// - These function and definitions are not exported. We can only copy the implementation.

extern "C" void _PyThreadState_DeleteExcept(/*_PyRuntimeState *runtime, */ PyThreadState *tstate);

// =========================================

extern "C" void SetPyInterpreterStateFinalizing(PyInterpreterState *is);