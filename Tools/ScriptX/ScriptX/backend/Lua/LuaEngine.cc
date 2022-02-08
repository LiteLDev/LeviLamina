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

#include "LuaEngine.hpp"
#include <algorithm>
#include <memory>
#include <string>
#include <utility>
#include "../../src/Engine.hpp"
#include "../../src/Native.h"
#include "../../src/Native.hpp"
#include "../../src/Utils.h"
#include "LuaByteBufferImpl.h"
#include "LuaHelper.hpp"
#include "LuaReference.hpp"
#include "LuaScope.hpp"

// ref https://www.lua.org/manual/5.1/manual.html
// https://www.lua.org/wshop14/Zykov.pdf

namespace script::lua_backend {

namespace {

lua_State* newCommonLua() {
  auto lua = luaL_newstate();
  luaL_openlibs(lua);
  return lua;
}

}  // namespace

const void* const LuaEngine::kLuaTableNativeThisPtrToken_ =
    reinterpret_cast<const void*>(&kLuaTableNativeThisPtrToken_);

const void* const LuaEngine::kLuaTableNativeClassDefinePtrToken_ =
    reinterpret_cast<const void*>(&kLuaTableNativeClassDefinePtrToken_);

const void* const LuaEngine::kLuaNativeConstructorMarker_ =
    reinterpret_cast<const void*>(&kLuaNativeConstructorMarker_);

const void* const LuaEngine::kLuaNativeInternalStorageToken_ =
    reinterpret_cast<const void*>(&kLuaNativeInternalStorageToken_);

const void* const LuaEngine::kLuaBuiltinDefinedClassMetaDataToken_ =
    reinterpret_cast<const void*>(&kLuaBuiltinDefinedClassMetaDataToken_);

const void* const LuaEngine::kLuaGlobalRegistryToken_ =
    reinterpret_cast<const void*>(&kLuaGlobalRegistryToken_);

const void* const LuaEngine::kLuaWeakRegistryToken_ =
    reinterpret_cast<const void*>(&kLuaWeakRegistryToken_);

LuaEngine::LuaEngine(std::shared_ptr<::script::utils::MessageQueue> queue,
                     const std::function<lua_State*()>& luaStateFactory,
                     std::unique_ptr<LuaByteBufferDelegate> byteBufferDelegate)
    : messageQueue_(queue ? std::move(queue) : std::make_shared<utils::MessageQueue>()),
      byteBufferDelegate_(byteBufferDelegate ? std::move(byteBufferDelegate)
                                             : std::make_unique<LuaByteBufferImpl>()) {
  if (luaStateFactory) {
    lua_ = luaStateFactory();
    assert(lua_);
  } else {
    lua_ = newCommonLua();
  }

  {
    EngineScope engineScope(this);
    initGlobalRegistry();
    byteBufferDelegate_->init(this);
    registerNativeClass(builtInFunctions());
  }
}

LuaEngine::~LuaEngine() = default;

void LuaEngine::destroy() {
  ScriptEngine::destroyUserData();
  {
    // clean anything we used
    EngineScope scope(this);
    isDestroying_ = true;
    nativeDefineRegistry_.clear();

    globalWeakBookkeeping_.clear();
  }
  messageQueue()->removeMessageByTag(this);

  lua_close(lua_);

  delete this;
}

bool lua_backend::LuaEngine::isDestroying() const { return isDestroying_; }

void LuaEngine::initGlobalRegistry() {
  lua_getglobal(lua_, kLuaGlobalEnvName);
  auto global = lua_gettop(lua_);

  luaStackScope(lua_, [this, global]() {
    // global
    lua_newtable(lua_);
    lua_rawsetp(lua_, global, kLuaGlobalRegistryToken_);
  });

  luaStackScope(lua_, [this, global] {
    // weak
    lua_newtable(lua_);

    luaStackScope(lua_, [this] {
      lua_newtable(lua_);

      luaStackScope(lua_, [this] {
        lua_pushstring(lua_, kLuaMetaMethodMode);
        lua_pushstring(lua_, "v");
        lua_rawset(lua_, -3);
      });

      lua_setmetatable(lua_, -2);
    });

    lua_rawsetp(lua_, global, kLuaWeakRegistryToken_);
  });
}

size_t LuaEngine::putGlobalOrWeakTable(const Local<Value>& localReference,
                                       const void* registryToken) {
  size_t id = 0;
  if (localReference.val_ != 0) {
    StackFrameScope scope;
    lua_getglobal(lua_, kLuaGlobalEnvName);
    auto global = lua_gettop(lua_);
    lua_rawgetp(lua_, global, registryToken);
    auto globalTable = lua_gettop(lua_);

    auto counter = globalIdCounter();

    make<Local<Array>>(globalTable).set(counter, localReference);

    // pop globalTable
    lua_pop(this->lua_, 1);

    id = counter;
    if (registryToken == kLuaGlobalRegistryToken_) {
      globalRefCount_++;
    } else {
      weakRefCount_++;
    }
  }
  return id;
}

void LuaEngine::removeGlobalOrWeakTable(size_t id, const void* registryToken) {
  StackFrameScope scope;
  lua_getglobal(lua_, kLuaGlobalEnvName);
  auto global = lua_gettop(lua_);
  lua_rawgetp(lua_, global, registryToken);
  auto globalTable = lua_gettop(lua_);

  make<Local<Array>>(globalTable).set(id, {});

  // pop globalTable
  lua_pop(this->lua_, 1);

  if (registryToken == kLuaGlobalRegistryToken_) {
    globalRefCount_--;
  } else {
    weakRefCount_--;
  }
}

Local<Value> LuaEngine::getGlobalOrWeakTable(size_t index, const void* registryToken) const {
  if (index == 0) return {};

  StackFrameScope stack;

  lua_backend::luaEnsureStack(lua_, 2);
  lua_getglobal(lua_, kLuaGlobalEnvName);
  auto global = lua_gettop(lua_);
  lua_rawgetp(lua_, global, registryToken);
  auto globalTable = lua_gettop(lua_);

  return stack.returnValue(make<Local<Array>>(globalTable).get(index));
}

size_t LuaEngine::globalIdCounter() {
  while (++globalIdCounter_ == 0) {
  }
  return globalIdCounter_;
}

Local<Value> LuaEngine::get(const Local<String>& key) {
  auto lua = lua_backend::currentLua();
  auto keyString = lua_tostring(lua, key.val_);
  return get(keyString);
}

void LuaEngine::set(const Local<String>& key, const Local<Value>& value) {
  auto lua = lua_backend::currentLua();
  auto keyString = lua_tostring(lua, key.val_);
  set(keyString, value);
}

Local<Value> LuaEngine::get(const char* key) {
  auto lua = lua_backend::currentLua();

  lua_backend::luaEnsureStack(lua, 1);
  lua_getglobal(lua, key);

  return Local<Value>{lua_gettop(lua)};
}

void LuaEngine::set(const char* key, const Local<Value>& value) {
  auto lua = lua_backend::currentLua();

  lua_backend::luaStackScope(lua, [lua, key, &value]() {
    lua_backend::luaEnsureStack(lua, 2);

    lua_backend::pushValue(lua, value);
    lua_setglobal(lua, key);
  });
}

Local<Value> LuaEngine::eval(const Local<String>& script) { return eval(script, Local<Value>()); }

Local<Value> LuaEngine::eval(const Local<String>& script, const Local<String>& sourceFile) {
  return eval(script, sourceFile.asValue());
}

Local<Value> LuaEngine::eval(const Local<String>& script, const Local<Value>& sourceFile) {
  Tracer trace(this, "LuaEngine::eval");
  auto sourceStringHolder = script.toString();
  std::string sourceFileName;
  if (sourceFile.isString()) {
    sourceFileName = sourceFile.asString().toString();
  }
  if (sourceFileName.empty()) {
    sourceFileName = "unknown.lua";
  }
  if (luaL_loadbuffer(lua_, sourceStringHolder.c_str(), sourceStringHolder.length(),
                      sourceFileName.c_str()) != LUA_OK) {
    lua_backend::rethrowException(lua_);
  }

  return lua_backend::callFunction({}, {}, 0, nullptr);
}

Arguments LuaEngine::makeArguments(LuaEngine* engine, int stackBase, size_t paramCount,
                                   bool isInstanceFunc) {
  lua_backend::ArgumentsData argumentsData{engine, stackBase, paramCount, isInstanceFunc};
  return Arguments(argumentsData);
}

void LuaEngine::registerStaticDefine(const internal::StaticDefine& staticDefine, int tableIndex,
                                     int metaTableIndex) {
  defineStaticFunctions(staticDefine, tableIndex);
  defineStaticProperties(staticDefine, tableIndex, metaTableIndex);
}

void LuaEngine::defineStaticFunctions(const internal::StaticDefine& staticDefine, int tableIndex) {
  for (auto& fun : staticDefine.functions) {
    pushFunction(static_cast<const void*>(&fun),
                 [](lua_State*, void* func, const Arguments& arguments) -> Local<Value> {
                   auto fun = static_cast<internal::StaticDefine::FunctionDefine*>(func);

                   Tracer trace(arguments.engine(), fun->traceName);
                   return fun->callback(arguments);
                 });

    lua_setfield(lua_, tableIndex, fun.name.c_str());
  }
}

void LuaEngine::defineStaticProperties(const internal::StaticDefine& staticDefine, int tableIndex,
                                       int metaIndex) {
  if (staticDefine.properties.empty()) {
    return;
  }

  {
    lua_pushvalue(lua_, metaIndex);
    lua_setmetatable(lua_, tableIndex);
  }

  StackFrameScope stack;

  // property registry
  lua_newtable(lua_);
  auto getterRegistryIndex = lua_gettop(lua_);
  lua_newtable(lua_);
  auto setterRegistryIndex = lua_gettop(lua_);

  setupMetaTableForProperties(metaIndex, 0, getterRegistryIndex, setterRegistryIndex);

  for (auto& prop : staticDefine.properties) {
    pushFunction(static_cast<const void*>((&prop)),
                 [](lua_State* lua, void* func, const Arguments&) -> Local<Value> {
                   // __index(table, index)
                   auto p = static_cast<internal::StaticDefine::PropertyDefine*>(func);
                   std::optional<std::string> exception;
                   try {
                     if (p->getter) {
                       return p->getter();
                     }
                   } catch (const Exception& e) {
                     exception = e.message();
                   }
                   luaThrow(lua, exception);
                   return {};
                 });
    lua_setfield(lua_, getterRegistryIndex, prop.name.c_str());

    pushFunction(static_cast<const void*>((&prop)),
                 [](lua_State* lua, void* func, const Arguments& arguments) -> Local<Value> {
                   // __newindex(table, index, value)
                   auto p = static_cast<internal::StaticDefine::PropertyDefine*>(func);
                   std::optional<std::string> exception;
                   try {
                     if (p->setter) {
                       p->setter(arguments[2]);
                     }
                   } catch (const Exception& e) {
                     exception = e.message();
                   }
                   luaThrow(lua, exception);
                   return {};
                 });
    lua_setfield(lua_, setterRegistryIndex, prop.name.c_str());
  }
}

void LuaEngine::setupMetaTableForProperties(int metaIndex, int instanceFunction,
                                            int getterRegistryIndex,
                                            int setterRegistryIndex) const {
  {
    // key
    lua_pushstring(lua_, kLuaMetaMethodIndex);

    // value
    lua_pushvalue(lua_, getterRegistryIndex);
    lua_pushvalue(lua_, instanceFunction);
    // __index(table, index)
    lua_pushcclosure(
        lua_,
        [](lua_State* lua) -> int {
          lua_pushvalue(lua, -1);
          lua_gettable(lua, lua_upvalueindex(1));
          if (!lua_isnoneornil(lua, -1)) {
            // found the getter, call it
            lua_insert(lua, 1);
            lua_call(lua, 2, LUA_MULTRET);

            return lua_gettop(lua);
          } else {
            lua_pop(lua, 1);

            // get from function table
            lua_rawget(lua, lua_upvalueindex(2));
            return 1;
          }
        },
        2);
    lua_rawset(lua_, metaIndex);
  }

  {
    // key
    lua_pushstring(lua_, kLuaMetaMethodNewIndex);

    // value
    lua_pushvalue(lua_, setterRegistryIndex);
    // __newindex(table, index, value)
    lua_pushcclosure(
        lua_,
        [](lua_State* lua) -> int {
          lua_pushvalue(lua, 2);
          lua_gettable(lua, lua_upvalueindex(1));
          if (!lua_isnoneornil(lua, -1)) {
            // found the setter, call it
            lua_insert(lua, 1);
            lua_call(lua, 3, LUA_MULTRET);

            return lua_gettop(lua);
          } else {
            lua_pop(lua, 1);

            // normal table set
            lua_rawset(lua, 1);
            return 0;
          }
        },
        1);
    lua_rawset(lua_, metaIndex);
  }
}

void LuaEngine::pushFunction(const void* data, PushFunctionCallback callable) {
  lua_backend::luaEnsureStack(lua_, 4);

  lua_pushlightuserdata(lua_, const_cast<void*>(data));
  lua_pushlightuserdata(lua_, reinterpret_cast<void*>(callable));
  lua_pushlightuserdata(lua_, this);

  lua_pushcclosure(
      lua_,
      [](lua_State* lua) -> int {
        auto data = lua_touserdata(lua, lua_upvalueindex(1));
        auto callable =
            reinterpret_cast<PushFunctionCallback>(lua_touserdata(lua, lua_upvalueindex(2)));
        auto engine = static_cast<LuaEngine*>(lua_touserdata(lua, lua_upvalueindex(3)));

        std::optional<std::string> exception;

        try {
          auto ret = callable(lua, data, makeArguments(engine, 1, lua_gettop(lua), false));
          auto retIndex = localRefIndex(ret);

          return handleReturnToLua(lua, retIndex);
        } catch (const Exception& e) {
          exception = e.message();
        }
        luaThrow(lua, exception);
        return 0;
      },
      3);
}

const ClassDefine<void>& LuaEngine::builtInFunctions() {
  static auto define = defineClass("ScriptX")
                           // isInstanceOf(value, Class);
                           .function("isInstanceOf",
                                     [](const Arguments& args) -> Local<Value> {
                                       if (args.size() == 2) {
                                         return Boolean::newBoolean(isInstanceOf(
                                             args.callbackInfo_.engine->lua_,
                                             localRefIndex(args[1]), localRefIndex(args[0])));
                                       }
                                       return Boolean::newBoolean(false);
                                     })
                           .function("getInstanceMeta",
                                     [](const Arguments& args) -> Local<Value> {
                                       if (args.size() > 0) {
                                         return getClassMetaTable(args.callbackInfo_.engine->lua_,
                                                                  localRefIndex(args[0]));
                                       }
                                       return {};
                                     })
                           .build();
  return define;
}

Local<Value> LuaEngine::getClassMetaTable(lua_State* lua, int classIndex) {
  if (classIndex == 0 || !lua_istable(lua, classIndex)) {
    return {};
  }
  lua_backend::luaEnsureStack(lua, 1);
  lua_rawgetp(lua, classIndex, kLuaBuiltinDefinedClassMetaDataToken_);
  auto meta = lua_gettop(lua);

  if (!lua_istable(lua, meta)) {
    return {};
  }

  return make<Local<Value>>(meta);
}

bool LuaEngine::isInstanceOf(lua_State* lua, int classIndex, int selfIndex) {
  if (classIndex == 0) {
    return false;
  }

  if (!lua_istable(lua, classIndex)) {
    return false;
  }

  lua_backend::luaEnsureStack(lua, 1);
  lua_rawgetp(lua, classIndex, kLuaTableNativeClassDefinePtrToken_);
  auto classDefine = lua_touserdata(lua, -1);
  lua_pop(lua, 1);

  return isInstanceOf(lua, classDefine, selfIndex);
}

bool LuaEngine::isInstanceOf(lua_State* lua, const void* classDefine, int selfIndex) {
  if (selfIndex == 0 || classDefine == nullptr) {
    return false;
  }

  if (!lua_istable(lua, selfIndex)) {
    return false;
  }

  lua_backend::luaEnsureStack(lua, 1);
  lua_rawgetp(lua, selfIndex, kLuaTableNativeClassDefinePtrToken_);
  auto ptr = lua_touserdata(lua, -1);
  lua_pop(lua, 1);
  return ptr == classDefine;
}

void* LuaEngine::getNativeThis(lua_State* lua, const void* classDefine, int selfIndex) {
  lua_backend::luaEnsureStack(lua, 2);

  if (!isInstanceOf(lua, classDefine, selfIndex)) {
    return nullptr;
  }

  lua_rawgetp(lua, selfIndex, kLuaTableNativeThisPtrToken_);
  auto ptr = lua_touserdata(lua, -1);
  lua_pop(lua, 1);
  return ptr;
}

void LuaEngine::pushInstanceFunction(const void* data, const void* classDefine,
                                     PushInstanceFunctionCallback callable) const {
  lua_backend::luaEnsureStack(lua_, 4);

  lua_pushlightuserdata(lua_, const_cast<void*>(data));
  lua_pushlightuserdata(lua_, reinterpret_cast<void*>(callable));
  lua_pushlightuserdata(lua_, const_cast<void*>(classDefine));
  lua_pushlightuserdata(lua_, const_cast<LuaEngine*>(this));

  lua_pushcclosure(
      lua_,
      [](lua_State* lua) -> int {
        std::optional<std::string> exception;

        try {
          auto classDefine = lua_touserdata(lua, lua_upvalueindex(3));
          auto engine = static_cast<LuaEngine*>(lua_touserdata(lua, lua_upvalueindex(4)));

          void* thiz = nullptr;
          if (lua_gettop(lua) >= 1) {
            thiz = getNativeThis(lua, classDefine, 1);
          }

          if (thiz == nullptr) {
            luaThrow(lua, "call instance function on non-native Object");
          }

          auto data = lua_touserdata(lua, lua_upvalueindex(1));
          auto callable = reinterpret_cast<PushInstanceFunctionCallback>(
              lua_touserdata(lua, lua_upvalueindex(2)));

          auto ret = callable(lua, data, thiz, makeArguments(engine, 1, lua_gettop(lua), true));
          auto retIndex = localRefIndex(ret);

          return handleReturnToLua(lua, retIndex);
        } catch (const Exception& e) {
          exception = e.message();
        }

        luaThrow(lua, exception);
        return 0;
      },
      4);
}

std::shared_ptr<utils::MessageQueue> LuaEngine::messageQueue() { return messageQueue_; }

void LuaEngine::gc() { lua_gc(lua_, LUA_GCCOLLECT, 0); }

size_t LuaEngine::getHeapSize() {
  return lua_gc(lua_, LUA_GCCOUNT, 0) * 1024;  // NOLINT
}

void LuaEngine::adjustAssociatedMemory(int64_t count) {}

ScriptLanguage LuaEngine::getLanguageType() { return ScriptLanguage::kLua; }

std::string LuaEngine::getEngineVersion() { return LUA_RELEASE; }

}  // namespace script::lua_backend
