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
#include "LuaEngine.h"

namespace script::lua_backend {

class LuaByteBufferImpl : public LuaByteBufferDelegate {
 public:
  LuaByteBufferImpl() = default;

  SCRIPTX_DISALLOW_COPY_AND_MOVE(LuaByteBufferImpl);

  ~LuaByteBufferImpl() override = default;

  void init(LuaEngine *engine) override;

  Local<Value> newByteBuffer(LuaEngine *engine, std::shared_ptr<void> nativeBuffer,
                             size_t size) override;

  std::shared_ptr<void> getByteBuffer(LuaEngine *engine, const Local<Value> &byteBuffer) override;

  size_t getByteBufferSize(LuaEngine *engine, const Local<Value> &byteBuffer) override;

  bool isByteBuffer(LuaEngine *engine, const Local<Value> &byteBuffer) override;
};

}  // namespace script::lua_backend
