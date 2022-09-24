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

#include <ScriptX/ScriptX.h>

#include <utility>

namespace script::internal {

Local<Value> getNamespaceObject(ScriptEngine* engine, const std::string_view& nameSpace,
                                Local<Value> rootNs) {
  Local<Value> nameSpaceObj = std::move(rootNs);
  if (!nameSpace.empty()) {
    std::size_t begin = 0;
    while (begin < nameSpace.size()) {
      auto index = nameSpace.find('.', begin);
      if (index == std::string::npos) {
        index = nameSpace.size();
      }

      StackFrameScope stack;
      auto hasNs = !nameSpaceObj.isNull();

      auto key = String::newString(nameSpace.substr(begin, index - begin));
      auto obj = hasNs ? nameSpaceObj.asObject().get(key) : engine->get(key);
      if (obj.isNull()) {
        // new plain object
        obj = Object::newObject();
        if (hasNs) {
          nameSpaceObj.asObject().set(key, obj);
        } else {
          engine->set(key, obj);
        }
      } else if (!obj.isObject()) {
        throw Exception("invalid namespace");
      }

      nameSpaceObj = stack.returnValue(obj);
      begin = index + 1;
    }
  }
  return nameSpaceObj;
}

}  // namespace script::internal