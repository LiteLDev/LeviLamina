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

#include <sstream>
#include <string>
#include <string_view>
#include "foundation.h"
#include "types.h"
#include SCRIPTX_BACKEND(Utils.h)
#include SCRIPTX_BACKEND(Engine.h)

namespace script {

enum class ScriptLanguage {
  kJavaScript = 0,
  kLua,
  kPython,
  kRuby,
  // and more
};

class StringHolder {
 private:
  using InternalHolderType = typename internal::ImplType<StringHolder>::type;
  InternalHolderType internalHolder_;

 public:
  ~StringHolder();

  SCRIPTX_DISALLOW_COPY_AND_MOVE(StringHolder);

  SCRIPTX_DISALLOW_NEW();

  size_t length() const;

  /**
   * return a c-style const char * pointer to internal string content,
   * the pointer is valid until this StringHolder instance is destroyed.
   */
  const char* c_str() const;

  /**
   * return a std::string_view to internal string content,
   * the string_view is valid until this StringHolder instance is destroyed.
   */
  std::string_view stringView() const;

  /**
   * COPY the string content to a std::string.
   * this method may bring performance penalty.
   */
  std::string string() const;

#if defined(__cpp_char8_t)

  /**
   * return a c-style const char8_t * pointer to internal string content,
   * the pointer is valid until this StringHolder instance is destroyed.
   */
  const char8_t* c_u8str() const;

  /**
   * cast to a std::string_view to internal string content,
   * the string_view is valid until this StringHolder instance is destroyed.
   */
  std::u8string_view u8stringView() const;

  /**
   * COPY the string content to a std::u8string.
   * this method may bring performance penalty.
   */
  std::u8string u8string() const;

#endif

 private:
  explicit StringHolder(const Local<String>& string);

  friend class ScriptEngine;

  friend typename internal::ImplType<ScriptEngine>::type;

  friend class Local<String>;

  // in Native.hpp
  template <typename T, typename>
  friend struct ::script::internal::TypeHolder;
};

/**
 * A trace interface, used to trace method call for performance.
 */
class Tracer {
 public:
  class Delegate {
   protected:
    virtual void beginTrace(ScriptEngine* engine, const char* traceName) const noexcept = 0;

    virtual void endTrace(ScriptEngine* engine) const noexcept = 0;

    friend class Tracer;
  };

  explicit Tracer(ScriptEngine* engine, const char* traceName) noexcept;

  explicit Tracer(ScriptEngine* engine, const std::string& traceName) noexcept;

  ~Tracer();

  SCRIPTX_DISALLOW_COPY_AND_MOVE(Tracer);

  /**
   * set a trace delegate, better be set before engine start.
   */
  static void setDelegate(Delegate* delegate);

 private:
  ScriptEngine* engine_;
  static Tracer::Delegate* delegate_;
};

class Logger : public std::ostringstream {
 public:
  class Delegate {
   public:
    virtual void log(const char* msg) = 0;
    virtual void log(const std::string& msg) { log(msg.c_str()); }
    virtual void log(std::string_view msg) { log(std::string(msg)); }
  };

  Logger() = default;

  ~Logger() override;

  SCRIPTX_DISALLOW_COPY_AND_MOVE(Logger);

  static void log(const std::string& msg);

  static void log(const char* msg);

  static void log(std::string_view msg);

  static void setDelegate(Delegate* delegate);

 private:
  static Delegate* delegate_;
};

}  // namespace script