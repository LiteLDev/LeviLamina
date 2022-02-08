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

#include <new>

#define SCRIPTX_DISALLOW_COPY(CLASS_NAME) \
  CLASS_NAME(const CLASS_NAME&) = delete; \
  CLASS_NAME& operator=(const CLASS_NAME&) = delete

#define SCRIPTX_DISALLOW_MOVE(CLASS_NAME) \
  CLASS_NAME(CLASS_NAME&&) = delete;      \
  CLASS_NAME& operator=(CLASS_NAME&&) = delete

#define SCRIPTX_DISALLOW_COPY_AND_MOVE(CLASS_NAME) \
  SCRIPTX_DISALLOW_COPY(CLASS_NAME);               \
  SCRIPTX_DISALLOW_MOVE(CLASS_NAME)

#define SCRIPTX_DISALLOW_NEW()                                            \
  static void* operator new(std::size_t) = delete;                        \
  static void* operator new(std::size_t, const std::nothrow_t&) = delete; \
  static void* operator new[](std::size_t) = delete;                      \
  static void* operator new[](std::size_t, const std::nothrow_t&) = delete

#define SCRIPTX_UNUSED(val) static_cast<void>(val)

namespace script::internal {

template <typename T>
struct ImplType {
  // using type = <the implemented type>;
};

}  // namespace script::internal

// SCRIPTX_BACKEND_TRAIT_PREFIX is defined in CMake
#define SCRIPTX_MARCO_TO_STRING(x) SCRIPTX_MARCO_TO_STRING_INNER(x)
#define SCRIPTX_MARCO_TO_STRING_INNER(x) #x
#define SCRIPTX_MARCO_JOIN(x, y) SCRIPTX_MARCO_JOIN_INNER(x, y)
#define SCRIPTX_MARCO_JOIN_INNER(x, y) x##y
#define SCRIPTX_BACKEND(FILE) \
  SCRIPTX_MARCO_TO_STRING(SCRIPTX_MARCO_JOIN(SCRIPTX_BACKEND_TRAIT_PREFIX, FILE))

#ifdef _MSC_VER

// MSVC only support the standart _Pragma on recent version, use the extension key word here
#define SCRIPTX_BEGIN_INCLUDE_LIBRARY __pragma(warning(push, 0))
#define SCRIPTX_END_INCLUDE_LIBRARY __pragma(pop)

#elif defined(__clang__)

#define SCRIPTX_BEGIN_INCLUDE_LIBRARY \
  _Pragma("clang diagnostic push") _Pragma("clang diagnostic ignored \"-Wall\"")

#define SCRIPTX_END_INCLUDE_LIBRARY _Pragma("clang diagnostic pop")

#elif defined(__GNUC__)
// GCC can't suppress all warnings by -Wall
// suppress anything encountered explicitly
// 1. -Wcast-function-type for QuickJs

#define SCRIPTX_BEGIN_INCLUDE_LIBRARY                                        \
  _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wall\"") \
      _Pragma("GCC diagnostic ignored \"-Wcast-function-type\"")

#define SCRIPTX_END_INCLUDE_LIBRARY _Pragma("GCC diagnostic pop")

#else

// disable warnings from library header
#define SCRIPTX_BEGIN_INCLUDE_LIBRARY
#define SCRIPTX_END_INCLUDE_LIBRARY

#endif
