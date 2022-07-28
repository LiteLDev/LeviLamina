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

#include <ostream>
#include <string_view>
#include "Reference.h"
#include "foundation.h"
#include "types.h"
#include SCRIPTX_BACKEND(Exception.h)
#include SCRIPTX_BACKEND(Engine.h)

namespace script {

class Exception : public std::exception {
  using InternalException = typename internal::ImplType<Exception>::type;
  InternalException exception_;

  static_assert(std::is_copy_constructible_v<InternalException>);
  static_assert(std::is_move_constructible_v<InternalException>);
  static_assert(std::is_copy_assignable_v<InternalException>);
  static_assert(std::is_move_assignable_v<InternalException>);

 public:
  explicit Exception(const Local<Value>& exception);
  explicit Exception(const Local<String>& message);
  explicit Exception(std::string message);

  template <typename StringLike, StringLikeConcept(StringLike)>
  explicit Exception(StringLike&& messageStringLike);

  Exception() : Exception("Unknown Exception") {}
  ~Exception() override = default;

  Exception(const Exception& copy) : exception_(copy.exception_) {}

  Exception& operator=(const Exception& assign) {
    if (this != &assign) {
      exception_ = assign.exception_;
    }
    return *this;
  }

  Exception(Exception&& move) noexcept : exception_(std::move(move.exception_)) {}

  Exception& operator=(Exception&& move) noexcept {
    if (this != &move) {
      exception_ = std::move(move.exception_);
    }
    return *this;
  }

  SCRIPTX_DISALLOW_NEW();

  /**
   * @return the underlay exception, type depends on what script engine is used.
   */
  Local<Value> exception() const;

  std::string message() const noexcept;

  std::string stacktrace() const noexcept;

  const char* what() const noexcept override;

 private:
  friend class ScriptEngine;

  friend typename internal::ImplType<ScriptEngine>::type;
};

inline std::ostream& operator<<(std::ostream& out, const Exception& e) {
  out << e.message() << std::endl << e.stacktrace() << std::endl;
  return out;
}

}  // namespace script
