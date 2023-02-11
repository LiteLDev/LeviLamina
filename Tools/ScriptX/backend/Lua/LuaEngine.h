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
#include "../../src/Exception.h"
#include "../../src/Native.h"
#include "../../src/utils/GlobalWeakBookkeeping.hpp"
#include "../../src/utils/MessageQueue.h"
#include "LuaHelper.h"

namespace script::lua_backend {

class LuaByteBufferDelegate;

class LuaEngine : public ScriptEngine {
 private:
  // any pointer is fine, just need to be unique
  static const void* const kLuaTableNativeThisPtrToken_;
  static const void* const kLuaTableNativeClassDefinePtrToken_;
  static const void* const kLuaNativeConstructorMarker_;
  static const void* const kLuaNativeInternalStorageToken_;
  static const void* const kLuaBuiltinDefinedClassMetaDataToken_;

  static const void* const kLuaGlobalRegistryToken_;
  static const void* const kLuaWeakRegistryToken_;

  static constexpr auto kIsInstanceBuiltInFunctionName = "isInstance";
  static constexpr auto kMetaTableBuiltInInstanceFunctions = "instanceFunction";

  std::mutex lock_;
  std::shared_ptr<::script::utils::MessageQueue> messageQueue_;
  size_t globalIdCounter_ = 1;
  std::unordered_map<const void*, Global<Object>> nativeDefineRegistry_;
  ::script::internal::GlobalWeakBookkeeping globalWeakBookkeeping_;
  std::unique_ptr<LuaByteBufferDelegate> byteBufferDelegate_;

  size_t globalRefCount_ = 0;
  size_t weakRefCount_ = 0;
  bool isDestroying_ = false;

  lua_State* lua_ = nullptr;

 public:
  explicit LuaEngine(std::shared_ptr<::script::utils::MessageQueue> queue = {},
                     const std::function<lua_State*()>& luaStateFactory = {},
                     std::unique_ptr<LuaByteBufferDelegate> byteBufferDelegate = {});

  SCRIPTX_DISALLOW_COPY_AND_MOVE(LuaEngine);

  void destroy() override;

  bool isDestroying() const override;

  Local<Value> get(const Local<String>& key) override;

  void set(const Local<String>& key, const Local<Value>& value) override;
  using ScriptEngine::set;

  Local<Value> eval(const Local<String>& script, const Local<Value>& sourceFile);
  Local<Value> eval(const Local<String>& script, const Local<String>& sourceFile) override;
  Local<Value> eval(const Local<String>& script) override;
  using ScriptEngine::eval;

  Local<Value> loadFile(const Local<String>& scriptFile) override;

  std::shared_ptr<utils::MessageQueue> messageQueue() override;

  void gc() override;

  size_t getHeapSize() override;

  void adjustAssociatedMemory(int64_t count) override;

  ScriptLanguage getLanguageType() override;

  std::string getEngineVersion() override;

 protected:
  ~LuaEngine() override;

 private:
  void initGlobalRegistry();

  Local<Value> get(const char* key);

  void set(const char* key, const Local<Value>& value);

  size_t globalIdCounter();

  size_t putGlobalOrWeakTable(const Local<Value>& localReference, const void* registryToken);

  void removeGlobalOrWeakTable(size_t id, const void* registryToken);

  Local<Value> getGlobalOrWeakTable(size_t index, const void* registryToken) const;

  template <typename T>
  void registerNativeClassImpl(const ClassDefine<T>* classDefine);

  static const ClassDefine<void>& builtInFunctions();

  void registerStaticDefine(const internal::StaticDefine& staticDefine, int table, int metaTable);

  void defineStaticFunctions(const internal::StaticDefine& staticDefine, int tableIndex);

  void defineStaticProperties(const internal::StaticDefine& staticDefine, int tableIndex, int i);

  // [0, 0, -]
  template <typename T>
  void registerInstanceDefine(const ClassDefine<T>& classDefine, int table, int staticMeta);

  // [0, 0, -]
  template <typename T>
  void defineInstanceConstructor(const ClassDefine<T>& classDefine, int instanceMeta,
                                 int staticMeta) const;

  template <typename T>
  void defineInstanceFunctions(const ClassDefine<T>& classDefine, int instanceFunctionTable) const;

  template <typename T>
  void defineInstanceProperties(const ClassDefine<T>& classDefine, int instanceMeta,
                                int instanceFunction) const;

  // [0, 0, -]
  void setupMetaTableForProperties(int metaIndex, int instanceFunction, int getterRegistryIndex,
                                   int setterRegistryIndex) const;

  using PushFunctionCallback = Local<Value> (*)(lua_State*, void*, const Arguments&);
  /**
   * push a lua function, the data will not be collected automatically.
   * [0, +1, -]
   */
  void pushFunction(const void* data, PushFunctionCallback callable);

  template <typename T>
  Local<Object> newNativeClassImpl(const ClassDefine<T>* classDefine,
                                   const std::initializer_list<Local<Value>>& args) {
    return newNativeClassImpl(classDefine, args.size(), args.begin());
  }

  template <typename T>
  Local<Object> newNativeClassImpl(const ClassDefine<T>* classDefine,
                                   const std::vector<Local<Value>>& args) {
    return newNativeClassImpl(classDefine, args.size(), args.data());
  }

  template <typename T>
  Local<Object> newNativeClassImpl(const ClassDefine<T>* classDefine, size_t size,
                                   const Local<Value>* ptr);

  template <typename T>
  bool isInstanceOfImpl(const Local<Value>& value, const ClassDefine<T>* classDefine);

  template <typename T>
  T* getNativeInstanceImpl(const Local<Value>& value, const ClassDefine<T>* classDefine);

  static Local<Value> getClassMetaTable(lua_State* lua, int classIndex);

  static bool isInstanceOf(lua_State* lua, int classIndex, int selfIndex);

  static bool isInstanceOf(lua_State* lua, const void* classDefine, int selfIndex);

  static void* getNativeThis(lua_State* lua, const void* classDefine, int selfIndex);

  using PushInstanceFunctionCallback = Local<Value> (*)(lua_State*, void*, void*, const Arguments&);
  /**
   * [0, +1, -]
   */
  void pushInstanceFunction(const void* data, const void* classDefine,
                            PushInstanceFunctionCallback callable) const;

 public:
  template <typename T, typename... Args>
  static T make(Args&&... args) {
    return T(std::forward<Args>(args)...);
  }

  template <typename LocalRef>
  static int localRefIndex(const LocalRef& ref) {
    return ref.val_;
  }

  static Arguments makeArguments(LuaEngine* engine, int stackBase, size_t paramCount,
                                 bool isInstanceFunc);

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

  friend class StackFrameScopeImpl;

  friend class EngineScopeImpl;

  friend class ExitEngineScopeImpl;

  friend class LuaByteBufferImpl;

  friend lua_State* currentLua();

  friend void pushValue(lua_State* lua, const Local<Value>& local);

  template <typename It>
  friend void pushValues(lua_State* lua, size_t count, It begin);

  template <typename Ref>
  static auto& refVal(Ref* ref) {
    return ref->val_;
  }

  friend struct LuaBookKeepFetcher;

  friend struct ::script::lua_interop;
};

class LuaByteBufferDelegate {
 public:
  LuaByteBufferDelegate() = default;
  virtual ~LuaByteBufferDelegate() = default;

  SCRIPTX_DISALLOW_COPY_AND_MOVE(LuaByteBufferDelegate);

  virtual void init(LuaEngine* engine) = 0;

  /**
   * create a new byte buffer object, return it's index on the stack
   */
  virtual Local<Value> newByteBuffer(LuaEngine* engine, std::shared_ptr<void> nativeBuffer,
                                     size_t size) = 0;

  /**
   * get the underlying shared_ptr
   */
  virtual std::shared_ptr<void> getByteBuffer(LuaEngine* engine,
                                              const Local<Value>& byteBuffer) = 0;

  virtual size_t getByteBufferSize(LuaEngine* engine, const Local<Value>& byteBuffer) = 0;

  virtual bool isByteBuffer(LuaEngine* engine, const Local<Value>& byteBuffer) = 0;
};

}  // namespace script::lua_backend