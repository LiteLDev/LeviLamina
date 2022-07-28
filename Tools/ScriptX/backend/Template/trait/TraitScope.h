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

#include "TraitEngine.h"

namespace script {

namespace template_backend {

class EngineScopeImpl {
 public:
  explicit EngineScopeImpl(TemplateEngine &, TemplateEngine *) {
    // enter engine;
  }

  ~EngineScopeImpl() {
    // exit engine;
  }
};

class ExitEngineScopeImpl {
 public:
  explicit ExitEngineScopeImpl(TemplateEngine &) {
    // exit current entered engine
  }

  ~ExitEngineScopeImpl() {
    // reenter engine;
  }
};

class StackFrameScopeImpl {
 public:
  explicit StackFrameScopeImpl(TemplateEngine &) {
    // enter stack;
  }

  ~StackFrameScopeImpl() {
    // exit stack;
  }

  template <typename T>
  Local<T> returnValue(const Local<T> &localRef) {
    return localRef;
  }
};
}  // namespace template_backend

template <>
struct internal::ImplType<EngineScope> {
  using type = template_backend::EngineScopeImpl;
};

template <>
struct internal::ImplType<ExitEngineScope> {
  using type = template_backend::ExitEngineScopeImpl;
};

template <>
struct internal::ImplType<StackFrameScope> {
  using type = template_backend::StackFrameScopeImpl;
};

}  // namespace script