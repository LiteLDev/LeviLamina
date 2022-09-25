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

#include <JavaScriptCore/JavaScript.h>
#include "../../src/Reference.h"
#include "../../src/Utils.h"
#include "JscHelper.h"

namespace script {

namespace jsc_backend {

void initString(const jsc_backend::StringHolderData &data) {
  if (!data.inited) {
    data.inited = true;
    if (data.jscStringRefHolder) {
      if (data.length == std::string::npos) {
        data.length = JSStringGetMaximumUTF8CStringSize(data.jscStringRefHolder.get());
      }
      data.stringContent.resize(data.length);
      auto length = JSStringGetUTF8CString(data.jscStringRefHolder.get(), data.stringContent.data(),
                                           data.length);
      data.length = length;
      data.stringContent.resize(length - 1);

      // NOLINTNEXTLINE(cppcoreguidelines-avoid-magic-numbers)
      if (data.stringContent.capacity() - length > 1024) {
        // string has too much wasted space, make a smaller copy
        data.stringContent = data.stringContent;
      }
    } else {
      data.length = 0;
    }
  }
}

}  // namespace jsc_backend

StringHolder::StringHolder(const script::Local<script::String> &string)
    : internalHolder_(string.val_.getSharedStringRef(jsc_backend::currentEngineContextChecked())) {}

StringHolder::~StringHolder() = default;

size_t StringHolder::length() const {
  jsc_backend::initString(internalHolder_);
  return internalHolder_.length - 1;
}

const char *StringHolder::c_str() const {
  jsc_backend::initString(internalHolder_);
  return internalHolder_.stringContent.c_str();
}

std::string_view StringHolder::stringView() const {
  jsc_backend::initString(internalHolder_);
  return internalHolder_.stringContent;
}

std::string StringHolder::string() const {
  jsc_backend::initString(internalHolder_);
  internalHolder_.inited = false;
  return std::move(internalHolder_.stringContent);
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
