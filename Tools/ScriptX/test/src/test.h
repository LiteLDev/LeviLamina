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

#include <gtest/gtest.h>

#include <ScriptX/ScriptX.h>

#ifndef __cpp_lib_char8_t
using char8_t = char;
#endif

namespace script::test {
// TestScript
struct TS {
  template <typename T>
  TS& js(T&& s) {
    static_cast<void>(s);
#ifdef SCRIPTX_LANG_JAVASCRIPT
    script = script::String::newString(std::forward<T>(s));
#endif
    return *this;
  }

  template <typename T>
  TS& lua(T&& s) {
    static_cast<void>(s);
#ifdef SCRIPTX_LANG_LUA
    script = script::String::newString(std::forward<T>(s));
#endif
    return *this;
  }

  template <typename T>
  TS& py(T&& s) {
    static_cast<void>(s);
#ifdef SCRIPTX_LANG_PYTHON
    script = script::String::newString(std::forward<T>(s));
#endif
    return *this;
  }

  script::Local<script::String> select() {
    if (script.isNull()) {
      throw std::runtime_error("add script for current language");
    }
    return script.asString();
  }

 private:
  script::Local<script::Value> script;
};

class ScriptXTestFixture : public testing::Test {
 protected:
  script::ScriptEngine* engine = nullptr;

  void SetUp() override;

  void TearDown() override;

  void destroyEngine();
};
}  // namespace script::test

#define DEFINE_ENGINE_TEST(NAME) \
  class NAME : public ::script::test::ScriptXTestFixture {}
