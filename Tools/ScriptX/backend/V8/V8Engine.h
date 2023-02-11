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

#include <unordered_map>
#include "../../src/Engine.h"
#include "../../src/Native.h"
#include "../../src/Reference.h"
#include "../../src/Scope.h"
#include "../../src/Value.h"
#include "../../src/utils/GlobalWeakBookkeeping.hpp"
#include "V8Helper.h"
#include "V8Platform.h"

namespace script::v8_backend {

class InspectorClient;

class V8Engine : public ::script::ScriptEngine {
  struct ManagedObject {
    V8Engine* engine;
    void* data;
    std::function<void(void*)> cleanupFunc;
  };

  struct ThreadGlobalScope {
    EngineScope scope_;
    explicit ThreadGlobalScope(V8Engine* engine)
        : scope_(EngineScope::InternalEnterEngine{}, engine, false) {}
  };

 private:
  bool isOwnIsolate_ = true;
  // used only for node addon
  std::unique_ptr<ThreadGlobalScope> threadGlobalScope_ = nullptr;
  std::unordered_map<const void*, v8::Global<v8::FunctionTemplate>> nativeRegistry_;
  std::shared_ptr<V8Platform> v8Platform_;
  std::unique_ptr<v8::ArrayBuffer::Allocator> allocator_;

  std::shared_ptr<::script::utils::MessageQueue> messageQueue_;

  // V8 don't do gc on Isolate::Dispose,
  // so we must got a way to manage native object.
  // key: native pointer
  // value: v8 weak
  std::unordered_map<ManagedObject*, v8::Global<v8::Value>> managedObject_;

  std::unordered_map<size_t, v8::Global<v8::Value>> keptObject_;
  size_t keptObjectId_ = 0;
  bool isDestroying_ = false;

  internal::GlobalWeakBookkeeping globalWeakBookkeeping_;

  // create a slave engine
  explicit V8Engine(V8Engine* masterEngine);

 protected:
  v8::Isolate* isolate_;

  v8::Global<v8::Context> context_;

  v8::Global<v8::Symbol> internalStoreSymbol_;

  v8::Global<v8::Symbol> constructorMarkSymbol_;

  explicit V8Engine(std::shared_ptr<utils::MessageQueue> messageQueue,
                    const std::function<v8::Isolate*()>& isolateFactory);

  ~V8Engine() override;

 public:
  explicit V8Engine(std::shared_ptr<utils::MessageQueue> messageQueue = {});

  /**
   * Create a ScriptEngine instance wrapping existing v8 instance, especially for NODE JS addons.
   * After creating such instance, there will be a global EngineScope for CURRENT THREAD, until you
   * destroy the engine (controlled by the param addGlobalEngineScope, which is true by default).
   * Note: when destroying such ScriptEngine instance, the v8 isolate/context
   * are not destroyed, only ScriptEngine related resources.
   *
   * Note: V8 has it's on event-loop, especially for node.js, so you may ignore messageQueue.
   * Note: BUT, if you post message to ScriptEngine::messageQueue(), you still need to schedule
   * MessageQueue::loop from time to time.
   */
  explicit V8Engine(std::shared_ptr<utils::MessageQueue> messageQueue, v8::Isolate* isolate,
                    v8::Local<v8::Context> context, bool addGlobalEngineScope = true);

  void destroy() noexcept override;

  bool isDestroying() const override;

  Local<Value> get(const Local<String>& key) override;

  Local<Object> getGlobal();

  void set(const Local<String>& key, const Local<Value>& value) override;
  using ScriptEngine::set;

  Local<Value> eval(const Local<String>& script, const Local<String>& sourceFile) override;
  Local<Value> eval(const Local<String>& script) override;
  using ScriptEngine::eval;

  Local<Value> loadFile(const Local<String>& scriptFile) override;

  /**
   * Create a new V8 Engine that share the same isolate, but with different context.
   * Caller own the returned pointer, and the returned instance
   * should be deleted BEFORE this instance.
   *
   * and the message queue from a slave engine is the same as its master.
   */
  UniqueEnginePtr newSlaveEngine();

  std::shared_ptr<::script::utils::MessageQueue> messageQueue() override;

  void gc() override;

  size_t getHeapSize() override;

  void adjustAssociatedMemory(int64_t count) override;

  ScriptLanguage getLanguageType() override;

  std::string getEngineVersion() override;

 private:
  void initContext();

  Local<Value> eval(const Local<String>& script, const Local<Value>& sourceFile);

  template <typename T>
  void registerNativeClassImpl(const ClassDefine<T>* classDefine);

  template <typename T>
  Local<Object> newNativeClassImpl(const ClassDefine<T>* classDefine, size_t argc,
                                   const Local<Value>* args);

  template <typename T>
  bool isInstanceOfImpl(const Local<Value>& value, const ClassDefine<T>* classDefine);

  template <typename T>
  T* getNativeInstanceImpl(const Local<Value>& value, const ClassDefine<T>* classDefine);

  template <typename T>
  v8::Local<v8::FunctionTemplate> newConstructor(const ClassDefine<T>* classDefine);

  void registerNativeClassStatic(v8::Local<v8::FunctionTemplate> funcT,
                                 const internal::StaticDefine* staticDefine);

  template <typename T>
  void registerNativeClassInstance(v8::Local<v8::FunctionTemplate> funcT,
                                   const ClassDefine<T>* classDefine);

  // the following function are public only for you to interact with raw v8 APIs.
  template <typename T, typename... Args>
  static T make(Args&&... args) {
    return T(std::forward<Args>(args)...);
  }

  template <typename T>
  static inline typename Local<T>::InternalLocalRef toV8(v8::Isolate* /*isolate*/,
                                                         const Local<T>& ref) {
    return ref.val_;
  }

  static typename Local<Value>::InternalLocalRef toV8(v8::Isolate* isolate,
                                                      const Local<Value>& ref) {
    if (ref.val_.IsEmpty()) {
      return v8::Undefined(isolate).As<V8ValueType<Value>>();
    }
    return ref.val_;
  }

  static inline Arguments extractV8Arguments(V8Engine* engine,
                                             const v8::FunctionCallbackInfo<v8::Value>& args) {
    return Arguments(std::make_pair(engine, args));
  }

 private:
  void addManagedObject(void* nativeObj, v8::Local<v8::Value> obj,
                        std::function<void(void*)>&& proc);

  size_t keepReference(const Local<Value>& ref);

  /**
   * can be called withoud EngineScope
   */
  void removeKeptReference(size_t id);

 private:
  // WHO is your friend!!!
  friend class V8EngineScope;

  friend class V8HandleScope;

  friend class V8ExitEngineScope;

  template <typename T>
  friend class ::script::Local;

  template <typename T>
  friend class ::script::Global;

  template <typename T>
  friend class ::script::Weak;

  friend class ::script::Object;

  friend class ::script::ScriptEngine;

  // in V8Helper.h
  friend class v8_backend::V8HandleScope;

  friend v8::Isolate* currentEngineIsolateChecked();

  friend v8::Local<v8::Context> currentEngineContextChecked();

  friend std::tuple<v8::Isolate*, v8::Local<v8::Context>> currentEngineIsolateAndContextChecked();

  friend void checkException(v8::TryCatch& tryCatch);

  friend void rethrowException(const Exception& exception);

  // in V8Helper.hpp
  template <typename Ret, typename Closure>
  friend Ret toV8ValueArray(v8::Isolate* isolate, size_t argc, const Local<Value>* args, Closure c);

  friend class ::script::Exception;

  friend class ::script::Function;

  friend class ::script::ByteBuffer;

  friend class ::script::Arguments;

  friend class ::script::ScriptClass;

  friend class ::script::StringHolder;

  friend class ::script::ScriptClass;

  friend class ExceptionFields;

  friend class InspectorClient;

  template <typename T>
  friend class GlobalRefState;
  friend struct V8BookKeepFetcher;
  friend struct ::script::v8_interop;

  template <typename Ref>
  static auto& refVal(Ref* ref) {
    return ref->val_;
  }
};

}  // namespace script::v8_backend
