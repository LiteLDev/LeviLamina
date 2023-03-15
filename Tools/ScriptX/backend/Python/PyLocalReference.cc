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
#include "../../src/Reference.h"
#include "../../src/Utils.h"
#include "../../src/Value.h"
#include "PyEngine.h"
#include "PyHelper.hpp"
#include "PyReference.hpp"

namespace script {

namespace py_backend {
void valueConstructorCheck(PyObject* value) {
  SCRIPTX_UNUSED(value);
#ifndef NDEBUG
  if (!value) throw Exception("null reference");
#endif
}
}  // namespace py_backend

#define REF_IMPL_BASIC_FUNC(ValueType)                                                  \
  Local<ValueType>::Local(const Local<ValueType>& copy) : val_(Py_NewRef(copy.val_)) {} \
  Local<ValueType>::Local(Local<ValueType>&& move) noexcept : val_(std::move(move.val_)) \
  {                                                                                     \
    move.val_ = Py_NewRef(Py_None);                                                     \
  }                                                                                     \
  Local<ValueType>::~Local() { Py_XDECREF(val_); }                                      \
  Local<ValueType>& Local<ValueType>::operator=(const Local& from) {                    \
    Py_XDECREF(val_);                                                                   \
    val_ = Py_NewRef(from.val_);                                                        \
    return *this;                                                                       \
  }                                                                                     \
  Local<ValueType>& Local<ValueType>::operator=(Local&& move) noexcept {                \
    Py_XDECREF(val_);                                                                   \
    val_ = move.val_;                                                                   \
    move.val_ = Py_NewRef(Py_None);                                                     \
    return *this;                                                                       \
  }                                                                                     \
  void Local<ValueType>::swap(Local& rhs) noexcept { std::swap(val_, rhs.val_); }

#define REF_IMPL_BASIC_EQUALS(ValueType)                                               \
  bool Local<ValueType>::operator==(const script::Local<script::Value>& other) const { \
    return asValue() == other;                                                         \
  }

#define REF_IMPL_BASIC_NOT_VALUE(ValueType)                                         \
  /* warn: will steal the ref */                                                    \
  Local<ValueType>::Local(InternalLocalRef val) : val_(std::move(val)) {            \
    py_backend::valueConstructorCheck(val);                                         \
  }                                                                                 \
  Local<String> Local<ValueType>::describe() const { return asValue().describe(); } \
  std::string Local<ValueType>::describeUtf8() const { return asValue().describeUtf8(); }

#define REF_IMPL_TO_VALUE(ValueType) \
  Local<Value> Local<ValueType>::asValue() const { return py_interop::toLocal<Value>(val_); }

REF_IMPL_BASIC_FUNC(Value)

REF_IMPL_BASIC_FUNC(Object)
REF_IMPL_BASIC_NOT_VALUE(Object)
REF_IMPL_BASIC_EQUALS(Object)
REF_IMPL_TO_VALUE(Object)

REF_IMPL_BASIC_FUNC(String)
REF_IMPL_BASIC_NOT_VALUE(String)
REF_IMPL_BASIC_EQUALS(String)
REF_IMPL_TO_VALUE(String)

REF_IMPL_BASIC_FUNC(Number)
REF_IMPL_BASIC_NOT_VALUE(Number)
REF_IMPL_BASIC_EQUALS(Number)
REF_IMPL_TO_VALUE(Number)

REF_IMPL_BASIC_FUNC(Boolean)
REF_IMPL_BASIC_NOT_VALUE(Boolean)
REF_IMPL_BASIC_EQUALS(Boolean)
REF_IMPL_TO_VALUE(Boolean)

REF_IMPL_BASIC_FUNC(Function)
REF_IMPL_BASIC_NOT_VALUE(Function)
REF_IMPL_BASIC_EQUALS(Function)
REF_IMPL_TO_VALUE(Function)

REF_IMPL_BASIC_FUNC(Array)
REF_IMPL_BASIC_NOT_VALUE(Array)
REF_IMPL_BASIC_EQUALS(Array)
REF_IMPL_TO_VALUE(Array)

REF_IMPL_BASIC_FUNC(ByteBuffer)
REF_IMPL_BASIC_NOT_VALUE(ByteBuffer)
REF_IMPL_BASIC_EQUALS(ByteBuffer)
REF_IMPL_TO_VALUE(ByteBuffer)

REF_IMPL_BASIC_FUNC(Unsupported)
REF_IMPL_BASIC_NOT_VALUE(Unsupported)
REF_IMPL_BASIC_EQUALS(Unsupported)
REF_IMPL_TO_VALUE(Unsupported)

// ==== value ====

Local<Value>::Local() noexcept : val_(Py_NewRef(Py_None)) {}

// warn: will steal the ref
Local<Value>::Local(InternalLocalRef ref) : val_(ref ? ref : Py_NewRef(Py_None)) {}

bool Local<Value>::isNull() const { return Py_IsNone(val_); }

void Local<Value>::reset() {
  Py_XDECREF(val_);
  val_ = Py_NewRef(Py_None);
}

ValueKind Local<Value>::getKind() const {
  if (isNull()) {
    return ValueKind::kNull;
  } else if (isString()) {
    return ValueKind::kString;
  } else if (isNumber()) {
    return ValueKind::kNumber;
  } else if (isBoolean()) {
    return ValueKind::kBoolean;
  } else if (isFunction()) {
    return ValueKind::kFunction;
  } else if (isArray()) {
    return ValueKind::kArray;
  } else if (isByteBuffer()) {
    return ValueKind::kByteBuffer;
  } else if (isObject()) {
    return ValueKind::kObject;
  } else {
    return ValueKind::kUnsupported;
  }
}

bool Local<Value>::isString() const { return PyUnicode_CheckExact(val_); }

bool Local<Value>::isNumber() const { return PyLong_CheckExact(val_) || PyFloat_CheckExact(val_); }

bool Local<Value>::isBoolean() const { return PyBool_Check(val_); }

bool Local<Value>::isFunction() const {
  return PyFunction_Check(val_) || PyCFunction_Check(val_) || PyMethod_Check(val_);
}

bool Local<Value>::isArray() const { return PyList_CheckExact(val_); }

bool Local<Value>::isByteBuffer() const { return PyByteArray_CheckExact(val_); }

// Object can be dict or class or any instance, bad design!
bool Local<Value>::isObject() const {
  return PyDict_Check(val_) || PyType_Check(val_) ||
         (Py_TYPE(val_->ob_type) == py_backend::PyEngine::defaultMetaType_);
}

bool Local<Value>::isUnsupported() const { return getKind() == ValueKind::kUnsupported; }

Local<String> Local<Value>::asString() const {
  if (isString()) return py_interop::toLocal<String>(val_);
  throw Exception("can't cast value as String");
}

Local<Number> Local<Value>::asNumber() const {
  if (isNumber()) return py_interop::toLocal<Number>(val_);
  throw Exception("can't cast value as Number");
}

Local<Boolean> Local<Value>::asBoolean() const {
  if (isBoolean()) return py_interop::toLocal<Boolean>(val_);
  throw Exception("can't cast value as Boolean");
}

Local<Function> Local<Value>::asFunction() const {
  if (isFunction()) return py_interop::toLocal<Function>(val_);
  throw Exception("can't cast value as Function");
}

Local<Array> Local<Value>::asArray() const {
  if (isArray()) return py_interop::toLocal<Array>(val_);
  throw Exception("can't cast value as Array");
}

Local<ByteBuffer> Local<Value>::asByteBuffer() const {
  if (isByteBuffer()) return py_interop::toLocal<ByteBuffer>(val_);
  throw Exception("can't cast value as ByteBuffer");
}

Local<Object> Local<Value>::asObject() const {
  if (isObject()) return py_interop::toLocal<Object>(val_);
  throw Exception("can't cast value as Object");
}

Local<Unsupported> Local<Value>::asUnsupported() const {
  if (isUnsupported()) return py_interop::toLocal<Unsupported>(val_);
  throw Exception("can't cast value as Unsupported");
}

bool Local<Value>::operator==(const script::Local<script::Value>& other) const {
  return PyObject_RichCompareBool(val_, other.val_, Py_EQ);
}

Local<String> Local<Value>::describe() const {
  return py_interop::asLocal<String>(PyObject_Str(val_));
}

Local<Value> Local<Object>::get(const script::Local<script::String>& key) const {
  if (PyDict_CheckExact(val_)) {
    PyObject* item = py_backend::getDictItem(val_, key.val_);   // return a borrowed ref
    if (item)
      return py_interop::toLocal<Value>(item);
    else
      return Local<Value>();
  } else {
    PyObject* ref = py_backend::getAttr(val_, key.val_);    // warn: return a new ref!
    return py_interop::asLocal<Value>(ref);
  }
}

void Local<Object>::set(const script::Local<script::String>& key,
                        const script::Local<script::Value>& value) const {
  py_backend::setDictItem(val_, key.val_, value.val_);      // set setDictItem auto +1 ref to value
}

void Local<Object>::remove(const Local<class script::String>& key) const {
  PyDict_DelItem(val_, key.val_);
}

bool Local<Object>::has(const Local<class script::String>& key) const {
  return PyDict_Contains(val_, key.val_);
}

bool Local<Object>::instanceOf(const Local<class script::Value>& type) const {
  bool ret;
  if(PyType_Check(type.val_))
    ret = PyObject_IsInstance(val_, type.val_);
  else
    ret = PyObject_IsInstance(val_, (PyObject*)Py_TYPE(type.val_));
  if (py_backend::checkAndClearError())
    return false;
  return ret;
}

std::vector<Local<String>> Local<Object>::getKeys() const {
  std::vector<Local<String>> keys;
  PyObject* key;
  PyObject* value;
  Py_ssize_t pos = 0;
  while (PyDict_Next(val_, &pos, &key, &value)) {       // return borrowed refs
    keys.push_back(py_interop::toLocal<String>(key));
  }
  return keys;
}

float Local<Number>::toFloat() const { return static_cast<float>(toDouble()); }

double Local<Number>::toDouble() const { return PyFloat_AsDouble(val_); }

int32_t Local<Number>::toInt32() const { return static_cast<int32_t>(toDouble()); }

int64_t Local<Number>::toInt64() const { return static_cast<int64_t>(toDouble()); }

bool Local<Boolean>::value() const { return Py_IsTrue(val_); }

Local<Value> Local<Function>::callImpl(const Local<Value>& thiz, size_t size,
                                       const Local<Value>* args) const {
  // - Attention! Python does not support thiz rediction, Param "thiz" is ignored.
  // - If this function is a class method, thiz is locked to 
  //   the owner object instance of this method.
  // - If this function is a common function or a static method,
  //   thiz is locked to "None"
  PyObject* args_tuple = PyTuple_New(size);

  for (size_t i = 0; i < size; ++i) {
    Py_INCREF(args[i].val_);         // PyTuple_SetItem will steal the ref
    PyTuple_SetItem(args_tuple, i, args[i].val_);
  }
  PyObject* result = PyObject_CallObject(val_, args_tuple);
  Py_DECREF(args_tuple);
  py_backend::checkAndThrowError();
  return py_interop::asLocal<Value>(result);
}

size_t Local<Array>::size() const { return PyList_Size(val_); }

Local<Value> Local<Array>::get(size_t index) const {
  PyObject* item = PyList_GetItem(val_, index);       // return a borrowed ref
  if (item)
    return py_interop::toLocal<Value>(item);
  else
    return Local<Value>();
}

void Local<Array>::set(size_t index, const script::Local<script::Value>& value) const {
  size_t listSize = size();
  if (index >= listSize) {
    for (size_t i = listSize; i <= index; ++i) {
      PyList_Append(val_, Py_None);   // No need to add ref to Py_None
    }
  }
  Py_INCREF(value.val_);         // PyList_SetItem will steal ref
  PyList_SetItem(val_, index, value.val_);
}

void Local<Array>::add(const script::Local<script::Value>& value) const {
  PyList_Append(val_, value.val_);    // not steal ref
}

void Local<Array>::clear() const { PyList_SetSlice(val_, 0, PyList_Size(val_), nullptr); }

ByteBuffer::Type Local<ByteBuffer>::getType() const { return ByteBuffer::Type::kInt8; }

bool Local<ByteBuffer>::isShared() const { return true; }

void Local<ByteBuffer>::commit() const {}

void Local<ByteBuffer>::sync() const {}

size_t Local<ByteBuffer>::byteLength() const { return PyByteArray_Size(val_); }

void* Local<ByteBuffer>::getRawBytes() const { return PyByteArray_AsString(val_); }

std::shared_ptr<void> Local<ByteBuffer>::getRawBytesShared() const {
   return std::shared_ptr<void>(getRawBytes(), [global = Global<ByteBuffer>(*this)](void* ptr) {}); 
}

}  // namespace script
