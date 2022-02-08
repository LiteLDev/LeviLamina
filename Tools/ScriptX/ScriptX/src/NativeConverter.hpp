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
#include <cstdint>
#include <cstdlib>
#include "Reference.h"
#include "Scope.h"
#include "Utils.h"
#include "types.h"

namespace script::converter {

/**
 * traits to convert type from Local<Value> to native cpp types and vice versa.
 *
 * natively supported C++ types are:
 *
 * 1. void
 *
 * 2. bool
 *
 * 3. any float type : float double
 *
 * 4. any int type : int8_t uint8_t int16_t uint16_t int32_t uint32_t int64_t uint64_t size_t
 *
 * 5. any string type: string string_view char* char8_t* u8string u8string_view
 *
 * 6. all kind of Local reference
 *
 * 7. any pointer of subclass of ScriptClass
 *
 * see docs and UnitTests for more detail
 *
 */

/**
 * specialize this template to define your custom converter
 *
 * 1. MUST under namespace ::script::converter namespace
 *
 * 2. do as the following code shows
 *
 * \code
 * namespace script::converter {
 *
 * template <>
 * struct Converter <T, void> {
 *   // convert custom type T to Local<Value>
 *   static Local<Value> toScript(T&& value) { ...; }
 *
 *   // convert Local<Value> to custom type T
 *   static T toCpp(const Local<Value>& value) { ...; }
 * };
 *
 * }
 * \endcode
 *
 * @tparam T
 * @tparam enableIfHolder
 */
template <typename T, typename Enable = void>
struct Converter;
// specialized as the following code
/*

 namespace script::converter {

 template <>
 struct Converter <T, void> {
   // convert custom type T to Local<Value>
   static Local<Value> toScript(T&& value) { ...; }
   // convert Local<Value> to custom type T
   static T toCpp(const Local<Value>& value) { ...; }
 };

 }

*/

// ===== implementations =====

template <>
struct Converter<float> {
  static Local<Value> toScript(float value) { return Number::newNumber(value); }

  static float toCpp(const Local<Value>& value) {
    return static_cast<float>(value.asNumber().toFloat());
  }
};

// all other floating types are converted using double as bridge
template <typename T>
struct Converter<T, std::enable_if_t<std::is_floating_point_v<T>>> {
  static Local<Value> toScript(T value) { return Number::newNumber(static_cast<double>(value)); }

  static double toCpp(const Local<Value>& value) {
    return static_cast<T>(value.asNumber().toDouble());
  }
};

template <>
struct Converter<int32_t> {
  static Local<Value> toScript(int32_t value) { return Number::newNumber(value); }

  static int32_t toCpp(const Local<Value>& value) { return value.asNumber().toInt32(); }
};

// all other int types are converted using int64_t as bridge
template <typename T>
struct Converter<T, std::enable_if_t<std::is_integral_v<T>>> {
  static Local<Value> toScript(T value) { return Number::newNumber(static_cast<int64_t>(value)); }

  static T toCpp(const Local<Value>& value) { return static_cast<T>(value.asNumber().toInt64()); }
};

template <>
struct Converter<bool> {
  static Local<Value> toScript(bool value) { return Boolean::newBoolean(value); }

  static bool toCpp(const Local<Value>& value) { return value.asBoolean().value(); }
};

/**
 * convert any sub class of ScriptClass* to reference
 */
template <typename T>
struct Converter<T*, std::enable_if_t<std::is_base_of_v<ScriptClass, T>>> {
  static Local<Value> toScript(const T* value) { return value->getScriptObject(); }

  static T* toCpp(const Local<Value>& value) {
    // `T*` may be `const Script*`, so we must remove const of `T`
    auto ptr = EngineScope::currentEngine()->getNativeInstance<std::remove_const_t<T>>(value);
    if (!ptr) {
      throw Exception("value is not an instance of given native class");
    }
    return ptr;
  }
};

template <typename T>
struct Converter<std::reference_wrapper<T>, std::enable_if_t<std::is_base_of_v<ScriptClass, T>>> {
  static Local<Value> toScript(const T& value) { return *value->getScriptObject(); }

  static std::reference_wrapper<T> toCpp(const Local<Value>& value) {
    return *Converter<T*>::toCpp(value);
  }
};

// not actually used, just to make isConvertible be true on void return type
template <>
struct Converter<void> {
  static Local<Value> toScript() { return {}; }

  static void toCpp(const Local<Value>&) {}
};

/**
 * any supported string
 */
template <typename T>
struct Converter<T, std::enable_if_t<StringLikeConceptCondition(T)>> {
  static Local<Value> toScript(const T& value) { return String::newString(value); }

  static T toCpp(const StringHolder& holder) {
    if constexpr (std::is_same_v<T, std::string>) {
      return holder.string();
    } else if constexpr (std::is_same_v<T, std::string_view>) {
      return holder.stringView();
    } else if constexpr (std::is_same_v<T, const char*>) {
      return holder.c_str();
    }
#ifdef __cpp_lib_char8_t
    else if constexpr (std::is_same_v<T, std::u8string>) {
      return holder.u8string();
    } else if constexpr (std::is_same_v<T, std::u8string_view>) {
      return holder.u8stringView();
    } else if constexpr (std::is_same_v<T, const char8_t*>) {
      return holder.c_u8str();
    }
#endif
    else {
      // unreachable
      abort();
    }
  }

  static T toCpp(const Local<Value>& str) { return toCpp(str.asString().toStringHolder()); }
};

// ScriptX types bypass
template <>
struct Converter<Local<Value>> {
  static Local<Value> toScript(const Local<Value>& value) { return value; }
  static Local<Value> toCpp(const Local<Value>& value) { return value; }
};

#define ConverterSubType(Type)                                                       \
  template <>                                                                        \
  struct Converter<Local<Type>> {                                                    \
    static Local<Value> toScript(const Local<Type>& value) { return value; }         \
    static Local<Type> toCpp(const Local<Value>& value) { return value.as##Type(); } \
  }

ConverterSubType(Object);

ConverterSubType(String);

ConverterSubType(Number);

ConverterSubType(Boolean);

ConverterSubType(Function);

ConverterSubType(Array);

ConverterSubType(ByteBuffer);

ConverterSubType(Unsupported);

#undef ConverterSubType

}  // namespace script::converter

namespace script {

namespace internal {

// like std::decay,
// except decay ScriptClass& to std::reference_wrapper<ScriptClass>
template <typename T, typename = void>
struct ConverterDecay {
  using type = std::decay_t<T>;
};

template <typename T>
struct ConverterDecay<T, std::enable_if_t<std::is_base_of_v<ScriptClass, std::decay_t<T>> &&
                                          std::is_lvalue_reference_v<T>>> {
  using type = std::reference_wrapper<std::decay_t<T>>;
};

template <typename T>
using TypeConverter = script::converter::Converter<typename ConverterDecay<T>::type>;

template <typename T, typename = void>
struct IsConvertibleHelper : std::false_type {};

template <typename T>
struct IsConvertibleHelper<T,
                           // test if it has a function toScript
                           std::void_t<decltype(&TypeConverter<T>::toScript)>> : std::true_type {};

}  // namespace internal

namespace converter {

template <typename T>
constexpr bool isConvertible = internal::IsConvertibleHelper<T>::value;

}  // namespace converter

}  // namespace script