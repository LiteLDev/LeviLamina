/*
 * Tencent is pleased to support the open source community by making ScriptX available.
 * Copyright (C) 2021 THL A29 Limited, a Tencent company.  All rights reserved.
 * ScriptX is licensed under the BSD 3-Clause License, except for the third-party components listed
 * in the file 'LICENSE' which may be subject to their corresponding license terms. This file is
 * subject to the terms and conditions defined in file 'LICENSE', which is part of this source code
 * package.
 */
#pragma once

#include "../../src/Reference.h"
#include "../../src/types.h"

namespace script {

namespace lua_backend {

class ExceptionFields {
 public:
  mutable Global<Value> exception_{};

  mutable std::string message_{};
  mutable bool hasMessage_ = false;

  mutable std::string stacktrace_{};
  mutable bool hasStacktrace_ = false;

  void fillMessage() const noexcept;
  void fillStacktrace() const noexcept;
};

}  // namespace lua_backend

template <>
struct internal::ImplType<Exception> {
  using type = lua_backend::ExceptionFields;
};

}  // namespace script
