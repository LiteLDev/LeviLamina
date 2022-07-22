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
#include "../../src/Native.hpp"
#include "../../src/utils/Helper.hpp"
#include "QjsEngine.h"
#include "QjsHelper.hpp"

namespace script::qjs_backend {

struct InstanceClassOpaque {
  void* scriptClassPolymorphicPointer;
  ScriptClass* scriptClassPointer;
  const void* classDefine;
};

class PauseGc {
  SCRIPTX_DISALLOW_COPY_AND_MOVE(PauseGc);
  QjsEngine* engine_;

 public:
  explicit PauseGc(QjsEngine* engine) : engine_(engine) { engine_->pauseGcCount_++; }
  ~PauseGc() { engine_->pauseGcCount_--; }
};

template <typename T>
void QjsEngine::registerNativeClassImpl(const ClassDefine<T>* classDefine) {
  auto ns = internal::getNamespaceObject(this, classDefine->getNameSpace(), getGlobal()).asObject();

  auto hasInstance = classDefine->instanceDefine.constructor;

  // static only
  auto module = hasInstance ? newConstructor(*classDefine) : Object::newObject();
  registerNativeStatic(module, classDefine->staticDefine);

  if (hasInstance) {
    auto proto = newPrototype(*classDefine);
    nativeInstanceRegistry_.emplace(
        classDefine,
        std::pair{qjs_interop::getLocal(proto, context_), qjs_interop::getLocal(module, context_)});
    module.set("prototype", proto);
  }
  ns.set(classDefine->className, module);
}

template <typename T>
Local<Object> QjsEngine::newConstructor(const ClassDefine<T>& classDefine) {
  auto ret = newRawFunction(
      this, const_cast<ClassDefine<T>*>(&classDefine), nullptr,
      [](const Arguments& args, void* data, void*, bool isConstructorCall) {
        auto classDefine = static_cast<const ClassDefine<T>*>(data);
        auto engine = args.template engineAs<QjsEngine>();

        Tracer trace(engine, classDefine->getClassName());

        // For Constructor the this_val is new.target, which must be the constructor.
        // https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/new.target
        if (!JS_IsConstructor(engine->context_, args.callbackInfo_.thiz_)) {
          throw Exception(u8"constructor can't be called as function");
        }

        auto registry = engine->nativeInstanceRegistry_.find(classDefine);
        assert(registry != engine->nativeInstanceRegistry_.end());

        auto obj = JS_NewObjectClass(engine->context_, kInstanceClassId);
        auto ret = JS_SetPrototype(engine->context_, obj, registry->second.first);
        checkException(ret);

        T* instance = nullptr;
        if (args.size() == 1) {
          auto ptr = JS_GetOpaque(qjs_interop::peekLocal(args[0]), kPointerClassId);
          if (ptr != nullptr) {
            // this logic is for
            // ScriptClass::ScriptClass(ConstructFromCpp<T>)
            instance = static_cast<T*>(ptr);
          }
        }

        if (instance == nullptr) {
          // this logic is for
          // ScriptClass::ScriptClass(const Local<Object>& thiz)
          auto callbackInfo = args.callbackInfo_;
          callbackInfo.thiz_ = obj;

          instance = classDefine->instanceDefine.constructor(Arguments(callbackInfo));
          if (instance == nullptr) {
            throw Exception("can't create class " + classDefine->className);
          }
        }

        auto opaque = new InstanceClassOpaque();
        opaque->scriptClassPolymorphicPointer = instance;
        opaque->scriptClassPointer = static_cast<ScriptClass*>(instance);
        opaque->classDefine = classDefine;
        JS_SetOpaque(obj, opaque);

        return qjs_interop::makeLocal<Value>(obj);
      });

  auto obj = qjs_interop::getLocal(ret);
  qjs_backend::checkException(JS_SetConstructorBit(context_, obj, true));
  return qjs_interop::makeLocal<Object>(obj);
}

template <typename T>
Local<Object> QjsEngine::newPrototype(const ClassDefine<T>& define) {
  auto proto = Object::newObject();
  using IDT = internal::InstanceDefine<T>;

  auto definePtr = const_cast<ClassDefine<T>*>(&define);

  auto& def = define.instanceDefine;
  for (auto&& f : def.functions) {
    using FuncDef = typename IDT::FunctionDefine;

    auto fun = newRawFunction(
        this, const_cast<FuncDef*>(&f), definePtr,
        [](const Arguments& args, void* data1, void* data2, bool) {
          auto ptr = static_cast<InstanceClassOpaque*>(
              JS_GetOpaque(qjs_interop::peekLocal(args.thiz()), kInstanceClassId));
          if (ptr == nullptr || ptr->classDefine != data2) {
            throw Exception(u8"call function on wrong receiver");
          }
          auto f = static_cast<FuncDef*>(data1);
          Tracer tracer(args.engine(), f->traceName);
          return (f->callback)(static_cast<T*>(ptr->scriptClassPolymorphicPointer), args);
        });
    proto.set(f.name, fun);
  }

  for (auto&& prop : def.properties) {
    using PropDef = typename IDT::PropertyDefine;

    Local<Value> getterFun;
    Local<Value> setterFun;

    if (prop.getter) {
      getterFun =
          newRawFunction(this, const_cast<PropDef*>(&prop), definePtr,
                         [](const Arguments& args, void* data1, void* data2, bool) {
                           auto ptr = static_cast<InstanceClassOpaque*>(
                               JS_GetOpaque(qjs_interop::peekLocal(args.thiz()), kInstanceClassId));
                           if (ptr == nullptr || ptr->classDefine != data2) {
                             throw Exception(u8"call function on wrong receiver");
                           }
                           auto p = static_cast<PropDef*>(data1);
                           Tracer tracer(args.engine(), p->traceName);
                           return (p->getter)(static_cast<T*>(ptr->scriptClassPolymorphicPointer));
                         })
              .asValue();
    }

    if (prop.setter) {
      setterFun = newRawFunction(
                      this, const_cast<PropDef*>(&prop), definePtr,
                      [](const Arguments& args, void* data1, void* data2, bool) {
                        auto ptr = static_cast<InstanceClassOpaque*>(
                            JS_GetOpaque(qjs_interop::peekLocal(args.thiz()), kInstanceClassId));
                        if (ptr == nullptr || ptr->classDefine != data2) {
                          throw Exception(u8"call function on wrong receiver");
                        }
                        auto p = static_cast<PropDef*>(data1);
                        Tracer tracer(args.engine(), p->traceName);

                        (p->setter)(static_cast<T*>(ptr->scriptClassPolymorphicPointer), args[0]);
                        return Local<Value>();
                      })
                      .asValue();
    }

    auto atom = JS_NewAtomLen(context_, prop.name.c_str(), prop.name.length());

    auto ret = JS_DefinePropertyGetSet(context_, qjs_interop::peekLocal(proto), atom,
                                       qjs_interop::getLocal(getterFun),
                                       qjs_interop::getLocal(setterFun), JS_PROP_C_W_E);
    JS_FreeAtom(context_, atom);
    qjs_backend::checkException(ret);
  }
  return proto;
}

template <typename T>
Local<Object> QjsEngine::newNativeClassImpl(const ClassDefine<T>* classDefine, size_t size,
                                            const Local<Value>* args) {
  auto it = nativeInstanceRegistry_.find(classDefine);
  if (it != nativeInstanceRegistry_.end()) {
    auto ctor = it->second.second;
    auto constructor = qjs_interop::makeLocal<Object>(qjs_backend::dupValue(ctor, context_));
    return Object::newObjectImpl(constructor, size, args);
  }

  throw Exception("class define[" + classDefine->className + "] is not registered");
}

template <typename T>
bool QjsEngine::isInstanceOfImpl(const Local<Value>& value, const ClassDefine<T>* classDefine) {
  if (!value.isObject()) return false;

  auto it = nativeInstanceRegistry_.find(classDefine);
  if (it != nativeInstanceRegistry_.end()) {
    return value.asObject().instanceOf(
        qjs_interop::makeLocal<Value>(qjs_backend::dupValue(it->second.second, context_)));
  }

  return false;
}

template <typename T>
T* QjsEngine::getNativeInstanceImpl(const Local<Value>& value, const ClassDefine<T>* classDefine) {
  if (!isInstanceOfImpl(value, classDefine)) {
    return nullptr;
  }

  return static_cast<T*>(static_cast<InstanceClassOpaque*>(
                             JS_GetOpaque(qjs_interop::peekLocal(value), kInstanceClassId))
                             ->scriptClassPolymorphicPointer);
}

}  // namespace script::qjs_backend