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

#include "../../types.h"
#include "../../version.h"

// all in one header file
#include "../../Engine.h"
#include "../../Engine.hpp"
#include "../../Exception.h"
#include "../../Includes.h"
#include "../../Native.h"
#include "../../Native.hpp"
#include "../../Reference.h"
#include "../../Scope.h"
#include "../../Utils.h"
#include "../../Value.h"

#ifdef SCRIPTX_FEATURE_INSPECTOR
// inspector
#include "../../Inspector.h"
#endif

// utils
#include "../../utils/MessageQueue.h"
#include "../../utils/ThreadPool.h"

namespace script {

// export the implementation to script namespace
using ScriptEngineImpl = typename internal::ImplType<ScriptEngine>::type;

}  // namespace script

// undef internal used marcos
#undef StringLikeConcept
#undef StringLikeConceptCondition
#undef SCRIPTX_DISALLOW_COPY
#undef SCRIPTX_DISALLOW_MOVE
#undef SCRIPTX_DISALLOW_COPY_AND_MOVE
#undef SCRIPTX_DISALLOW_NEW
#undef SCRIPTX_UNUSED
#undef SCRIPTX_MARCO_TO_STRING
#undef SCRIPTX_MARCO_TO_STRING_INNER
#undef SCRIPTX_MARCO_JOIN
#undef SCRIPTX_MARCO_JOIN_INNER
#undef SCRIPTX_BACKEND
#undef SCRIPTX_BEGIN_INCLUDE_LIBRARY
#undef SCRIPTX_END_INCLUDE_LIBRARY
