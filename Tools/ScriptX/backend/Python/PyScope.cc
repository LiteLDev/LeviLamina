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

#include "PyScope.h"
#include "PyEngine.h"
#include <iostream>

SCRIPTX_BEGIN_IGNORE_DEPRECARED

// Reference
// https://docs.python.org/3.8/c-api/init.html#thread-state-and-the-global-interpreter-lock
// https://stackoverflow.com/questions/26061298/python-multi-thread-multi-interpreter-c-api
// https://stackoverflow.com/questions/15470367/pyeval-initthreads-in-python-3-how-when-to-call-it-the-saga-continues-ad-naus
//
// Because python's bad support of sub-interpreter, we need to manage GIL & thread state manually.
// * There is no any documentation or post to explain the logic about this. We have explored it
// by ourselves, so we describe the logic in detail below.
//
// - One PyEngine "is" a sub-interpreter, and owns a TLS storage called engine.subThreadState_, 
//   which stores his own current thread state on each thread.
// - This "thread state" works like "CPU Context". When changing engine, "context" need to be
//   switched to correct target thread state.
//
// - One sub-interpreter may own more than one thread states. Each thread state corresponds to 
//   one thread.
// - When a sub-interpreter is created, a thread state for current thread will be created too. 
// - In default, this sub-interpreter can only be used in the thread which he was created. 
//   When we need to use this sub-interpreter in a new thread, we need to create thread state
//   for it manually in that new thread before using it.
//
// - Implementations: 
//   1. When entering a new EngineScope, first check that if there is another existing thread 
//     state loaded now (For example, put by another engine before). If exists, put the old one
//     into prevThreadState.
//   2. Then check that if an thread state stored in engine's TLS storage subThreadState_.
//   - If found a stored thread state, just load it.
//   - If the TLS storage is empty, it means that this engine enters this thread for the first 
//     time. So create a new thread state for it manually (and load it too), then save it 
//     to TLS storage subThreadState_.
//   3. When exiting an EngineScope, if old thread state is saved before, it will be recovered.
//   
// - Locker logic:
//   1. When create a PyEngine:
//      - Call waitToEnterEngine() -> Create interpreter and threadstate -> Call finishExitEngine()
//   2. When enter an EngineScope: 
//      - Call waitToEnterEngine() -> Create or switch threadstate -> Call finishEngineSwitch()
//      - After this GIL is held and engineLocker of this engine is locked. "engineLocker" prevents 
//        current engine to be entered in another thread at the same time.
//   3. When exit an EngineScope:
//      - Call waitToExitEngine() -> Switch threadstate -> Call finishExitEngine()
//      - If this is the last PyEngine to exit, the GIL will be released after this exit.
//   4. ExitEngineScope: (the opposite logic of EngineScope above)
//   5. When destroy a PyEngine:
//      - Call startDestroyEngine() -> Destroy interpreter and all threadstates -> Call endDestroyEngine()
//   6. Read more docs about EngineLockerHelper in "PyHelper.h"
// 


namespace script::py_backend {

EngineScopeImpl::EngineScopeImpl(PyEngine &engine, PyEngine * enginePtr) {
  // wait to enter engine
  engine.engineLockHelper.waitToEnterEngine();

  // Check if there is another existing thread state (put by another engine)   
  // PyThreadState_GET will cause FATAL error if oldState is NULL
  // so here get & check oldState by swap twice
  PyThreadState* oldState = PyThreadState_Swap(NULL);
  bool isOldStateNotEmpty = oldState != NULL;
  PyThreadState_Swap(oldState);
  if (isOldStateNotEmpty) {
      // Another thread state is loaded, record it in prev thread state
      prevThreadState = PyThreadState_Swap(NULL);
  }
  else
  {
    // Why empty? At least will be main interperter thread state!
    throw Exception("Bad previous thread state!");
  }

  // Get current engine's thread state in TLS storage
  PyThreadState *currentThreadState = engine.subThreadStateInTLS_.get();
  if (currentThreadState == NULL) {
    // Sub-interpreter enter new thread first time with no thread state
    // Create a new thread state for the the sub interpreter in the new thread
    currentThreadState = PyThreadState_New(engine.subInterpreterState_);
    // Save to TLS storage
    engine.subThreadStateInTLS_.set(currentThreadState);

    // Load the thread state created just now
    PyThreadState_Swap(currentThreadState);
  }
  else
  {
    // Thread state of this engine on current thread is inited & saved in TLS
    // Just load it
    PyThreadState_Swap(currentThreadState);
  }

  engine.engineLockHelper.finishEngineSwitch();
  // GIL locked & correct thread state here
  // GIL will keep locked until last EngineScope exit
}

EngineScopeImpl::~EngineScopeImpl() {
  PyEngine* engine = EngineScope::currentEngineAs<PyEngine>();
  engine->engineLockHelper.waitToExitEngine();

  // Set old thread state stored back
  PyThreadState_Swap(prevThreadState);

  engine->engineLockHelper.finishExitEngine();
}

ExitEngineScopeImpl::ExitEngineScopeImpl(PyEngine &engine)
 :enteredEngine(&engine)
 {
  engine.engineLockHelper.waitToExitEngine();
  // Store entered thread state
  enteredThreadState = PyThreadState_Swap(engine.mainThreadState_);
  engine.engineLockHelper.finishExitEngine();
}

ExitEngineScopeImpl::~ExitEngineScopeImpl() {
  enteredEngine->engineLockHelper.waitToEnterEngine();
  // Set old thread state stored back
  PyThreadState_Swap(enteredThreadState);
  enteredEngine->engineLockHelper.finishEngineSwitch();
}

}  // namespace script::py_backend

SCRIPTX_END_IGNORE_DEPRECARED