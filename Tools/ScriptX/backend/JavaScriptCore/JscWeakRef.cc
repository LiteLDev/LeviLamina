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

#include "JscWeakRef.h"
#include "JscEngine.h"
#include "JscHelper.h"

// WeakRef implementation using JSC private C APIs for non macOS nor iOS (apple platform),
// where Objective-C is not available.
//
// We are trying to use minimal private api as possible in order to be abi compatible, we chose the
// JSWeakPrivate.h pure C-API.

// As a consequence, we can't store weak string reference, only weak object reference available.

/////////////////////////////// JavaScriptCore private header ///////////////////////////////

// https://opensource.apple.com/source/JavaScriptCore/JavaScriptCore-7608.5.11/API/JSWeakPrivate.h.auto.html

/*
 * Copyright (C) 2017 Apple Inc.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <JavaScriptCore/JSObjectRef.h>

#ifdef __cplusplus
extern "C" {
#endif

// NOLINTNEXTLINE (modernize-use-using)
typedef const struct OpaqueJSWeak* JSWeakRef;

JS_EXPORT JSWeakRef JSWeakCreate(JSContextGroupRef, JSObjectRef);

JS_EXPORT void JSWeakRetain(JSContextGroupRef, JSWeakRef);
JS_EXPORT void JSWeakRelease(JSContextGroupRef, JSWeakRef);

JS_EXPORT JSObjectRef JSWeakGetObject(JSWeakRef);

#ifdef __cplusplus
}
#endif

/////////////////////////////////////////////////////////////////////////////////////////////

namespace script::jsc_backend {
JscWeakRef::JscWeakRef() = default;

JscWeakRef::JscWeakRef(JSValueRef value) {
  if (value) {
    auto context = jsc_backend::currentEngineContextChecked();
    if (JSValueIsObject(context, value)) {
      JSValueRef exception = nullptr;
      managedValue_ = const_cast<void*>(
          static_cast<const void*>(JSWeakCreate(jsc_backend::currentEngineContextGroupChecked(),
                                                JSValueToObject(context, value, &exception))));
      if (exception) {
        jsc_backend::JscEngine::checkException(exception);
      }

    } else {
      // non object value (string, boolean, number) are not weak...
      nonObject_ = value;
      JSValueProtect(jsc_backend::currentEngineContextChecked(), value);
    }
  }
}

JscWeakRef::JscWeakRef(const script::jsc_backend::JscWeakRef& copy)
    : managedValue_(copy.managedValue_), nonObject_(copy.nonObject_) {
  if (managedValue_) {
    JSWeakRetain(jsc_backend::currentEngineContextGroupChecked(),
                 static_cast<JSWeakRef>(managedValue_));
  } else if (nonObject_) {
    JSValueProtect(jsc_backend::currentEngineContextChecked(), nonObject_);
  }
}

void JscWeakRef::reset(JscEngine* engine) {
  if (isEmpty()) {
    return;
  }
  if (engine == nullptr) {
    engine = jsc_backend::currentEngine();
  }
  assert(engine);
  if (engine->isDestroying()) {
    // don't do anything on destroying engine, (it crashes)
    managedValue_ = nullptr;
    nonObject_ = nullptr;
    return;
  }

  std::lock_guard lock(*engine->virtualMachineLock_);
  if (managedValue_) {
    JSWeakRelease(engine->virtualMachine_, static_cast<JSWeakRef>(managedValue_));
    managedValue_ = nullptr;
  } else if (nonObject_) {
    JSValueUnprotect(engine->context_, nonObject_);
    nonObject_ = nullptr;
  }
}

JSValueRef JscWeakRef::get() const {
  if (managedValue_) {
    return JSWeakGetObject(static_cast<JSWeakRef>(managedValue_));
  } else if (nonObject_) {
    return nonObject_;
  }
  return nullptr;
}

class JscWeakRef& JscWeakRef::operator=(const class JscWeakRef& copy) {
  JscWeakRef(copy).swap(*this);
  return *this;
}

JscWeakRef::JscWeakRef(script::jsc_backend::JscWeakRef&& move) noexcept
    : managedValue_(move.managedValue_), nonObject_(move.nonObject_) {
  move.managedValue_ = nullptr;
  move.nonObject_ = nullptr;
}

class JscWeakRef& JscWeakRef::operator=(class JscWeakRef&& move) noexcept {
  JscWeakRef(std::move(move)).swap(*this);
  return *this;
}

void JscWeakRef::swap(JscWeakRef& rhs) noexcept {
  std::swap(managedValue_, rhs.managedValue_);
  std::swap(nonObject_, rhs.nonObject_);
}

JscWeakRef::~JscWeakRef() { reset(nullptr); }

bool JscWeakRef::isEmpty() const { return managedValue_ == nullptr && nonObject_ == nullptr; }

}  // namespace script::jsc_backend
