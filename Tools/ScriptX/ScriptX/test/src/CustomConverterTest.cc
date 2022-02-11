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

#include <string>
#include "test.h"

using CustomType = void*;

// ScriptX 本身不支持这个类型
// static_assert(!script::converter::isConvertible<CustomType>);

// 增加一个把 void* 指针 转成 Local<Value> 的转换算法：中间使用string来承载。

// 1. 要定义在 script::converter namespace下
namespace script::converter {

template <>
struct Converter<CustomType, void> {
  // convert custom type T to Local<Value>
  static Local<Value> toScript(CustomType value) {
    return String::newString(std::to_string(reinterpret_cast<int64_t>(value)));
  }

  // convert Local<Value> to custom type T
  static CustomType toCpp(const Local<Value>& value) {
    return reinterpret_cast<void*>(std::stoll(value.asString().toString()));
  }
};

}  // namespace script::converter

namespace script::test {
DEFINE_ENGINE_TEST(CustomConverterTest);

TEST_F(CustomConverterTest, CustomConverter) {
  EngineScope scope(engine);

  bool called = false;

  // 0. converter::isConvertible 现在是true
  static_assert(converter::isConvertible<CustomType>);
  static_assert(!converter::isConvertible<int*>);

  // 1. 允许使用CustomType作为参数和返回值
  auto func = Function::newFunction([](CustomType ptr) -> CustomType {
    *static_cast<bool*>(ptr) = true;
    return ptr;
  });

  // 2. 允许使用CustomType来调用函数
  auto ret = func.call({}, static_cast<CustomType>(&called));

  EXPECT_TRUE(called);
  ASSERT_TRUE(ret.isString());
  auto pointerString = std::to_string(reinterpret_cast<int64_t>(&called));
  EXPECT_EQ(ret.asString().toString(), pointerString);
}

}  // namespace script::test
