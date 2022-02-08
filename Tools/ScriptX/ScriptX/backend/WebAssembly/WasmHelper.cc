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

#include "WasmHelper.h"
#include "../../src/Native.hpp"
#include "../../src/Scope.h"
#include "WasmEngine.hpp"
#include "WasmScope.hpp"

namespace script::wasm_backend {

static struct {
  // if there is any js exception thrown, and we should rethrow to cpp
  // the js exception is on stack top
  bool hasPendingJsException_ = false;

  // if there is any cpp exception thrown, and we should rethrow to js
  // the cpp exception is converted to js Error and pushed onto stack top
  bool hasPendingCppException_ = false;
} kExceptionStore;

WasmEngine &currentEngine() { return EngineScope::currentEngineCheckedAs<WasmEngine>(); }

// ========== stack ===========
// emscripten's val.h is not fully developed, we use our own implementation based on lua stack
// concepts.

void invokeFunctionHelper(Stack::RawFunctionType func, void *ptr0, void *ptr1, int stackBase,
                          WasmEngine *engine) {
  try {
    // stack[0] == this
    // stack[...] -> args
    auto top = Stack::top();

    auto args = wasm_backend::WasmEngine::make<Arguments>(
        ArgumentsData{stackBase, stackBase + 1, top - stackBase, engine});

    int retIndex = Stack::pushNull();

    // this function may be directly called from JS...
    // in which case we don't have a EngineScope

    // plus: EngineScope can't escape any local object... we have to hack it
    {
      EngineScope scope(engine);
      auto ret = (*func)(args, ptr0, ptr1);
      Stack::set(retIndex, ret);
    }
  } catch (const Exception &e) {
    rethrowException(e);
  }
}

void deleteScriptClassHelper(ScriptClass *scriptClass) {
  wasm_backend::WasmEngine::doDeleteScriptClass(scriptClass);
}

extern "C" {

// exported helper function called by js
// return has return value or not
// this function is so simple, we don't need to use bind.h

// the function name is using C mangling convention by adding '_' prefix to function name.
EMSCRIPTEN_KEEPALIVE
void ScriptX_Bridge_invokeFunction(intptr_t func, intptr_t ptr0, intptr_t ptr1, int stackBase,
                                   intptr_t engine) {
  invokeFunctionHelper(reinterpret_cast<Stack::RawFunctionType>(func),
                       reinterpret_cast<void *>(ptr0), reinterpret_cast<void *>(ptr1), stackBase,
                       reinterpret_cast<WasmEngine *>(engine));
}

EMSCRIPTEN_KEEPALIVE
void ScriptX_Stack_finalizeFunction(intptr_t func) {
  delete reinterpret_cast<script::FunctionCallback *>(func);
}

EMSCRIPTEN_KEEPALIVE
void ScriptX_Native_deleteScriptClass(intptr_t scriptClass) {
  deleteScriptClassHelper(reinterpret_cast<ScriptClass *>(scriptClass));
}

EMSCRIPTEN_KEEPALIVE
intptr_t ScriptX_NativeBuffer_newSharedPtr(intptr_t ptr) {
  return reinterpret_cast<intptr_t>(
      new std::shared_ptr<void>(reinterpret_cast<void *>(ptr), [](void *ptr) { std::free(ptr); }));
}

EMSCRIPTEN_KEEPALIVE
void ScriptX_NativeBuffer_deleteSharedPtr(intptr_t sharedPtr) {
  delete reinterpret_cast<std::shared_ptr<void> *>(sharedPtr);
}
}

void rethrowException(const Exception &e) {
  kExceptionStore.hasPendingCppException_ = true;
  Stack::pushValue(e.exception());
}

void checkException() {
  if (kExceptionStore.hasPendingJsException_) {
    kExceptionStore.hasPendingJsException_ = false;
    throw Exception(Stack::topValue());
  }
}

// wrap a exception handling around EM_JS
#define CHECKED_EM_JS(ret, name, params, ...)     \
  EM_JS(ret, name, params, {                      \
    try {                                         \
      __VA_ARGS__                                 \
    } catch (e) {                                 \
      return Module._ScriptX_rethrowException(e); \
    }                                             \
  })

#define CHECKED_JS_CALL(call)               \
  auto &&ret = call;                        \
  ::script::wasm_backend::checkException(); \
  return std::move(ret)

#define CHECKED_VOID_JS_CALL(call) \
  call;                            \
  ::script::wasm_backend::checkException();

// <editor-fold desc="Emscripten JS Library">
// clang-format off

CHECKED_EM_JS(void, _ScriptX_setInternalStatePointer,
    (intptr_t hasPendingJsException, intptr_t hasPendingCppException), {
  Object.defineProperty(Module, 'SCRIPTX_HAS_PENDING_JS_EXCEPTION', {
    get() { return Module.HEAPU8[hasPendingJsException] !== 0;},
    set(has) { Module.HEAPU8[hasPendingJsException] = (has ? 1 : 0); },
    enumerable: false,
    configurable: false
  });

  Object.defineProperty(Module, 'SCRIPTX_HAS_PENDING_CPP_EXCEPTION', {
      get() { return Module.HEAPU8[hasPendingCppException] !== 0;},
      set(has) { Module.HEAPU8[hasPendingCppException] = (has ? 1 : 0); },
      enumerable: false,
      configurable: false
  });
});

EM_JS(void, _ScriptX_initJavaScriptLibrary, (), {
  // declare how js stack class should be

  class ScriptStack {
    constructor() {
      this.values = [];
    }

    push(val) {
      return this.values.push(val) - 1;
    }

    setTop(newTop) { this.values.length = newTop + 1; }

    getTop() { return this.values.length - 1; }

    getTopValue() { return this.values[this.values.length - 1]; }

    pop(count) {
      this.setTop(this.getTop() - count);
      return this.getTop();
    }

    set(atIndex, valueIndex) {
      this.values[atIndex] = this.values[valueIndex];
    }
  };
  Module.SCRIPTX_STACK = new ScriptStack();

  // https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/globalThis
  Module._ScriptX_getGlobalObject = function () {
    const ret =  globalThis || self || window || global;

    if (typeof ret !== 'object') {
      ret = (new Function("return this;"))();
    }

    if (typeof ret !== 'object') {
      throw TypeError("can't find global");
    }
    return ret;
  };

  Module._ScriptX_rethrowException = function(e) {
    Module.SCRIPTX_HAS_PENDING_JS_EXCEPTION = true;
    Module.SCRIPTX_STACK.push(e);
    return -1;
  };

  Module._ScriptX_checkException = function() {
    if (Module.SCRIPTX_HAS_PENDING_CPP_EXCEPTION) {
      Module.SCRIPTX_HAS_PENDING_CPP_EXCEPTION = false;
      throw Module.SCRIPTX_STACK.getTopValue();
    }
  };

  Module._ScriptX_TypedArray_memcpy = function(from, to) {
    function makeInt8Array(what) {
      if (what instanceof Int8Array) {
        return what;
      } else if (what instanceof ArrayBuffer) {
        return new Int8Array(what);
      } else  {
        // TypedArray || DataView || ScriptX.SharedByteBuffer
        return new Int8Array(what.buffer, what.byteOffset, what.byteLength);
      }
    }
    makeInt8Array(to).set(makeInt8Array(from));
  };
  Module._ScriptX_SharedByteBuffer = function(byteOffset, byteLength, sharedPtr) {
    // ctor1:  ScriptX.SharedByteBuffer(bufferSize)
    // ctor2:  ScriptX.SharedByteBuffer(...) internally used

    if (!(this instanceof Module._ScriptX_SharedByteBuffer)) {
      throw Error("must call as constructor, with new operator!");
    }

    if (arguments.length == 1 && typeof arguments[0] === 'number') {
      // ctor 1
      byteLength = arguments[0];
      byteOffset = Module._malloc(byteLength);
      sharedPtr = Module._ScriptX_NativeBuffer_newSharedPtr(byteOffset);
    }

    // ctor 2
    if (!(typeof byteOffset === 'number' &&
          typeof byteLength === 'number' &&
          typeof sharedPtr === 'number')) {
      throw TypeError("use factory method to create SharedByteBuffer");
    }

    const sym = Module._ScriptX_Native_Symbol_SharedByteBuffer_ptr;
    Object.defineProperty(this, 'byteOffset', {
        value: byteOffset,
        enumerable: true
    });
    Object.defineProperty(this, 'byteLength', {
        value: byteLength,
        enumerable: true
    });
    Object.defineProperty(this, sym, {
        value: sharedPtr
    });
    Object.defineProperty(this, 'buffer', {
        get: function() { return Module.HEAP8.buffer; },
        enumerable: true,
        configurable: false
    });

    this.destroy = function() {
      const sharedPtrValue = this[sym];

      // sentence this object DEATH
      this[sym] = 0;
      this.death = true;

      Module._ScriptX_NativeBuffer_deleteSharedPtr(sharedPtrValue);
    };
  };

  Module._ScriptX_Native_destroyInstanceInternal = function(instance) {
    if (typeof instance !== 'object') return;
    const ptr = instance[Module._ScriptX_Native_Symbol_instance];
    if (ptr) {
      _ScriptX_Native_deleteScriptClass(ptr);

      // sentence this object DEATH
      instance[Module._ScriptX_Native_Symbol_InternalStore] = undefined;
      instance[Module._ScriptX_Native_Symbol_classDefine] = undefined;
      instance[Module._ScriptX_Native_Symbol_instance] = undefined;
      Object.setPrototypeOf(instance, {});
      instance.death = true;
    }
  };

  // export to global namespace
  const exports = {};
  Module._ScriptX_getGlobalObject().ScriptX = exports;
  exports.SharedByteBuffer = Module._ScriptX_SharedByteBuffer;
  exports.destroyScriptClass = Module._ScriptX_Native_destroyInstanceInternal;
  exports.destroySharedByteBuffer = function (sbb) {
    if (sbb instanceof Module._ScriptX_SharedByteBuffer) sbb.destroy();
  };

  Module._ScriptX_Global_ref = {};
  Module._ScriptX_Global_ref_key = 0;
  Module._ScriptX_Weak_ref = {};
  Module._ScriptX_Weak_ref_key = 0;
  Module._ScriptX_Global_getMap = function(isWeak) {
    if (isWeak) {
      return Module._ScriptX_Weak_ref;
    } else {
      return Module._ScriptX_Global_ref;
    }
  };
  Module._ScriptX_Global_newKey = function(isWeak) {
    const INT_MAX = 2147483647;
    let ret = 0;
    if (isWeak) {
      ret = Module._ScriptX_Weak_ref_key++;
      if (ret < 0 || ret >= INT_MAX) {
        Module._ScriptX_Weak_ref_key = 0;
        ret =  0;
      }
    } else {
      ret = Module._ScriptX_Global_ref_key++;
      if (ret < 0 || ret >= INT_MAX) {
        Module._ScriptX_Global_ref_key = 0;
        ret =  0;
      }
    }
    return ret;
  };

  Module._ScriptX_Native_Symbol_instance =
      Symbol('ScriptX_Native_Symbol_instance');
  Module._ScriptX_Native_Symbol_classDefine =
      Symbol('ScriptX_Native_Symbol_classDefine');
  Module._ScriptX_Native_Symbol_CppNewMark =
      Symbol('ScriptX_Native_Symbol_CppNewMark');
  Module._ScriptX_Native_Symbol_InternalStore =
      Symbol('ScriptX_Native_Symbol_InternalStore');
  Module._ScriptX_Native_Symbol_SharedByteBuffer_ptr =
      Symbol('ScriptX_Native_Symbol_SharedByteBuffer_ptr');
});

CHECKED_EM_JS(int, _ScriptX_Stack_top, (),
      { return Module.SCRIPTX_STACK.getTop(); });

CHECKED_EM_JS(int, _ScriptX_Stack_setTop, (int top),
      { return Module.SCRIPTX_STACK.setTop(top); });

CHECKED_EM_JS(void, _ScriptX_Stack_set, (int atIndex, int valueIndex),
      { Module.SCRIPTX_STACK.set(atIndex, valueIndex); });

CHECKED_EM_JS(int, _ScriptX_Stack_newObject, (),
      { return Module.SCRIPTX_STACK.push({}); });

CHECKED_EM_JS(int, _ScriptX_Stack_newObjectArgs, (int type, int stackBase), {
  const stack = Module.SCRIPTX_STACK;

  const Type = stack.values[type];
  const args = [];
  for (let i = stackBase; i <= stack.getTop(); i++) {
    args.push(stack.values[i]);
  }

  // clear args
  stack.setTop(stackBase - 1);

  // use spread operator
  // https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Spread_syntax
  const ret = new Type(...args);
  return stack.push(ret);
});

CHECKED_EM_JS(int, _ScriptX_Stack_newArray, (int size), {
    const arr = [];
    arr.length = size;
    return Module.SCRIPTX_STACK.push(arr);
});

CHECKED_EM_JS(int, _ScriptX_Stack_newStringLen, (const char* string, int len), {
  return Module.SCRIPTX_STACK.push(UTF8ToString(
              string,
              len,
              len));
});

CHECKED_EM_JS(int, _ScriptX_Stack_newNumInt, (int num),
      { return Module.SCRIPTX_STACK.push(num); });

CHECKED_EM_JS(int, _ScriptX_Stack_newNumDouble, (double num),
      { return Module.SCRIPTX_STACK.push(num); });

// Local<Value> (*func)(const Arguments &, void *, void *)
CHECKED_EM_JS(int, _ScriptX_Stack_newRawFunction,
    (intptr_t func, intptr_t ptr0, intptr_t ptr1,
        WasmEngine* engine, bool checkForConstructorCall), {
  // use IIFE to erase Function.name for wrapper
  let wrapper = (function() { return function() {
    // check is constructor call
    if (checkForConstructorCall && !(this instanceof wrapper)) {
        throw Error("constructor can't be call as normal function");
    }
    const stack = Module.SCRIPTX_STACK;
    const stackBase = stack.getTop();
    try {
      const newBase = stack.push(this);
      for (let arg of arguments) {
        stack.push(arg);
      }

      // stack[0] == this
      // stack[...] -> args
      Module._ScriptX_Bridge_invokeFunction(func, ptr0, ptr1, newBase, engine);
      Module._ScriptX_checkException();

      return stack.getTopValue();
    } finally {
      // restore stack
      stack.setTop(stackBase);
    }
  }})();

  return Module.SCRIPTX_STACK.push(wrapper);
});

CHECKED_EM_JS(int, _ScriptX_callFunction, (int stackBase), {
  const stack = Module.SCRIPTX_STACK;
  const func = stack.values[stackBase];
  const thiz = stack.values[stackBase + 1];
  const args = [];
  for (let i = stackBase + 2; i <= stack.getTop(); i++) {
    args.push(stack.values[i]);
  }
  // pop args
  stack.setTop(stackBase - 1);

  const ret = func.apply(thiz, args);
  return stack.push(ret);
});

CHECKED_EM_JS(int, _ScriptX_Stack_newBoolean, (int boolean),
      { return Module.SCRIPTX_STACK.push(boolean !== 0); });

CHECKED_EM_JS(int, _ScriptX_Stack_newError, (int message), {
  const stack = Module.SCRIPTX_STACK;
  const err = new Error(stack.values[message] || "unknown error");
  return stack.push(err);
});

CHECKED_EM_JS(int, _ScriptX_Stack_pushArrayBuffer, (size_t length), {
  const stack = Module.SCRIPTX_STACK;
  return stack.push(new ArrayBuffer(length));
});

CHECKED_EM_JS(int, _ScriptX_Stack_pushValue, (int index), {
  const stack = Module.SCRIPTX_STACK;
  return stack.push(stack.values[index]);
});

CHECKED_EM_JS(int, _ScriptX_Stack_pop, (int count), {
  const stack = Module.SCRIPTX_STACK;
  return stack.pop(count);
});

CHECKED_EM_JS(bool, _ScriptX_Stack_isObject, (int index), {
  const stack = Module.SCRIPTX_STACK;
  return stack.values[index] instanceof Object;
});

CHECKED_EM_JS(bool, _ScriptX_Stack_isArray, (int index), {
  const stack = Module.SCRIPTX_STACK;
  return Array.isArray(stack.values[index]);
});

CHECKED_EM_JS(bool, _ScriptX_Stack_isString, (int index), {
  const stack = Module.SCRIPTX_STACK;
  return typeof stack.values[index] == "string";
});

CHECKED_EM_JS(bool, _ScriptX_Stack_isNum, (int index), {
  const stack = Module.SCRIPTX_STACK;
  return typeof stack.values[index] == "number";
});

CHECKED_EM_JS(bool, _ScriptX_Stack_isBoolean, (int index), {
  const stack = Module.SCRIPTX_STACK;
  return typeof stack.values[index] == "boolean";
});

CHECKED_EM_JS(bool, _ScriptX_Stack_isFunction, (int index), {
  const stack = Module.SCRIPTX_STACK;
  return stack.values[index] instanceof Function;
});

CHECKED_EM_JS(bool, _ScriptX_Stack_isByteBuffer, (int index), {
  const stack = Module.SCRIPTX_STACK;
  const val = stack.values[index];
  return val instanceof ArrayBuffer ||
            ArrayBuffer.isView(val) ||
            val instanceof Module._ScriptX_SharedByteBuffer;
});

CHECKED_EM_JS(bool, _ScriptX_Stack_isNullOrUndefined, (int index), {
  const stack = Module.SCRIPTX_STACK;
  const value = stack.values[index];
  return value === null || value === undefined;
});

CHECKED_EM_JS(bool, _ScriptX_Stack_isUnsupported, (int index), {
  const stack = Module.SCRIPTX_STACK;
  const val = stack.values[index];
  return !(
            val === null ||
            val === undefined ||
            val instanceof Object ||
            Array.isArray(val) ||
            typeof val === 'string' ||
            typeof val === 'number' ||
            typeof val === 'boolean' ||
            val instanceof Function ||
            val instanceof ArrayBuffer ||
            ArrayBuffer.isView(val));
});

CHECKED_EM_JS(int, _ScriptX_Stack_toString, (int index), {
  const stack = Module.SCRIPTX_STACK;
  const val = stack.values[index];
  let str;
  if (val === undefined) {
    str = typeof val;
  } else if (val === null) {
    str = 'null';
  } else if (val.toString) {
    str = val.toString();
  }

  return stack.push(str);
});

CHECKED_EM_JS(bool, _ScriptX_Stack_equals, (int lhs, int rhs), {
  const stack = Module.SCRIPTX_STACK;
  return stack.values[lhs] === stack.values[rhs];
});

CHECKED_EM_JS(int, _ScriptX_Stack_objectGet, (int obj, int key), {
  const stack = Module.SCRIPTX_STACK;
  obj = stack.values[obj];
  const ret = obj[stack.values[key]];
  return stack.push(ret);
});

CHECKED_EM_JS(void, _ScriptX_Stack_objectSet, (int obj, int key, int value), {
  const stack = Module.SCRIPTX_STACK;
  obj = stack.values[obj];
  key = stack.values[key];
  value = stack.values[value];
  obj[key] = value;
});

CHECKED_EM_JS(void, _ScriptX_Stack_objectRemove, (int obj, int key), {
  const stack = Module.SCRIPTX_STACK;
  obj = stack.values[obj];
  key = stack.values[key];
  delete obj[key];
});

CHECKED_EM_JS(int, _ScriptX_Stack_objectHas, (int obj, int key), {
  const stack = Module.SCRIPTX_STACK;
  obj = stack.values[obj];
  key = stack.values[key];
  return typeof obj == "object" && obj.hasOwnProperty(key);
});

CHECKED_EM_JS(int, _ScriptX_Stack_objectInstanceOf, (int obj, int who), {
  const stack = Module.SCRIPTX_STACK;
  obj = stack.values[obj];
  who = stack.values[who];
  return obj instanceof who;
});

CHECKED_EM_JS(int, _ScriptX_Stack_objectGetKeys, (int obj), {
  const stack = Module.SCRIPTX_STACK;
  obj = stack.values[obj];
  const keys = Object.getOwnPropertyNames(obj);
  return stack.push(keys);
});

CHECKED_EM_JS(int, _ScriptX_Stack_arrayGet, (int array, int index), {
  const stack = Module.SCRIPTX_STACK;
  array = stack.values[array];
  const ret = array[index];
  return stack.push(ret);
});

CHECKED_EM_JS(void, _ScriptX_Stack_arraySet, (int array, int index, int valueIndex), {
  const stack = Module.SCRIPTX_STACK;
  array = stack.values[array];
  array[index] = stack.values[valueIndex];
});

CHECKED_EM_JS(int, _ScriptX_Stack_arrayLength, (int array), {
  const stack = Module.SCRIPTX_STACK;
  return stack.values[array].length;
});

CHECKED_EM_JS(void, _ScriptX_Stack_arrayClear, (int array), {
  const stack = Module.SCRIPTX_STACK;
  stack.values[array].length = 0;
});

CHECKED_EM_JS(int32_t, _ScriptX_Stack_toNumInt32, (int num), {
  const stack = Module.SCRIPTX_STACK;
  num = stack.values[num];
  return num
});

CHECKED_EM_JS(int64_t, _ScriptX_Stack_toNumInt64, (int num), {
  const stack = Module.SCRIPTX_STACK;
  num = stack.values[num];
  return num
});

CHECKED_EM_JS(float, _ScriptX_Stack_toNumFloat, (int num), {
  const stack = Module.SCRIPTX_STACK;
  num = stack.values[num];
  return num
});

CHECKED_EM_JS(double, _ScriptX_Stack_toNumDouble, (int num), {
  const stack = Module.SCRIPTX_STACK;
  num = stack.values[num];
  return num
});

CHECKED_EM_JS(bool, _ScriptX_Stack_toBoolean, (int index), {
  const stack = Module.SCRIPTX_STACK;
  return stack.values[index];
});

CHECKED_EM_JS(intptr_t, _ScriptX_Stack_toCString, (int index), {
  const stack = Module.SCRIPTX_STACK;
  let str =  stack.values[index];

  if (str === undefined) {
    str = typeof val;
  } else if (str === null) {
    str = 'null';
  } else if (str.toString) {
    str = str.toString();
  }

  const buffer = allocateUTF8(str);
  return buffer;
});

CHECKED_EM_JS(int, _ScriptX_evaluateJavaScriptCode, (int code, int source), {
  const stack = Module.SCRIPTX_STACK;
  code = stack.values[code];
  source = stack.values[source];

  const useFunction = false;
  if (useFunction) {
    let func = new Function("'use strict';" + code);
    if (typeof source === 'string') {
      const real = func;
      const wrapper = {
        [source]: function() { return real(); }
      };
      // the wrapper function has a name [source]
      func = wrapper[source];
    }
    const ret = func();
    return stack.push(ret);
  } else {
    // https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/eval
    // If you use the eval function indirectly, by invoking it via a reference other than eval,
    // as of ECMAScript 5 it works in the global scope rather than the local scope.
    const geval = eval;
    const ret = geval(code);
    return stack.push(ret);
  }
});

CHECKED_EM_JS(int, _ScriptX_Stack_getGlobal, (), {
  const globalValue = Module._ScriptX_getGlobalObject();
  return Module.SCRIPTX_STACK.push(globalValue);
});

CHECKED_EM_JS(int, _ScriptX_Stack_globalGet, (int key), {
  const globalValue = Module._ScriptX_getGlobalObject();
  const stack = Module.SCRIPTX_STACK;
  return stack.push(globalValue[stack.values[key]]);
});

CHECKED_EM_JS(void, _ScriptX_Stack_globalSet, (int key, int value), {
  const stack = Module.SCRIPTX_STACK;
  const globalValue = Module._ScriptX_getGlobalObject();
  globalValue[stack.values[key]] = stack.values[value];
});

CHECKED_EM_JS(int, _ScriptX_Global_new, (int localValueIndex, bool isWeak), {
  const stack = Module.SCRIPTX_STACK;
  const key = Module._ScriptX_Global_newKey(isWeak);
  const map = Module._ScriptX_Global_getMap(isWeak);
  map[key] = stack.values[localValueIndex];
  return key;
});

CHECKED_EM_JS(int, _ScriptX_Global_dup, (int key, bool isFromWeak, bool isToWeak), {
  const fromMap = Module._ScriptX_Global_getMap(isFromWeak);
  const toMap = Module._ScriptX_Global_getMap(isToWeak);
  const newKey = Module._ScriptX_Global_newKey(isToWeak);

  toMap[newKey] = fromMap[key];
  return newKey;
});

CHECKED_EM_JS(void, _ScriptX_Global_delete, (int key, bool isWeak), {
  const map = Module._ScriptX_Global_getMap(isWeak);
  delete map[key];
});

CHECKED_EM_JS(int, _ScriptX_Global_get, (int key, bool isWeak), {
  const stack = Module.SCRIPTX_STACK;
  const map = Module._ScriptX_Global_getMap(isWeak);
  const value = map[key];
  return stack.push(value);
});

CHECKED_EM_JS(void, _ScriptX_Native_defineProperty,
    (int obj, int name, int getter, int setter), {
  const stack = Module.SCRIPTX_STACK;
  obj = stack.values[obj];
  name = stack.values[name];
  getter = stack.values[getter] || function() {};
  setter = stack.values[setter] || function() {};

  Object.defineProperty(obj, name, {
      get: getter,
      set: setter,
      enumerable: true,
      configurable: true
  });
});

CHECKED_EM_JS(int, _ScriptX_Native_getNamespaceForRegister, (int nameSpace), {
  try {
    const globalValue = Module._ScriptX_getGlobalObject();
    const stack = Module.SCRIPTX_STACK;
    nameSpace = stack.values[nameSpace];

    let obj = globalValue;
    if (nameSpace && nameSpace !== "") {
      let segs = nameSpace.split('.');
      for (let s of segs) {
        let n = obj[s];
        if (!(n instanceof Object)) {
          if (n === undefined || n === null) {
            n = {};
            obj[s] = n;
          } else {
            throw Error("already has a non object value");
          }
        }
        obj = n;
      }
    }
    return stack.push(obj);
  } catch (e) {
    console.log("failed to getNamespaceForRegister [" + nameSpace + "] " + e);
    return -1;
  }
});

CHECKED_EM_JS(void, _ScriptX_Native_setInternalState,
    (int obj, intptr_t classDefine, intptr_t instance), {
  const stack = Module.SCRIPTX_STACK;
  obj = stack.values[obj];
  obj[Module._ScriptX_Native_Symbol_instance] = instance;
  obj[Module._ScriptX_Native_Symbol_classDefine] = classDefine;
});

CHECKED_EM_JS(intptr_t, _ScriptX_Native_getInternalStateInstance, (int obj), {
  const stack = Module.SCRIPTX_STACK;
  obj = stack.values[obj];
  if (!(obj instanceof Object)) {
    return 0;
  }
  return obj[Module._ScriptX_Native_Symbol_instance];
});

CHECKED_EM_JS(intptr_t, _ScriptX_Native_getInternalStateClassDefine, (int obj), {
  const stack = Module.SCRIPTX_STACK;
  obj = stack.values[obj];
  if (!(obj instanceof Object)) {
    return 0;
  }
  return obj[Module._ScriptX_Native_Symbol_classDefine];
});

CHECKED_EM_JS(int, _ScriptX_Native_pushCppNewMark, (), {
  const stack = Module.SCRIPTX_STACK;
  return stack.push(Module._ScriptX_Native_Symbol_CppNewMark);
});

CHECKED_EM_JS(int, _ScriptX_Native_isCppNewMark, (int mark), {
  const stack = Module.SCRIPTX_STACK;
  return stack.values[mark] === Module._ScriptX_Native_Symbol_CppNewMark;
});

CHECKED_EM_JS(int, _ScriptX_Native_getInternalStore, (int weakThis), {
  const stack = Module.SCRIPTX_STACK;
  const sym = Module._ScriptX_Native_Symbol_InternalStore;
  const weakMap = Module._ScriptX_Global_getMap(true);
  const thiz = weakMap[weakThis];
  if (!thiz) {
    return -1;
  }
  if (typeof thiz[sym] !== 'object') {
      thiz[sym] = [];
  }
  return stack.push(thiz[sym]);
});

CHECKED_EM_JS(void, _ScriptX_Native_destoryInstance, (int scriptClassInstance), {
  const stack = Module.SCRIPTX_STACK;
  scriptClassInstance = stack.values[scriptClassInstance];

  Module._ScriptX_Native_destroyInstanceInternal(scriptClassInstance);
});

CHECKED_EM_JS(void, _ScriptX_ByteBuffer_fillBackingStore,
      (int val, intptr_t sharedPtr, intptr_t buffer), {
  const stack = Module.SCRIPTX_STACK;
  val = stack.values[val];

  if (val instanceof Module._ScriptX_SharedByteBuffer) {
    const sym = Module._ScriptX_Native_Symbol_SharedByteBuffer_ptr;
    setValue(sharedPtr, val[sym], "void*");
  } else {
    // val should be ArrayBuffer, DataView, TypedArray
    let length = val.byteLength;
    let backingBuffer = _malloc(length);
    let backingI8 = new Int8Array(Module.HEAPU8.buffer, backingBuffer, length);
    Module._ScriptX_TypedArray_memcpy(val, backingI8);
    setValue(buffer, backingBuffer, "void*");
  }
});

CHECKED_EM_JS(void, _ScriptX_ByteBuffer_fillTypeAndSize,
    (int val, intptr_t pType, intptr_t pSize), {
  const stack = Module.SCRIPTX_STACK;
  val = stack.values[val];

  let length = val.byteLength;
  setValue(pSize, length, "i32");

  // NOTE: KEEP SYNC WITH CPP
  const kUnspecified = 0x1;
  const kInt8 = 0x101;
  const kUint8 = 0x201;
  const kInt16 = 0x302;
  const kUint16 = 0x402;
  const kInt32 = 0x504;
  const kUint32 = 0x604;
  const kInt64 = 0x708;
  const kUint64 = 0x808;
  const KFloat32 = 0x904;
  const kFloat64 = 0xa08;

  let type = kUnspecified;
  if (val instanceof Int8Array) {
    type = kInt8;
  } else if (val instanceof Uint8Array || val instanceof Uint8ClampedArray) {
    type = kUint8;
  } else if (val instanceof Int16Array) {
    type = kInt16;
  } else if (val instanceof Uint16Array) {
    type = kUint16;
  } else if (val instanceof Int16Array) {
    type = kUint16;
  } else if (val instanceof Int32Array) {
    type = kInt32;
  } else if (val instanceof Uint32Array) {
    type = kUint32;
  } else if (val instanceof Float32Array) {
    type = KFloat32;
  } else if (val instanceof Float64Array) {
    type = kFloat64;
  } else if (val instanceof BigInt64Array) {
    type = kInt64;
  } else if (val instanceof BigUint64Array) {
    type = kUint64;
  }

  setValue(pType, type, "i16");
});

CHECKED_EM_JS(int, _ScriptX_ByteBuffer_fillWrapper,
      (intptr_t pointer, intptr_t sharedPtr, size_t size), {
  const stack = Module.SCRIPTX_STACK;
  const sharedByteBuffer = new Module._ScriptX_SharedByteBuffer(pointer, size, sharedPtr);
  return stack.push(sharedByteBuffer);
});

CHECKED_EM_JS(bool, _ScriptX_ByteBuffer_freeSharedByteBuffer, (int val), {
  const stack = Module.SCRIPTX_STACK;
  val = stack.values[val];
  if (val instanceof Module._ScriptX_SharedByteBuffer) {
    val.destroy();
    return true;
  }
  return false;
});

CHECKED_EM_JS(void, _ScriptX_ByteBuffer_syncData,
              (int val, intptr_t buffer, size_t length, bool isCommitOrSync), {
  const stack = Module.SCRIPTX_STACK;
  val = stack.values[val];

  // only if not shared
  if (!(val instanceof Module._ScriptX_SharedByteBuffer)) {
    let backingI8 = new Int8Array(Module.HEAPU8.buffer, buffer, length);
    if (isCommitOrSync) {
      Module._ScriptX_TypedArray_memcpy(backingI8, val);
    } else {
      Module._ScriptX_TypedArray_memcpy(val, backingI8);
    }
  }
});

CHECKED_EM_JS(bool, _ScriptX_ByteBuffer_isSharedByteBuffer, (int val), {
  const stack = Module.SCRIPTX_STACK;
  val = stack.values[val];
  return val instanceof Module._ScriptX_SharedByteBuffer;
});

// clang-format on
// </editor-fold>

namespace {

struct StaticInit {
  StaticInit() noexcept;
} dummy;

StaticInit::StaticInit() noexcept {
  _ScriptX_setInternalStatePointer(
      reinterpret_cast<intptr_t>(&kExceptionStore.hasPendingJsException_),
      reinterpret_cast<intptr_t>(&kExceptionStore.hasPendingCppException_));

  _ScriptX_initJavaScriptLibrary();
}

}  // namespace

int Stack::top() noexcept { CHECKED_JS_CALL(_ScriptX_Stack_top()); }

Local<Value> Stack::topValue() noexcept {
  CHECKED_JS_CALL(wasm_backend::WasmEngine::make<Local<Value>>(top()));
}

int Stack::setTop(int top) noexcept { CHECKED_JS_CALL(_ScriptX_Stack_setTop(top)); }

int Stack::set(int atIndex, int valueIndex) noexcept {
  _ScriptX_Stack_set(atIndex, valueIndex);
  return atIndex;
}

int Stack::set(int atIndex, const Local<Value> &value) noexcept {
  CHECKED_JS_CALL(set(atIndex, WasmEngine::refIndex(value)));
}

int Stack::newObject() { CHECKED_JS_CALL(_ScriptX_Stack_newObject()); }

int Stack::newObject(int type, int argsBase) {
  CHECKED_JS_CALL(_ScriptX_Stack_newObjectArgs(type, argsBase));
}

int Stack::newArray(size_t size) { CHECKED_JS_CALL(_ScriptX_Stack_newArray(size)); }

int Stack::newString(const char *str) { return newString(str, std::strlen(str)); }

int Stack::newString(const char *str, size_t length) {
  CHECKED_JS_CALL(_ScriptX_Stack_newStringLen(str, length));
}

int Stack::newNumber(int32_t num) { CHECKED_JS_CALL(_ScriptX_Stack_newNumInt(num)); }

int Stack::newNumber(double num) { CHECKED_JS_CALL(_ScriptX_Stack_newNumDouble(num)); }

int Stack::newBoolean(bool boolean) { CHECKED_JS_CALL(_ScriptX_Stack_newBoolean(boolean ? 1 : 0)); }

int Stack::newFunction(RawFunctionType callback, const void *ptr0, const void *ptr1,
                       bool checkForConstructorCall) {
  CHECKED_JS_CALL(_ScriptX_Stack_newRawFunction(
      reinterpret_cast<intptr_t>(callback), reinterpret_cast<intptr_t>(ptr0),
      reinterpret_cast<intptr_t>(ptr1), &currentEngine(), checkForConstructorCall));
}

int Stack::pushArrayBuffer(size_t length) {
  CHECKED_JS_CALL(_ScriptX_Stack_pushArrayBuffer(length));
}

int Stack::newError(int messageIndex) { CHECKED_JS_CALL(_ScriptX_Stack_newError(messageIndex)); }

int Stack::pushValue(int index) { CHECKED_JS_CALL(_ScriptX_Stack_pushValue(index)); }

int Stack::pushValue(const Local<Value> &ref) {
  CHECKED_JS_CALL(pushValue(WasmEngine::refIndex(ref)));
}

int Stack::pop(int count) noexcept { CHECKED_JS_CALL(_ScriptX_Stack_pop(count)); }

bool Stack::isObject(int index) noexcept { CHECKED_JS_CALL(_ScriptX_Stack_isObject(index)); }

bool Stack::isArray(int index) noexcept { CHECKED_JS_CALL(_ScriptX_Stack_isArray(index)); }

bool Stack::isString(int index) noexcept { CHECKED_JS_CALL(_ScriptX_Stack_isString(index)); }

bool Stack::isNumber(int index) noexcept { CHECKED_JS_CALL(_ScriptX_Stack_isNum(index)); }

bool Stack::isBoolean(int index) noexcept { CHECKED_JS_CALL(_ScriptX_Stack_isBoolean(index)); }

bool Stack::isFunction(int index) noexcept { CHECKED_JS_CALL(_ScriptX_Stack_isFunction(index)); }

bool Stack::isByteBuffer(int index) noexcept {
  CHECKED_JS_CALL(_ScriptX_Stack_isByteBuffer(index));
}

bool Stack::isUnsupported(int index) noexcept {
  CHECKED_JS_CALL(_ScriptX_Stack_isUnsupported(index));
}

bool Stack::isNullOrUndefined(int index) noexcept {
  CHECKED_JS_CALL(_ScriptX_Stack_isNullOrUndefined(index));
}

int Stack::toString(int index) { CHECKED_JS_CALL(_ScriptX_Stack_toString(index)); }

bool Stack::equals(int lhs, int rhs) { CHECKED_JS_CALL(_ScriptX_Stack_equals(lhs, rhs)); }

int Stack::objectGet(int obj, int key) { CHECKED_JS_CALL(_ScriptX_Stack_objectGet(obj, key)); }

void Stack::objectSet(int obj, int key, int value) {
  CHECKED_VOID_JS_CALL(_ScriptX_Stack_objectSet(obj, key, value));
}

void Stack::objectRemove(int obj, int key) {
  CHECKED_VOID_JS_CALL(_ScriptX_Stack_objectRemove(obj, key));
}

int Stack::objectHas(int obj, int key) { CHECKED_JS_CALL(_ScriptX_Stack_objectHas(obj, key)); }

int Stack::objectInstanceOf(int obj, int who) {
  CHECKED_JS_CALL(_ScriptX_Stack_objectInstanceOf(obj, who));
}

int Stack::objectGetKeys(int obj) { CHECKED_JS_CALL(_ScriptX_Stack_objectGetKeys(obj)); }

int Stack::arrayGet(int arrayIndex, int index) {
  CHECKED_JS_CALL(_ScriptX_Stack_arrayGet(arrayIndex, index));
}

void Stack::arraySet(int arrayIndex, int index, int valueIndex) {
  CHECKED_VOID_JS_CALL(_ScriptX_Stack_arraySet(arrayIndex, index, valueIndex));
}

int Stack::arrayLength(int arrayIndex) { CHECKED_JS_CALL(_ScriptX_Stack_arrayLength(arrayIndex)); }

void Stack::arrayClear(int arrayIndex) { _ScriptX_Stack_arrayClear(arrayIndex); }

float Stack::toNumberFloat(int num) { CHECKED_JS_CALL(_ScriptX_Stack_toNumFloat(num)); }
double Stack::toNumberDouble(int num) { CHECKED_JS_CALL(_ScriptX_Stack_toNumDouble(num)); }
int32_t Stack::toNumberInt32(int num) { CHECKED_JS_CALL(_ScriptX_Stack_toNumInt32(num)); }
int64_t Stack::toNumberInt64(int num) { CHECKED_JS_CALL(_ScriptX_Stack_toNumInt64(num)); }
bool Stack::toBoolean(int index) { CHECKED_JS_CALL(_ScriptX_Stack_toBoolean(index)); }
const char *Stack::toCString(int index) {
  CHECKED_JS_CALL(reinterpret_cast<const char *>(_ScriptX_Stack_toCString(index)));
}

int Stack::getGlobal() { CHECKED_JS_CALL(_ScriptX_Stack_getGlobal()); }

int Stack::globalGet(int key) { CHECKED_JS_CALL(_ScriptX_Stack_globalGet(key)); }

void Stack::globalSet(int key, int value) {
  CHECKED_VOID_JS_CALL(_ScriptX_Stack_globalSet(key, value));
}

int evaluateJavaScriptCode(int code, int source) {
  CHECKED_JS_CALL(_ScriptX_evaluateJavaScriptCode(code, source));
}

Local<Value> callFunction(const Local<Function> &func, const Local<Value> &thiz, size_t size,
                          const Local<Value> *args) {
  /*
   * call function
   * args are [stackBase, stackTop],
   * stack[0] == func
   * stack[1] == this
   * ... -> args
   *
   * pop args from stack and push result onto it.
   */

  Local<Value> ret;
  {
    StackFrameScope frame;
    int base = Stack::pushValue(func);
    Stack::pushValue(thiz);
    for (size_t i = 0; i < size; ++i) {
      Stack::pushValue(args[i]);
    }
    auto retIndex = _ScriptX_callFunction(base);
    checkException();
    ret = frame.returnValue(wasm_backend::WasmEngine::make<Local<Value>>(retIndex));
  }
  return ret;
}

int GlobalHelper::newGlobal(int localValueIndex, bool isWeak) {
  // TODO(taylor): the weak is fake for now
  // https://v8.dev/features/weak-references
  // https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/WeakRef
  CHECKED_JS_CALL(_ScriptX_Global_new(localValueIndex, isWeak));
}

int GlobalHelper::dupGlobal(int key, bool isFromWeak, bool isToWeak) {
  if (key == -1) return -1;
  CHECKED_JS_CALL(_ScriptX_Global_dup(key, isFromWeak, isToWeak));
}

void GlobalHelper::deleteGlobal(int value, bool isWeak) {
  if (value != -1) {
    CHECKED_VOID_JS_CALL(_ScriptX_Global_delete(value, isWeak));
  }
}

int GlobalHelper::getGlobal(int key, bool isWeak) {
  if (key == -1) return -1;
  CHECKED_JS_CALL(_ScriptX_Global_get(key, isWeak));
}

void NativeHelper::setInternalState(int obj, const void *classDefine, void *instance) {
  CHECKED_VOID_JS_CALL(_ScriptX_Native_setInternalState(
      obj, reinterpret_cast<uintptr_t>(classDefine), reinterpret_cast<uintptr_t>(instance)));
}

void *NativeHelper::getInternalStateInstance(int obj) {
  CHECKED_JS_CALL(reinterpret_cast<void *>(_ScriptX_Native_getInternalStateInstance(obj)));
}

void *NativeHelper::getInternalStateClassDefine(int obj) {
  CHECKED_JS_CALL(reinterpret_cast<void *>(_ScriptX_Native_getInternalStateClassDefine(obj)));
}

void NativeHelper::defineProperty(int obj, int name, int getter, int setter) {
  CHECKED_VOID_JS_CALL(_ScriptX_Native_defineProperty(obj, name, getter, setter));
}

int NativeHelper::getNamespaceForRegister(int nameSpace) {
  CHECKED_JS_CALL(_ScriptX_Native_getNamespaceForRegister(nameSpace));
}

int NativeHelper::pushCppNewMark() { CHECKED_JS_CALL(_ScriptX_Native_pushCppNewMark()); }

bool NativeHelper::isCppNewMark(int mark) { CHECKED_JS_CALL(_ScriptX_Native_isCppNewMark(mark)); }

int NativeHelper::getInternalStore(int weakThis) {
  CHECKED_JS_CALL(_ScriptX_Native_getInternalStore(weakThis));
}

void ByteBufferHelper::fillBackingStore(int val, std::shared_ptr<void> **sharedPtr, void **buffer) {
  CHECKED_VOID_JS_CALL(_ScriptX_ByteBuffer_fillBackingStore(
      val, reinterpret_cast<intptr_t>(sharedPtr), reinterpret_cast<intptr_t>(buffer)));
}

int ByteBufferHelper::fillWrapper(void *pVoid, std::shared_ptr<void> *sharedPtr, size_t size) {
  CHECKED_JS_CALL(_ScriptX_ByteBuffer_fillWrapper(reinterpret_cast<intptr_t>(pVoid),
                                                  reinterpret_cast<intptr_t>(sharedPtr), size));
}

void ByteBufferHelper::fillTypeAndSize(int val, uint16_t *pType, size_t *pSize) {
  CHECKED_VOID_JS_CALL(_ScriptX_ByteBuffer_fillTypeAndSize(val, reinterpret_cast<intptr_t>(pType),
                                                           reinterpret_cast<intptr_t>(pSize)));
}

bool ByteBufferHelper::freeSharedByteBuffer(int val) {
  CHECKED_JS_CALL(_ScriptX_ByteBuffer_freeSharedByteBuffer(val));
}

void ByteBufferHelper::commit(const Local<script::ByteBuffer> &buffer) {
  auto &&internalState = wasm_backend::WasmEngine::refIndex(buffer);
  auto jsBuffer = internalState.val_;
  auto ptr = internalState.backingStore_.get();
  // only do sync when we have 1) js array buffer 2) native buffer
  if (jsBuffer != -1 && ptr) {
    CHECKED_VOID_JS_CALL(wasm_backend::_ScriptX_ByteBuffer_syncData(
        jsBuffer, reinterpret_cast<intptr_t>(ptr), buffer.byteLength(), true));
  }
}

void ByteBufferHelper::sync(const Local<script::ByteBuffer> &buffer) {
  auto &&internalState = wasm_backend::WasmEngine::refIndex(buffer);
  auto jsBuffer = internalState.val_;
  auto ptr = internalState.backingStore_.get();
  // only do sync when we have 1) js array buffer 2) native buffer
  if (jsBuffer != -1 && ptr) {
    CHECKED_VOID_JS_CALL(wasm_backend::_ScriptX_ByteBuffer_syncData(
        jsBuffer, reinterpret_cast<intptr_t>(ptr), buffer.byteLength(), false));
  }
}

bool ByteBufferHelper::isSharedByteBuffer(const Local<ByteBuffer> &sharedByteBuffer) {
  auto &&internalState = wasm_backend::WasmEngine::refIndex(sharedByteBuffer);
  if (internalState.val_ == -1 && internalState.backingStore_) {
    // not realized SharedByteBuffer
    return true;
  }
  if (internalState.val_ != -1) {
    CHECKED_JS_CALL(wasm_backend::_ScriptX_ByteBuffer_isSharedByteBuffer(internalState.val_));
  }
  return false;
}

}  // namespace script::wasm_backend

namespace script {

Local<script::ByteBuffer> wasm_interop::newSharedByteBuffer(size_t size) {
  return ByteBuffer::newByteBuffer(
      std::shared_ptr<void>(std::malloc(size), [](void *ptr) { std::free(ptr); }), size);
}

void wasm_interop::destroySharedByteBuffer(const Local<ByteBuffer> &sharedByteBuffer) {
  auto &&internalState = wasm_backend::WasmEngine::refIndex(sharedByteBuffer);
  if (internalState.val_ != -1 &&
      wasm_backend::ByteBufferHelper::freeSharedByteBuffer(internalState.val_)) {
    internalState.val_ = -1;
  }
}

void wasm_interop::destroyScriptClass(const Local<Object> &scriptClass) {
  CHECKED_VOID_JS_CALL(wasm_backend::_ScriptX_Native_destoryInstance(
      wasm_backend::WasmEngine::refIndex(scriptClass)));
}

}  // namespace script
