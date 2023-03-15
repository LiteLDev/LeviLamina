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
#include "../../src/types.h"

namespace script {

namespace py_backend {

// Two exception sources:
// 1. PyErr_Fetch get from Python
// 2. Construct from std::string
//
// Four exception usage way:
// 1. exception() need return "Exception Object"
// 2. message() need return "Message String"
// 3. traceback() need return "Stacktrace String"
// 4. throw exception back to Python in ml_meth callback function

class ExceptionFields {
 public:
  mutable Global<Value> exceptionObj_{};

  mutable std::string message_{};
  mutable bool hasMessage_ = false;

  mutable std::string stacktrace_{};
  mutable bool hasStacktrace_ = false;
  
  std::string getMessage() const noexcept;
  std::string getStacktrace() const noexcept;
};

}  // namespace py_backend

template <>
struct internal::ImplType<Exception> {
  using type = py_backend::ExceptionFields;
};

}  // namespace script
