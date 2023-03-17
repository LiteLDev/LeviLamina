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
#include "../../src/Reference.h"
#include "PyHelper.h"
#include <unordered_map>

namespace script {

// pre declare
namespace py_backend {
  class PyEngine;
}
class Arguments;

struct py_interop {
  // @return new reference
  template <typename T>
  static Local<T> toLocal(PyObject* ref) {
    return Local<T>(Py_NewRef(ref));
  }

  // @return borrowed reference
  template <typename T>
  static Local<T> asLocal(PyObject* ref) {
    return Local<T>(ref);
  }

  // @return new reference
  template <typename T>
  static PyObject* getPy(const Local<T>& ref) {
    return Py_NewRef(ref.val_);
  }

  // @return borrowed reference
  template <typename T>
  static PyObject* peekPy(const Local<T>& ref) {
    return ref.val_;
  }

  // @return new reference
  template <typename T>
  static Local<T> dupLocal(const Local<T>& ref) {
    return toLocal<T>(peekPy(ref));
  }

  static Arguments makeArguments(py_backend::PyEngine* engine, PyObject* self, PyObject* args);

  // Python runtime config APIs
  static void setPythonHomePath(const std::wstring &path);
  static std::wstring getPythonHomePath();
  static void setModuleSearchPaths(const std::vector<std::wstring> &paths);
  static void addModuleSearchPath(const std::wstring &path);
  static std::vector<std::wstring> getModuleSearchPaths();
  static std::wstring getPlatformPathSeparator();
};

namespace py_backend {

template <typename T>
class TssStorage {
 private:
  Py_tss_t key;   // = Py_tss_NEEDS_INIT will cause warning in GCC, change to memset 

 public:
  TssStorage() {
    memset(&key, 0, sizeof(key));
    int result = PyThread_tss_create(&key);  // TODO: Output or throw exception if failed
    SCRIPTX_UNUSED(result);
  }
  ~TssStorage() {
    if (isValid()) PyThread_tss_delete(&key);
  }
  int set(T* value) { return isValid() ? PyThread_tss_set(&key, (void*)value) : 1; }
  T* get() { return isValid() ? (T*)PyThread_tss_get(&key) : nullptr; }
  bool isValid() { return PyThread_tss_is_created(&key) != 0; }
};

// @return new reference
PyTypeObject* makeStaticPropertyType();
// @return new reference
PyTypeObject* makeNamespaceType();
// @return new reference
PyTypeObject* makeDefaultMetaclass();
// @return new reference
PyObject *makeWeakRefGcEmptyCallback();

class GlobalOrWeakRefKeeper
{
private:
  // PyEngine* recorded below is just a sign, used for engines to reset all existing Global<> and Weak<> when destroying
  std::unordered_map<GlobalRefState*, PyEngine*> globalRefs;
  std::unordered_map<WeakRefState*, PyEngine*> weakRefs;

public:
  inline void update(GlobalRefState* globalRef, PyEngine* engine) {
    globalRefs[globalRef] = engine;
  }

  inline void update(WeakRefState* weakRef, PyEngine* engine) {
    weakRefs[weakRef] = engine;
  }

  inline bool remove(GlobalRefState* globalRef) {
    return globalRefs.erase(globalRef) > 0;
  }

  inline bool remove(WeakRefState* weakRef) {
    return weakRefs.erase(weakRef) > 0;
  }
  
  void dtor(PyEngine* dtorEngine)
  {
    for(auto &refData : globalRefs)
      if(refData.second == dtorEngine)
        refData.first->dtor(false);
    std::erase_if(globalRefs, 
      [dtorEngine](auto &refData) { return refData.second == dtorEngine; }
    );

    for(auto &refData : weakRefs)
      if(refData.second == dtorEngine)
        refData.first->dtor(false);
    std::erase_if(weakRefs, 
      [dtorEngine](auto &refData) { return refData.second == dtorEngine; }
    );
  }
};

}  // namespace py_backend

}  // namespace script
