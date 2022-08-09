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

#include <initializer_list>
#include <vector>
#include "Value.h"
#include "foundation.h"
#include "types.h"
#include SCRIPTX_BACKEND(Reference.h)
#include SCRIPTX_BACKEND(Engine.h)
#include SCRIPTX_BACKEND(Utils.h)

namespace script {

/**
 * LocalReference inside a StackFrameScope.
 * use specialized Local Types like:
 * - Local<Value>
 * - Local<Object>
 * - Local<Function>
 * ect.
 *
 * Move semantics:
 *
 * 1. Local&lt;Value&gt; will be null after moved, and can still be used as a null reference.
 *
 * 2. other local reference will be invalid after move, and should not be used anymore.
 *
 * the default type intentionally left empty.
 * @tparam T
 */
template <typename T>
class Local final {
  static_assert(std::is_base_of_v<Value, T>, "use specialized Local<T> with Value types");

  //    Local(const Local<T> &copy) noexcept;
  //    Local(Local<T> &&move) noexcept;
  //    Local<T> &operator=(const Local<T> &from);
  //    ~Local();
  //    Local<Value> toValue();
  //    operator Local<Value>() { return toValue(); }
  //    bool operator==(const Local<Value> &other) const;
  //    bool operator!=(const Local<Value> &other) const;
};

template <typename T>
void swap(Local<T>& lhs, Local<T> rhs) {
  lhs.swap(rhs);
}

/**
 * A Global Reference, refers to a script value and prevent if from GCed.
 * Before destroy a ScriptEngine, all created Global ref should be destroyed or reset.
 * note: Only the default constructor can be called without EngineScope, (also can the destructor if
 * this reference is reset).
 */
template <typename T>
class Global final {
  static_assert(std::is_base_of_v<Value, T>, "use Global<T> with Value types");

 public:
  // a null, can be called without EngineScope
  Global() noexcept;

  explicit Global(const Local<T>& localReference);

  explicit Global(const Weak<T>& weakReference);

  Global(const Global<T>& copy);

  Global(Global<T>&& move) noexcept;

  ~Global();

  Global<T>& operator=(const Global& assign);

  Global<T>& operator=(Global&& move) noexcept;

  void swap(Global& rhs) noexcept;

  Global<T>& operator=(const Local<T>& assign);

  /**
   * @return the value, throw if isEmpty() == true
   */
  Local<T> get() const;

  /**
   * @return the value, null if isEmpty() == true
   */
  Local<Value> getValue() const;

  /**
   * if this global is empty, being null is not empty!
   */
  bool isEmpty() const;

  // clear to empty
  void reset();

 private:
  using InternalGlobalRef = typename internal::ImplType<Global>::type;

  InternalGlobalRef val_;

  friend class ScriptEngine;

  friend typename internal::ImplType<ScriptEngine>::type;

  template <typename R>
  friend class Local;

  template <typename R>
  friend class Weak;
};

template <typename T>
void swap(Global<T>& lhs, Global<T>& rhs) {
  lhs.swap(rhs);
}

/**
 * Weak global reference.
 *
 * A weak reference don't prevent object being garbage-collected.
 *
 * note: on some platform GC is not predictable, some event don't have WeakRef implemented.
 *
 * Use weak with caution.
 *
 * @tparam T
 */
template <typename T>
class Weak final {
  static_assert(std::is_base_of_v<Value, T>, "use Weak<T> with Value types");

 public:
  // a null, can be called without EngineScope
  Weak() noexcept;

  ~Weak();

  explicit Weak(const Local<T>& localReference);

  explicit Weak(const Global<T>& globalReference);

  Weak(const Weak<T>& copy);

  Weak(Weak<T>&& move) noexcept;

  Weak& operator=(const Weak<T>& assign);

  Weak& operator=(Weak<T>&& move) noexcept;

  void swap(Weak& rhs) noexcept;

  Weak& operator=(const Local<T>& assign);

  /**
   * @return the value, throw if getValue() returns null (either isEmpty() or GC collected the
   * value).
   */
  Local<T> get() const;

  /**
   * @return the value, or null if isEmpty() == true or the value has been GCed
   */
  Local<Value> getValue() const;

  /**
   * this weak is not set or has been reset
   * note: even if the weak reference is GCed, is still returns true
   */
  bool isEmpty() const;

  void reset() noexcept;

 private:
  using InternalWeakRef = typename internal::ImplType<Weak>::type;

  InternalWeakRef val_;

  friend class ScriptEngine;

  friend typename internal::ImplType<ScriptEngine>::type;

  template <typename R>
  friend class Local;

  template <typename R>
  friend class Global;
};

template <typename T>
void swap(Weak<T>& lhs, Weak<T>& rhs) {
  lhs.swap(rhs);
}

// ==== Specialized Local Types ====

// forward declare of specialized string
template <>
class Local<String>;

#define SPECIALIZE_LOCAL(ValueType)                                               \
 public:                                                                          \
  Local(const Local<ValueType>& copy);                                            \
  Local(Local<ValueType>&& move) noexcept;                                        \
  Local<ValueType>& operator=(const Local& from);                                 \
  Local<ValueType>& operator=(Local&& move) noexcept;                             \
  void swap(Local& rhs) noexcept;                                                 \
  bool operator==(const Local<Value>& other) const;                               \
  bool operator!=(const Local<Value>& other) const { return !operator==(other); } \
  ~Local();                                                                       \
  Local<String> describe() const;                                                 \
  std::string describeUtf8() const;                                               \
  SCRIPTX_DISALLOW_NEW();                                                         \
                                                                                  \
 private:                                                                         \
  using InternalLocalRef = typename internal::ImplType<Local<ValueType>>::type;   \
  InternalLocalRef val_;                                                          \
                                                                                  \
  explicit Local(InternalLocalRef internal);                                      \
                                                                                  \
  friend class ScriptEngine;                                                      \
  friend typename internal::ImplType<ScriptEngine>::type;                         \
                                                                                  \
  friend typename internal::ImplType<internal::interop>::type;                    \
                                                                                  \
  friend class ValueType;                                                         \
                                                                                  \
  friend InternalLocalRef;                                                        \
                                                                                  \
  template <typename R>                                                           \
  friend class Local;                                                             \
                                                                                  \
  template <typename R>                                                           \
  friend class Global;                                                            \
                                                                                  \
  template <typename R>                                                           \
  friend class Weak;                                                              \
                                                                                  \
  friend class Exception;

#define SPECIALIZE_NON_VALUE(ValueType)                                                        \
  Local<Value> asValue() const;                                                                \
  operator Local<Value>() const { return asValue(); }                                          \
  bool operator==(const Local<ValueType>& other) const { return operator==(other.asValue()); } \
  bool operator!=(const Local<ValueType>& other) const { return !operator==(other); }

template <>
class Local<Value> {
  SPECIALIZE_LOCAL(Value)

 public:
  /**
   * create a null reference
   */
  Local() noexcept;

  ValueKind getKind() const;

  bool isNull() const;

  bool isObject() const;

  bool isString() const;

  bool isNumber() const;

  bool isBoolean() const;

  bool isFunction() const;

  bool isArray() const;

  bool isByteBuffer() const;

  bool isUnsupported() const;

  Local<Object> asObject() const;

  Local<Array> asArray() const;

  Local<ByteBuffer> asByteBuffer() const;

  Local<String> asString() const;

  Local<Number> asNumber() const;

  Local<Boolean> asBoolean() const;

  Local<Function> asFunction() const;

  Local<Unsupported> asUnsupported() const;

  Local<Value> asValue() const {
    // define this method to have consistent api with other Local types.
    return *this;
  }

  void reset();

  /**
   * test whether two values are equal
   * impl-related.
   *
   * in JS: same as js `===` operator
   */
  // bool operator==(const Local<Value>& other);
};

template <>
class Local<Object> {
  SPECIALIZE_LOCAL(Object)

 public:
  Local<Value> get(const Local<String>& key) const;

  template <typename StringLike, StringLikeConcept(StringLike)>
  Local<Value> get(StringLike&& keyStringLike) const {
    return get(String::newString(std::forward<StringLike>(keyStringLike)));
  }

  void set(const Local<String>& key, const Local<Value>& value) const;

  /**
   * @param value any thing supported by the type converter
   */
  template <typename T>
  void set(const Local<String>& key, T&& value) const;

  /**
   * @param keyStringLike any thing can fit in String::new(keyStringLike) or Local<String>
   * @param value any thing supported by the type converter
   */
  template <typename StringLike, typename T = Local<Value>, StringLikeConcept(StringLike)>
  void set(StringLike&& keyStringLike, T&& value) const;

  void remove(const Local<String>& key) const;

  template <typename StringLike, StringLikeConcept(StringLike)>
  void remove(StringLike&& keyStringLike) const {
    remove(String::newString(std::forward<StringLike>(keyStringLike)));
  }

  bool has(const Local<String>& key) const;

  template <typename StringLike, StringLikeConcept(StringLike)>
  bool has(StringLike&& keyStringLike) const {
    return has(String::newString(std::forward<StringLike>(keyStringLike)));
  }

  /**
   * @return this instanceof type
   */
  bool instanceOf(const Local<Value>& type) const;

  /**
   * @return all keys to enumerate properties of this object
   */
  std::vector<Local<String>> getKeys() const;

  /**
   * @return all keys to enumerate properties of this object
   */
  std::vector<std::string> getKeyNames() const;

  SPECIALIZE_NON_VALUE(Object)
};

template <>
class Local<String> {
  SPECIALIZE_LOCAL(String)

 public:
  /**
   * avoid memory copy, provides better performance.
   * especially useful when requires string_view or c string
   *
   * \code
   * auto holder = s.toStringHolder();
   * printf("%s", holder.c_str());
   * \endcode
   *
   * \see StringHolder
   */
  StringHolder toStringHolder() const;

  std::string toString() const;

#ifdef __cpp_char8_t

  std::u8string toU8string() const;

#endif

  SPECIALIZE_NON_VALUE(String)

 private:
  friend class StringHolder;
};

template <>
class Local<Number> {
  SPECIALIZE_LOCAL(Number)

 public:
  int32_t toInt32() const;

  int64_t toInt64() const;

  float toFloat() const;

  double toDouble() const;

  bool isInteger() const;

  SPECIALIZE_NON_VALUE(Number)
};

template <>
class Local<Boolean> {
  SPECIALIZE_LOCAL(Boolean)

 public:
  bool value() const;

  SPECIALIZE_NON_VALUE(Boolean)
};

template <>
class Local<Function> {
  SPECIALIZE_LOCAL(Function)

 public:
  /**
   * @param thiz the receiver of the function
   * @param args function arguments
   * @return function return value
   */
  Local<Value> call(const Local<Value>& thiz, const std::vector<Local<Value>>& args) const {
    return callImpl(thiz, args.size(), args.data());
  }

  /**
   * @param thiz the receiver of the function, default to null
   * @param args function arguments
   * @return function return value
   */
  Local<Value> call(const Local<Value>& thiz,
                    const std::initializer_list<Local<Value>>& args) const {
    return callImpl(thiz, args.size(), args.begin());
  }

  /**
   * typesafe variadic template helper method
   * @tparam T MUST BE local reference, ie: Local<Type>. or supported raw C++ type to convert.
   * @param thiz the receiver of the function, default to null
   * @param args function arguments
   * @return function return value
   */
  template <typename... T>
  Local<Value> call(const Local<Value>& thiz, T&&... args) const;

  /**
   * helper function to call with null thiz(receiver) and no arguments.
   */
  Local<Value> call() const { return call({}); }

  /**
   * create a C++ function wrapping a Local<Function>
   *
   * \code
   * // example:
   * Local<Function> add = ...
   * auto func = add.wrapper<int(int,int)>();
   * func(1, 2) == 3;
   * \endcode
   *
   * @tparam FuncType function signature, like "int(int, int)" or "std::string(const char*, int)"
   * @return a std::function
   * @param thiz the receiver of the function, default to null
   * @note the returned std::function holds a Global<Function> to the function and receiver
   * reference, and will be auto released when destroy engine, after that, the returned
   * std::function is not valid anymore.
   */
  // implemented in Native.hpp
  template <typename FuncType>
  std::function<FuncType> wrapper(const Local<Value>& thiz = {}) const;

  SPECIALIZE_NON_VALUE(Function)

 private:
  Local<Value> callImpl(const Local<Value>& thiz, size_t size, const Local<Value>* args) const;
};

template <>
class Local<Array> {
  SPECIALIZE_LOCAL(Array)

 public:
  size_t size() const;

  Local<Value> get(size_t index) const;

  void set(size_t index, const Local<Value>& value) const;

  /**
   * @param value any thing supported by the type converter
   */
  template <typename T>
  void set(size_t index, T&& value) const;

  void add(const Local<Value>& value) const;

  void clear() const;

  SPECIALIZE_NON_VALUE(Array)
};

/**
 * ByteBuffer represents a chunk of memory that you can exchange data between ScriptEngine and C++.
 * For JavaScript language these are ArrayBuffer, or any TypedArray.
 *
 * There are two kinds of ByteBuffer.
 *
 * 1. shared.
 * 2. non-shared.
 *
 * For instance, when we have a "data = new ArrayBuffer()" in js,
 * and passed to C++ as "Local<ByteBuffer> bytes".
 *
 * Shared means "data" and "bytes" can point to the same memory address, so any write on "data" can
 * be seen on "bytes", and vice-versa.
 *
 * Non-shared means we can't get the pointer of "data" to the memory chunk(usually the current
 * backend not support this), so we have to make a copy of it. In this case, we need two more
 * operations: "sync" to copy data form "data" to "bytes" and "commit" to copy from "bytes" to
 * "data".
 *
 * For now, V8 and JavaScriptCore backend support full shared, that is all ByteBuffer are shared.
 * For Wasm back end it's different, please read the doc.
 *
 * But you can always use a shared byte buffer as no non-shared, "commit" & "sync" on it would be
 * noop.
 */
template <>
class Local<ByteBuffer> {
  SPECIALIZE_LOCAL(ByteBuffer)

 public:
  /**
   * get the underlying raw bytes
   *
   * @return the raw pointer, caller does NOT OWN this pointer!
   * And it's only valid during the Local<ByteArray> lifecycle.
   *
   * This is a cheaper call (depends on implementation)
   * compared to getRawBytesShared(), use this one when you
   * just want to get the raw bytes temporarily.
   */
  void* getRawBytes() const;

  /**
   * get the underlying raw bytes
   * @return the raw pointer, caller OWN the shared_ptr,
   * and the shared_ptr stay valid until the engine is destroyed.
   *
   * note:
   *
   * 1. caller should release the shared_ptr before destroying ScriptEngine.
   *
   * 2. getRawBytes() == getRawBytesShared().get()
   *
   * 3. getRawBytesShared() maybe more expensive compared to getRawBytes() depends on
   * implementations.
   */
  std::shared_ptr<void> getRawBytesShared() const;

  /**
   * @return size of raw bytes, in unit of byte
   */
  size_t byteLength() const;

  /**
   * @return count of elements (uint8, uint32, etc).
   * use getType() to fetch element type.
   */
  size_t elementCount() const { return byteLength() / ByteBuffer::getTypeSize(getType()); }

  /**
   * @return the content type
   */
  ByteBuffer::Type getType() const;

  /**
   * If the ByteBuffer is a shared ByteBuffer.
   * Read class doc for more detail about shared & non-shared.
   */
  bool isShared() const;

  /**
   * If the ByteBuffer is non-shared, copy data from C++ to Script.
   * For shared ByteBuffer, this is a noop.
   */
  void commit() const;

  /**
   * If the ByteBuffer is non-shared, copy data from Script to C++.
   * For shared ByteBuffer, this is a noop.
   */
  void sync() const;

  SPECIALIZE_NON_VALUE(ByteBuffer);
};

template <>
class Local<Unsupported> {
  SPECIALIZE_LOCAL(Unsupported)

 public:
  SPECIALIZE_NON_VALUE(Unsupported)
};

#undef SPECIALIZE_LOCAL
#undef SPECIALIZE_NON_VALUE

}  // namespace script
