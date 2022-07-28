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

#include "Reference.h"
#include "Scope.h"
#include "Utils.h"

namespace script {

std::string Local<Value>::describeUtf8() const {
  if (isNull()) return "null";
  return describe().toString();
}

StringHolder Local<String>::toStringHolder() const { return StringHolder(*this); }

std::string Local<String>::toString() const { return toStringHolder().string(); }

#ifdef __cpp_char8_t
std::u8string Local<String>::toU8string() const { return toStringHolder().u8string(); }
#endif

std::vector<std::string> Local<Object>::getKeyNames() const {
  std::vector<std::string> ret;
  script::StackFrameScope stack;
  for (auto&& k : getKeys()) {
    ret.push_back(k.toString());
  }
  return ret;
}

}  // namespace script
