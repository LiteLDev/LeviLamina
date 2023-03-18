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

#include <stack>
#include <string>
#include "../../src/Engine.h"
#include "../../src/Exception.h"
#include "../../src/utils/Helper.hpp"
#include "../../src/utils/MessageQueue.h"
#include "PyHelper.hpp"

namespace script::py_backend {

// an PyEngine = a subinterpreter
class PyEngine : public ScriptEngine {
private:
  std::shared_ptr<::script::utils::MessageQueue> queue_;

  std::unordered_map<const void*, PyTypeObject*> registeredTypes_;
  std::unordered_map<PyTypeObject*, const void*> registeredTypesReverse_;

  bool destroying = false;

  // refs keeper
  inline static GlobalOrWeakRefKeeper refsKeeper;
  friend class GlobalRefState;
  friend class WeakRefState;

  // Global thread state of main interpreter
  inline static PyThreadState* mainThreadState_ = nullptr;
  // Sub interpreter storage
  PyInterpreterState* subInterpreterState_;
  // Sub thread state of this sub interpreter (in TLS)
  TssStorage<PyThreadState> subThreadStateInTLS_;
  // Locker used by EngineScope
  // -- see more comments of EngineLockerHelper in "PyHelper.h" and "PyScope.cc"
  EngineLockerHelper engineLockHelper;

 public:
  inline static PyTypeObject* staticPropertyType_ = nullptr;
  inline static PyTypeObject* namespaceType_ = nullptr;
  inline static PyTypeObject* defaultMetaType_ = nullptr;
  inline static PyObject* emptyPyFunction = nullptr;
  PyTypeObject* scriptxExceptionTypeObj;

  PyEngine(std::shared_ptr<::script::utils::MessageQueue> queue);

  PyEngine();

  SCRIPTX_DISALLOW_COPY_AND_MOVE(PyEngine);

  void destroy() noexcept override;

  bool isDestroying() const override;

  Local<Value> get(const Local<String>& key) override;

  void set(const Local<String>& key, const Local<Value>& value) override;
  using ScriptEngine::set;

  Local<Value> eval(const Local<String>& script, const Local<Value>& sourceFile);
  Local<Value> eval(const Local<String>& script, const Local<String>& sourceFile) override;
  Local<Value> eval(const Local<String>& script) override;
  using ScriptEngine::eval;

  Local<Value> loadFile(const Local<String>& scriptFile) override;

  std::shared_ptr<utils::MessageQueue> messageQueue() override;

  void gc() override;

  void adjustAssociatedMemory(int64_t count) override;

  ScriptLanguage getLanguageType() override;

  std::string getEngineVersion() override;

 protected:
  ~PyEngine() override;

 private:
  /*
  * namespace will be created as a dict object, which is set in the Global Dict
  */
  template <typename T>
  void nameSpaceSet(const ClassDefine<T>* classDefine, const std::string& name, PyObject* type) {
    std::string nameSpace = classDefine->getNameSpace();
    PyObject* nameSpaceObj = getGlobalDict();

    if (nameSpace.empty()) {
      setDictItem(nameSpaceObj, name.c_str(), type);
    } else {  // "nameSpace" can be aaa.bbb.ccc, so we should parse the string to create more dict
      std::size_t begin = 0;
      while (begin < nameSpace.size()) {
        auto index = nameSpace.find('.', begin);
        if (index == std::string::npos) {
          index = nameSpace.size();
        }

        PyObject* sub = nullptr;
        auto key = nameSpace.substr(begin, index - begin);
        if (PyDict_CheckExact(nameSpaceObj)) {
          sub = getDictItem(nameSpaceObj, key.c_str());
          if (sub == nullptr) {
            PyObject* args = PyTuple_New(0);
            PyTypeObject* type = reinterpret_cast<PyTypeObject*>(namespaceType_);
            sub = type->tp_new(type, args, nullptr);
            Py_DECREF(args);
            setDictItem(nameSpaceObj, key.c_str(), sub);
            Py_DECREF(sub);
          }
          setAttr(sub, name.c_str(), type);
        } else /*namespace type*/ {
          if (hasAttr(nameSpaceObj, key.c_str())) {
            sub = getAttr(nameSpaceObj, key.c_str());
          } else {
            PyObject* args = PyTuple_New(0);
            PyTypeObject* type = reinterpret_cast<PyTypeObject*>(namespaceType_);
            sub = type->tp_new(type, args, nullptr);
            Py_DECREF(args);
            setAttr(nameSpaceObj, key.c_str(), sub);
            Py_DECREF(sub);
          }
          setAttr(sub, name.c_str(), type);
        }
        nameSpaceObj = sub;
        begin = index + 1;
      }
    }
  }

  PyObject* warpGetter(const char* name, GetterCallback callback) {
    struct FunctionData {
      GetterCallback function;
      PyEngine* engine;
      std::string name;
    };

    PyMethodDef* method = new PyMethodDef;
    method->ml_name = name;
    method->ml_flags = METH_VARARGS;
    method->ml_doc = nullptr;

    method->ml_meth = [](PyObject* self, PyObject* args) -> PyObject* {
      auto data = static_cast<FunctionData*>(PyCapsule_GetPointer(self, nullptr));
      try {
        Tracer tracer(data->engine, data->name);
        Local<Value> ret = data->function();
        return py_interop::getPy(ret);
      }
      catch(const Exception &e) {
        Local<Value> exception = e.exception();
        PyObject* exceptionObj = py_interop::peekPy(exception);
        PyErr_SetObject((PyObject*)Py_TYPE(exceptionObj), exceptionObj);
      }
      catch(const std::exception &e) {
        PyObject *scriptxType = (PyObject*)
          EngineScope::currentEngineAs<py_backend::PyEngine>()->scriptxExceptionTypeObj;
        PyErr_SetString(scriptxType, e.what());
      }
      catch(...) {
        PyObject *scriptxType = (PyObject*)
          EngineScope::currentEngineAs<py_backend::PyEngine>()->scriptxExceptionTypeObj;
        PyErr_SetString(scriptxType, "[No Exception Message]");
      }
      return nullptr;
    };

    PyCapsule_Destructor destructor = [](PyObject* cap) {
      void* ptr = PyCapsule_GetPointer(cap, nullptr);
      delete static_cast<FunctionData*>(ptr);
    };
    PyObject* capsule =
        PyCapsule_New(new FunctionData{std::move(callback), this, name}, nullptr, destructor);
    checkAndThrowError();

    PyObject* function = PyCFunction_New(method, capsule);
    Py_DECREF(capsule);
    checkAndThrowError();
    return function;
  }

  template <typename T>
  PyObject* warpInstanceGetter(const char* name, InstanceGetterCallback<T> callback) {
    struct FunctionData {
      InstanceGetterCallback<T> function;
      PyEngine* engine;
      std::string name;
    };

    PyMethodDef* method = new PyMethodDef;
    method->ml_name = name;
    method->ml_flags = METH_VARARGS;
    method->ml_doc = nullptr;
    method->ml_meth = [](PyObject* self, PyObject* args) -> PyObject* {
      auto data = static_cast<FunctionData*>(PyCapsule_GetPointer(self, nullptr));
      T* cppThiz = GeneralObject::getInstance<T>(PyTuple_GetItem(args, 0));
      try {
        Tracer tracer(data->engine, data->name);
        Local<Value> ret = data->function(cppThiz);
        return py_interop::getPy(ret);
      }
      catch(const Exception &e) {
        Local<Value> exception = e.exception();
        PyObject* exceptionObj = py_interop::peekPy(exception);
        PyErr_SetObject((PyObject*)Py_TYPE(exceptionObj), exceptionObj);
      }
      catch(const std::exception &e) {
        PyObject *scriptxType = (PyObject*)
          EngineScope::currentEngineAs<py_backend::PyEngine>()->scriptxExceptionTypeObj;
        PyErr_SetString(scriptxType, e.what());
      }
      catch(...) {
        PyObject *scriptxType = (PyObject*)
          EngineScope::currentEngineAs<py_backend::PyEngine>()->scriptxExceptionTypeObj;
        PyErr_SetString(scriptxType, "[No Exception Message]");
      }
      return nullptr;
    };

    PyCapsule_Destructor destructor = [](PyObject* cap) {
      void* ptr = PyCapsule_GetPointer(cap, nullptr);
      delete static_cast<FunctionData*>(ptr);
    };
    PyObject* capsule =
        PyCapsule_New(new FunctionData{std::move(callback), this, name}, nullptr, destructor);
    checkAndThrowError();

    PyObject* function = PyCFunction_New(method, capsule);
    Py_DECREF(capsule);
    checkAndThrowError();

    return function;
  }

  PyObject* warpSetter(const char* name, SetterCallback callback) {
    struct FunctionData {
      SetterCallback function;
      PyEngine* engine;
      std::string name;
    };

    PyMethodDef* method = new PyMethodDef;
    method->ml_name = name;
    method->ml_flags = METH_VARARGS;
    method->ml_doc = nullptr;
    method->ml_meth = [](PyObject* self, PyObject* args) -> PyObject* {
      auto data = static_cast<FunctionData*>(PyCapsule_GetPointer(self, nullptr));
      try {
        Tracer tracer(data->engine, data->name);
        data->function(py_interop::toLocal<Value>(PyTuple_GetItem(args, 1)));
        Py_RETURN_NONE;
      }
      catch(const Exception &e) {
        Local<Value> exception = e.exception();
        PyObject* exceptionObj = py_interop::peekPy(exception);
        PyErr_SetObject((PyObject*)Py_TYPE(exceptionObj), exceptionObj);
      }
      catch(const std::exception &e) {
        PyObject *scriptxType = (PyObject*)
          EngineScope::currentEngineAs<py_backend::PyEngine>()->scriptxExceptionTypeObj;
        PyErr_SetString(scriptxType, e.what());
      }
      catch(...) {
        PyObject *scriptxType = (PyObject*)
          EngineScope::currentEngineAs<py_backend::PyEngine>()->scriptxExceptionTypeObj;
        PyErr_SetString(scriptxType, "[No Exception Message]");
      }
      return nullptr;
    };

    PyCapsule_Destructor destructor = [](PyObject* cap) {
      void* ptr = PyCapsule_GetPointer(cap, nullptr);
      delete static_cast<FunctionData*>(ptr);
    };
    PyObject* capsule =
        PyCapsule_New(new FunctionData{std::move(callback), this, name}, nullptr, destructor);
    checkAndThrowError();

    PyObject* function = PyCFunction_New(method, capsule);
    Py_DECREF(capsule);
    checkAndThrowError();

    return function;
  }

  template <typename T>
  PyObject* warpInstanceSetter(const char* name, InstanceSetterCallback<T> callback) {
    struct FunctionData {
      InstanceSetterCallback<T> function;
      PyEngine* engine;
      std::string name;
    };

    PyMethodDef* method = new PyMethodDef;
    method->ml_name = name;
    method->ml_flags = METH_VARARGS;
    method->ml_doc = nullptr;
    method->ml_meth = [](PyObject* self, PyObject* args) -> PyObject* {
      auto data = static_cast<FunctionData*>(PyCapsule_GetPointer(self, nullptr));
      T* cppThiz = GeneralObject::getInstance<T>(PyTuple_GetItem(args, 0));
      try {
        Tracer tracer(data->engine, data->name);
        data->function(cppThiz, py_interop::toLocal<Value>(PyTuple_GetItem(args, 1)));
        Py_RETURN_NONE;
      }
      catch(const Exception &e) {
        Local<Value> exception = e.exception();
        PyObject* exceptionObj = py_interop::peekPy(exception);
        PyErr_SetObject((PyObject*)Py_TYPE(exceptionObj), exceptionObj);
      }
      catch(const std::exception &e) {
        PyObject *scriptxType = (PyObject*)
          EngineScope::currentEngineAs<py_backend::PyEngine>()->scriptxExceptionTypeObj;
        PyErr_SetString(scriptxType, e.what());
      }
      catch(...) {
        PyObject *scriptxType = (PyObject*)
          EngineScope::currentEngineAs<py_backend::PyEngine>()->scriptxExceptionTypeObj;
        PyErr_SetString(scriptxType, "[No Exception Message]");
      }
      return nullptr;
    };

    PyCapsule_Destructor destructor = [](PyObject* cap) {
      void* ptr = PyCapsule_GetPointer(cap, nullptr);
      delete static_cast<FunctionData*>(ptr);
    };
    PyObject* capsule =
        PyCapsule_New(new FunctionData{std::move(callback), this, name}, nullptr, destructor);
    checkAndThrowError();

    PyObject* function = PyCFunction_New(method, capsule);
    Py_DECREF(capsule);
    checkAndThrowError();

    return function;
  }

  template <typename T>
  void registerStaticProperty(const ClassDefine<T>* classDefine, PyObject* type) {
    for (const auto& property : classDefine->staticDefine.properties) {
      PyObject* g = nullptr;
      if (property.getter) {
        g = warpGetter(property.name.c_str(), property.getter);
      }
      else g = Py_NewRef(PyEngine::emptyPyFunction);

      PyObject* s = nullptr;
      if (property.setter) {
        s = warpSetter(property.name.c_str(), property.setter);
      }
      else s = Py_NewRef(PyEngine::emptyPyFunction);

      PyObject* doc = toStr("");
      PyObject* warpped_property =
          PyObject_CallFunctionObjArgs((PyObject*)staticPropertyType_, g, s, Py_None, doc, nullptr);
      Py_DECREF(g);
      Py_DECREF(s);
      Py_DECREF(doc);
      setAttr(type, property.name.c_str(), warpped_property);
      Py_DECREF(warpped_property);
    }
  }

  template <typename T>
  void registerInstanceProperty(const ClassDefine<T>* classDefine, PyObject* type) {
    for (const auto& property : classDefine->instanceDefine.properties) {
      PyObject* g = nullptr;
      if (property.getter) {
        g = warpInstanceGetter(property.name.c_str(), property.getter);
      }
      else g = Py_NewRef(PyEngine::emptyPyFunction);

      PyObject* s = nullptr;
      if (property.setter) {
        s = warpInstanceSetter(property.name.c_str(), property.setter);
      }
      else s = Py_NewRef(PyEngine::emptyPyFunction);

      PyObject* doc = toStr("");
      PyObject* warpped_property =
          PyObject_CallFunctionObjArgs((PyObject*)&PyProperty_Type, g, s, Py_None, doc, nullptr);
      Py_DECREF(g);
      Py_DECREF(s);
      Py_DECREF(doc);
      setAttr(type, property.name.c_str(), warpped_property);
      Py_DECREF(warpped_property);
    }
  }

  template <typename T>
  void registerStaticFunction(const ClassDefine<T>* classDefine, PyObject* type) {
    for (const auto& f : classDefine->staticDefine.functions) {
      struct FunctionData {
        FunctionCallback function;
        py_backend::PyEngine* engine;
        std::string name;
      };

      PyMethodDef* method = new PyMethodDef;
      method->ml_name = f.name.c_str();
      method->ml_flags = METH_VARARGS;
      method->ml_doc = nullptr;
      method->ml_meth = [](PyObject* self, PyObject* args) -> PyObject* {
        // - "self" is not real self pointer to object instance, but a capsule for that
        //   we need it to pass params like impl-function, thiz, engine, ...etc
        //   into ml_meth here.
        auto data = static_cast<FunctionData*>(PyCapsule_GetPointer(self, nullptr));
        try {
          Tracer tracer(data->engine, data->name);
          Local<Value> ret = data->function(py_interop::makeArguments(data->engine, self, args));
          return py_interop::getPy(ret);
        }
        catch(const Exception &e) {
          Local<Value> exception = e.exception();
          PyObject* exceptionObj = py_interop::peekPy(exception);
          PyErr_SetObject((PyObject*)Py_TYPE(exceptionObj), exceptionObj);
        }
        catch(const std::exception &e) {
          PyObject *scriptxType = (PyObject*)
            EngineScope::currentEngineAs<py_backend::PyEngine>()->scriptxExceptionTypeObj;
          PyErr_SetString(scriptxType, e.what());
        }
        catch(...) {
          PyObject *scriptxType = (PyObject*)
            EngineScope::currentEngineAs<py_backend::PyEngine>()->scriptxExceptionTypeObj;
          PyErr_SetString(scriptxType, "[No Exception Message]");
        }
        return nullptr;
      };

      PyCapsule_Destructor destructor = [](PyObject* cap) {
        void* ptr = PyCapsule_GetPointer(cap, nullptr);
        delete static_cast<FunctionData*>(ptr);
      };
      PyObject* capsule =
          PyCapsule_New(new FunctionData{std::move(f.callback), this, f.name}, nullptr, destructor);
      checkAndThrowError();

      PyObject* function = PyCFunction_New(method, capsule);
      Py_DECREF(capsule);
      checkAndThrowError();

      PyObject* staticMethod = PyStaticMethod_New(function);
      Py_DECREF(function);
      setAttr(type, f.name.c_str(), staticMethod);
      Py_DECREF(staticMethod);
    }
  }

  template <typename T>
  void registerInstanceFunction(const ClassDefine<T>* classDefine, PyObject* type) {
    for (const auto& f : classDefine->instanceDefine.functions) {
      struct FunctionData {
        InstanceFunctionCallback<T> function;
        py_backend::PyEngine* engine;
        std::string name;
      };

      PyMethodDef* method = new PyMethodDef;
      method->ml_name = f.name.c_str();
      method->ml_flags = METH_VARARGS;
      method->ml_doc = nullptr;
      method->ml_meth = [](PyObject* self, PyObject* args) -> PyObject* {
        //
        // - "self" is not real self pointer to object instance, but a capsule for that
        //   we need it to pass params like impl-function, thiz, engine, ...etc
        //   into ml_meth here.
        //
        // - Structure of "args" is:
        //      <real-self>, <param1>, <param2>, ...
        // 
        // - The first <real-self> is added by CPython when call a class method, which must be 
        //   the owner object instance of this method. Python does not support thiz redirection.
        //   (Looked into function "method_vectorcall" in CPython source code "Objects/methodobjects.c")
        //   (Looked into comments in PyLocalReference.cc)
        //
        auto data = static_cast<FunctionData*>(PyCapsule_GetPointer(self, nullptr));
        PyObject *thiz = PyTuple_GetItem(args, 0);
        T* cppThiz = GeneralObject::getInstance<T>(thiz);
        PyObject* real_args = PyTuple_GetSlice(args, 1, PyTuple_Size(args));

        try {
          Tracer tracer(data->engine, data->name);
          Local<Value> ret = data->function(cppThiz, py_interop::makeArguments(data->engine, thiz, real_args));
          Py_DECREF(real_args);
          return py_interop::getPy(ret);
        }
        catch(const Exception &e) {
          Local<Value> exception = e.exception();
          PyObject* exceptionObj = py_interop::peekPy(exception);
          PyErr_SetObject((PyObject*)Py_TYPE(exceptionObj), exceptionObj);
        }
        catch(const std::exception &e) {
          PyObject *scriptxType = (PyObject*)
            EngineScope::currentEngineAs<py_backend::PyEngine>()->scriptxExceptionTypeObj;
          PyErr_SetString(scriptxType, e.what());
        }
        catch(...) {
          PyObject *scriptxType = (PyObject*)
            EngineScope::currentEngineAs<py_backend::PyEngine>()->scriptxExceptionTypeObj;
          PyErr_SetString(scriptxType, "[No Exception Message]");
        }
        Py_DECREF(real_args);
        return nullptr;
      };

      PyCapsule_Destructor destructor = [](PyObject* cap) {
        void* ptr = PyCapsule_GetPointer(cap, nullptr);
        delete static_cast<FunctionData*>(ptr);
      };
      PyObject* capsule =
          PyCapsule_New(new FunctionData{std::move(f.callback), this, f.name}, nullptr, destructor);
      checkAndThrowError();

      PyObject* function = PyCFunction_New(method, capsule);
      Py_DECREF(capsule);
      checkAndThrowError();

      PyObject* instanceMethod = PyInstanceMethod_New(function);
      Py_DECREF(function);
      setAttr(type, f.name.c_str(), instanceMethod);
      Py_DECREF(instanceMethod);
    }
  }

  template <typename T>
  void registerNativeClassImpl(const ClassDefine<T>* classDefine) {
    auto name_obj = toStr(classDefine->className.c_str());

    auto* heap_type = (PyHeapTypeObject*)PyType_GenericAlloc(PyEngine::defaultMetaType_, 0);
    if (!heap_type) {
      Py_FatalError("error allocating type!");
    }

    heap_type->ht_name = Py_NewRef(name_obj);
    heap_type->ht_qualname = Py_NewRef(name_obj);
    Py_DECREF(name_obj);

    auto* type = &heap_type->ht_type;
    type->tp_name = classDefine->className.c_str();
    Py_INCREF(&PyBaseObject_Type);
    type->tp_base = &PyBaseObject_Type;
    type->tp_basicsize = static_cast<Py_ssize_t>(sizeof(GeneralObject));
    type->tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HEAPTYPE;

    // enable object dict
    type->tp_dictoffset = SCRIPTX_OFFSET_OF(GeneralObject, instanceDict);

    /* Support weak references (needed for the keep_alive feature) */
    type->tp_weaklistoffset = SCRIPTX_OFFSET_OF(GeneralObject, weakrefs);

    type->tp_new = [](PyTypeObject* type, PyObject* args, PyObject* kwds) -> PyObject* {
      PyObject* self = type->tp_alloc(type, 0);
      return self;
    };
    type->tp_init = [](PyObject* self, PyObject* args, PyObject* kwds) -> int {
      auto engine = currentEngine();
      auto classDefine =
          reinterpret_cast<const ClassDefine<T>*>(engine->registeredTypesReverse_[self->ob_type]);
      if (classDefine->instanceDefine.constructor)
      {
        Tracer tracer(engine, classDefine->getClassName());
        reinterpret_cast<GeneralObject*>(self)->instance =
            classDefine->instanceDefine.constructor(py_interop::makeArguments(engine, self, args));
      } else {
        throw Exception(std::string("Class ") + Py_TYPE(self)->tp_name + " has no constructor");
        return -1;
      }
      return 0;
    };
    type->tp_dealloc = [](PyObject* self) {
      auto type = Py_TYPE(self);
      delete (T*)(reinterpret_cast<GeneralObject*>(self)->instance);
      type->tp_free(self);
      Py_DECREF(type);
    };

    if (PyType_Ready(type) < 0) {
      throw Exception("PyType_Ready failed in make_object_base_type()");
    }

    setAttr((PyObject*)type, "__module__", toStr("scriptx_builtins"));

    this->registerStaticProperty(classDefine, (PyObject*)type);
    this->registerStaticFunction(classDefine, (PyObject*)type);
    this->registerInstanceProperty(classDefine, (PyObject*)type);
    this->registerInstanceFunction(classDefine, (PyObject*)type);
    this->registeredTypes_.emplace(classDefine, type);
    this->registeredTypesReverse_.emplace(type, classDefine);
    this->nameSpaceSet(classDefine, classDefine->className.c_str(), (PyObject*)type);
  }

  template <typename T>
  Local<Object> newNativeClassImpl(const ClassDefine<T>* classDefine, size_t size,
                                   const Local<Value>* args) {
    PyObject* tuple = PyTuple_New(size);
    for (size_t i = 0; i < size; ++i) {
      Py_INCREF(args[i].val_);      // PyTuple_SetItem will steal the ref
      PyTuple_SetItem(tuple, i, args[i].val_);
    }

    PyTypeObject* type = registeredTypes_[classDefine];
    PyObject* obj = py_backend::newCustomInstance(type, tuple);
    Py_DECREF(tuple);
    return py_interop::asLocal<Object>(obj);
  }

  template <typename T>
  bool isInstanceOfImpl(const Local<Value>& value, const ClassDefine<T>* classDefine) {
    return registeredTypes_[classDefine] == value.val_->ob_type;
  }

  template <typename T>
  T* getNativeInstanceImpl(const Local<Value>& value, const ClassDefine<T>* classDefine) {
    if (!isInstanceOfImpl(value, classDefine)) {
      throw Exception("Unmatched type of the value!");
    }
    return GeneralObject::getInstance<T>(value.val_);
  }

 private:
  template <typename T>
  friend class ::script::Local;

  template <typename T>
  friend class ::script::Global;

  template <typename T>
  friend class ::script::Weak;

  friend class ::script::Object;

  friend class ::script::Array;

  friend class ::script::Function;

  friend class ::script::ByteBuffer;

  friend class ::script::ScriptEngine;

  friend class ::script::Exception;

  friend class ::script::Arguments;

  friend class ::script::ScriptClass;

  friend class EngineScopeImpl;

  friend class ExitEngineScopeImpl;

  friend PyTypeObject* makeDefaultMetaclass();
};

}  // namespace script::py_backend