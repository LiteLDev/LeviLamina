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
#include <string_view>
#include <unordered_map>
#include <unordered_set>
#include "Reference.h"
#include "Value.h"
#include "types.h"
#include "utils/MessageQueue.h"
#include "utils/TypeInformation.h"

namespace script {

class ScriptEngine {
 protected:
  std::unordered_map<internal::TypeIndex, const void*> classDefineRegistry_{};
  std::unordered_set<const void*> staticClassDefineRegistry_{};
  std::shared_ptr<void> userData_{};

 public:
  explicit ScriptEngine(std::shared_ptr<utils::MessageQueue> messageQueue = {}) {}

  /**
   * destroy this ScriptEngine instance, and delete itself.
   * ScriptEngine don't expose a public destructor,
   * since C++ don't allow virtual method call inside which.
   * we use this method instead of a destructor.
   *
   * note: please release any resource got from this ScriptEngine, like Global, Weak ref,
   * otherwise it's undefined behavior.
   *
   */
  virtual void destroy() = 0;

  /**
   * check if the engine is in the process of destroying.
   * this is usually used in destructor of ScriptClass, to check if ScriptEngine API can be called.
   *
   * note: when enter EngineScope with a destroying engine, it throws std::logic_error
   */
  virtual bool isDestroying() const = 0;

  SCRIPTX_DISALLOW_COPY_AND_MOVE(ScriptEngine);

  /**
   * the delete impl for ScriptEngine to be used with unique_ptr && shared_ptr
   */
  struct Deleter {
    void operator()(ScriptEngine* ptr) const noexcept { ptr->destroy(); }
  };

  /**
   * get value from the script engine context
   */
  virtual Local<Value> get(const Local<String>& key) = 0;

  /**
   * get value from the script engine context
   */
  template <typename StringLike, StringLikeConcept(StringLike)>
  Local<Value> get(StringLike&& keyStringLike) {
    return get(String::newString(std::forward<StringLike>(keyStringLike)));
  }

  /*
   * set value of the script engine context
   */
  virtual void set(const Local<String>& key, const Local<Value>& value) = 0;

  /**
   * set value of the script engine context
   *
   * helper method handle convert of value to Local<Value>
   * @param value any thing supported by the type converter
   */
  template <typename T>
  void set(const Local<String>& key, T&& value);

  /**
   * @param keyStringLike any thing can fit in String::new(keyStringLike)
   * @param value any thing supported by the type converter
   */
  template <typename StringLike, typename T = Local<Value>, StringLikeConcept(StringLike)>
  void set(StringLike&& keyStringLike, T&& value);

  /**
   * @param script script content
   * @param sourceFile debug name of the source file
   * @return evaluate result
   */
  virtual Local<Value> eval(const Local<String>& script, const Local<String>& sourceFile) = 0;

  /**
   * @param script script content
   * @return evaluate result
   */
  virtual Local<Value> eval(const Local<String>& script) = 0;

  template <typename T, typename R = std::string, StringLikeConcept(T), StringLikeConcept(R)>
  Local<Value> eval(T&& scriptStringLike, R&& sourceFileStringLike = {}) {
    return eval(String::newString(std::forward<T>(scriptStringLike)),
                String::newString(std::forward<R>(sourceFileStringLike)));
  }

  /**
   * register a native class definition (constructor & property & function) to script.
   * @tparam T a subclass of the NativeClass, which implements all the Script-Native method in cpp.
   * (can be void if no instance is required).
   * @param classDefine the pointer should be valid until the engine is destroyed.
   * @throws ::script::Exception on failure or if the classDefine is already registered.
   */
  template <typename T>
  void registerNativeClass(const ClassDefine<T>& classDefine);

  /**
   * handy method to call NativeRegister::registerNativeClass.
   */
  void registerNativeClass(const NativeRegister& nativeRegister);

  /**
   * the ClassDefine<T>* for type T, throw exception for not found
   * @tparam T must be sub class of ScriptClass
   * @return non-null
   */
  template <typename T>
  const ClassDefine<T>& getClassDefine() const;

  template <typename T>
  Local<Object> newNativeClass(const std::initializer_list<Local<Value>>& args) {
    return newNativeClassImpl<T>(getClassDefine<T>(), args.size(), args.begin());
  }

  /**
   * create a script class instance of the given native classDefine.
   * if the classDefine is not registered by registerNativeClass, it will be registered first.
   * @tparam T a subclass of the NativeClass, which implements all the Script-Native method in cpp.
   * (can be void if no instance is required).
   * @param classDefine the pointer should be valid until the engine is destroyed.
   * @return the created value, null for failure.
   * @throw Exception if ClassDefine<T> is not already registered.
   */
  template <typename T>
  Local<Object> newNativeClass(const std::vector<Local<Value>>& args) {
    return newNativeClassImpl<T>(getClassDefine<T>(), args.size(), args.data());
  }

  /**
   * typesafe variadic template helper method
   * @tparam T MUST BE local reference, ie: Local<Type>. or supported raw C++ type to convert.
   * @param classDefine the pointer should be valid until the engine is destroyed.
   * @return the created value, null for failure.
   * @throw Exception if ClassDefine<T> is not already registered.
   */
  template <typename D, typename... T>
  Local<Object> newNativeClass(T&&... args);

  /**
   * check whether value is instance of a registered native class
   * @throw Exception if ClassDefine<T> is not already registered.
   */
  template <typename T>
  bool isInstanceOf(const Local<Value>& value) {
    return isInstanceOfImpl(value, getClassDefine<T>());
  }

  /**
   * if value is instance of a registered native class, return the native instance,
   * else return nullptr.
   * @throw Exception if ClassDefine<T> is not already registered.
   */
  template <typename T>
  T* getNativeInstance(const Local<Value>& value) {
    return getNativeInstanceImpl(value, getClassDefine<T>());
  }

  /**
   * @return a MessageQueue to provide event-loop/run-loop facility
   *
   * note: when the engine is destroyed, it remove all message whose "tag == engine" in the queue,
   * so all your engine related message should set tag to corresponding engine.
   */
  virtual std::shared_ptr<utils::MessageQueue> messageQueue() = 0;

  /**
   * Suggest the engine to gc.
   */
  virtual void gc() {}

  /**
   * Get how much memory this Engine takes in unit of Byte.
   * return 0 for unknown value.
   */
  virtual size_t getHeapSize() { return 0; }

  /**
   * An associated memory is native memory associated with script object.
   * This method is just an suggest to the engine,
   * helps it measure memory pressure more precisely.
   * @param count positive for allocation, negative for deallocation.
   */
  virtual void adjustAssociatedMemory(int64_t count) { SCRIPTX_UNUSED(count); }

  /**
   * @return script language the engine supported
   */
  virtual ScriptLanguage getLanguageType() = 0;

  /**
   * @return the backend engine version string
   */
  virtual std::string getEngineVersion() = 0;

  /**
   * set any arbitrary user data to the engine, the shared_ptr will get released on engine destroy.
   */
  void setData(std::shared_ptr<void> arbitraryData);

  /**
   * get the set arbitrary user data by setData(), return null if not previously set.
   */
  template <typename T = void>
  std::shared_ptr<T> getData();

 protected:
  /**
   * should not be public, use destroy instead of dtor.
   */
  virtual ~ScriptEngine() = default;

  void destroyUserData();

 private:
  template <typename T>
  Local<Object> newNativeClassImpl(const ClassDefine<T>& classDefine, size_t size,
                                   const Local<Value>* args);

  /**
   * check whether value is instance of a registered native class
   */
  template <typename T>
  bool isInstanceOfImpl(const Local<Value>& value, const ClassDefine<T>& classDefine);

  /**
   * if value is instance of a registered native class, return the native instance,
   * else return nullptr.
   */
  template <typename T>
  T* getNativeInstanceImpl(const Local<Value>& value, const ClassDefine<T>& classDefine);
};

/**
 * ScriptEngine don't have public destructor, use ScriptEngine::Deleter.
 */
using UniqueEnginePtr = std::unique_ptr<ScriptEngine, ScriptEngine::Deleter>;

}  // namespace script