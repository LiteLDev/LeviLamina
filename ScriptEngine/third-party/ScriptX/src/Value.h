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

#include <memory>
#include <ostream>
#include <string>
#include <string_view>
#include "foundation.h"
#include SCRIPTX_BACKEND(Engine.h)

namespace script {

// values
enum class ValueKind {
  kNull = 0,
  kObject,
  kString,
  kNumber,
  kBoolean,
  kFunction,
  kArray,
  kByteBuffer,
  // types that are not supported by ScriptX
  // like BigInt in js
  kUnsupported
};
// value related APIs:
// 1. Value.h value type class
// 2. Reference.h Local<ValueType> specialized
//  2.1 Local<Value> isXXX asXXX
//  2.2 Local<Value> getKind
// 4. backend_trait/Reference.h

inline const char* valueKindName(ValueKind kind) noexcept {
  switch (kind) {
    case ValueKind::kNull:
      return "Null";
    case ValueKind::kObject:
      return "Object";
    case ValueKind::kString:
      return "String";
    case ValueKind::kNumber:
      return "Number";
    case ValueKind::kBoolean:
      return "Boolean";
    case ValueKind::kFunction:
      return "Function";
    case ValueKind::kArray:
      return "Array";
    case ValueKind::kByteBuffer:
      return "ByteBuffer";
    case ValueKind::kUnsupported:
    default:
      return "Unsupported";
  }
}

inline std::ostream& operator<<(std::ostream& o, ValueKind k) {
  o << valueKindName(k);
  return o;
}

class Value {};

class Object : public Value {
 public:
  /**
   * @return new plain object, throw on failure.
   */
  static Local<Object> newObject();

  /**
   * @param type
   * @param args
   * @return new plain object instance of type, throw on failure
   * note: for JavaScript, type must be a function, for other Script language, refer to the backend.
   */
  static Local<Object> newObject(const Local<Value>& type, const std::vector<Local<Value>>& args);

  /**
   * @param type
   * @param args
   * @return new plain object instance of type, throw on failure
   * note: for JavaScript, type must be a function, for other Script language, refer to the backend.
   */
  static Local<Object> newObject(const Local<Value>& type,
                                 const std::initializer_list<Local<Value>>& args);

  /**
   * typesafe variadic template helper method
   * @tparam T MUST BE local reference, ie: Local<Type>. or supported raw C++ type to convert.
   * @return new plain object instance of type, throw on failure
   * note: for JavaScript, type must be a function, for other Script language, refer to the backend.
   */
  template <typename... T>
  static Local<Object> newObject(const Local<Value>& type, T&&... args);

 private:
  static Local<Object> newObjectImpl(const Local<Value>& type, size_t size,
                                     const Local<Value>* args);

  friend class ScriptEngine;
  friend typename internal::ImplType<ScriptEngine>::type;
};

class String : public Value {
 public:
  /**
   * create string from utf8 encoding string.
   *
   * @param utf8 null-terminated c-style string
   * @return
   *
   * when utf8 is nullptr, a null local reference is returned;
   */
  static Local<String> newString(const char* utf8);

  /**
   * create string from utf8 encoding string.
   *
   * \code{.cc}
   * String::newString(u8"hello world! 😁");
   * \endcode
   *
   * @param utf8
   * @return
   */
  static Local<String> newString(std::string_view utf8);

  /**
   * create string from utf8 encoding string.
   *
   * \code{.cc}
   * String::newString(u8"hello world! 😁");
   * \endcode
   *
   * @param utf8
   * @return
   */
  static Local<String> newString(const std::string& utf8);

  // https://en.ccreference.com/w/cpp/preprocessor/replace#Predefined_macros
#if defined(__cpp_char8_t)

  /**
   * create string from utf8 encoding string.
   *
   * This is the C++20 standard, and is preferred!
   *
   * @param utf8 null-terminated c-style string
   * @return
   * when utf8 is nullptr, a null local reference is returned;
   */
  static Local<String> newString(const char8_t* utf8);

  /**
   * Create string from utf8 encoding string.
   *
   * \code{.cc}
   * String::newString(u8"hello world! 😁");
   * \endcode
   *
   * This is the C++20 standard, and is preferred!
   *
   */
  static Local<String> newString(std::u8string_view utf8);

  /**
   * Create string from utf8 encoding string.
   *
   * \code{.cc}
   * String::newString(u8"hello world! 😁");
   * \endcode
   *
   * This is the C++20 standard, and is preferred!
   *
   */
  static Local<String> newString(const std::u8string& utf8);
#endif
};

class Number : public Value {
 public:
  static Local<Number> newNumber(int32_t value);

  static Local<Number> newNumber(int64_t value);

  static Local<Number> newNumber(float value);

  static Local<Number> newNumber(double value);
};

class Boolean : public Value {
 public:
  static Local<Boolean> newBoolean(bool value);
};

class Function : public Value {
 public:
  /**
   * create a new function, binding to native callback.
   * If you want any contextual info about the callback,
   * using lambda with capture and so on with std::function,
   * **be sure you understand std::function before really writing code**.
   *
   * @param callback function pointer of type FunctionCallback.
   * (a non-capture lambda can be implicitly cast to function pointer),
   * since callee owns the callback, you should always pass a rvalue-reference.
   * @return the created function, an exception maybe thrown.
   */
  static Local<Function> newFunction(FunctionCallback callback);

  /**
   * helper method to create a function from binding.
   * @param nothrow when arguments type mismatch, throw the cast Exception or just return null.
   * note: the exception thrown by the callback still got propagated.
   */
  // implementation is in Native.hpp
  template <typename Func>
  static Local<Function> newFunction(Func&& callback, bool nothrow = kDefaultNoThrow);

 private:
#ifdef SCRIPTX_NO_EXCEPTION_ON_BIND_FUNCTION
  constexpr static bool kDefaultNoThrow = true;
#else
  constexpr static bool kDefaultNoThrow = false;
#endif
};

class Array : public Value {
 public:
  static Local<Array> newArray(size_t size = 0);

  static Local<Array> newArray(const std::vector<Local<Value>>& elements);

  static Local<Array> newArray(const std::initializer_list<Local<Value>>& elements);

  /**
   * typesafe variadic template helper method
   * @tparam T MUST BE local reference, ie: Local<Type>. or supported raw C++ type to convert.
   * @return new plain object instance of type, throw on failure
   * note: for JavaScript, type must be a function, for other Script language, refer to the impl
   */
  template <typename... T>
  static Local<Array> of(T&&... args);

 private:
  static Local<Array> newArrayImpl(size_t size, const Local<Value>* args);
};

namespace internal {
constexpr uint16_t makeType(uint8_t order, uint8_t size) {
  return static_cast<uint16_t>(order << 8u) | size;  // NOLINT
}
}  // namespace internal

class ByteBuffer : public Value {
 public:
  enum class Type : uint16_t {
    kUnspecified = internal::makeType(0, 1),
    kInt8 = internal::makeType(1, 1),
    kUint8 = internal::makeType(2, 1),
    kInt16 = internal::makeType(3, 2),
    kUint16 = internal::makeType(4, 2),
    kInt32 = internal::makeType(5, 4),
    kUint32 = internal::makeType(6, 4),
    kInt64 = internal::makeType(7, 8),
    kUint64 = internal::makeType(8, 8),
    KFloat32 = internal::makeType(9, 4),
    kFloat64 = internal::makeType(10, 8)
  };

  /**
   * @return unit in byte
   */
  static constexpr uint8_t getTypeSize(Type type) {
    return static_cast<uint8_t>(static_cast<uint16_t>(type) & 0xFFu);  // NOLINT
  }

  /**
   * create a new ByteBuffer with given size.
   * on failure, an Exception is thrown.
   */
  static Local<ByteBuffer> newByteBuffer(size_t size);

  /**
   * create a new ByteBuffer and COPY content of nativeBuffer into it.
   * on failure(may due to engine not support), an Exception is thrown.
   *
   * ByteBuffer copy nativeBuffer to it's own storage.
   * note: caller still own the nativeBuffer pointer.
   * note: the returned Local<ByteBuffer> has it own backing store,
   * thus ret.getRawBytes() != nativeBuffer
   *
   */
  static Local<ByteBuffer> newByteBuffer(void* nativeBuffer, size_t size);

  /**
   * create a new ByteBuffer SHARING the same buffer with native code.
   * on failure(may due to engine not support), an Exception is thrown.
   *
   * ByteBuffer using the same native memory as backing storage.
   * note: the returned Local<ByteBuffer> use nativeBuffer as backing store,
   * thus ret.getRawBytes() == nativeBuffer.get()
   *
   */
  static Local<ByteBuffer> newByteBuffer(std::shared_ptr<void> nativeBuffer, size_t size);
};

class Unsupported : public Value {};

}  // namespace script