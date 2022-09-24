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

#include "JscEngine.h"
#include "../../src/Native.hpp"
#include "JscEngine.hpp"
#include "JscHelper.h"

namespace script::jsc_backend {

static std::once_flag globalClassRefFlag{};
JSClassRef JscEngine::globalClass_{};
JSClassRef JscEngine::externalClass_{};

// When we link against high-version library
// but run with a low-version one, macOS/iOS linker just set the undefined symbols to nullptr.
// cast to void* to suppress g++ -Werror=address
bool JscEngine::hasByteBufferAPI_ = reinterpret_cast<void*>(&JSValueGetTypedArrayType) != nullptr;

JscEngine::JscEngine(std::shared_ptr<utils::MessageQueue> mq)
    : messageQueue_(mq ? std::move(mq) : std::make_shared<utils::MessageQueue>()) {
  std::call_once(globalClassRefFlag, []() {
    JSClassDefinition global = kJSClassDefinitionEmpty;
    global.className = "JscEngine";
    globalClass_ = JSClassCreate(&global);

    JSClassDefinition external = kJSClassDefinitionEmpty;
    external.className = "JscExternal";
    externalClass_ = JSClassCreate(&external);
  });

  virtualMachine_ = JSContextGroupCreate();
  context_ = JSGlobalContextCreateInGroup(virtualMachine_, globalClass_);
  JSObjectSetPrivate(JSContextGetGlobalObject(context_), this);

  initInternalSymbols();
}

JscEngine::~JscEngine() = default;

// NOLINTNEXTLINE(bugprone-exception-escape)
void JscEngine::destroy() noexcept {
  ScriptEngine::destroyUserData();
  {
    EngineScope scope(this);
    // clear class registry
    for (auto& r : classRegistry_) {
      auto clazz = r.second.instanceClass;
      if (clazz) JSClassRelease(clazz);
    }

    classRegistry_.clear();
    keptReference_.clear();

    internalStorageSymbol_.reset();
    constructorMarkSymbol_.reset();

    getInternalStorageBySymbolFunction_.reset();
    isByteBuffer_.reset();

    globalWeakBookkeeping_.clear();
  }

  isDestroying_ = true;
  messageQueue_->removeMessageByTag(this);

  JSGlobalContextRelease(context_);
  JSContextGroupRelease(virtualMachine_);

  delete this;
}

void JscEngine::initInternalSymbols() {
  EngineScope scope(this);

  // JSValueMakeSymbol isn't available on older version of JSCore (iOS < 13, macOS < 15),
  // meanwhile JSCore don't export version marco nor runtime method to check version,
  // and we don't want to add hard dependencies on macOS, iOS SDK to check version at runtime.
  // So we just use script API to do this all the time, ignoring what JSCore we are
  // compile against/running with.

  try {
    auto symbol = getGlobal().get("Symbol");
    if (symbol.isFunction()) {
      auto symbolFunc = symbol.asFunction();
      internalStorageSymbol_ = symbolFunc.call({}, "InternalStorageSymbol");
      constructorMarkSymbol_ = symbolFunc.call({}, "ConstructorMarkSymbol");
    } else {
      // on really old version of JSC, Symbol is not implemented, use String instead
      internalStorageSymbol_ = String::newString("__ScriptX_InternalStorageSymbol__");
      constructorMarkSymbol_ = String::newString("__ScriptX_ConstructorMarkSymbol__");
    }

    // same problem applies to JSObjectGetPropertyForKey & JSObjectSetPropertyForKey
    getInternalStorageBySymbolFunction_ = static_cast<ScriptEngine*>(this)
                                              ->eval(R"(
      (function () {
        return function getOrCreateInternalStorage(obj, symbol) {
          var ret = obj[symbol];
          if (!Array.isArray(ret)) {
            ret = [];
            obj[symbol] = ret;
          }
          return ret;
        }
      })();
    )")
                                              .asFunction();
    if (!hasByteBufferAPI_) {
      isByteBuffer_ = eval(R"(
        (function() {
          return function isByteBuffer(val) {
            return val instanceof ArrayBuffer ||
                    ArrayBuffer.isView(val);
          };
        })();
    )")
                          .asFunction();
    }
  } catch (const Exception& e) {
    // won't happen, if it does, crash the program.
    throw std::runtime_error(e.message());
  }
}

bool JscEngine::isConstructorMarkSymbol(JSValueRef value) {
  return JSValueIsStrictEqual(context_, value, toJsc(context_, constructorMarkSymbol_.get()));
}

Local<Object> JscEngine::getGlobal() { return Local<Object>(JSContextGetGlobalObject(context_)); }

script::Local<script::Value> JscEngine::get(const script::Local<script::String>& key) {
  return getGlobal().get(key);
}

void JscEngine::set(const script::Local<script::String>& key,
                    const script::Local<script::Value>& value) {
  getGlobal().set(key, value);
}

script::Local<script::Value> JscEngine::eval(const script::Local<script::String>& script,
                                             const Local<Value>& sourceFile) {
  Tracer trace(this, "JscEngine::eval");

  auto scriptString = script.val_.getString(context_);
  auto sourceFileString = sourceFile.isString()
                              ? sourceFile.asString().val_.getSharedStringRef(context_)
                              : jsc_backend::StringLocalRef::SharedStringRef{nullptr};

  JSValueRef jscException = nullptr;
  Local<Value> ret(JSEvaluateScript(context_, scriptString, JSContextGetGlobalObject(context_),
                                    sourceFileString.get(), 0, &jscException));
  jsc_backend::JscEngine::checkException(jscException);
  return ret;
}

script::Local<script::Value> JscEngine::eval(const script::Local<script::String>& script,
                                             const Local<String>& sourceFile) {
  return eval(script, sourceFile.asValue());
}

script::Local<script::Value> JscEngine::eval(const script::Local<script::String>& script) {
  return eval(script, {});
}

std::shared_ptr<utils::MessageQueue> JscEngine::messageQueue() { return messageQueue_; }

void JscEngine::gc() {
  if (isDestroying()) return;
  EngineScope engineScope(this);
  JSGarbageCollect(context_);
}

void JscEngine::adjustAssociatedMemory(int64_t /*count*/) {
  if (isDestroying()) return;
  // JSC have implemented this method
  // but not exported to public header...
}

size_t JscEngine::keepReference(const Local<Value>& ref) {
  auto id = keepId_++;
  keptReference_.emplace(id, ref);
  return id;
}

void JscEngine::removeKeptReference(size_t id) {
  EngineScope scope(this);
  keptReference_.erase(id);
}

Arguments JscEngine::newArguments(JscEngine* engine, JSObjectRef thisObject,
                                  const JSValueRef* arguments, size_t size) {
  ArgumentsData data{engine, thisObject, arguments, size};
  return Arguments(data);
}

void JscEngine::registerStaticDefine(const internal::StaticDefine& staticDefine,
                                     const Local<Object>& object) {
  for (auto& func : staticDefine.functions) {
    StackFrameScope stack;
    Local<Function> jsFunc = newStaticFunction(func);
    object.set(func.name, jsFunc);
  }

  if (!staticDefine.properties.empty()) {
    auto Object = getGlobal().get("Object").asObject();
    auto def = Object.get("defineProperty").asFunction();
    auto get = String::newString("get");
    auto set = String::newString("set");

    for (auto& prop : staticDefine.properties) {
      Local<Value> getter = newStaticGetter(prop);
      Local<Value> setter = newStaticSetter(prop);

      auto desc = Object::newObject();
      if (!getter.isNull()) desc.set(get, getter);
      if (!setter.isNull()) desc.set(set, setter);

      def.call(Object, {object, String::newString(prop.name), desc});
    }
  }
}

Local<Value> JscEngine::newStaticSetter(const internal::StaticDefine::PropertyDefine& prop) {
  // setter may null
  if (prop.setter == nullptr) return {};

  using S = typename internal::StaticDefine::PropertyDefine;
  using ContextData = std::pair<S*, JscEngine*>;

  JSClassDefinition jsFunc = kJSClassDefinitionEmpty;
  jsFunc.className = "setter";
  jsFunc.callAsFunction = [](JSContextRef /*ctx*/, JSObjectRef function, JSObjectRef thisObject,
                             size_t argumentCount,
                             // NOLINTNEXTLINE (cppcoreguidelines-avoid-c-arrays)
                             const JSValueRef arguments[], JSValueRef* exception) {
    auto contextData = static_cast<ContextData*>(JSObjectGetPrivate(function));
    auto setter = contextData->first;
    auto engine = contextData->second;

    Tracer trace(engine, setter->traceName);

    auto args = newArguments(engine, thisObject, arguments, argumentCount);
    if (args.size() > 0) {
      try {
        (setter->setter)(args[0]);
      } catch (Exception& e) {
        *exception = jsc_backend::JscEngine::toJsc(engine->context_, e.exception());
      }
    }
    return JSValueMakeUndefined(engine->context_);
  };
  jsFunc.finalize = [](JSObjectRef function) {
    delete static_cast<ContextData*>(JSObjectGetPrivate(function));
  };
  auto funcClazz = JSClassCreate(&jsFunc);

  Local<Function> ret(
      JSObjectMake(context_, funcClazz, new ContextData(const_cast<S*>(&prop), this)));
  JSClassRelease(funcClazz);

  return ret;
}

Local<Value> JscEngine::newStaticGetter(const internal::StaticDefine::PropertyDefine& prop) {
  if (prop.getter == nullptr) return {};

  using G = typename internal::StaticDefine::PropertyDefine;

  using ContextData = std::pair<G*, JscEngine*>;

  JSClassDefinition jsFunc = kJSClassDefinitionEmpty;
  jsFunc.className = "getter";
  jsFunc.callAsFunction = [](JSContextRef /*ctx*/, JSObjectRef function, JSObjectRef thisObject,
                             size_t argumentCount,
                             // NOLINTNEXTLINE (cppcoreguidelines-avoid-c-arrays)
                             const JSValueRef arguments[], JSValueRef* exception) {
    auto contextData = static_cast<ContextData*>(JSObjectGetPrivate(function));
    auto getter = contextData->first;
    auto engine = contextData->second;

    Tracer trace(engine, getter->traceName);

    auto args = newArguments(engine, thisObject, arguments, argumentCount);
    try {
      auto value = (getter->getter)();
      return toJsc(engine->context_, value);
    } catch (Exception& e) {
      *exception = jsc_backend::JscEngine::toJsc(engine->context_, e.exception());
      return JSValueMakeUndefined(currentEngineContextChecked());
    }
  };
  jsFunc.finalize = [](JSObjectRef function) {
    delete static_cast<ContextData*>(JSObjectGetPrivate(function));
  };
  auto funcClazz = JSClassCreate(&jsFunc);

  Local<Function> ret(JSObjectMake(currentEngineContextChecked(), funcClazz,
                                   new ContextData(const_cast<G*>(&prop), this)));
  JSClassRelease(funcClazz);
  return ret;
}

Local<Function> JscEngine::newStaticFunction(const internal::StaticDefine::FunctionDefine& func) {
  using ContextData = std::pair<internal::StaticDefine::FunctionDefine*, JscEngine*>;
  JSClassDefinition jsFunc = kJSClassDefinitionEmpty;
  jsFunc.className = "anonymous";
  jsFunc.callAsFunction = [](JSContextRef /*ctx*/, JSObjectRef function, JSObjectRef thisObject,
                             // NOLINTNEXTLINE (cppcoreguidelines-avoid-c-arrays)
                             size_t argumentCount, const JSValueRef arguments[],
                             JSValueRef* exception) {
    auto funcPtr = static_cast<ContextData*>(JSObjectGetPrivate(function));
    auto engine = funcPtr->second;

    Tracer trace(engine, funcPtr->first->traceName);

    auto args = newArguments(engine, thisObject, arguments, argumentCount);

    try {
      auto returnVal = (funcPtr->first->callback)(args);
      return toJsc(engine->context_, returnVal);
    } catch (Exception& e) {
      *exception = jsc_backend::JscEngine::toJsc(engine->context_, e.exception());
      return JSValueMakeUndefined(engine->context_);
    }
  };

  jsFunc.finalize = [](JSObjectRef function) {
    delete static_cast<ContextData*>(JSObjectGetPrivate(function));
  };

  auto funcClazz = JSClassCreate(&jsFunc);
  Local<Function> funcObj(JSObjectMake(
      currentEngineContextChecked(), funcClazz,
      new ContextData(const_cast<internal::StaticDefine::FunctionDefine*>(&func), this)));
  JSClassRelease(funcClazz);
  return funcObj;
}

script::ScriptLanguage JscEngine::getLanguageType() { return ScriptLanguage::kJavaScript; }

std::string JscEngine::getEngineVersion() { return "JavaScriptCore v-unknown"; }

}  // namespace script::jsc_backend
