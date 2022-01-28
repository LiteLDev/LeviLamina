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

#include "V8Engine.h"
#include <ScriptX/ScriptX.h>
#include <cassert>
#include <memory>

namespace script::v8_backend {

// create a master engine (opposite to slave engine)
V8Engine::V8Engine(std::shared_ptr<utils::MessageQueue> mq) : V8Engine(std::move(mq), nullptr) {}

V8Engine::V8Engine(std::shared_ptr<utils::MessageQueue> mq,
                   const std::function<v8::Isolate*()>& isolateFactory)
    : v8Platform_(V8Platform::getPlatform()),
      messageQueue_(mq ? std::move(mq) : std::make_shared<utils::MessageQueue>()) {
  // init v8
  v8::V8::Initialize();

  // create isolation
  if (isolateFactory) {
    isolate_ = isolateFactory();
  } else {
    v8::Isolate::CreateParams createParams;
    allocator_.reset(v8::ArrayBuffer::Allocator::NewDefaultAllocator());
    createParams.array_buffer_allocator = allocator_.get();
    isolate_ = v8::Isolate::New(createParams);
  }
  v8Platform_->addEngineInstance(isolate_, this);

  isolate_->SetCaptureStackTraceForUncaughtExceptions(true);

  initContext();
}

V8Engine::V8Engine(std::shared_ptr<utils::MessageQueue> messageQueue, v8::Isolate* isolate,
                   v8::Local<v8::Context> context, bool addGlobalEngineScope)
    : isOwnIsolate_(false),
      v8Platform_(),
      messageQueue_(messageQueue ? std::move(messageQueue)
                                 : std::make_shared<utils::MessageQueue>()),
      isolate_(isolate) {
  context_ = v8::Global<v8::Context>(isolate, context);
  initContext();

  auto currentScope = EngineScope::getCurrent();
  if (currentScope) {
    throw std::logic_error("create V8Engine with an existing EngineScope");
  }
  if (addGlobalEngineScope) {
    threadGlobalScope_ = std::make_unique<ThreadGlobalScope>(this);
  }
}

void V8Engine::initContext() {
  v8::Locker locker(isolate_);
  v8::Isolate::Scope is(isolate_);
  v8::HandleScope handle_scope(isolate_);
  if (context_.IsEmpty()) {
    auto context = v8::Context::New(isolate_);
    context_ = v8::Global<v8::Context>(isolate_, context);
  }
  internalStoreSymbol_ = v8::Global<v8::Symbol>(isolate_, v8::Symbol::New(isolate_));
  constructorMarkSymbol_ = v8::Global<v8::Symbol>(isolate_, v8::Symbol::New(isolate_));
}

V8Engine::~V8Engine() = default;

// NOLINTNEXTLINE(bugprone-exception-escape)
void V8Engine::destroy() noexcept {
  ScriptEngine::destroyUserData();
  {
    EngineScope scope(this);
    isDestroying_ = true;

    // Isolate::Dispose don't do gc.
    // (For performance reason, it just tear down the heap).
    // we must manually release native object explicitly
    for (auto& it : managedObject_) {
      // reset weak first
      it.second.Reset();
      // do destruct
      auto data = it.first;
      data->cleanupFunc(data->data);
      delete data;
    }
    managedObject_.clear();
    keptObject_.clear();

    nativeRegistry_.clear();
    globalWeakBookkeeping_.clear();

    internalStoreSymbol_.Reset();
    constructorMarkSymbol_.Reset();
    context_.Reset();
  }
  messageQueue_->removeMessageByTag(this);
  messageQueue_.reset();

  if (isOwnIsolate_) {
    isolate_->Dispose();
    v8Platform_->removeEngineInstance(isolate_);
  }
  delete this;
}

bool V8Engine::isDestroying() const { return isDestroying_; }

// create a slave engine from master
V8Engine::V8Engine(V8Engine* masterEngine)
    : isOwnIsolate_(false),
      messageQueue_(masterEngine->messageQueue()),
      isolate_(masterEngine->isolate_) {
  initContext();
}

UniqueEnginePtr V8Engine::newSlaveEngine() { return UniqueEnginePtr(new V8Engine(this)); }

std::shared_ptr<script::utils::MessageQueue> V8Engine::messageQueue() { return messageQueue_; }

ScriptLanguage V8Engine::getLanguageType() { return ScriptLanguage::kJavaScript; }

std::string V8Engine::getEngineVersion() { return std::string("V8 ") + v8::V8::GetVersion(); }

Local<Object> V8Engine::getGlobal() {
  return Local<Value>(context_.Get(isolate_)->Global()).asObject();
}

Local<Value> V8Engine::get(const script::Local<script::String>& key) {
  return getGlobal().get(key);
}

void V8Engine::set(const script::Local<script::String>& key,
                   const script::Local<script::Value>& value) {
  getGlobal().set(key, value);
}

Local<Value> V8Engine::eval(const Local<String>& script, const Local<Value>& sourceFile) {
  Tracer trace(this, "V8Engine::eval");
  v8::TryCatch tryCatch(isolate_);
  auto context = context_.Get(isolate_);
  v8::Local<v8::String> scriptString = toV8(isolate_, script);
  if (scriptString.IsEmpty() || scriptString->IsNullOrUndefined()) {
    throw Exception("can't eval script");
  }
  v8::ScriptOrigin origin(sourceFile.isNull() || !sourceFile.isString()
                              ? v8::Local<v8::String>()
                              : toV8(isolate_, sourceFile.asString()));
  v8::MaybeLocal<v8::Script> maybeScript = v8::Script::Compile(context, scriptString, &origin);
  v8_backend::checkException(tryCatch);
  auto maybeResult = maybeScript.ToLocalChecked()->Run(context);
  v8_backend::checkException(tryCatch);
  return make<Local<Value>>(maybeResult.ToLocalChecked());
}

Local<Value> V8Engine::eval(const Local<String>& script, const Local<String>& sourceFile) {
  return eval(script, sourceFile.asValue());
}

Local<Value> V8Engine::eval(const Local<String>& script) { return eval(script, {}); }

void V8Engine::registerNativeClassStatic(v8::Local<v8::FunctionTemplate> funcT,
                                         const internal::StaticDefine* staticDefine) {
  for (auto& prop : staticDefine->properties) {
    StackFrameScope stack;
    auto name = String::newString(prop.name);

    v8::AccessorGetterCallback getter = nullptr;
    v8::AccessorSetterCallback setter = nullptr;

    if (prop.getter) {
      getter = [](v8::Local<v8::String> /*property*/,
                  const v8::PropertyCallbackInfo<v8::Value>& info) {
        auto ptr = static_cast<internal::StaticDefine::PropertyDefine*>(
            info.Data().As<v8::External>()->Value());
        Tracer trace(EngineScope::currentEngine(), ptr->traceName);
        Local<Value> ret = ptr->getter();
        try {
          info.GetReturnValue().Set(toV8(info.GetIsolate(), ret));
        } catch (const Exception& e) {
          v8_backend::rethrowException(e);
        }
      };
    }

    if (prop.setter) {
      setter = [](v8::Local<v8::String> /*property*/, v8::Local<v8::Value> value,
                  const v8::PropertyCallbackInfo<void>& info) {
        auto ptr = static_cast<internal::StaticDefine::PropertyDefine*>(
            info.Data().As<v8::External>()->Value());
        Tracer trace(EngineScope::currentEngine(), ptr->traceName);
        try {
          ptr->setter(make<Local<Value>>(value));
        } catch (const Exception& e) {
          v8_backend::rethrowException(e);
        }
      };
    } else {
      // v8 requires setter to be present, otherwise, a real js set code with create a new
      // property...
      setter = [](v8::Local<v8::String> property, v8::Local<v8::Value> value,
                  const v8::PropertyCallbackInfo<void>& info) {};
    }

    funcT->SetNativeDataProperty(
        toV8(isolate_, name), getter, setter,
        v8::External::New(isolate_, const_cast<internal::StaticDefine::PropertyDefine*>(&prop)),
        v8::PropertyAttribute::DontDelete);
  }

  for (auto& func : staticDefine->functions) {
    StackFrameScope stack;
    auto name = String::newString(func.name);

    auto fn = v8::FunctionTemplate::New(
        isolate_,
        [](const v8::FunctionCallbackInfo<v8::Value>& info) {
          auto funcDef = reinterpret_cast<internal::StaticDefine::FunctionDefine*>(
              info.Data().As<v8::External>()->Value());
          auto engine = v8_backend::currentEngine();
          Tracer trace(engine, funcDef->traceName);

          try {
            auto returnVal = (funcDef->callback)(extractV8Arguments(engine, info));
            info.GetReturnValue().Set(v8_backend::V8Engine::toV8(info.GetIsolate(), returnVal));
          } catch (Exception& e) {
            v8_backend::rethrowException(e);
          }
        },
        v8::External::New(isolate_, const_cast<internal::StaticDefine::FunctionDefine*>(&func)), {},
        0, v8::ConstructorBehavior::kThrow);
    if (!fn.IsEmpty()) {
      funcT->Set(toV8(isolate_, name), fn, v8::PropertyAttribute::DontDelete);
    } else {
      throw Exception("can't create function for static");
    }
  }
}

void V8Engine::gc() {
  if (isDestroying()) return;
  EngineScope engineScope(this);
  isolate_->LowMemoryNotification();
}

size_t V8Engine::getHeapSize() {
  EngineScope engineScope(this);
  v8::HeapStatistics heapStatistics;
  isolate_->GetHeapStatistics(&heapStatistics);
  return heapStatistics.used_heap_size() + heapStatistics.malloced_memory() +
         heapStatistics.external_memory();
}

void V8Engine::adjustAssociatedMemory(int64_t count) {
  if (isDestroying()) return;
  EngineScope engineScope(this);
  isolate_->AdjustAmountOfExternalAllocatedMemory(count);
}

void V8Engine::addManagedObject(void* nativeObj, v8::Local<v8::Value> obj,
                                std::function<void(void*)>&& proc) {
  auto data = std::make_unique<ManagedObject>();
  data->engine = this;
  data->data = nativeObj;
  data->cleanupFunc = std::move(proc);
  v8::Global<v8::Value> weak(isolate_, obj);

  weak.SetWeak(
      static_cast<void*>(data.get()),
      [](const v8::WeakCallbackInfo<void>& info) {
        auto param = static_cast<ManagedObject*>(info.GetParameter());
        auto engine = param->engine;
        {
          v8::Locker lk(engine->isolate_);
          auto it = engine->managedObject_.find(param);
          assert(it != engine->managedObject_.end());
          engine->managedObject_.erase(it);

          info.SetSecondPassCallback([](const v8::WeakCallbackInfo<void>& data) {
            auto param = static_cast<ManagedObject*>(data.GetParameter());
            auto engine = param->engine;
            v8::Locker lk(engine->isolate_);

            param->cleanupFunc(param->data);
            delete param;
          });
        }
      },
      v8::WeakCallbackType::kParameter);

  managedObject_.emplace(data.release(), std::move(weak));
}

size_t V8Engine::keepReference(const Local<Value>& ref) {
  auto id = keptObjectId_++;
  keptObject_.emplace(id, v8::Global<v8::Value>{isolate_, toV8(isolate_, ref)});
  return id;
}

void V8Engine::removeKeptReference(size_t id) {
  EngineScope scope(this);
  keptObject_.erase(id);
}

}  // namespace script::v8_backend
