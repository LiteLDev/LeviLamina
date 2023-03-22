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

#include <cstddef>
#include <optional>
#include <thread>
#include <vector>
#include "foundation.h"
#include "utils/TypeInformation.h"
#include SCRIPTX_BACKEND(Scope.h)
#include SCRIPTX_BACKEND(Engine.h)

namespace script {

/**
 * Enter a ScriptEngine.
 * When enter is nested it would firstly exit previous,
 * then enter to new engine.
 *
 * note: when enter EngineScope with a destroying engine, it throws std::logic_error
 */
class EngineScope final {
 private:
  /**
   * //prototype:
   * // the impl scope must allow nested usage, like
   * // EngineScopeImpl scope1();
   * // {
   * //       EngineScopeImpl scope2();
   * //       // do sth
   * // }
   *
   * class EngineScopeImpl {
   * public:
   *      EngineScopeImpl(EngineImpl& engine, EngineImpl* prev) {
   *          // enter engine;
   *      }
   *
   *      ~EngineScopeImpl() {
   *          // exit engine;
   *      }
   *};
   */
  using EngineScopeImpl = typename internal::ImplType<EngineScope>::type;
  using EngineImpl = typename internal::ImplType<ScriptEngine>::type;

  bool needEnter_;
  std::optional<EngineScopeImpl> engineScopeImpl_;
  // store the impl pointer not ScriptEngine* to avoid too much dynamic_cast
  // C++ dynamic_cast can be slow
  EngineImpl* engine_;
  EngineScope* prev_;

 public:
  explicit EngineScope(ScriptEngine& engine);

  explicit EngineScope(ScriptEngine* engine);

  explicit EngineScope(EngineImpl& engine);

  explicit EngineScope(EngineImpl* engine);

  ~EngineScope();

  /**
   * @return current active engine in current thread (activated by EngineScope)
   * or nullptr when none.
   */
  static ScriptEngine* currentEngine();

  template <typename T>
  static T* currentEngineAs() {
    auto currentScope = getCurrent();
    if (currentScope) {
      return internal::scriptDynamicCast<T*>(currentScope->engine_);
    }
    return nullptr;
  }

  /**
   * @return current active engine in current thread (activated by EngineScope)
   * or abort when none.
   */
  static ScriptEngine& currentEngineChecked();

  template <typename T>
  static T& currentEngineCheckedAs() {
    T* engine = nullptr;

    auto currentScope = getCurrent();
    if (currentScope) {
      engine = internal::scriptDynamicCast<T*>(currentScope->engine_);
    }

    ensureEngineScope(engine);

    return *engine;  // NOLINT
  }

  SCRIPTX_DISALLOW_COPY_AND_MOVE(EngineScope);

  SCRIPTX_DISALLOW_NEW();

 private:
  struct InternalEnterEngine {};
  explicit EngineScope(InternalEnterEngine, EngineImpl* engine, bool needEnter = true);

  // the current EngineScope in stack, it's a thread local
  static EngineScope* getCurrent();

  static void ensureEngineScope(void* engine);

  friend class ScriptEngine;
  friend typename internal::ImplType<ScriptEngine>::type;
  friend class StackFrameScope;
  friend EngineScopeImpl;
  friend ExitEngineScope;
};

/**
 * Used to be nested inside engine scope,
 * to let you temporarily leave engine scope inside this scope,
 * so that other thread maybe entered to the same engine.
 */
class ExitEngineScope final {
  using EngineImpl = typename internal::ImplType<ScriptEngine>::type;

  /**
   *
   * class ExitEngineScopeImpl {
   * public:
   *      ExitEngineScopeImpl(ScriptEngine&) {
   *          // exit current entered engine
   *      }
   *
   *      ~ExitEngineScopeImpl() {
   *          // reenter engine;
   *      }
   *};
   */
  using ExitEngineScopeImpl = typename internal::ImplType<ExitEngineScope>::type;

  struct ExitEngineHolder {
    std::optional<ExitEngineScopeImpl> exitEngineHolder_;

    explicit ExitEngineHolder(EngineImpl*);
  };

  ExitEngineHolder exitEngineScopeImpl_;
  EngineScope nullEngineScope_;

 public:
  ExitEngineScope();

  ~ExitEngineScope();

  SCRIPTX_DISALLOW_COPY_AND_MOVE(ExitEngineScope);
  SCRIPTX_DISALLOW_NEW();

 private:
  friend class ScriptEngine;
  friend typename internal::ImplType<ScriptEngine>::type;
  friend class EngineScope;
  friend class StackFrameScope;
  friend ExitEngineScopeImpl;
};

/**
 * Used to create a StackFrame to simulate a call stack.
 * All Local<T> reference are jailed inside this scope,
 * no one can escape without call the returnValue() method.
 */
class StackFrameScope final {
  using EngineImpl = typename internal::ImplType<ScriptEngine>::type;

 private:
  /**
   * // prototype:
   * // the impl scope must allow nested usage, like
   * // StackFrameScopeImpl scope1();
   * // {
   * //       StackFrameScopeImpl scope2();
   * //       // do sth
   * // }
   * class StackFrameScopeImpl {
   * public:
   *      StackFrameScopeImpl(ScriptEngineImpl&) {
   *          // enter stack;
   *      }
   *
   *      ~StackFrameScopeImpl() {
   *          // exit stack;
   *      }
   *
   *      template<typename T>
   *      Local<T> returnValue(const Local<T> &localRef) {
   *      }
   *
   *};
   */
  using StackFrameScopeImpl = typename internal::ImplType<StackFrameScope>::type;

  StackFrameScopeImpl stackFrameScopeImpl_;

 public:
  /**
   * Enter a new stack frame, assuming an EngineScope has already entered!
   * If no engine scope entered (ie. EngineScope::currentEngine() == nullptr),
   * it will abort;
   */
  StackFrameScope();

  ~StackFrameScope();

  /**
   * escape a local reference from current stack frame, so it can be returned.
   * The returnValue method can be called only once of each StackFrameScope. (you just return once).
   * @tparam T
   * @param localRef
   * @return the localRef that can be returned to outer function;
   */
  template <typename T>
  Local<T> returnValue(const Local<T>& localRef) {
    return stackFrameScopeImpl_.returnValue(localRef);
  }

  SCRIPTX_DISALLOW_COPY_AND_MOVE(StackFrameScope);

  SCRIPTX_DISALLOW_NEW();

 private:
  friend class ScriptEngine;
  friend StackFrameScopeImpl;
};

}  // namespace script
