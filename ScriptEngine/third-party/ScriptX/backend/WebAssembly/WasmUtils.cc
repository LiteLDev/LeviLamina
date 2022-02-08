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

#include <cstdlib>
#include "../../src/Utils.h"
#include "WasmEngine.h"

namespace script {

static void fillString(const wasm_backend::WasmStringHolder &h) {
  if (!h.cString_) {
    h.cString_ = wasm_backend::Stack::toCString(h.index_);
    if (h.cString_) {
      h.length_ = std::strlen(h.cString_);
    } else {
      h.cString_ = "[script::StringHolder toString failed]";
      h.length_ = 0;
    }
  }
}

StringHolder::StringHolder(const script::Local<script::String> &string)
    : internalHolder_{nullptr, 0, string.val_} {}

StringHolder::~StringHolder() {
  if (internalHolder_.cString_) {
    std::free(const_cast<char *>(internalHolder_.cString_));
  }
}

size_t StringHolder::length() const {
  fillString(internalHolder_);
  return internalHolder_.length_;
}

const char *StringHolder::c_str() const {
  fillString(internalHolder_);
  return internalHolder_.cString_;
}

std::string_view StringHolder::stringView() const {
  fillString(internalHolder_);
  return std::string_view(internalHolder_.cString_, internalHolder_.length_);
}

std::string StringHolder::string() const {
  fillString(internalHolder_);
  return internalHolder_.cString_;
}

#if defined(__cpp_char8_t)
// NOLINTNEXTLINE(clang-analyzer-cplusplus.InnerPointer)
std::u8string StringHolder::u8string() const { return std::u8string(c_u8str(), length()); }

std::u8string_view StringHolder::u8stringView() const {
  // NOLINTNEXTLINE(clang-analyzer-cplusplus.InnerPointer)
  return std::u8string_view(c_u8str(), length());
}

const char8_t *StringHolder::c_u8str() const { return reinterpret_cast<const char8_t *>(c_str()); }
#endif

}  // namespace script
