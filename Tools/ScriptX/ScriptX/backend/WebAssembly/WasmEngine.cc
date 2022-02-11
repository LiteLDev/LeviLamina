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

#include "WasmEngine.h"

#include "../../src/Native.hpp"
#include "../../src/Reference.h"
#include "../../src/Utils.h"
#include "WasmNative.hpp"
#include "WasmReference.hpp"
#include "WasmScope.hpp"

namespace script::wasm_backend {

std::thread::id WasmEngine::engineThreadId_{};

WasmEngine::WasmEngine() { engineThreadId_ = std::this_thread::get_id(); }

WasmEngine* WasmEngine::instance() {
  static WasmEngine engine;
  return &engine;
}

WasmEngine::~WasmEngine() = default;

void WasmEngine::ignoreDestroyCall() { instance()->ignoreDestroyCall_ = true; }

void WasmEngine::destroy() {
  if (!ignoreDestroyCall_) {
    throw Exception(
        "WasmEngine is a Singleton, thus can't be destroyed. "
        "To suppress this exception, please opt-in with WasmEngine::ignoreDestroyCall()");
  }
}

bool WasmEngine::isDestroying() const { return false; }

void WasmEngine::unitTestResetRetistry() {
  classDefineRegistry_.clear();
  ScriptEngine::classDefineRegistry_.clear();
}

void WasmEngine::doDeleteScriptClass(ScriptClass* scriptClass) { delete scriptClass; }

Local<Object> WasmEngine::getGlobal() const { return Local<Object>(Stack::getGlobal()); }

Local<Value> WasmEngine::get(const Local<String>& key) {
  return Local<Value>(Stack::globalGet(key.val_));
}

void WasmEngine::set(const Local<String>& key, const Local<Value>& value) {
  Stack::globalSet(key.val_, value.val_);
}

Local<Value> WasmEngine::eval(const Local<String>& script) { return eval(script, Local<Value>()); }

Local<Value> WasmEngine::eval(const Local<String>& script, const Local<String>& sourceFile) {
  return eval(script, sourceFile.asValue());
}

Local<Value> WasmEngine::eval(const Local<String>& script, const Local<Value>& sourceFile) {
  Tracer trace(this, "WasmEngine::eval");
  auto retIndex = evaluateJavaScriptCode(script.val_, sourceFile.val_);
  return Local<Value>(retIndex);
}

std::shared_ptr<utils::MessageQueue> WasmEngine::messageQueue() { return messageQueue_; }

void WasmEngine::gc() {}

void WasmEngine::adjustAssociatedMemory(int64_t count) {}

ScriptLanguage WasmEngine::getLanguageType() { return ScriptLanguage::kJavaScript; }

std::string WasmEngine::getEngineVersion() { return "WebAssemble"; }

void WasmEngine::defineStatic(const Local<Object>& obj, const internal::StaticDefine& define) {
  for (auto&& func : define.functions) {
    StackFrameScope stackFrame;
    auto fi = Stack::newFunction(
        [](const Arguments& args, void* data, void*) -> Local<Value> {
          auto fun = static_cast<internal::StaticDefine::FunctionDefine*>(data);
          Tracer trace(args.engineAs<WasmEngine>(), fun->traceName);
          return fun->callback(args);
        },
        &func);
    obj.set(func.name, Local<Value>(fi));
  }

  for (auto&& prop : define.properties) {
    StackFrameScope stackFrame;

    int getter = -1;
    int setter = -1;
    auto name = String::newString(prop.name);

    if (prop.getter) {
      getter = Stack::newFunction(
          [](const Arguments& args, void* data, void*) -> Local<Value> {
            auto pro = static_cast<internal::StaticDefine::PropertyDefine*>(data);
            Tracer trace(args.engine(), pro->traceName);
            return pro->getter();
          },
          &prop);
    }

    if (prop.setter) {
      setter = Stack::newFunction(
          [](const Arguments& args, void* data, void*) -> Local<Value> {
            auto pro = static_cast<internal::StaticDefine::PropertyDefine*>(data);
            Tracer trace(args.engine(), pro->traceName);
            pro->setter(args[0]);
            return {};
          },
          &prop);
    }
    NativeHelper::defineProperty(obj.val_, name.val_, getter, setter);
  }
}

void* WasmEngine::verifyAndGetInstance(const void* classDefine, int thiz) {
  auto ins = NativeHelper::getInternalStateInstance(thiz);
  auto define = NativeHelper::getInternalStateClassDefine(thiz);
  if (ins == nullptr || define != classDefine) {
    throw Exception("call Instance Function on wrong instance");
  }
  return ins;
}

Local<Object> WasmEngine::getNamespaceForRegister(const std::string_view& nameSpace) {
  StackFrameScope scope;
  auto ret = NativeHelper::getNamespaceForRegister(String::newString(nameSpace).val_);
  if (ret == -1) {
    throw Exception("can't get namespace for:" + std::string(nameSpace));
  }
  return scope.returnValue(Local<Value>(ret).asObject());
}

}  // namespace script::wasm_backend
