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

#include "../../src/Native.hpp"
#include "PyEngine.h"
#include "PyHelper.hpp"
#include "PyReference.hpp"

namespace script {

Arguments::Arguments(InternalCallbackInfoType callbackInfo) : callbackInfo_(callbackInfo) {}

Arguments::~Arguments() = default;

Local<Object> Arguments::thiz() const { return py_interop::toLocal<Object>(callbackInfo_.self); }

bool Arguments::hasThiz() const { return callbackInfo_.self; }

size_t Arguments::size() const { return PyTuple_Size(callbackInfo_.args); }

Local<Value> Arguments::operator[](size_t i) const {
  if (i >= size()) {
    return Local<Value>();
  } else {
    return py_interop::toLocal<Value>(PyTuple_GetItem(callbackInfo_.args, i));
  }
}

ScriptEngine* Arguments::engine() const { return callbackInfo_.engine; }

ScriptClass::ScriptClass(const Local<Object>& scriptObject) : internalState_() {
  internalState_.scriptEngine_ = py_backend::currentEngineChecked();
  internalState_.weakRef_ = scriptObject;
}

Local<Object> ScriptClass::getScriptObject() const { 
  return internalState_.weakRef_.get(); 
}

Local<Array> ScriptClass::getInternalStore() const {
  Local<Value> weakRef = internalState_.weakRef_.getValue();
  if(weakRef.isNull())
    throw Exception("getInternalStore on empty script object");
  PyObject* ref = py_interop::peekPy(weakRef);

  // create internal storage if not exist
  PyObject* storage = PyObject_GetAttrString(ref, "scriptx_internal_store");    // return new ref
  if(!storage || storage == Py_None || PyList_Check(storage) == 0)
  {
    py_backend::checkAndClearException();
    PyObject *internalList = PyList_New(0);
    py_backend::setAttr(ref, "scriptx_internal_store", internalList);
    Py_DECREF(internalList);
    storage = PyObject_GetAttrString(ref, "scriptx_internal_store");    // return new ref
  }
  return py_interop::toLocal<Array>(storage);
}

ScriptEngine* ScriptClass::getScriptEngine() const { return internalState_.scriptEngine_; }

ScriptClass::~ScriptClass(){};
}  // namespace script