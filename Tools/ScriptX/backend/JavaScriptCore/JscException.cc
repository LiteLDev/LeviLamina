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

#include "../../src/Exception.h"
#include "../../src/Native.hpp"
#include "../../src/Scope.h"
#include "../../src/Utils.h"
#include "JscEngine.h"
#include "JscHelper.h"
#include "JscReference.hpp"

namespace script {

void jsc_backend::ExceptionFields::fillMessage() const {
  if (!hasMessage_) {
    hasMessage_ = true;
    try {
      auto exp = exception_.get().asObject();
      message_ = exp.get("message").asString().toString();
    } catch (Exception&) {
      message_ = "[another exception in message()]";
    }
  }
}

Exception::Exception(std::string message) : std::exception(), exception_() {
  exception_.message_ = std::move(message);
  exception_.hasMessage_ = true;
}

Exception::Exception(const script::Local<script::String>& message)
    : std::exception(), exception_() {
  JSValueRef jscException = nullptr;
  auto context = jsc_backend::currentEngineContextChecked();
  auto msg = jsc_backend::JscEngine::toJsc(context, message);
  exception_.exception_ = jsc_backend::JscEngine::make<Local<Object>>(
      JSObjectMakeError(context, 1, &msg, &jscException));
  jsc_backend::JscEngine::checkException(jscException);
}

Exception::Exception(const script::Local<script::Value>& exception)
    : std::exception(), exception_({}) {
  exception_.exception_ = exception;
}

Local<Value> Exception::exception() const {
  if (exception_.exception_.isEmpty()) {
    JSValueRef jscException = nullptr;
    auto context = jsc_backend::currentEngineContextChecked();
    auto msg = String::newString(exception_.message_);
    auto msgRef = jsc_backend::JscEngine::toJsc(context, msg);

    exception_.exception_ = jsc_backend::JscEngine::make<Local<Object>>(
        JSObjectMakeError(context, 1, &msgRef, &jscException));
    jsc_backend::JscEngine::checkException(jscException);
  }
  return exception_.exception_.getValue();
}

std::string Exception::message() const noexcept {
  exception_.fillMessage();
  return exception_.message_;
}

std::string Exception::stacktrace() const noexcept {
  try {
    return exception().asObject().get("stack").asString().toString();
  } catch (Exception&) {
    return "[failed to obtain stacktrace]";
  }
}

const char* Exception::what() const noexcept {
  exception_.fillMessage();
  return exception_.message_.c_str();
}

namespace jsc_backend {

void JscEngine::checkException(JSValueRef exception) {
  if (exception) {
    throw Exception(Local<Value>(exception));
  }
}

}  // namespace jsc_backend

}  // namespace script
