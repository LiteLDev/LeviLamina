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

// WeakRef implementation using JSC public Objectivc-C APIs for macOS or iOS

#include "JscWeakRef.h"
#include <JavaScriptCore/JavaScriptCore.h>
#include <mutex>
#include "JscEngine.h"
#include "JscHelper.h"

#if __has_feature(objc_arc)
#error ARC is on, this class is implemented as-if ARC is off.
#endif

namespace script::jsc_backend {

JscWeakRef::JscWeakRef() = default;

JscWeakRef::JscWeakRef(JSValueRef value) {
  if (value) {
    @autoreleasepool {
      auto ocContext =
          [JSContext contextWithJSGlobalContextRef:jsc_backend::currentEngineContextChecked()];
      auto ocValue = [JSValue valueWithJSValueRef:value inContext:ocContext];
      auto weak = [JSManagedValue managedValueWithValue:ocValue];
      [weak retain];
      managedValue_ = weak;
    }
    // not used in ObjC impl
    nonObject_ = nullptr;
  }
}

JscWeakRef::JscWeakRef(const script::jsc_backend::JscWeakRef& copy)
    : managedValue_(copy.managedValue_) {
  if (managedValue_) {
    [static_cast<JSManagedValue*>(managedValue_) retain];
  }
}

class JscWeakRef& JscWeakRef::operator=(const class JscWeakRef& copy) {
  JscWeakRef(copy).swap(*this);
  return *this;
}

JscWeakRef::JscWeakRef(script::jsc_backend::JscWeakRef&& move) noexcept
    : managedValue_(move.managedValue_) {
  move.managedValue_ = nullptr;
}

class JscWeakRef& JscWeakRef::operator=(class JscWeakRef&& move) noexcept {
  JscWeakRef(std::move(move)).swap(*this);
  return *this;
}

void JscWeakRef::swap(JscWeakRef& rhs) noexcept { std::swap(managedValue_, rhs.managedValue_); }

void JscWeakRef::reset(JscEngine* engine) {
  // notice: use `managedValue_` out of lock maybe not thread safe.
  if (managedValue_) {
    if (engine == nullptr) {
      engine = jsc_backend::currentEngine();
    }
    assert(engine);
    std::lock_guard lock(*engine->virtualMachineLock_);
    @autoreleasepool {
      [static_cast<JSManagedValue*>(managedValue_) release];
      managedValue_ = nullptr;
    }
  }
}

JscWeakRef::~JscWeakRef() { reset(nullptr); }

JSValueRef JscWeakRef::get() const {
  if (managedValue_) {
    @autoreleasepool {
      return [[static_cast<JSManagedValue*>(managedValue_) value] JSValueRef];
    }
  }
  return nullptr;
}

bool JscWeakRef::isEmpty() const { return managedValue_ == nullptr; }

}  // namespace script::jsc_backend
