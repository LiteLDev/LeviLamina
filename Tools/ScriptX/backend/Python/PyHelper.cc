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

#include "PyHelper.hpp"
#include "PyEngine.h"
#include "PyRuntimeSettings.h"

namespace script {
  
  Arguments py_interop::makeArguments(py_backend::PyEngine* engine, PyObject* self, PyObject* args) {
    return Arguments(py_backend::ArgumentsData{engine, self, args});
  }

  bool py_interop::clearLastException() {
    return py_backend::checkAndClearException();
  }
  bool py_interop::hasException() {
    return PyErr_Occurred();
  }
  script::Exception py_interop::getAndClearLastException() {
    PyObject* exceptionObj = py_backend::checkAndGetException();
    if(Py_IsNone(exceptionObj))
    {
      Py_XDECREF(exceptionObj);
      throw std::runtime_error("There is no Python exception currently");
    }
    else
      return Exception(py_interop::asLocal<Value>(exceptionObj));
  }

  void py_interop::setPythonHomePath(const std::wstring &path) {
    return script::py_backend::py_runtime_settings::setPythonHomePath(path);
  }

  std::wstring py_interop::getPythonHomePath() {
    return script::py_backend::py_runtime_settings::getPythonHomePath();
  }

  void py_interop::setModuleSearchPaths(const std::vector<std::wstring> &paths) {
    return script::py_backend::py_runtime_settings::setModuleSearchPaths(paths);
  }

  void py_interop::addModuleSearchPath(const std::wstring &path) {
    return script::py_backend::py_runtime_settings::addModuleSearchPath(path);
  }

  std::vector<std::wstring> py_interop::getModuleSearchPaths() {
    return script::py_backend::py_runtime_settings::getModuleSearchPaths();
  }

  std::wstring py_interop::getPlatformPathSeparator() {
    return script::py_backend::py_runtime_settings::getPlatformPathSeparator();
  }
  
namespace py_backend {

SCRIPTX_BEGIN_IGNORE_DEPRECARED

// static vars impl
std::mutex EngineLockerHelper::engineSwitchSharedLocker;
int EngineLockerHelper::allPyEnginesEnterCount = 0;

EngineLockerHelper::EngineLockerHelper(PyEngine* currentEngine)
  :engine(currentEngine)
{}

EngineLockerHelper::~EngineLockerHelper() {
  // Nothing to do here. All cleanup is done in start/endDestroyEngine.
}

void EngineLockerHelper::waitToEnterEngine() {
  engineLocker.lock();
  engineSwitchSharedLocker.lock();

  if(engine->isDestroying())
    return;

  if (EngineLockerHelper::allPyEnginesEnterCount == 0) {
    // The first EngineScope entered. Lock GIL
    PyEval_AcquireLock();
  }
  ++EngineLockerHelper::allPyEnginesEnterCount;
}

void EngineLockerHelper::finishEngineSwitch() {
  engineSwitchSharedLocker.unlock();
}

void EngineLockerHelper::waitToExitEngine() {
  engineSwitchSharedLocker.lock();
}

void EngineLockerHelper::finishExitEngine() {
  if(engine->isDestroying())
  {
    engineSwitchSharedLocker.unlock();
    engineLocker.unlock();
    return;
  }

  --EngineLockerHelper::allPyEnginesEnterCount;
  if (EngineLockerHelper::allPyEnginesEnterCount == 0) {
    // The last EngineScope exited. Unlock GIL
    PyEval_ReleaseLock();
  }
  engineSwitchSharedLocker.unlock();
  engineLocker.unlock();
}

void EngineLockerHelper::startDestroyEngine() {
  engineLocker.lock();
  engineSwitchSharedLocker.lock();

  if (EngineLockerHelper::allPyEnginesEnterCount == 0) {
    // GIL is not locked. Just lock it
    PyEval_AcquireLock();
  }
}

void EngineLockerHelper::endDestroyEngine() {
  // Even if all engine is destroyed, there will be main interpreter thread state loaded.
  // So ReleaseLock will not cause any problem.
  if (EngineLockerHelper::allPyEnginesEnterCount == 0) {
      // Unlock the GIL because it is not locked before
      PyEval_ReleaseLock();
  }

  engineSwitchSharedLocker.unlock();
  engineLocker.unlock();
}

SCRIPTX_END_IGNORE_DEPRECARED

void setAttr(PyObject* obj, PyObject* key, PyObject* value) {
  if (PyObject_SetAttr(obj, key, value) != 0) {
    checkAndThrowException();
    throw Exception(std::string("Fail to set attr"));
  }
}

void setAttr(PyObject* obj, const char* key, PyObject* value) {
  if (PyObject_SetAttrString(obj, key, value) != 0) {
    checkAndThrowException();
    throw Exception(std::string("Fail to set attr named ") + key);
  }
}

// warn: return a new ref
PyObject* getAttr(PyObject* obj, PyObject* key) {
  PyObject* result = PyObject_GetAttr(obj, key);
  if (!result) {
    checkAndThrowException();
    throw Exception("Fail to get attr");
  }
  return result;
}

// warn: return a new ref
PyObject* getAttr(PyObject* obj, const char* key) {
  PyObject* result = PyObject_GetAttrString(obj, key);
  if (!result) {
    checkAndThrowException();
    throw Exception(std::string("Fail to get attr named ") + key);
  }
  return result;
}

bool hasAttr(PyObject* obj, PyObject* key) { return PyObject_HasAttr(obj, key) == 1; }

bool hasAttr(PyObject* obj, const char* key) { return PyObject_HasAttrString(obj, key) == 1; }

void delAttr(PyObject* obj, PyObject* key) {
  if (PyObject_DelAttr(obj, key) != 0) {
    checkAndThrowException();
    throw Exception("Fail to del attr");
  }
}

void delAttr(PyObject* obj, const char* key) {
  if (PyObject_DelAttrString(obj, key) != 0) {
    checkAndThrowException();
    throw Exception(std::string("Fail to del attr named ") + key);
  }
}

// warn: value's ref +1
void setDictItem(PyObject* obj, PyObject* key, PyObject* value) {
  if (PyDict_SetItem(obj, key, value) != 0) {
    throw Exception("Fail to set dict item");
  }
}

// warn: value's ref +1
void setDictItem(PyObject* obj, const char* key, PyObject* value) {
  if (PyDict_SetItemString(obj, key, value) != 0) {
    throw Exception(std::string("Fail to set dict item named ") + key);
  }
}

// warn: return a borrowed ref
PyObject* getDictItem(PyObject* obj, PyObject* key) {
  PyObject* rv = PyDict_GetItemWithError(obj, key);
  if (rv == nullptr && PyErr_Occurred()) {
    throw Exception("Fail to get dict item");
  }
  return rv;
}

// warn: return a borrowed ref
PyObject* getDictItem(PyObject* obj, const char* key) {
  PyObject *kv = nullptr, *rv = nullptr;
  kv = PyUnicode_FromString(key);
  if (kv == nullptr) {
    throw Exception(std::string("Fail to get dict item named ") + key);
  }

  rv = PyDict_GetItemWithError(obj, kv);
  Py_DECREF(kv);
  if (rv == nullptr && PyErr_Occurred()) {
    throw Exception(std::string("Fail to get dict item named ") + key);
  }
  return rv;
}

PyObject* toStr(const char* s) { return PyUnicode_FromString(s); }

PyObject* toStr(const std::string& s) { return PyUnicode_FromStringAndSize(s.c_str(), s.size()); }

std::string fromStr(PyObject* s) { return PyUnicode_Check(s) ? PyUnicode_AsUTF8(s) : ""; }

PyObject* newCustomInstance(PyTypeObject* pType, PyObject* argsTuple, PyObject* kwds)
{
  PyObject* self = pType->tp_new(pType, argsTuple, kwds);
  if(self == nullptr) {
    checkAndThrowException();
    throw Exception(std::string("Fail to alloc space for new instance of type ") + pType->tp_name);
  }
  if (pType->tp_init(self, argsTuple, kwds) < 0) {
    checkAndThrowException();
    throw Exception(std::string("Fail to init new instance of type ") + pType->tp_name);
  }
  return self;
}

PyObject* newExceptionInstance(PyTypeObject *pType, PyObject* pValue, PyObject* pTraceback)
{
  // get exception type class
  PyTypeObject* exceptionType = pType ? (PyTypeObject*)pType :
    EngineScope::currentEngineAs<py_backend::PyEngine>()->scriptxExceptionTypeObj;
  
  // get exception message
  std::string message{pType->tp_name};
  PyObject *msgObj = PyObject_Str(pValue);
  if (msgObj) {
    message = message + ": " + PyUnicode_AsUTF8(msgObj);
  }

  // create arguments list for constructor
  PyObject* tuple = PyTuple_New(1);
  PyTuple_SetItem(tuple, 0, py_backend::toStr(message));    // args[0] = message
  // PyTuple_SetItem will steal the ref

  // create new exception instance object
  PyObject* exceptionObj = newCustomInstance(exceptionType, tuple);
  Py_DECREF(tuple);

  // set traceback if exists
  if(pTraceback && pTraceback != Py_None)
    PyException_SetTraceback(exceptionObj, Py_NewRef(pTraceback));
  return exceptionObj;
}

PyObject* newExceptionInstance(std::string msg)
{
  // get exception type class
  PyTypeObject* exceptionType = 
    EngineScope::currentEngineAs<py_backend::PyEngine>()->scriptxExceptionTypeObj;

  // create arguments list for constructor
  PyObject* tuple = PyTuple_New(1);
  PyTuple_SetItem(tuple, 0, py_backend::toStr(msg));    // args[0] = message
  // PyTuple_SetItem will steal the ref

  // create new exception instance object
  PyObject* exceptionObj = newCustomInstance(exceptionType, tuple);
  Py_DECREF(tuple);
  return exceptionObj;
}

void checkAndThrowException() {
  PyObject* exceptionObj = checkAndGetException();
  if(Py_IsNone(exceptionObj))
    Py_XDECREF(exceptionObj);
  else
    throw Exception(py_interop::asLocal<Value>(exceptionObj));
}

bool checkAndClearException() {
  if (PyErr_Occurred()) {
    PyErr_Clear();
    return true;
  }
  return false;
}

PyObject* checkAndGetException() {
  if (PyErr_Occurred()) {
    PyTypeObject *pType;
    PyObject *pValue, *pTraceback;
    PyErr_Fetch((PyObject**)(&pType), &pValue, &pTraceback);
    PyErr_NormalizeException((PyObject**)(&pType), &pValue, &pTraceback);
    PyObject* exceptionObj = newExceptionInstance(pType, pValue, pTraceback);
    Py_XDECREF(pType);
    Py_XDECREF(pValue);
    Py_XDECREF(pTraceback);
    return exceptionObj;
  }
  return Py_NewRef(Py_None);
}

PyEngine* currentEngine() { return EngineScope::currentEngineAs<PyEngine>(); }

PyEngine* currentEngineChecked() { return &EngineScope::currentEngineCheckedAs<PyEngine>(); }

PyObject* getGlobalMain() {
  PyObject* m = PyImport_AddModule("__main__");
  if (m == nullptr) {
    throw Exception("can't find __main__ module");
  }
  return PyModule_GetDict(m);
}

PyObject* getGlobalBuiltin() {
  PyObject* m = PyImport_AddModule("builtins");
  if (m == nullptr) {
    throw Exception("can't find builtins module");
  }
  return PyModule_GetDict(m);
}

inline PyObject* scriptx_get_dict(PyObject* self, void*) {
  PyObject*& dict = *_PyObject_GetDictPtr(self);
  if (!dict) {
    dict = PyDict_New();
  }
  Py_XINCREF(dict);
  return dict;
}

inline int scriptx_set_dict(PyObject* self, PyObject* new_dict, void*) {
  if (!PyDict_Check(new_dict)) {
    PyErr_SetString(PyExc_TypeError, "__dict__ must be set to a dictionary");
    return -1;
  }
  PyObject*& dict = *_PyObject_GetDictPtr(self);
  Py_INCREF(new_dict);
  Py_CLEAR(dict);
  dict = new_dict;
  return 0;
}

PyTypeObject* makeStaticPropertyType() {
  constexpr auto* name = "static_property";
  auto name_obj = toStr(name);

  auto* heap_type = (PyHeapTypeObject*)PyType_Type.tp_alloc(&PyType_Type, 0);
  if (!heap_type) {
    Py_FatalError("error allocating type!");
  }

  heap_type->ht_name = Py_NewRef(name_obj);
  heap_type->ht_qualname = Py_NewRef(name_obj);
  Py_DECREF(name_obj);

  auto* type = &heap_type->ht_type;
  type->tp_name = name;
  type->tp_base = &PyProperty_Type;
  type->tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HEAPTYPE;
  type->tp_descr_get = [](PyObject* self, PyObject* /*ob*/, PyObject* cls) {
    return PyProperty_Type.tp_descr_get(self, cls, cls);
  };
  type->tp_descr_set = [](PyObject* self, PyObject* obj, PyObject* value) {
    PyObject* cls = PyType_Check(obj) ? obj : (PyObject*)Py_TYPE(obj);
    return PyProperty_Type.tp_descr_set(self, cls, value);
  };

  if (PyType_Ready(type) < 0) {
    Py_FatalError("failure in PyType_Ready()!");
  }

  setAttr((PyObject*)type, "__module__", toStr("scriptx_builtins"));

  return type;
}

PyTypeObject* makeNamespaceType() {
  constexpr auto* name = "scriptx_namespace";
  auto name_obj = toStr(name);

  auto* heap_type = (PyHeapTypeObject*)PyType_Type.tp_alloc(&PyType_Type, 0);
  if (!heap_type) {
    Py_FatalError("error allocating type!");
  }

  heap_type->ht_name = Py_NewRef(name_obj);
  heap_type->ht_qualname = Py_NewRef(name_obj);
  Py_DECREF(name_obj);

  auto* type = &heap_type->ht_type;
  type->tp_name = name;
  type->tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HAVE_GC | Py_TPFLAGS_HEAPTYPE;

  type->tp_dictoffset = PyBaseObject_Type.tp_basicsize;  // place dict at the end
  type->tp_basicsize =
      PyBaseObject_Type.tp_basicsize + sizeof(PyObject*);  // and allocate enough space for it
  type->tp_traverse = [](PyObject* self, visitproc visit, void* arg) {
    PyObject*& dict = *_PyObject_GetDictPtr(self);
    Py_VISIT(dict);
    Py_VISIT(Py_TYPE(self));
    return 0;
  };
  type->tp_clear = [](PyObject* self) {
    PyObject*& dict = *_PyObject_GetDictPtr(self);
    Py_CLEAR(dict);
    return 0;
  };

  static PyGetSetDef getset[] = {{"__dict__", scriptx_get_dict, scriptx_set_dict, nullptr, nullptr},
                                 {nullptr, nullptr, nullptr, nullptr, nullptr}};
  type->tp_getset = getset;

  if (PyType_Ready(type) < 0) {
    Py_FatalError("failure in PyType_Ready()!");
  }
  setAttr((PyObject*)type, "__module__", toStr("scriptx_builtins"));

  return type;
}

PyTypeObject* makeDefaultMetaclass() {
  constexpr auto* name = "scriptx_type";
  auto name_obj = toStr(name);

  auto* heap_type = (PyHeapTypeObject*)PyType_Type.tp_alloc(&PyType_Type, 0);
  if (!heap_type) {
    Py_FatalError("error allocating type!");
  }

  heap_type->ht_name = Py_NewRef(name_obj);
  heap_type->ht_qualname = Py_NewRef(name_obj);
  Py_DECREF(name_obj);

  auto* type = &heap_type->ht_type;
  type->tp_name = name;
  Py_INCREF(&PyType_Type);
  type->tp_base = &PyType_Type;
  type->tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HEAPTYPE;

  type->tp_call = [](PyObject* type, PyObject* args, PyObject* kwargs) -> PyObject* {
    // use the default metaclass call to create/initialize the object
    PyObject* self = PyType_Type.tp_call(type, args, kwargs);
    if (self == nullptr) {
      return nullptr;
    }
    return self;
  };

  type->tp_setattro = [](PyObject* obj, PyObject* name, PyObject* value) {
    // Use `_PyType_Lookup()` instead of `PyObject_GetAttr()` in order to get the raw
    // descriptor (`property`) instead of calling `tp_descr_get` (`property.__get__()`).
    PyObject* descr = _PyType_Lookup((PyTypeObject*)obj, name);

    // The following assignment combinations are possible:
    //   1. `Type.static_prop = value`             --> descr_set: `Type.static_prop.__set__(value)`
    //   2. `Type.static_prop = other_static_prop` --> setattro:  replace existing `static_prop`
    //   3. `Type.regular_attribute = value`       --> setattro:  regular attribute assignment
    auto* const static_prop = (PyObject*)PyEngine::staticPropertyType_;
    const auto call_descr_set = (descr != nullptr) && (value != nullptr) &&
                                (PyObject_IsInstance(descr, static_prop) != 0) &&
                                (PyObject_IsInstance(value, static_prop) == 0);
    if (call_descr_set) {
      // Call `static_property.__set__()` instead of replacing the `static_property`.
      return Py_TYPE(descr)->tp_descr_set(descr, obj, value);
    } else {
      // Replace existing attribute.
      return PyType_Type.tp_setattro(obj, name, value);
    }
  };
  type->tp_getattro = [](PyObject* obj, PyObject* name) {
    PyObject* descr = _PyType_Lookup((PyTypeObject*)obj, name);
    if (descr && PyInstanceMethod_Check(descr)) {
      Py_INCREF(descr);
      return descr;
    }
    return PyType_Type.tp_getattro(obj, name);
  };

  type->tp_dealloc = [](PyObject* obj) {
    PyType_Type.tp_dealloc(obj);
  };

  if (PyType_Ready(type) < 0) {
    Py_FatalError("make_default_metaclass(): failure in PyType_Ready()!");
  }

  setAttr((PyObject*)type, "__module__", toStr("scriptx_builtins"));

  return type;
}

PyObject *makeEmptyPyFunction() {
  PyMethodDef* method = new PyMethodDef;
  method->ml_name = "scriptx_function";
  method->ml_flags = METH_VARARGS;
  method->ml_doc = nullptr;
  method->ml_meth = [](PyObject* self, PyObject* args) -> PyObject* {
    Py_RETURN_NONE;
  };
  PyObject* function = PyCFunction_New(method, Py_None);
  py_backend::checkAndThrowException();
  return function;
}

void extendLifeTimeToNextLoop(PyEngine* engine, PyObject* obj)
{
  utils::Message msg(
    [](auto& msg) { Py_XDECREF((PyObject*)(uintptr_t)msg.data0); }, 
    [](auto& msg) {});

  msg.tag = engine;
  msg.data0 = (int64_t)obj;

  engine->messageQueue()->postMessage(msg);
}

}  // namespace script::py_backend
}  // namespace script