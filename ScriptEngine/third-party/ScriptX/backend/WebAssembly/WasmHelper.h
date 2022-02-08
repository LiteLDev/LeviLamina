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

#include <cstdint>
#include <memory>

#include <emscripten/emscripten.h>

#include "../../src/types.h"

// docs
// 1. val.h is in development and can't provide us what we need.
// 2. bind.h can't provide flexible binding (only to bind fixed signature functions)
// So we developed our own impl.
//
// https://emscripten.org/docs/api_reference/emscripten.h.html?highlight=emscripten_sleep
// https://emscripten.org/docs/api_reference/val.h.html
// https://emscripten.org/docs/api_reference/bind.h.html#policies

namespace script::wasm_backend {

class WasmEngine;

WasmEngine& currentEngine();

void installJavaScriptLibraryFunctions();

// use a lua-like stack to interoperate with js
/**
 * the stack is 0-based, and top is the top index of stack.
 */
class Stack {
 public:
  static int top() noexcept;
  static Local<Value> topValue() noexcept;
  static int setTop(int top) noexcept;

  static int set(int atIndex, int valueIndex) noexcept;
  static int set(int atIndex, const Local<Value>& value) noexcept;

  static int newObject();
  /** [-argCount, +1, e] */
  static int newObject(int type, int argsBase);

  static int newArray(size_t size = 0);

  static int newString(const char* str);
  static int newString(const char* str, size_t length);

  static int newNumber(int32_t num);
  static int newNumber(double num);

  static int newBoolean(bool boolean);

  using RawFunctionType = Local<Value> (*)(const Arguments& args, void* ptr0, void* ptr1);

  static int newFunction(RawFunctionType callback, const void* ptr0 = nullptr,
                         const void* ptr1 = nullptr, bool checkForConstructorCall = false);

  static int pushArrayBuffer(size_t length);

  static int newError(int messageIndex);

  static int pushValue(int index);

  static int pushValue(const Local<Value>& ref);

  static int pushNull() { return pushValue(-1); }

  /**
   * pop count number of item from stack
   * @return the new top of popped stack
   */
  static int pop(int count) noexcept;

  static bool isObject(int index) noexcept;
  static bool isArray(int index) noexcept;
  static bool isString(int index) noexcept;
  static bool isNumber(int index) noexcept;
  static bool isBoolean(int index) noexcept;
  static bool isFunction(int index) noexcept;
  static bool isByteBuffer(int index) noexcept;
  static bool isUnsupported(int index) noexcept;
  static bool isNullOrUndefined(int index) noexcept;
  static bool equals(int lhs, int rhs);

  static int objectGet(int obj, int key);
  static void objectSet(int obj, int key, int value);
  static void objectRemove(int obj, int key);
  static int objectHas(int obj, int key);
  static int objectInstanceOf(int obj, int who);
  /**
   * [0, +1, e]
   * @return index of an Array contains all keys
   */
  static int objectGetKeys(int obj);

  static int arrayGet(int arrayIndex, int index);
  static void arraySet(int arrayIndex, int index, int valueIndex);
  static int arrayLength(int arrayIndex);
  static void arrayClear(int arrayIndex);

  static int32_t toNumberInt32(int num);
  static int64_t toNumberInt64(int num);
  static float toNumberFloat(int num);
  static double toNumberDouble(int num);

  static bool toBoolean(int index);

  static int toString(int index);
  static const char* toCString(int index);

  static int getGlobal();
  static int globalGet(int key);
  static void globalSet(int key, int value);
};

class GlobalHelper {
 public:
  static int newGlobal(int localValueIndex, bool isWeak);
  static int dupGlobal(int key, bool isFromWeak, bool isToWeak);
  static void deleteGlobal(int value, bool isWeak);
  static int getGlobal(int key, bool isWeak);
};

class NativeHelper {
 public:
  static void defineProperty(int obj, int name, int getter, int setter);

  static int getNamespaceForRegister(int nameSpace);

  static void setInternalState(int obj, const void* classDefine, void* instance);
  static void* getInternalStateInstance(int obj);
  static void* getInternalStateClassDefine(int obj);

  static int pushCppNewMark();
  static bool isCppNewMark(int mark);

  static int getInternalStore(int weakThis);
};

class ByteBufferHelper {
 public:
  /**
   * if val is a SharedByteBuffer, return it's ptr;
   * else allocate buffer, copy content into it, and return it's pointer to buffer.
   */
  static void fillBackingStore(int val, std::shared_ptr<void>** sharedPtr, void** buffer);
  static void fillTypeAndSize(int val, uint16_t* pType, size_t* pSize);
  static int fillWrapper(void* pVoid, std::shared_ptr<void>* sharedPtr, size_t size);
  static bool freeSharedByteBuffer(int val);
  static void commit(const Local<ByteBuffer>& buffer);
  static void sync(const Local<ByteBuffer>& buffer);
  static bool isSharedByteBuffer(const Local<ByteBuffer>& sharedByteBuffer);
};

/** [0, 1, e] */
int evaluateJavaScriptCode(int code, int source);

/** [0, 1, e] */
Local<Value> callFunction(const Local<Function>& func, const Local<Value>& thiz, size_t size,
                          const Local<Value>* args);

void rethrowException(const Exception& e);

void checkException();

}  // namespace script::wasm_backend

namespace script {

struct wasm_interop {
  static Local<ByteBuffer> newSharedByteBuffer(size_t size);
  static void destroySharedByteBuffer(const Local<ByteBuffer>& sharedByteBuffer);
  static void destroyScriptClass(const Local<Object>& scriptClass);
};

}  // namespace script
