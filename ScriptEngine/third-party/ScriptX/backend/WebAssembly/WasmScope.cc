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

#include "WasmScope.hpp"
#include <sstream>

namespace script::wasm_backend {

WasmEngineScope::WasmEngineScope(WasmEngine &, WasmEngine *) : stackTop_(-1) {
#ifdef __EMSCRIPTEN_PTHREADS__
  if (wasm_backend::WasmEngine::engineThreadId_ != std::this_thread::get_id()) {
    std::ostringstream oss;
    oss << "WasmEngine can only be used in it's creation thread!"
        << " Current thread is:[" << std::this_thread::get_id() << "]"
        << " Creation thread is:[" << wasm_backend::WasmEngine::engineThreadId_ << "]";
    throw std::runtime_error(oss.str());
  }
#endif
  stackTop_ = wasm_backend::Stack::top();
}

}  // namespace script::wasm_backend
