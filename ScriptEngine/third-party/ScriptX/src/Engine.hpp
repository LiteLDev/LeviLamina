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

#include <string>

#include "Engine.h"
#include "Exception.h"
#include "Reference.h"
#include SCRIPTX_BACKEND(Engine.h)
#include SCRIPTX_BACKEND(Includes.h)

namespace script {

template <typename T>
void ScriptEngine::registerNativeClass(const ClassDefine<T>& classDefine) {
  if ((std::is_same_v<void, T> &&
       staticClassDefineRegistry_.find(&classDefine) != staticClassDefineRegistry_.end()) ||
      classDefineRegistry_.find(internal::typeIndexOf<T>()) != classDefineRegistry_.end()) {
    throw Exception(std::string("already registered for " + classDefine.getClassName()));
  }
  using RealEngine = typename internal::ImplType<ScriptEngine>::type;

  internal::scriptDynamicCast<RealEngine*>(this)->registerNativeClassImpl<T>(&classDefine);

  if (std::is_same_v<void, T>) {
    staticClassDefineRegistry_.emplace(&classDefine);
  } else {
    classDefineRegistry_.emplace(internal::typeIndexOf<T>(), &classDefine);
  }
}

template <typename T>
const ClassDefine<T>& ScriptEngine::getClassDefine() const {
  static_assert(!std::is_same_v<void, T>);
  auto it = classDefineRegistry_.find(internal::typeIndexOf<T>());
  if (it == classDefineRegistry_.end()) {
    throw Exception(std::string("ClassDefine is not registered"));
  }
  return *static_cast<const ClassDefine<T>*>(it->second);
}

template <typename T>
Local<Object> ScriptEngine::newNativeClassImpl(const ClassDefine<T>& classDefine, size_t size,
                                               const Local<Value>* args) {
  static_assert(!std::is_same_v<void, T>);
  using RealEngine = typename internal::ImplType<ScriptEngine>::type;
  return internal::scriptDynamicCast<RealEngine*>(this)->newNativeClassImpl<T>(&classDefine, size,
                                                                               args);
}

template <typename T>
bool ScriptEngine::isInstanceOfImpl(const Local<Value>& value, const ClassDefine<T>& classDefine) {
  static_assert(!std::is_same_v<void, T>);
  using RealEngine = typename internal::ImplType<ScriptEngine>::type;
  return internal::scriptDynamicCast<RealEngine*>(this)->isInstanceOfImpl(value, &classDefine);
}

template <typename T>
T* ScriptEngine::getNativeInstanceImpl(const Local<Value>& value,
                                       const ClassDefine<T>& classDefine) {
  static_assert(!std::is_same_v<void, T>);
  using RealEngine = typename internal::ImplType<ScriptEngine>::type;
  return internal::scriptDynamicCast<RealEngine*>(this)->getNativeInstanceImpl(value, &classDefine);
}

template <typename T>
inline std::shared_ptr<T> ScriptEngine::getData() {
  return std::static_pointer_cast<T>(userData_);
}

}  // namespace script