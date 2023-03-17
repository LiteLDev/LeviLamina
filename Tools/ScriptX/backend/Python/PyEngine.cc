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

#include "PyEngine.h"
#include "PyInternalHelper.h"
#include "PyRuntimeSettings.h"
#include <cstring>
#include "../../src/Utils.h"
#include "../../src/utils/Helper.hpp"
#include "../../src/foundation.h"

SCRIPTX_BEGIN_IGNORE_DEPRECARED

namespace script::py_backend {

PyEngine::PyEngine(std::shared_ptr<utils::MessageQueue> queue)
    : queue_(queue ? std::move(queue) : std::make_shared<utils::MessageQueue>()) {
  if (Py_IsInitialized() == 0)
  {
    // Not initialized. So no thread state at this time

    // Set interpreter configs
    Py_SetStandardStreamEncoding("utf-8", nullptr);
    py_runtime_settings::initDefaultPythonRuntimeSettings();

    // Init main interpreter
    Py_InitializeEx(0);
    // Init threading environment
    PyEval_InitThreads();
    // Initialize types
    namespaceType_ = makeNamespaceType();
    staticPropertyType_ = makeStaticPropertyType();
    defaultMetaType_ = makeDefaultMetaclass();
    weakRefGcEmptyCallback = makeWeakRefGcEmptyCallback();

    PyEval_ReleaseLock();   // release GIL

    // PyThreadState_GET will cause FATAL error if oldState is NULL
    // so here get mainThreadState_ by swap twice
    mainThreadState_ = PyThreadState_Swap(NULL);
    PyThreadState_Swap(mainThreadState_);

    // After this, thread state of main interpreter is loaded
  }

  // Resume main thread state (to execute Py_NewInterpreter)
  PyThreadState* oldState = PyThreadState_Swap(mainThreadState_);

  // If GIL is released, lock it
  if (PyEngine::engineEnterCount_ == 0) {
    PyEval_AcquireLock();
  }

  // Create new interpreter
  PyThreadState* newSubState = Py_NewInterpreter();
  if (!newSubState) {
    throw Exception("Fail to create sub interpreter");
  }
  subInterpreterState_ = newSubState->interp;

  // Create exception class
  scriptxExceptionTypeObj = (PyTypeObject*)PyErr_NewExceptionWithDoc("Scriptx.ScriptxException",
    "Exception from ScriptX", PyExc_Exception, NULL);

  // If GIL is released before, unlock it
  if (PyEngine::engineEnterCount_ == 0) {
    PyEval_ReleaseLock();
  }
  // Store created new sub thread state & recover old thread state stored before
  subThreadStateInTLS_.set(PyThreadState_Swap(oldState));
}

PyEngine::PyEngine() : PyEngine(nullptr) {}

PyEngine::~PyEngine() = default;

void PyEngine::destroy() noexcept {
  destroying = true;
  ScriptEngine::destroyUserData();

  {
    // EngineScope enter(this);
    messageQueue()->removeMessageByTag(this);
    messageQueue()->shutdown();
    PyEngine::refsKeeper.dtor(this);          // destroy all Global and Weak refs of current engine
  }

  if (PyEngine::engineEnterCount_ == 0) {
    // GIL is not locked. Just lock it
    PyEval_AcquireLock();
  }

  // =========================================
  // Attention! The logic below is partially referenced from Py_FinalizeEx and Py_EndInterpreter
  // in Python source code, so it may need to be re-adapted as the CPython backend's version 
  // is updated.
  
  // Swap to correct target thread state
  PyThreadState* tstate = subThreadStateInTLS_.get();
  PyInterpreterState *interp = tstate->interp;
  PyThreadState* oldThreadState = PyThreadState_Swap(tstate);

  // Set finalizing sign
  SetPyInterpreterStateFinalizing(interp);

  /* Destroy the state of all threads of the interpreter, except of the
    current thread. In practice, only daemon threads should still be alive,
    except if wait_for_thread_shutdown() has been cancelled by CTRL+C.
    Clear frames of other threads to call objects destructors. Destructors
    will be called in the current Python thread. */
  _PyThreadState_DeleteExcept(tstate);

  PyGC_Collect();

  // End sub-interpreter
  Py_EndInterpreter(tstate);

  // Recover old thread state
  PyThreadState_Swap(oldThreadState);

  // =========================================

  // Even if all engine is destroyed, there will be main interpreter thread state loaded.
  // So ReleaseLock will not cause any problem.
  if (PyEngine::engineEnterCount_ == 0) {
      // Unlock the GIL because it is not locked before
      PyEval_ReleaseLock();
  }
}

Local<Value> PyEngine::get(const Local<String>& key) {
  PyObject* item = getDictItem(getGlobalDict(), key.toStringHolder().c_str());
  if (item)
    return py_interop::toLocal<Value>(item);
  else
    return py_interop::toLocal<Value>(Py_None);
}

void PyEngine::set(const Local<String>& key, const Local<Value>& value) {
  setDictItem(getGlobalDict(), key.toStringHolder().c_str(), value.val_);
  //Py_DECREF(value.val_);
}

Local<Value> PyEngine::eval(const Local<String>& script) { return eval(script, Local<Value>()); }

Local<Value> PyEngine::eval(const Local<String>& script, const Local<String>& sourceFile) {
  return eval(script, sourceFile.asValue());
}

Local<Value> PyEngine::eval(const Local<String>& script, const Local<Value>& sourceFile) {
  // Only if code to eval is an expression (no "\n", no "=") can eval() return its result,
  // otherwise eval() will always return None. It is the deliberate design of CPython.
  // See more info at docs/en/Python.md
  Tracer tracer(this, "PyEngine::eval");
  const char* source = script.toStringHolder().c_str();
  bool oneLine = true;
  if (strchr(source, '\n') != nullptr)
    oneLine = false;
  else if (strstr(source, " = ") != nullptr)
    oneLine = false;
  PyObject* result = PyRun_StringFlags(source, oneLine ? Py_eval_input : Py_file_input,
                                       getGlobalDict(), nullptr, nullptr);
  checkAndThrowError();
  return py_interop::asLocal<Value>(result);
}

Local<Value> PyEngine::loadFile(const Local<String>& scriptFile) {
  Tracer tracer(this, "PyEngine::loadFile");
  std::string sourceFilePath = scriptFile.toString();
  if (sourceFilePath.empty()) {
    throw Exception("script file no found");
  }
  Local<Value> content = internal::readAllFileContent(scriptFile);
  if (content.isNull()) {
    throw Exception("can't load script file");
  }

  std::size_t pathSymbol = sourceFilePath.rfind("/");
  if (pathSymbol != std::string::npos) {
    sourceFilePath = sourceFilePath.substr(pathSymbol + 1);
  } else {
    pathSymbol = sourceFilePath.rfind("\\");
    if (pathSymbol != std::string::npos) sourceFilePath = sourceFilePath.substr(pathSymbol + 1);
  }
  Local<String> sourceFileName = String::newString(sourceFilePath);
  return eval(content.asString(), sourceFileName);
}

std::shared_ptr<utils::MessageQueue> PyEngine::messageQueue() { return queue_; }

void PyEngine::gc() { 
  if(isDestroying())
    return;
  PyGC_Collect(); 
}

void PyEngine::adjustAssociatedMemory(int64_t count) {}

ScriptLanguage PyEngine::getLanguageType() { return ScriptLanguage::kPython; }

std::string PyEngine::getEngineVersion() { return Py_GetVersion(); }

bool PyEngine::isDestroying() const { return destroying; }

}  // namespace script::py_backend

SCRIPTX_END_IGNORE_DEPRECARED
