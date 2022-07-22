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

#include "Utils.h"
#include <atomic>

namespace script {

Tracer::Delegate* Tracer::delegate_;

void Tracer::setDelegate(Tracer::Delegate* d) {
  delegate_ = d;
  // use atomic to insert a memory barrier here.
  std::atomic_int().store(0, std::memory_order_release);
}

Tracer::Tracer(ScriptEngine* engine, const char* traceName) noexcept : engine_(engine) {
  if (delegate_) {
    delegate_->beginTrace(engine, traceName);
  }
}

Tracer::Tracer(ScriptEngine* engine, const std::string& traceName) noexcept
    : Tracer(engine, traceName.c_str()) {}

Tracer::~Tracer() {
  if (delegate_) {
    delegate_->endTrace(engine_);
  }
}

Logger::Delegate* Logger::delegate_ = nullptr;

void Logger::log(const std::string& msg) {
  if (delegate_) {
    delegate_->log(msg);
  }
}

void Logger::log(const char* msg) {
  if (delegate_) {
    delegate_->log(msg);
  }
}

void Logger::log(std::string_view msg) {
  if (delegate_) {
    delegate_->log(msg);
  }
}

void Logger::setDelegate(Delegate* delegate) {
  delegate_ = delegate;
  // use atomic to insert a memory barrier here.
  std::atomic_int().store(0, std::memory_order_release);
}

Logger::~Logger() {
  if (delegate_) {
    delegate_->log(str());
  }
}

}  // namespace script
