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

#ifdef __cpp_rtti
#include <typeindex>
#else
#include <type_traits>
#include <utility>
#endif

namespace script::internal {

#ifdef __cpp_rtti

using TypeIndex = std::type_index;

template <typename T>
TypeIndex typeIndexOf() {
  return std::type_index(typeid(T));
}

template <typename R, typename T>
R scriptDynamicCast(T&& t) {
  return dynamic_cast<R>(std::forward<T>(t));
}

#else

using TypeIndex = const void*;

namespace detail {

template <typename T>
TypeIndex typeIndexOfInner() {
  struct Helper {};
  // we only need to make sure:
  // for each type it returns different pointer
  static Helper index;
  return &index;
}

}  // namespace detail

template <typename T>
TypeIndex typeIndexOf() {
  return detail::typeIndexOfInner<std::remove_cv_t<T> >();
}

template <typename R, typename T>
R scriptDynamicCast(T&& t) {
  return static_cast<R>(std::forward<T>(t));
}

#endif

}  // namespace script::internal
