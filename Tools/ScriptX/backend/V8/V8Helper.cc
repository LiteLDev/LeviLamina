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

#include "V8Helper.hpp"
#include "V8Engine.h"

namespace script::v8_backend {

// helper
V8Engine* currentEngine() { return ::script::EngineScope::currentEngineAs<V8Engine>(); }

V8Engine& currentEngineChecked() {
  return ::script::EngineScope::currentEngineCheckedAs<V8Engine>();
}

v8::Isolate* currentEngineIsolateChecked() { return currentEngineChecked().isolate_; }

v8::Local<v8::Context> currentEngineContextChecked() {
  auto isolate = currentEngineIsolateChecked();
  return currentEngineChecked().context_.Get(isolate);
}

std::tuple<v8::Isolate*, v8::Local<v8::Context>> currentEngineIsolateAndContextChecked() {
  auto& engine = currentEngineChecked();
  return std::make_tuple(engine.isolate_, engine.context_.Get(engine.isolate_));
}

void checkException(v8::TryCatch& tryCatch) {
  if (tryCatch.HasCaught()) {
    throw Exception(v8_backend::V8Engine::make<Local<Value>>(tryCatch.Exception()));
  }
}

void rethrowException(const Exception& exception) {
  auto isolate = v8_backend::currentEngineIsolateChecked();
  isolate->ThrowException(v8_backend::V8Engine::toV8(isolate, exception.exception()));
}

}  // namespace script::v8_backend
