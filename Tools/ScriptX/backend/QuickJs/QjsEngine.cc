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

#include "QjsEngine.h"
#include <ScriptX/ScriptX.h>
#include "../../src/utils/Helper.hpp"

namespace script::qjs_backend {

JSClassID QjsEngine::kPointerClassId = 0;
JSClassID QjsEngine::kInstanceClassId = 0;
JSClassID QjsEngine::kFunctionDataClassId = 0;
static std::once_flag kGlobalQjsClass;

constexpr auto kGetByteBufferInfo = R"(
(function (val) {
  // NOTE: KEEP SYNC WITH CPP
  const kUnspecified = 0x1;
  const kInt8 = 0x101;
  const kUint8 = 0x201;
  const kInt16 = 0x302;
  const kUint16 = 0x402;
  const kInt32 = 0x504;
  const kUint32 = 0x604;
  const kInt64 = 0x708;
  const kUint64 = 0x808;
  const KFloat32 = 0x904;
  const kFloat64 = 0xa08;

  let byteBuffer = val;
  let length = val.byteLength;
  let offset = 0;
  let type = kUnspecified;

  if (ArrayBuffer.isView(val)) {
    byteBuffer = val.buffer;
    offset = val.byteOffset;

    if (val instanceof Int8Array) {
      type = kInt8;
    } else if (val instanceof Uint8Array || val instanceof Uint8ClampedArray) {
      type = kUint8;
    } else if (val instanceof Int16Array) {
      type = kInt16;
    } else if (val instanceof Uint16Array) {
      type = kUint16;
    } else if (val instanceof Int16Array) {
      type = kUint16;
    } else if (val instanceof Int32Array) {
      type = kInt32;
    } else if (val instanceof Uint32Array) {
      type = kUint32;
    } else if (val instanceof Float32Array) {
      type = KFloat32;
    } else if (val instanceof Float64Array) {
      type = kFloat64;
    } else if (val instanceof BigInt64Array) {
      type = kInt64;
    } else if (val instanceof BigUint64Array) {
      type = kUint64;
    }
  }

  return [byteBuffer, length, offset, type];
})
)";

QjsEngine::QjsEngine(std::shared_ptr<utils::MessageQueue> queue, const QjsFactory& factory)
    : queue_(queue ? std::move(queue) : std::make_shared<utils::MessageQueue>()) {
  if (factory) {
    std::tie(runtime_, context_) = factory();
  } else {
    runtime_ = JS_NewRuntime();
    if (runtime_) {
      context_ = JS_NewContext(runtime_);
    }
  }

  if (!runtime_ || !context_) {
    throw std::logic_error("QjsEngine: runtime or context is nullptr");
  }

  initEngineResource();

  /* set default loader for ES6 modules */
  JS_SetModuleLoaderFunc(runtime_, NULL, js_module_loader, NULL);  
}

void QjsEngine::initEngineResource() {
  std::call_once(kGlobalQjsClass, []() {
    JS_NewClassID(&kPointerClassId);
    JS_NewClassID(&kInstanceClassId);
    JS_NewClassID(&kFunctionDataClassId);
  });

  JSClassDef pointer{};
  pointer.class_name = "RawPointer";
  JS_NewClass(runtime_, kPointerClassId, &pointer);

  JSClassDef function{};
  function.class_name = "RawFunction";
  function.finalizer = [](JSRuntime* /*rt*/, JSValue val) {
    auto ptr = JS_GetOpaque(val, kFunctionDataClassId);
    if (ptr) {
      delete static_cast<FunctionCallback*>(ptr);
    }
  };
  JS_NewClass(runtime_, kFunctionDataClassId, &function);

  JSClassDef instance{};
  instance.class_name = "ScriptXInstance";
  instance.finalizer = [](JSRuntime* /*rt*/, JSValue val) {
    auto ptr = JS_GetOpaque(val, kInstanceClassId);
    if (ptr) {
      auto opaque = static_cast<InstanceClassOpaque*>(ptr);
      // reset the weak reference
      PauseGc pauseGc(opaque->scriptClassPointer->internalState_.engine);
      opaque->scriptClassPointer->internalState_.weakRef_ = JS_UNDEFINED;
      delete opaque->scriptClassPointer;
      delete opaque;
    }
  };
  JS_NewClass(runtime_, kInstanceClassId, &instance);

  lengthAtom_ = JS_NewAtom(context_, "length");

  {
    EngineScope scope(this);
    {
      auto ret = eval("(function(a, b) {return a === b;})");
      helperFunctionStrictEqual_ = qjs_interop::getLocal(ret);
    }

    {
      auto ret = eval(
          "(function(b) { return b instanceof ArrayBuffer || b instanceof SharedArrayBuffer || "
          "ArrayBuffer.isView(b);})");
      helperFunctionIsByteBuffer_ = qjs_interop::getLocal(ret);
    }

    {
      auto ret = eval(kGetByteBufferInfo);
      helperFunctionGetByteBufferInfo_ = qjs_interop::getLocal(ret);
    }

    {
      // TODO(landerl): can we create symbol through C-API? Not yet.
      auto ret = eval("(Symbol('ScriptX.InternalStore'))");
      auto atom = JS_ValueToAtom(context_, qjs_interop::peekLocal(ret));
      assert(atom != JS_ATOM_NULL);
      helperSymbolInternalStore_ = atom;
    }
  }
}

QjsEngine::~QjsEngine() = default;

void QjsEngine::destroy() noexcept {
  isDestroying_ = true;
  ScriptEngine::destroyUserData();

  queue_->removeMessageByTag(static_cast<ScriptEngine*>(this));
  globalWeakBookkeeping_.clear();

  JS_FreeAtom(context_, lengthAtom_);
  JS_FreeValue(context_, helperFunctionStrictEqual_);
  JS_FreeValue(context_, helperFunctionIsByteBuffer_);
  JS_FreeValue(context_, helperFunctionGetByteBufferInfo_);
  JS_FreeAtom(context_, helperSymbolInternalStore_);

  for (auto&& [key, v] : nativeInstanceRegistry_) {
    JS_FreeValue(context_, v.first);
    JS_FreeValue(context_, v.second);
  }
  nativeInstanceRegistry_.clear();

  JS_RunGC(runtime_);
  JS_FreeContext(context_);
  JS_FreeRuntime(runtime_);

  delete this;
}

void QjsEngine::scheduleTick() {
  bool no = false;
  if (tickScheduled_.compare_exchange_strong(no, true)) {
    utils::Message tick(
        [](auto& m) {
          auto eng = static_cast<QjsEngine*>(m.ptr0);
          JSContext* ctx = nullptr;
          EngineScope scope(eng);
          while (JS_ExecutePendingJob(eng->runtime_, &ctx) > 0) {
          }
          eng->tickScheduled_ = false;
        },
        [](auto& m) {

        });
    tick.ptr0 = this;
    tick.tag = this;
    queue_->postMessage(tick);
  }
}

void QjsEngine::extendLifeTimeToNextLoop(JSValue value) {
  // schedule -> JS_Free(ref)
  class ExtendLifeTime {
    JSValue ref;
    qjs_backend::QjsEngine* engine;

   public:
    explicit ExtendLifeTime(JSValue val, qjs_backend::QjsEngine* engine)
        : ref(val), engine(engine) {}
    ~ExtendLifeTime() { JS_FreeValue(engine->context_, ref); }
  };

  auto mq = messageQueue();
  auto msg = mq->obtainInplaceMessage([](utils::InplaceMessage& msg) {});
  msg->template inplaceObject<ExtendLifeTime>(value, this);
  msg->tag = this;

  mq->postMessage(msg);
}

Local<Value> QjsEngine::get(const Local<String>& key) { return getGlobal().get(key); }

void QjsEngine::set(const Local<String>& key, const Local<Value>& value) {
  getGlobal().set(key, value);
}

Local<Object> QjsEngine::getGlobal() const {
  auto global = JS_GetGlobalObject(context_);
  qjs_backend::checkException(global);
  return qjs_interop::makeLocal<Object>(global);
}

Local<Value> QjsEngine::eval(const Local<String>& script) { return eval(script, Local<Value>()); }

Local<Value> QjsEngine::eval(const Local<String>& script, const Local<String>& sourceFile) {
  return eval(script, sourceFile.asValue());
}

Local<Value> QjsEngine::eval(const Local<String>& script, const Local<Value>& sourceFile) {
  Tracer trace(this, "QjsEngine::eval");
  JSValue ret = JS_UNDEFINED;
  StringHolder sh(script);

  if (sourceFile.isString()) {
    StringHolder source(sourceFile.asString());
    ret = JS_Eval(context_, sh.c_str(), sh.length(), source.c_str(), JS_EVAL_TYPE_GLOBAL);
  } else {
    ret = JS_Eval(context_, sh.c_str(), sh.length(), "<unknown>", JS_EVAL_TYPE_GLOBAL);
  }
  qjs_backend::checkException(ret);

  scheduleTick();

  return Local<Value>(ret);
}

Local<Value> QjsEngine::loadFile(const Local<String>& scriptFile) {
  Tracer trace(this, "QjsEngine::loadFile");
  if(scriptFile.toString().empty())
    throw Exception("script file no found");
  Local<Value> content = internal::readAllFileContent(scriptFile);
  if(content.isNull())
    throw Exception("can't load script file");

  std::string sourceFilePath = scriptFile.toString();
  std::size_t pathSymbol = sourceFilePath.rfind("/");
  if(pathSymbol != std::string::npos)
    sourceFilePath = sourceFilePath.substr(pathSymbol + 1);
  else
  {
    pathSymbol = sourceFilePath.rfind("\\");
    if(pathSymbol != std::string::npos)
      sourceFilePath = sourceFilePath.substr(pathSymbol + 1);
  }
  Local<String> sourceFileName = String::newString(sourceFilePath);

  StringHolder contentStr(content.asString());
  StringHolder fileNameStr(sourceFileName);
  JSValue ret = JS_Eval(context_, contentStr.c_str(), contentStr.length(), fileNameStr.c_str(),
      JS_EVAL_TYPE_MODULE);
    
  qjs_backend::checkException(ret);
  scheduleTick();

  return Local<Value>(ret);
}

std::shared_ptr<utils::MessageQueue> QjsEngine::messageQueue() { return queue_; }

void QjsEngine::gc() {
  EngineScope scope(this);
  if (isDestroying() || pauseGcCount_ != 0) return;
  JS_RunGC(runtime_);
}

size_t QjsEngine::getHeapSize() {
  EngineScope scope(this);
  JSMemoryUsage usage{};
  JS_ComputeMemoryUsage(runtime_, &usage);
  return usage.memory_used_size;
}

void QjsEngine::adjustAssociatedMemory(int64_t count) {}

ScriptLanguage QjsEngine::getLanguageType() { return ScriptLanguage::kJavaScript; }

std::string QjsEngine::getEngineVersion() { return "QuickJS"; }

bool QjsEngine::isDestroying() const { return isDestroying_; }

void QjsEngine::registerNativeStatic(const Local<Object>& module,
                                     const internal::StaticDefine& def) {
  for (auto&& f : def.functions) {
    using FuncDef = ::script::internal::StaticDefine::FunctionDefine;

    auto fun = newRawFunction(this, const_cast<FuncDef*>(&f), nullptr,
                              [](const Arguments& args, void* data1, void*, bool) {
                                auto f = static_cast<FuncDef*>(data1);
                                Tracer trace(args.engine(), f->traceName);
                                return (f->callback)(args);
                              });
    module.set(f.name, fun);
  }

  for (auto&& prop : def.properties) {
    using PropDef = ::script::internal::StaticDefine::PropertyDefine;

    Local<Value> getterFun;
    Local<Value> setterFun;
    if (prop.getter) {
      getterFun = newRawFunction(this, const_cast<PropDef*>(&prop), nullptr,
                                 [](const Arguments& args, void* data, void*, bool) {
                                   auto p = static_cast<PropDef*>(data);
                                   Tracer trace(args.engine(), p->traceName);
                                   return (p->getter)();
                                 })
                      .asValue();
    }

    if (prop.setter) {
      setterFun = newRawFunction(this, const_cast<PropDef*>(&prop), nullptr,
                                 [](const Arguments& args, void* data, void*, bool) {
                                   auto p = static_cast<PropDef*>(data);
                                   Tracer trace(args.engine(), p->traceName);
                                   (p->setter)(args[0]);
                                   return Local<Value>();
                                 });
    }

    auto atom = JS_NewAtomLen(context_, prop.name.c_str(), prop.name.length());

    auto ret = JS_DefinePropertyGetSet(context_, qjs_interop::peekLocal(module), atom,
                                       qjs_interop::getLocal(getterFun),
                                       qjs_interop::getLocal(setterFun), JS_PROP_C_W_E);
    JS_FreeAtom(context_, atom);
    qjs_backend::checkException(ret);
  }
}

}  // namespace script::qjs_backend
