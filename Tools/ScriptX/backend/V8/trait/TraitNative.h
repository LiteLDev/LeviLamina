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

#include "../../../src/foundation.h"
#include "../../../src/types.h"
#include "../V8Helper.h"

namespace script {

namespace v8_backend {
class V8Engine;
}

template <>
struct internal::ImplType<::script::Arguments> {
  using type = std::pair<v8_backend::V8Engine*, v8::FunctionCallbackInfo<v8::Value>>;
};

namespace v8_backend {

struct V8ScriptClassState {
  V8Engine* scriptEngine_ = nullptr;
  v8::Global<v8::Object> weakRef_;
  void* classDefine_ = nullptr;
};

}  // namespace v8_backend

template <>
struct internal::ImplType<::script::ScriptClass> {
  using type = v8_backend::V8ScriptClassState;
};

}  // namespace script