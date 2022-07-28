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

#include <type_traits>
#include "../../src/Native.h"
#include "../../src/Scope.h"
#include "../../src/Utils.h"
#include "../../src/utils/Helper.hpp"
#include "JscEngine.h"
#include "JscHelper.hpp"
#include "JscReference.hpp"

namespace script::jsc_backend {

template <typename T>
bool JscEngine::registerNativeClassImpl(const ClassDefine<T>* classDefine) {
  Tracer traceRegister(this, classDefine->className);

  internal::validateClassDefine(classDefine);

  Local<Value> object;
  ClassRegistryData registry{};

  if (classDefine->instanceDefine.constructor) {
    // make it constexpr if, save some binary size
    if constexpr (!std::is_same_v<T, void>) {
      defineInstance(classDefine, object, registry);
    } else {
      // validateClassDefine will make sure this won't happen
      std::terminate();
    }
  } else {
    object = Object::newObject();
  }

  registerStaticDefine(classDefine->staticDefine, object.asObject());

  auto ns = ::script::internal::getNamespaceObject(this, classDefine->getNameSpace(), getGlobal())
                .asObject();
  ns.set(classDefine->className, object);

  classRegistry_.emplace(const_cast<ClassDefine<T>*>(classDefine), registry);

  return true;
}

template <typename T>
void JscEngine::defineInstance(const ClassDefine<T>* classDefine, Local<Value>& object,
                               JscEngine::ClassRegistryData& registry) {
  JSClassDefinition instanceDefine = kJSClassDefinitionEmpty;
  instanceDefine.attributes = kJSClassAttributeNone;
  instanceDefine.className = classDefine->className.c_str();

  instanceDefine.finalize = [](JSObjectRef thiz) {
    auto* t = static_cast<ScriptClass*>(JSObjectGetPrivate(thiz));
    auto engine = script::internal::scriptDynamicCast<JscEngine*>(t->getScriptEngine());
    if (!engine->isDestroying()) {
      utils::Message dtor([](auto& msg) {},
                          [](auto& msg) { delete static_cast<ScriptClass*>(msg.ptr0); });
      dtor.tag = engine;
      dtor.ptr0 = t;
      engine->messageQueue()->postMessage(dtor);
    } else {
      delete t;
    }
  };
  auto clazz = JSClassCreate(&instanceDefine);
  registry.instanceClass = clazz;

  JSClassDefinition staticDefine = kJSClassDefinitionEmpty;

  staticDefine.callAsConstructor = createConstructor<T>();
  staticDefine.hasInstance = [](JSContextRef ctx, JSObjectRef constructor,
                                JSValueRef possibleInstance, JSValueRef* exception) -> bool {
    auto engine = static_cast<JscEngine*>(JSObjectGetPrivate(JSContextGetGlobalObject(ctx)));
    auto def = static_cast<ClassDefine<T>*>(JSObjectGetPrivate(constructor));
    return engine->isInstanceOfImpl(make<Local<Value>>(possibleInstance), def);
  };

  auto staticClass = JSClassCreate(&staticDefine);
  object =
      Local<Object>(JSObjectMake(context_, staticClass, const_cast<ClassDefine<T>*>(classDefine)));
  // not used anymore
  JSClassRelease(staticClass);
  registry.constructor = object.asObject();

  auto prototype = defineInstancePrototype(classDefine);
  object.asObject().set("prototype", prototype);

  registry.prototype = prototype;
}

template <typename T>
JSObjectCallAsConstructorCallback JscEngine::createConstructor() {
  return [](JSContextRef ctx, JSObjectRef constructor, size_t argumentCount,
            const JSValueRef arguments[], JSValueRef* exception) {
    auto engine = static_cast<JscEngine*>(JSObjectGetPrivate(JSContextGetGlobalObject(ctx)));
    auto def = static_cast<ClassDefine<T>*>(JSObjectGetPrivate(constructor));

    Tracer trace(engine, def->className);

    auto it = engine->classRegistry_.find(def);
    assert(it != engine->classRegistry_.end());

    ClassRegistryData& registry = it->second;

    auto object = JSObjectMake(ctx, registry.instanceClass, nullptr);
    auto callbackInfo = newArguments(engine, object, arguments, argumentCount);

    try {
      StackFrameScope stack;
      T* thiz;
      if (argumentCount == 2 && engine->isConstructorMarkSymbol(arguments[0]) &&
          JSValueIsObjectOfClass(engine->context_, arguments[1], externalClass_)) {
        // this logic is for
        // ScriptClass::ScriptClass(const ClassDefine<T> &define)
        auto obj = JSValueToObject(engine->context_, arguments[1], exception);
        checkException(*exception);
        thiz = static_cast<T*>(JSObjectGetPrivate(obj));
      } else {
        // this logic is for
        // ScriptClass::ScriptClass(const Local<Object>& thiz)
        thiz = def->instanceDefine.constructor(callbackInfo);
      }
      if (thiz) {
        thiz->internalState_.classDefine = def;
        JSObjectSetPrivate(object, thiz);
        JSObjectSetPrototype(ctx, object,
                             toJsc(engine->context_, registry.prototype.get().asValue()));
        return object;
      } else {
        throw Exception("constructor returns null");
      }
    } catch (Exception& e) {
      *exception = toJsc(engine->context_, e.exception());
      // can't return undefined, just return empty object;
      return object;
    }
  };
}

template <typename T>
Local<Object> JscEngine::defineInstancePrototype(const ClassDefine<T>* classDefine) {
  Local<Object> proto = Object::newObject();

  defineInstanceFunction(classDefine, proto);

  if (!classDefine->instanceDefine.properties.empty()) {
    auto jsObject = getGlobal().get("Object").asObject();
    auto jsObject_def = jsObject.get("defineProperty").asFunction();
    auto get = String::newString("get");
    auto set = String::newString("set");

    defineInstanceProperties(classDefine, [&get, &set, &jsObject, &jsObject_def, &proto](
                                              const Local<String>& name, const Local<Value>& getter,
                                              const Local<Value>& setter) {
      auto desc = Object::newObject();
      if (!getter.isNull()) desc.set(get, getter);
      if (!setter.isNull()) desc.set(set, setter);

      // set prop to prototype
      jsObject_def.call(jsObject, {proto, name, desc});
    });
  }
  return proto;
}

template <typename T>
void JscEngine::defineInstanceFunction(const ClassDefine<T>* classDefine,
                                       Local<Object>& prototypeObject) {
  struct ContextData {
    typename internal::InstanceDefine<T>::FunctionDefine* functionDefine;
    JscEngine* engine;
    const ClassDefine<T>* classDefine;
  };

  for (auto& f : classDefine->instanceDefine.functions) {
    StackFrameScope stack;
    JSClassDefinition jsFunc = kJSClassDefinitionEmpty;
    jsFunc.className = "anonymous";
    jsFunc.callAsFunction = [](JSContextRef ctx, JSObjectRef function, JSObjectRef thisObject,
                               size_t argumentCount, const JSValueRef arguments[],
                               JSValueRef* exception) {
      auto data = static_cast<ContextData*>(JSObjectGetPrivate(function));
      auto fp = data->functionDefine;
      auto engine = data->engine;
      auto def = data->classDefine;
      auto& callback = fp->callback;

      Tracer trace(engine, fp->traceName);

      auto args = newArguments(engine, thisObject, arguments, argumentCount);

      try {
        auto* t = static_cast<T*>(JSObjectGetPrivate(thisObject));
        if (!t || t->internalState_.classDefine != def) {
          throw Exception(u8"call function on wrong receiver");
        }
        auto returnVal = callback(t, args);
        return toJsc(engine->context_, returnVal);
      } catch (Exception& e) {
        *exception = jsc_backend::JscEngine::toJsc(engine->context_, e.exception());
        return JSValueMakeUndefined(currentEngineContextChecked());
      }
    };
    jsFunc.finalize = [](JSObjectRef function) {
      delete static_cast<ContextData*>(JSObjectGetPrivate(function));
    };

    auto funcClazz = JSClassCreate(&jsFunc);
    Local<Function> funcObj(JSObjectMake(
        currentEngineContextChecked(), funcClazz,
        new ContextData{const_cast<typename internal::InstanceDefine<T>::FunctionDefine*>(&f), this,
                        classDefine}));

    // not used anymore
    JSClassRelease(funcClazz);
    auto name = String::newString(f.name);

    prototypeObject.set(name, funcObj);
  }
}

template <typename T, typename ConsumeLambda>
void JscEngine::defineInstanceProperties(const ClassDefine<T>* classDefine,
                                         ConsumeLambda consumerLambda) {
  struct ContextData {
    typename internal::InstanceDefine<T>::PropertyDefine* propertyDefine;
    JscEngine* engine;
    const ClassDefine<T>* classDefine;
  };

  for (auto& p : classDefine->instanceDefine.properties) {
    StackFrameScope stack;
    Local<Value> getter;
    Local<Value> setter;

    if (p.getter) {
      JSClassDefinition jsFunc = kJSClassDefinitionEmpty;
      jsFunc.className = "getter";
      jsFunc.callAsFunction = [](JSContextRef ctx, JSObjectRef function, JSObjectRef thisObject,
                                 size_t argumentCount, const JSValueRef arguments[],
                                 JSValueRef* exception) {
        auto data = static_cast<ContextData*>(JSObjectGetPrivate(function));
        auto pp = data->propertyDefine;
        auto engine = data->engine;
        auto def = data->classDefine;

        Tracer trace(engine, pp->traceName);

        try {
          auto* t = static_cast<T*>(JSObjectGetPrivate(thisObject));
          if (!t || t->internalState_.classDefine != def) {
            throw Exception(u8"call function on wrong receiver");
          }
          auto value = (pp->getter)(t);

          return toJsc(engine->context_, value);
        } catch (Exception& e) {
          *exception = jsc_backend::JscEngine::toJsc(engine->context_, e.exception());
          return JSValueMakeUndefined(engine->context_);
        }
      };
      jsFunc.finalize = [](JSObjectRef function) {
        delete static_cast<ContextData*>(JSObjectGetPrivate(function));
      };
      auto funcClazz = JSClassCreate(&jsFunc);

      getter = Local<Function>(JSObjectMake(
          currentEngineContextChecked(), funcClazz,
          new ContextData{const_cast<typename internal::InstanceDefine<T>::PropertyDefine*>(&p),
                          this, classDefine}));

      JSClassRelease(funcClazz);
    }

    if (p.setter) {
      JSClassDefinition jsFunc = kJSClassDefinitionEmpty;
      jsFunc.className = "setter";
      jsFunc.callAsFunction = [](JSContextRef ctx, JSObjectRef function, JSObjectRef thisObject,
                                 size_t argumentCount, const JSValueRef arguments[],
                                 JSValueRef* exception) {
        auto data = static_cast<ContextData*>(JSObjectGetPrivate(function));
        auto pp = data->propertyDefine;
        auto engine = data->engine;
        auto def = data->classDefine;

        Tracer trace(engine, pp->traceName);

        auto args = newArguments(engine, thisObject, arguments, argumentCount);
        if (args.size() > 0) {
          try {
            auto* t = static_cast<T*>(JSObjectGetPrivate(thisObject));
            if (!t || t->internalState_.classDefine != def) {
              throw Exception(u8"call function on wrong receiver");
            }
            (pp->setter)(t, args[0]);
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

      setter = Local<Function>(JSObjectMake(
          context_, funcClazz,
          new ContextData{const_cast<typename internal::InstanceDefine<T>::PropertyDefine*>(&p),
                          this, classDefine}));

      JSClassRelease(funcClazz);
    }

    consumerLambda(String::newString(p.name), getter, setter);
  }
}

template <typename T>
Local<Object> JscEngine::newNativeClassImpl(const ClassDefine<T>* classDefine, size_t size,
                                            const Local<Value>* args) {
  auto it = classRegistry_.find(const_cast<ClassDefine<T>*>(classDefine));
  if (it == classRegistry_.end()) {
    registerNativeClassImpl(classDefine);
    it = classRegistry_.find(const_cast<ClassDefine<T>*>(classDefine));
  }

  if (it != classRegistry_.end() && !it->second.constructor.isEmpty()) {
    return jsc_backend::toJscValues<Local<Object>>(
        context_, size, args, [this, &it, size](JSValueRef* array) {
          JSValueRef jscException = nullptr;
          Local<Value> ret(JSObjectCallAsConstructor(
              context_, toJsc(context_, it->second.constructor.get()), size, array, &jscException));
          jsc_backend::JscEngine::checkException(jscException);
          return ret.asObject();
        });
  }

  throw Exception("can't create native class");
}

template <typename T>
bool JscEngine::isInstanceOfImpl(const Local<Value>& value, const ClassDefine<T>* classDefine) {
  if (!value.isObject()) return false;
  auto it = classRegistry_.find(const_cast<ClassDefine<T>*>(classDefine));

  if (it != classRegistry_.end() && !it->second.constructor.isEmpty()) {
    return JSValueIsObjectOfClass(context_, toJsc(context_, value), it->second.instanceClass);
  }

  return false;
}

template <typename T>
T* JscEngine::getNativeInstanceImpl(const Local<Value>& value, const ClassDefine<T>* classDefine) {
  if (value.isObject() && isInstanceOfImpl(value, classDefine)) {
    return reinterpret_cast<T*>(JSObjectGetPrivate(value.asObject().val_));
  }
  return nullptr;
}

inline typename RefTypeMap<Value>::jscType JscEngine::toJsc(JSGlobalContextRef context,
                                                            const Local<Value>& ref) {
  if (ref.isNull()) {
    return Local<Value>(
               const_cast<typename Local<Value>::InternalLocalRef>(JSValueMakeUndefined(context)))
        .val_;
  }
  return ref.val_;
}

}  // namespace script::jsc_backend
