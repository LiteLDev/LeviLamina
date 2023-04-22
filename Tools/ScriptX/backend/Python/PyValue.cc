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

#include "../../src/Exception.h"
#include "../../src/Reference.h"
#include "../../src/Scope.h"
#include "../../src/Value.h"
#include "PyHelper.hpp"
#include "PyEngine.h"

namespace script {

Local<Object> Object::newObject() { return py_interop::asLocal<Object>(PyDict_New()); }

Local<Object> Object::newObjectImpl(const Local<Value>& type, size_t size,
                                    const Local<Value>* args) {
  throw Exception("Python can't create a dict with data in array");
  return py_interop::asLocal<Object>(PyDict_New());
}

Local<String> String::newString(const char* utf8) {
  return py_interop::asLocal<String>(PyUnicode_FromString(utf8));
}

Local<String> String::newString(std::string_view utf8) {
  return py_interop::asLocal<String>(PyUnicode_FromStringAndSize(utf8.data(), utf8.size()));
}

Local<String> String::newString(const std::string& utf8) {
  return newString(std::string_view(utf8));
}

#if defined(__cpp_char8_t)

Local<String> String::newString(const char8_t* utf8) {
  return newString(reinterpret_cast<const char*>(utf8));
}

Local<String> String::newString(std::u8string_view utf8) {
  return newString(std::string_view(reinterpret_cast<const char*>(utf8.data()), utf8.length()));
}

Local<String> String::newString(const std::u8string& utf8) {
  return newString(std::u8string_view(utf8));
}

#endif

Local<Number> Number::newNumber(float value) { return newNumber(static_cast<double>(value)); }

Local<Number> Number::newNumber(double value) {
  return py_interop::asLocal<Number>(PyFloat_FromDouble(value));
}

Local<Number> Number::newNumber(int32_t value) {
  return py_interop::asLocal<Number>(PyLong_FromLong(value));
}

Local<Number> Number::newNumber(int64_t value) {
  return py_interop::asLocal<Number>(PyLong_FromLongLong(value));
}

Local<Boolean> Boolean::newBoolean(bool value) {
  return py_interop::asLocal<Boolean>(PyBool_FromLong(value));
}

Local<Function> Function::newFunction(FunctionCallback callback) {
  struct FunctionData {
    FunctionCallback function;
    py_backend::PyEngine* engine;
  };

  PyMethodDef* method = new PyMethodDef;
  method->ml_name = "scriptx_function";
  method->ml_flags = METH_VARARGS;
  method->ml_doc = nullptr;
  method->ml_meth = [](PyObject* self, PyObject* args) -> PyObject* {
    auto data = static_cast<FunctionData*>(PyCapsule_GetPointer(self, nullptr));
    try{
      Tracer tracer(data->engine, "CppFunction");
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
  PyObject* capsule = PyCapsule_New(
      new FunctionData{std::move(callback), py_backend::currentEngine()}, nullptr, destructor);
  py_backend::checkAndThrowException();

  PyObject* function = PyCFunction_New(method, capsule);
  Py_DECREF(capsule);
  py_backend::checkAndThrowException();

  return py_interop::asLocal<Function>(function);
}

Local<Array> Array::newArray(size_t size) { return py_interop::asLocal<Array>(PyList_New(size)); }

Local<Array> Array::newArrayImpl(size_t size, const Local<Value>* args) {
  PyObject* list = PyList_New(size);
  if (!list) {
    throw Exception();
  }
  for (size_t i = 0; i < size; ++i) {
    PyList_SetItem(list, i, py_interop::getPy(args[i]));
  }
  return py_interop::asLocal<Array>(list);
}

Local<ByteBuffer> ByteBuffer::newByteBuffer(size_t size) {
  const char* bytes = new char[size]{};
  PyObject* result = PyByteArray_FromStringAndSize(bytes, size);
  delete bytes;
  return py_interop::asLocal<ByteBuffer>(result);
}

Local<script::ByteBuffer> ByteBuffer::newByteBuffer(void* nativeBuffer, size_t size) {
  return py_interop::asLocal<ByteBuffer>(
      PyByteArray_FromStringAndSize(static_cast<char*>(nativeBuffer), size));
}

Local<ByteBuffer> ByteBuffer::newByteBuffer(std::shared_ptr<void> nativeBuffer, size_t size) {
  throw Exception("Python does not support sharing buffer pointer.");
}

}  // namespace script