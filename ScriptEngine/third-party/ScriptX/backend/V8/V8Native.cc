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

#include "V8Native.hpp"
#include "../../src/Native.h"
#include "../../src/Reference.h"
#include "../../src/Value.h"
#include "V8Engine.h"
#include "V8Reference.hpp"

namespace script {

Arguments::Arguments(script::Arguments::InternalCallbackInfoType callbackInfo)
    : callbackInfo_(std::move(callbackInfo)) {}

Arguments::~Arguments() = default;

Local<Object> Arguments::thiz() const {
  return v8_backend::V8Engine::make<Local<Value>>(callbackInfo_.second.This()).asObject();
}

bool Arguments::hasThiz() const {
  auto value = v8_backend::V8Engine::make<Local<Value>>(callbackInfo_.second.This());
  return value.isObject();
}

size_t Arguments::size() const { return callbackInfo_.second.Length(); }

Local<Value> Arguments::operator[](size_t i) const {
  return v8_backend::V8Engine::make<Local<Value>>(callbackInfo_.second[static_cast<int>(i)]);
}

ScriptEngine* Arguments::engine() const { return callbackInfo_.first; }

ScriptClass::ScriptClass(const Local<Object>& scriptObject) : internalState_() {
  auto engine = &v8_backend::currentEngineChecked();
  internalState_.scriptEngine_ = engine;

  internalState_.weakRef_.Reset(engine->isolate_,
                                v8_backend::V8Engine::toV8(engine->isolate_, scriptObject));
  internalState_.weakRef_.SetWeak();
}

Local<Object> ScriptClass::getScriptObject() const {
  Local<Value> obj;
  if (!internalState_.weakRef_.IsEmpty()) {
    obj = v8_backend::V8Engine::make<Local<Object>>(
        internalState_.weakRef_.Get(internalState_.scriptEngine_->isolate_));
  }
  return obj.asObject();
}

Local<Array> ScriptClass::getInternalStore() const {
  auto v8Engine = getScriptEngineAs<v8_backend::V8Engine>();
  auto context = v8Engine->context_.Get(v8Engine->isolate_);
  v8::Local<v8::Value> key = v8Engine->internalStoreSymbol_.Get(v8Engine->isolate_);
  auto thiz = v8_backend::V8Engine::toV8(v8Engine->isolate_, getScriptObject());
  auto array = thiz->Get(context, key);
  if (array.IsEmpty() || !array.ToLocalChecked()->IsArray()) {
    auto store = Array::newArray();
    v8::TryCatch tryCatch(v8Engine->isolate_);
    auto success = thiz->Set(context, key, v8_backend::V8Engine::toV8(v8Engine->isolate_, store));
    v8_backend::checkException(tryCatch);
    (void)success;
    return store;
  }

  return v8_backend::V8Engine::make<Local<Array>>(array.ToLocalChecked().As<v8::Array>());
}

ScriptEngine* ScriptClass::getScriptEngine() const { return internalState_.scriptEngine_; }

ScriptClass::~ScriptClass() {
  EngineScope scope(internalState_.scriptEngine_);
  internalState_.weakRef_.Reset();
}

}  // namespace script
