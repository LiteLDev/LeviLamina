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
#include <string>
#include <unordered_map>
#include <utility>
#include "../../src/Engine.h"
#include "../../src/Exception.h"
#include "../../src/Scope.h"
#include "../../src/utils/MessageQueue.h"
#include "WasmHelper.h"

namespace script::test {
class ScriptXTestFixture;
}

namespace script::wasm_backend {

class WasmEngine : public ScriptEngine {
  // < classDefine, Class >
  std::unordered_map<const void*, Global<Object>> classDefineRegistry_{};
  std::shared_ptr<utils::MessageQueue> messageQueue_ = std::make_shared<utils::MessageQueue>();
  bool ignoreDestroyCall_ = false;

  std::thread::id engineThreadId_ = {};

  WasmEngine();

  // for unit-test only
  void unitTestResetRegistry();

 public:
  static WasmEngine* instance();

  SCRIPTX_DISALLOW_COPY_AND_MOVE(WasmEngine);

  /**
   * WasmEngine can't be destroyed.
   * So the default implementation is to throw exception.
   * By WasmEngine::ignoreDestroyCall, change the behavior to ignore, and don't throw.
   */
  static void ignoreDestroyCall();

  void destroy() override;

  bool isDestroying() const override;

  Local<Object> getGlobal() const;

  Local<Value> get(const Local<String>& key) override;

  void set(const Local<String>& key, const Local<Value>& value) override;
  using ScriptEngine::set;

  Local<Value> eval(const Local<String>& script, const Local<Value>& sourceFile);
  Local<Value> eval(const Local<String>& script, const Local<String>& sourceFile) override;
  Local<Value> eval(const Local<String>& script) override;
  using ScriptEngine::eval;

  std::shared_ptr<utils::MessageQueue> messageQueue() override;

  void gc() override;

  void adjustAssociatedMemory(int64_t count) override;

  ScriptLanguage getLanguageType() override;

  std::string getEngineVersion() override;

 protected:
  ~WasmEngine() override;

 private:
  template <typename T>
  void registerNativeClassImpl(const ClassDefine<T>* classDefine);

  template <typename T>
  Local<Object> newConstructor(const ClassDefine<T>* classDefine);

  template <typename T>
  void defineInstance(const ClassDefine<T>* classDefine, const Local<Object>& obj);

  static Local<Object> getNamespaceForRegister(const std::string_view& nameSpace);

  void defineStatic(const Local<Object>& obj, const internal::StaticDefine& define);

  static void* verifyAndGetInstance(const void* classDefine, int thiz);

  template <typename T>
  Local<Object> newNativeClassImpl(const ClassDefine<T>* classDefine, size_t size,
                                   const Local<Value>* args);

  template <typename T>
  bool isInstanceOfImpl(const Local<Value>& value, const ClassDefine<T>* classDefine);

  template <typename T>
  T* getNativeInstanceImpl(const Local<Value>& value, const ClassDefine<T>* classDefine);

 private:
  // helpers
  template <typename T>
  static auto&& refIndex(const Local<T>& ref) {
    return ref.val_;
  }

  template <typename T>
  static int refIndex(const Weak<T>& ref) {
    return ref.val_;
  }

  template <typename T, typename... Args>
  static T make(Args&&... args) {
    return T(std::forward<Args>(args)...);
  }

  friend class ::script::ScriptEngine;

  friend class ::script::ScriptClass;

  friend class ::script::Exception;

  friend class ::script::Object;

  friend class ::script::Arguments;

  friend class Stack;

  friend class WasmEngineScope;
  friend class WasmStackFrameScope;

  friend struct ::script::wasm_interop;

  friend class ByteBufferHelper;

  friend Local<Value> callFunction(const Local<Function>& func, const Local<Value>& thiz,
                                   size_t size, const Local<Value>* args);

  friend void invokeFunctionHelper(Stack::RawFunctionType func, void* ptr0, void* ptr1,
                                   int stackBase, WasmEngine* engine);

  static void doDeleteScriptClass(ScriptClass* scriptClass);
  friend void deleteScriptClassHelper(ScriptClass* scriptClass);

  friend WasmEngine& currentEngine();

  // UnitTest
  friend class ::script::test::ScriptXTestFixture;
};

}  // namespace script::wasm_backend