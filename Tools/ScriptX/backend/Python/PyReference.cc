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

#include "PyReference.hpp"

namespace script {

// =============== Global ===============

namespace py_backend {

GlobalRefState::GlobalRefState() 
  :_ref(Py_NewRef(Py_None)), _engine(EngineScope::currentEngineAs<PyEngine>())
{
  PyEngine::refsKeeper.update(this, _engine);
}

GlobalRefState::GlobalRefState(PyObject* obj) 
  :_ref(Py_NewRef(obj)), _engine(EngineScope::currentEngineAs<PyEngine>()) 
{
  PyEngine::refsKeeper.update(this, _engine);
}

GlobalRefState::GlobalRefState(const GlobalRefState& assign)
  :_ref(Py_NewRef(assign._ref)), _engine(assign._engine) 
{
  PyEngine::refsKeeper.update(this, _engine);
}

GlobalRefState::GlobalRefState(GlobalRefState&& move) noexcept
  : _ref(move._ref), _engine(move._engine)
{
  PyEngine::refsKeeper.update(this, _engine);
  move._ref = Py_NewRef(Py_None);
}

GlobalRefState& GlobalRefState::operator=(const GlobalRefState& assign){
  Py_XDECREF(_ref);
  _ref = Py_NewRef(assign._ref);
  _engine = assign._engine;
  PyEngine::refsKeeper.update(this, _engine);
  return *this;
}

GlobalRefState& GlobalRefState::operator=(GlobalRefState&& move) noexcept{
  Py_XDECREF(_ref);
  _ref = move._ref;
  _engine = move._engine;
  PyEngine::refsKeeper.update(this, _engine);

  move._ref = Py_NewRef(Py_None);
  return *this;
}

void GlobalRefState::swap(GlobalRefState& other){
  std::swap(_ref, other._ref);
  std::swap(_engine, other._engine);
  PyEngine::refsKeeper.update(this, _engine);
  PyEngine::refsKeeper.update(&other, other._engine);
}

bool GlobalRefState::isEmpty() const {
  return _ref == nullptr || Py_IsNone(_ref);
}

PyObject *GlobalRefState::get() const {
  return Py_NewRef(_ref);
}

PyObject *GlobalRefState::peek() const{
    return _ref;
}

void GlobalRefState::reset() {
  Py_XDECREF(_ref);
  _ref = Py_NewRef(Py_None);
}

void GlobalRefState::dtor(bool eraseFromList) {
  if(!_ref)
    return;     // is destroyed
  if(eraseFromList)
    PyEngine::refsKeeper.remove(this);
  Py_XDECREF(_ref);
  _ref = nullptr;
  _engine = nullptr;
}


// =============== Weak ===============

// Tips: Not all types in CPython support weak ref. So when creating a weak ref to the
//       type that do not support weak ref, returned Weak<> will behavior like a Global<>.
// See https://stackoverflow.com/questions/60213902/why-cant-subclasses-of-tuple-and-str-support-weak-references-in-python


WeakRefState::WeakRefState() 
  :_ref(Py_NewRef(Py_None)), _engine(EngineScope::currentEngineAs<PyEngine>()) 
{
  PyEngine::refsKeeper.update(this, _engine);
}

WeakRefState::WeakRefState(PyObject* obj) 
  :_engine(EngineScope::currentEngineAs<PyEngine>()) 
{
  PyEngine::refsKeeper.update(this, _engine);
  if(Py_IsNone(obj))
  {
    _ref = Py_NewRef(Py_None);
    return;
  }

  _ref = PyWeakref_NewRef(obj, PyEngine::weakRefGcEmptyCallback);
  if(checkAndClearError() || !_ref)
  {
    // Fail to create weak ref, change to global ref
    _isRealWeakRef = false;
    _ref = Py_NewRef(obj);
  }
  else
    _isRealWeakRef = true;
}

WeakRefState::WeakRefState(const WeakRefState& assign) 
  :_engine(assign._engine) 
{
  PyEngine::refsKeeper.update(this, _engine);
  if(assign.isEmpty())
  {
    _ref = Py_NewRef(Py_None);
    return;
  }
  PyObject *originRef = assign.peek();
  if(assign._isRealWeakRef)
  {
    _ref = PyWeakref_NewRef(originRef, PyEngine::weakRefGcEmptyCallback);
    if(checkAndClearError() || !_ref)
    {
      // Fail to create weak ref, change to global ref
      _isRealWeakRef = false;
      _ref = Py_NewRef(originRef);
    }
    else
      _isRealWeakRef = true;
  }
  else
  {
    // assign is fake wake ref (global ref)
    _isRealWeakRef = false;
    _ref = Py_NewRef(originRef);
  }
}

WeakRefState::WeakRefState(WeakRefState&& move) noexcept
  :_engine(move._engine)
{
  PyEngine::refsKeeper.update(this, _engine);
  _isRealWeakRef = move._isRealWeakRef;
  _ref = move._ref;

  move._ref = Py_NewRef(Py_None);
  move._isRealWeakRef = false;
}

WeakRefState& WeakRefState::operator=(const WeakRefState& assign){
  Py_XDECREF(_ref);
  _engine = assign._engine;
  PyEngine::refsKeeper.update(this, _engine);

  if(assign.isEmpty())
  {
    _ref = Py_NewRef(Py_None);
    _isRealWeakRef = false;
    return *this;
  }

  PyObject *originRef = assign.peek();
  if(assign._isRealWeakRef)
  {
    _ref = PyWeakref_NewRef(originRef, PyEngine::weakRefGcEmptyCallback);
    if(checkAndClearError() || !_ref)
    {
      // Fail to create weak ref, change to global ref
      _isRealWeakRef = false;
      _ref = Py_NewRef(originRef);
    }
    else
      _isRealWeakRef = true;
  }
  else
  {
    // assign is global ref
    _isRealWeakRef = false;
    _ref = Py_NewRef(originRef);
  }
  return *this;
}

WeakRefState& WeakRefState::operator=(WeakRefState&& move) noexcept{
  Py_XDECREF(_ref);

  _isRealWeakRef = move._isRealWeakRef;
  _ref = move._ref;
  _engine = move._engine;
  PyEngine::refsKeeper.update(this, _engine);

  move._ref = Py_NewRef(Py_None);
  move._isRealWeakRef = false;
  return *this;
}

void WeakRefState::swap(WeakRefState& other){
  std::swap(_isRealWeakRef, other._isRealWeakRef);
  std::swap(_ref, other._ref);
  std::swap(_engine, other._engine);
  PyEngine::refsKeeper.update(this, _engine);
  PyEngine::refsKeeper.update(&other, other._engine);
}

bool WeakRefState::isEmpty() const {
  PyObject *ref = peek();
  return ref == nullptr || Py_IsNone(ref);
}

PyObject *WeakRefState::get() const{
  if(_isRealWeakRef)
  {
    if(!PyWeakref_Check(_ref))
      return Py_NewRef(Py_None);      // error!
    PyObject* obj = PyWeakref_GetObject(_ref);
    return Py_NewRef(obj);
  }
  else
  {
    // is fake weak ref (global ref)
    return Py_NewRef(_ref);
  }
}

PyObject *WeakRefState::peek() const{
  if(_isRealWeakRef)
  {
    return (PyWeakref_Check(_ref) ? PyWeakref_GetObject(_ref) : Py_None);
  }
  else
  {
    // is fake weak ref (global ref)
    return _ref;
  }
}

bool WeakRefState::isRealWeakRef() const {
  return _isRealWeakRef;
}

void WeakRefState::reset() {
  Py_XDECREF(_ref);
  _ref = Py_NewRef(Py_None);
  _isRealWeakRef = false;
}

void WeakRefState::dtor(bool eraseFromList) {
  if(!_ref)
    return;     // is destroyed
  if(eraseFromList)
    PyEngine::refsKeeper.remove(this);
  Py_XDECREF(_ref);
  _ref = nullptr;
  _isRealWeakRef = false;
}

}   // namespace py_backend
}