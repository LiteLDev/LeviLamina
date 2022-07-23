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

#include <atomic>
#include <functional>
#include <mutex>
#include <type_traits>

#include "../../src/Engine.h"
#include "../../src/Exception.h"
#include "../../src/utils/GlobalWeakBookkeeping.hpp"
#include "../../src/utils/MessageQueue.h"
#include "QjsHelper.h"

namespace script::qjs_backend {

using RawFunctionCallback = Local<Value> (*)(const Arguments& args, void* data1, void* data2,
                                             bool isConstructorCall);

class QjsEngine : public ScriptEngine {
 private:
  static JSClassID kPointerClassId;
  /**
   * for Function::newFunction
   *
   */
  static JSClassID kFunctionDataClassId;
  static JSClassID kInstanceClassId;

  std::shared_ptr<::script::utils::MessageQueue> queue_;
  JSRuntime* runtime_ = nullptr;
  JSContext* context_ = nullptr;

  std::recursive_mutex runtimeLock_{};

  // state
  int pauseGcCount_ = 0;
  bool isDestroying_ = false;
  std::atomic_bool tickScheduled_ = false;

  /**
   * key: ClassDefine
   * value: prototype, constructor
   */
  std::unordered_map<const void*, std::pair<JSValue, JSValue>> nativeInstanceRegistry_;

  internal::GlobalWeakBookkeeping globalWeakBookkeeping_{};

  JSAtom lengthAtom_ = {};
  // QuickJs C API is not enough, we have to use some js helper code.
  JSValue helperFunctionStrictEqual_ = {};
  JSValue helperFunctionIsByteBuffer_ = {};
  JSValue helperFunctionGetByteBufferInfo_ = {};
  JSAtom helperSymbolInternalStore_ = JS_ATOM_NULL;

 public:
  using QjsFactory = std::function<std::pair<JSRuntime*, JSContext*>()>;

 public:
  explicit QjsEngine(std::shared_ptr<::script::utils::MessageQueue> queue = nullptr,
                     const QjsFactory& factory = nullptr);

  SCRIPTX_DISALLOW_COPY_AND_MOVE(QjsEngine);

  void destroy() noexcept override;

  bool isDestroying() const override;

  Local<Value> get(const Local<String>& key) override;

  void set(const Local<String>& key, const Local<Value>& value) override;
  using ScriptEngine::set;

  Local<Object> getGlobal() const;

  Local<Value> eval(const Local<String>& script, const Local<Value>& sourceFile);
  Local<Value> eval(const Local<String>& script, const Local<String>& sourceFile) override;
  Local<Value> eval(const Local<String>& script) override;
  using ScriptEngine::eval;

  std::shared_ptr<utils::MessageQueue> messageQueue() override;

  void gc() override;

  size_t getHeapSize() override;

  void adjustAssociatedMemory(int64_t count) override;

  ScriptLanguage getLanguageType() override;

  std::string getEngineVersion() override;

 protected:
  ~QjsEngine() override;

 private:
  struct BookKeepFetcher;
  friend struct QjsBookKeepFetcher;

  template <typename T>
  void registerNativeClassImpl(const ClassDefine<T>* classDefine);

  void registerNativeStatic(const Local<Object>& module, const internal::StaticDefine& data1);

  template <typename T>
  Local<Object> newConstructor(const ClassDefine<T>& define);

  template <typename T>
  Local<Object> newPrototype(const ClassDefine<T>& define);

  template <typename T>
  Local<Object> newNativeClassImpl(const ClassDefine<T>* classDefine, size_t size,
                                   const Local<Value>* args);

  template <typename T>
  bool isInstanceOfImpl(const Local<Value>& value, const ClassDefine<T>* classDefine);

  template <typename T>
  T* getNativeInstanceImpl(const Local<Value>& value, const ClassDefine<T>* classDefine);

  void initEngineResource();

  /**
   * similar to js_std_loop
   */
  void scheduleTick();

  void extendLifeTimeToNextLoop(JSValue value);

  template <typename T, typename... Args>
  static T make(Args&&... args) {
    return T(std::forward<Args>(args)...);
  }

 private:
  template <typename T>
  friend class ::script::Local;

  template <typename T>
  friend class ::script::Global;

  template <typename T>
  friend class ::script::Weak;

  friend class ::script::Object;

  friend class ::script::Array;

  friend class ::script::Function;

  friend class ::script::ByteBuffer;

  friend class ::script::ScriptEngine;

  friend class ::script::Exception;

  friend class ::script::Arguments;

  friend class ::script::ScriptClass;

  friend struct ByteBufferState;

  friend class PauseGc;

  friend class EngineScopeImpl;
  friend class ExitEngineScopeImpl;
  friend struct GlobalRefState;
  template <typename T>
  friend struct MakeLocalInternal;

  friend struct ::script::qjs_interop;

  friend JSContext* currentContext();
  friend JSRuntime* currentRuntime();
  friend JSValue throwException(const Exception&, QjsEngine*);
  friend Local<Function> newRawFunction(QjsEngine* engine, void* data1, void* data2,
                                        RawFunctionCallback);
};

}  // namespace script::qjs_backend