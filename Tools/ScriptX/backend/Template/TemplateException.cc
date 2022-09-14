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

namespace script {

Exception::Exception(std::string msg) : std::exception(), exception_({}) {
  exception_.message_ = std::move(msg);
}

Exception::Exception(const script::Local<script::String>& message)
    : std::exception(), exception_() {}

Exception::Exception(const script::Local<script::Value>& exception)
    : std::exception(), exception_({}) {}

Local<Value> Exception::exception() const { return {}; }

std::string Exception::message() const noexcept { return exception_.message_; }

std::string Exception::stacktrace() const noexcept { return "[no stacktrace]"; }

const char* Exception::what() const noexcept { return exception_.message_.c_str(); }

}  // namespace script
