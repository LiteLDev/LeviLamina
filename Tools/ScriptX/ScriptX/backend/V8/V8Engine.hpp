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

#include "../../src/Utils.h"
#include "../../src/utils/Helper.hpp"
#include "V8Engine.h"
#include "V8Helper.hpp"

namespace script::v8_backend {

template <typename T>
void V8Engine::registerNativeClassImpl(const ClassDefine<T>* classDefine) {
  StackFrameScope stack;
  v8::TryCatch tryCatch(isolate_);

  Local<Object> nameSpaceObj =
      ::script::internal::getNamespaceObject(this, classDefine->getNameSpace(), getGlobal())
          .asObject();

  v8::Local<v8::FunctionTemplate> funcT;

  if (classDefine->instanceDefine.constructor) {
    if constexpr (!std::is_same_v<T, void>) {
      funcT = newConstructor(classDefine);
    } else {
      // validateClassDefine will make sure this won't happen
      std::terminate();
    }
  } else {
    funcT =
        v8::FunctionTemplate::New(isolate_, nullptr, {}, {}, 0, v8::ConstructorBehavior::kThrow);
    funcT->RemovePrototype();
  }

  auto className = String::newString(classDefine->className);
  funcT->SetClassName(v8_backend::V8Engine::toV8(isolate_, className));

  registerNativeClassStatic(funcT, &classDefine->staticDefine);
  registerNativeClassInstance(funcT, classDefine);

  auto function = funcT->GetFunction(v8_backend::currentEngineContextChecked());
  v8_backend::checkException(tryCatch);

  auto global = v8::Global<v8::FunctionTemplate>(isolate_, funcT);
  nativeRegistry_.emplace(classDefine, std::move(global));

  nameSpaceObj.set(className, make<Local<Function>>(function.ToLocalChecked()));
}

template <typename T>
v8::Local<v8::FunctionTemplate> V8Engine::newConstructor(const ClassDefine<T>* classDefine) {
  v8::TryCatch tryCatch(isolate_);

  v8::Local<v8::Object> data = v8::Object::New(isolate_);
  checkException(tryCatch);
  auto ret = data->Set(currentEngineContextChecked(), 0,
                       v8::External::New(isolate_, const_cast<ClassDefine<T>*>(classDefine)));
  (void)ret;
  checkException(tryCatch);
  ret = data->Set(currentEngineContextChecked(), 1, v8::External::New(isolate_, currentEngine()));
  (void)ret;
  checkException(tryCatch);

  auto funcT = v8::FunctionTemplate::New(
      isolate_,
      [](const v8::FunctionCallbackInfo<v8::Value>& args) {
        auto context = args.GetIsolate()->GetCurrentContext();
        v8::Local<v8::Object> data = args.Data().As<v8::Object>();
        auto classDefine = reinterpret_cast<ClassDefine<T>*>(
            data->Get(context, 0).ToLocalChecked().As<v8::External>()->Value());
        auto engine = reinterpret_cast<V8Engine*>(
            data->Get(context, 1).ToLocalChecked().As<v8::External>()->Value());
        auto& constructor = classDefine->instanceDefine.constructor;

        Tracer trace(engine, classDefine->className.c_str());
        try {
          StackFrameScope stack;
          if (!args.IsConstructCall()) {
            throw Exception(u8"constructor can't be called as function");
          }
          T* ret;
          if (args.Length() == 2 && args[0]->IsSymbol() &&
              args[0]->StrictEquals(engine->constructorMarkSymbol_.Get(args.GetIsolate())) &&
              args[1]->IsExternal()) {
            // this logic is for
            // ScriptClass::ScriptClass(ConstructFromCpp<T>)
            ret = static_cast<T*>(args[1].As<v8::External>()->Value());
          } else {
            // this logic is for
            // ScriptClass::ScriptClass(const Local<Object>& thiz)
            ret = constructor(extractV8Arguments(engine, args));
          }

          if (ret != nullptr) {
            ret->internalState_.classDefine_ = static_cast<void*>(classDefine);

            args.This()->SetAlignedPointerInInternalField(0, ret);
            engine->adjustAssociatedMemory(classDefine->instanceDefine.instanceSize);

            engine->addManagedObject(ret, args.This(), [](void* ptr) {
              auto scriptClass = static_cast<ScriptClass*>(ptr);
              auto engine = scriptClass->internalState_.scriptEngine_;
              engine->adjustAssociatedMemory(-static_cast<int64_t>(
                  static_cast<ClassDefine<T>*>(scriptClass->internalState_.classDefine_)
                      ->instanceDefine.instanceSize));
              delete scriptClass;
            });

          } else {
            throw Exception("can't create class " + classDefine->className);
          }
        } catch (Exception& e) {
          v8_backend::rethrowException(e);
        }
      },
      data);
  funcT->InstanceTemplate()->SetInternalFieldCount(1);
  return funcT;
}

template <typename T>
void V8Engine::registerNativeClassInstance(v8::Local<v8::FunctionTemplate> funcT,
                                           const ClassDefine<T>* classDefine) {
  if (!classDefine->instanceDefine.constructor) return;

  // instance
  auto instanceT = funcT->PrototypeTemplate();
  auto accessSignature = v8::AccessorSignature::New(isolate_, funcT);
  auto signature = v8::Signature::New(isolate_, funcT);
  for (auto& prop : classDefine->instanceDefine.properties) {
    StackFrameScope stack;
    auto name = String::newString(prop.name);

    v8::AccessorGetterCallback getter = nullptr;
    v8::AccessorSetterCallback setter = nullptr;

    if (prop.getter) {
      getter = [](v8::Local<v8::String> property, const v8::PropertyCallbackInfo<v8::Value>& info) {
        auto ptr = static_cast<decltype(&prop)>(info.Data().As<v8::External>()->Value());
        auto thiz = static_cast<T*>(info.This()->GetAlignedPointerFromInternalField(0));
        auto& getter = ptr->getter;

        Tracer trace(static_cast<ScriptClass*>(thiz)->getScriptEngine(), ptr->traceName);

        Local<Value> ret = (getter)(thiz);
        try {
          info.GetReturnValue().Set(toV8(info.GetIsolate(), ret));
        } catch (const Exception& e) {
          v8_backend::rethrowException(e);
        }
      };
    }

    if (prop.setter) {
      setter = [](v8::Local<v8::String> property, v8::Local<v8::Value> value,
                  const v8::PropertyCallbackInfo<void>& info) {
        auto ptr = static_cast<decltype(&prop)>(info.Data().As<v8::External>()->Value());
        auto thiz = static_cast<T*>(info.This()->GetAlignedPointerFromInternalField(0));
        auto& setter = ptr->setter;

        Tracer trace(static_cast<ScriptClass*>(thiz)->getScriptEngine(), ptr->traceName);

        try {
          (setter)(thiz, make<Local<Value>>(value));
        } catch (const Exception& e) {
          v8_backend::rethrowException(e);
        }
      };
    }

    instanceT->SetAccessor(
        toV8(isolate_, name), getter, setter,
        v8::External::New(isolate_,
                          const_cast<typename internal::InstanceDefine<T>::PropertyDefine*>(&prop)),
        v8::AccessControl::DEFAULT, v8::PropertyAttribute::DontDelete, accessSignature);
  }

  for (auto& func : classDefine->instanceDefine.functions) {
    StackFrameScope stack;
    auto name = String::newString(func.name);
    using FuncDefPtr = typename internal::InstanceDefine<T>::FunctionDefine*;
    auto fn = v8::FunctionTemplate::New(
        isolate_,
        [](const v8::FunctionCallbackInfo<v8::Value>& info) {
          auto ptr = static_cast<FuncDefPtr>(info.Data().As<v8::External>()->Value());
          auto thiz = static_cast<T*>(info.This()->GetAlignedPointerFromInternalField(0));
          auto engine = static_cast<ScriptClass*>(thiz)->getScriptEngineAs<V8Engine>();

          Tracer trace(engine, ptr->traceName);
          try {
            auto returnVal = (ptr->callback)(thiz, extractV8Arguments(engine, info));
            info.GetReturnValue().Set(v8_backend::V8Engine::toV8(info.GetIsolate(), returnVal));
          } catch (Exception& e) {
            v8_backend::rethrowException(e);
          }
        },
        v8::External::New(isolate_, const_cast<FuncDefPtr>(&func)), signature);
    if (!fn.IsEmpty()) {
      funcT->PrototypeTemplate()->Set(toV8(isolate_, name), fn, v8::PropertyAttribute::DontDelete);
    } else {
      throw Exception("can't create function for instance");
    }
  }
}

template <typename T>
Local<Object> V8Engine::newNativeClassImpl(const ClassDefine<T>* classDefine, size_t size,
                                           const Local<Value>* args) {
  auto begin = args;
  auto it = nativeRegistry_.find(classDefine);
  if (it == nativeRegistry_.end()) {
    // register on needed
    registerNativeClassImpl(classDefine);
    // try again
    it = nativeRegistry_.find(classDefine);
    if (it == nativeRegistry_.end()) {
      throw Exception("can't create native class");
    }
  }

  auto context = context_.Get(isolate_);
  v8::TryCatch tryCatch(isolate_);
  auto funcT = it->second.Get(isolate_);
  auto function = funcT->GetFunction(context);
  v8_backend::checkException(tryCatch);

  auto ret = toV8ValueArray<v8::MaybeLocal<v8::Object>>(
      isolate_, size, begin, [size, &function, &context](auto* args) {
        return function.ToLocalChecked()->NewInstance(context, static_cast<int>(size), args);
      });
  v8_backend::checkException(tryCatch);
  return Local<Object>(ret.ToLocalChecked());
}

template <typename T>
bool V8Engine::isInstanceOfImpl(const Local<Value>& value, const ClassDefine<T>* classDefine) {
  auto it = nativeRegistry_.find(classDefine);
  if (it != nativeRegistry_.end()) {
    auto funcT = it->second.Get(isolate_);
    return funcT->HasInstance(toV8(isolate_, value));
  }
  return false;
}

template <typename T>
T* V8Engine::getNativeInstanceImpl(const Local<Value>& value, const ClassDefine<T>* classDefine) {
  if (isInstanceOfImpl(value, classDefine)) {
    auto obj = toV8(isolate_, value).As<v8::Object>();
    return static_cast<T*>(obj->GetAlignedPointerFromInternalField(0));
  }
  return nullptr;
}

}  // namespace script::v8_backend