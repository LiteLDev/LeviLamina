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

#include "LuaByteBufferImpl.h"
#include "../../src/Engine.hpp"
#include "../../src/Native.hpp"

namespace script::lua_backend {

namespace {

class LuaByteBuffer;

const ClassDefine<LuaByteBuffer> &luaByteBufferDefine();

class LuaByteBuffer : public ScriptClass {
  std::shared_ptr<void> nativeBuffer_;
  size_t size_ = 0;

 public:
  LuaByteBuffer(std::shared_ptr<void> nativeBuffer, size_t size)
      : ScriptClass(ScriptClass::ConstructFromCpp<LuaByteBuffer>{}),
        nativeBuffer_(std::move(nativeBuffer)),
        size_(size) {}

  explicit LuaByteBuffer(const Arguments &args) : ScriptClass(args.thiz()) {
    if (args[0].isNumber()) {
      auto size = args[0].asNumber().toInt64();
      if (size >= 0) {
        try {
          nativeBuffer_ = std::shared_ptr<void>(new uint8_t[size], [](void *ptr) {
            delete[] static_cast<uint8_t *>(ptr);  // NOLINT xxxxxxxxxx
          });
          size_ = size;
        } catch (const std::bad_alloc &) {
          throw Exception("ByteBuffer create failed, OutOfMemory!!!");
        }
        return;
      }
    }

    throw Exception(std::string("ByteBuffer should be created like ByteBuffer(n) n >= 0"));
  }

  const std::shared_ptr<void> &getNativeBuffer() const { return nativeBuffer_; }
  size_t getSize() const { return size_; }

  using ScriptClass::getScriptObject;

  template <typename T>
  Local<Value> write(int32_t pos, T data) {
    writePtr<T>(pos) = data;
    return getScriptObject();
  }

  template <typename T>
  T read(int32_t pos) {
    return readPtr<T>(pos);
  }

 private:
  template <typename T>
  T &writePtr(int32_t pos) {
    // lua use 1-based index
    pos--;
    if (pos < 0 || pos + sizeof(T) > size_) {
      throwIndexOutOfRange(pos + 1);
    }
    if (pos % sizeof(T) != 0) {
      throwNotAlignedMemoryAccess(pos, sizeof(T));
    }
    return *reinterpret_cast<T *>(static_cast<uint8_t *>(nativeBuffer_.get()) + pos);
  }

  template <typename T>
  T readPtr(int32_t pos) {
    // lua use 1-based index
    pos--;
    if (pos < 0 || pos + sizeof(T) > size_) {
      throwIndexOutOfRange(pos + 1);
    }
    if (pos % sizeof(T) != 0) {
      throwNotAlignedMemoryAccess(pos, sizeof(T));
    }
    return *reinterpret_cast<T *>(static_cast<uint8_t *>(nativeBuffer_.get()) + pos);
  }

  void throwIndexOutOfRange(uint32_t pos) const {
    std::ostringstream msg;
    msg << "ByteBuffer index out of range size:" << size_ << " position:" << pos;
    throw Exception(msg.str());
  }

  void throwNotAlignedMemoryAccess(uint32_t pos, uint32_t size) const {
    std::ostringstream msg;
    msg << "ByteBuffer access memory at: [" << pos << "] is not aligned with: [" << size << "]";
    throw Exception(msg.str());
  }
};

// TODO(taylor): byte order native

const ClassDefine<LuaByteBuffer> &luaByteBufferDefine() {
#define type(name, type)                                       \
  instanceFunction("write" #name, &LuaByteBuffer::write<type>) \
      .instanceFunction("read" #name, &LuaByteBuffer::read<type>)

  static auto define = defineClass<LuaByteBuffer>("ByteBuffer")
                           .constructor()
                           .type(Int8, int8_t)
                           .type(UInt8, uint8_t)
                           .type(Int16, int16_t)
                           .type(UInt16, uint16_t)
                           .type(Int32, int32_t)
                           .type(UInt32, uint32_t)
                           .type(UInt64, uint64_t)
                           .type(Int64, int64_t)
                           .type(Float, float)
                           .type(Double, double)
                           .build();
#undef type

  return define;
}

}  // namespace

void LuaByteBufferImpl::init(LuaEngine *engine) {
  engine->registerNativeClass(luaByteBufferDefine());
}

Local<Value> LuaByteBufferImpl::newByteBuffer(LuaEngine *, std::shared_ptr<void> nativeBuffer,
                                              size_t size) {
  auto ins = new LuaByteBuffer(nativeBuffer, size);
  return ins->getScriptObject();
}

bool LuaByteBufferImpl::isByteBuffer(LuaEngine *engine, const Local<Value> &byteBuffer) {
  return static_cast<ScriptEngine *>(engine)->isInstanceOf<LuaByteBuffer>(byteBuffer);
}

std::shared_ptr<void> LuaByteBufferImpl::getByteBuffer(LuaEngine *engine,
                                                       const Local<Value> &byteBuffer) {
  auto ptr = engine->getNativeInstance<LuaByteBuffer>(byteBuffer);
  if (ptr) {
    return ptr->getNativeBuffer();
  }

  throw Exception("Object is not a ByteBuffer");
}

size_t LuaByteBufferImpl::getByteBufferSize(LuaEngine *engine, const Local<Value> &byteBuffer) {
  auto ptr = engine->getNativeInstance<LuaByteBuffer>(byteBuffer);
  if (ptr) {
    return ptr->getSize();
  }

  throw Exception("Object is not a ByteBuffer");
}

}  // namespace script::lua_backend