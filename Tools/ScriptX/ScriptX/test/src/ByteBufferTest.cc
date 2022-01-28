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

#include "test.h"

namespace script::test {

DEFINE_ENGINE_TEST(ByteBufferTest);

TEST_F(ByteBufferTest, Type) {
  EngineScope scope(engine);

  auto ret = engine->eval(TS().js("new ArrayBuffer()").lua("return ByteBuffer(4)").select());
  ASSERT_TRUE(ret.isByteBuffer()) << ret.describeUtf8();

#ifdef SCRIPTX_LANG_JAVASCRIPT
  ret = engine->eval("new Int8Array(8)");
  ASSERT_TRUE(ret.isByteBuffer()) << ret.describeUtf8();
#endif

  EXPECT_TRUE(ByteBuffer::newByteBuffer(0).asValue().isByteBuffer());
  EXPECT_EQ(ByteBuffer::newByteBuffer(1).byteLength(), 1);
  EXPECT_EQ(ByteBuffer::newByteBuffer(8).byteLength(), 8);

  uint8_t x[64];
  void* ptr = x;

  EXPECT_TRUE(ByteBuffer::newByteBuffer(ptr, 1).asValue().isByteBuffer());
  EXPECT_EQ(ByteBuffer::newByteBuffer(ptr, 1).byteLength(), 1);
  EXPECT_EQ(ByteBuffer::newByteBuffer(ptr, 8).byteLength(), 8);
}

void testByteBufferReadWrite(ScriptEngine* engine, const Local<Value>& buf) {
  ASSERT_TRUE(buf.isByteBuffer());
  auto buffer = buf.asByteBuffer();
  ASSERT_TRUE(buffer.byteLength() == 8);
  uint8_t* ptr = static_cast<uint8_t*>(buffer.getRawBytes());

  ASSERT_EQ(ptr, buffer.getRawBytesShared().get());
  ASSERT_TRUE(ptr != nullptr);
#if defined(SCRIPTX_BACKEND_V8) || defined(SCRIPTX_BACKEND_JAVASCRIPTCORE) || defined(SCRIPTX_BACKEND_LUA)
  ASSERT_EQ(buffer.isShared(), true);
#endif

  // if buffer is in shared mode
  // copy data from script into buffer
  buffer.sync();

  EXPECT_EQ(ptr[0], 1);
  EXPECT_EQ(ptr[1], 0);
  EXPECT_EQ(ptr[2], 2);
  EXPECT_EQ(ptr[3], 4);

  ptr[4] = 2;
  ptr[5] = 0;
  ptr[6] = 4;
  ptr[7] = 8;

  // if buffer is in shared mode
  // copy data from buffer into script
  buffer.commit();

  auto success =
      engine->eval(TS().js("view[4] == 2 && view[5] == 0 && view[6] == 4 && view[7] == 8;")
                       .lua(R"(
return view:readInt8(5) == 2 and view:readInt8(6) == 0 and view:readInt8(7) == 4 and view:readInt8(8) == 8
)")
                       .select());
  ASSERT_TRUE(success.isBoolean()) << success.describeUtf8();
  ASSERT_TRUE(success.asBoolean().value());

#ifdef SCRIPTX_BACKEND_LUA
  // out of index
  EXPECT_THROW({ engine->eval("view:readInt8(10)"); }, Exception);
  EXPECT_THROW({ engine->eval("view:writeInt8(10, 0)"); }, Exception);

  // unaligned access
  EXPECT_THROW({ engine->eval("view:readInt32(2)"); }, Exception);
  EXPECT_THROW({ engine->eval("view:writeInt32(2, 0)"); }, Exception);

  // bad param
  EXPECT_THROW({ engine->eval("ByteBuffer(-1)"); }, Exception);
#endif
}

TEST_F(ByteBufferTest, Data) {
  EngineScope engineScope(engine);
  auto ret = engine->eval(TS().js(R"(
        ab = new ArrayBuffer(8);
        view = new Int8Array(ab);
        view[0] = 1;
        view[1] = 0;
        view[2] = 2;
        view[3] = 4;
        ab;
)")
                              .lua(R"(
view = ByteBuffer(8)
view:writeInt8(1, 1)
view:writeInt8(2, 0)
view:writeInt8(3, 2)
view:writeInt8(4, 4)
return view

)")
                              .select());
  testByteBufferReadWrite(engine, ret);
}

#ifdef SCRIPTX_LANG_JAVASCRIPT

TEST_F(ByteBufferTest, DataView) {
  for (auto&& type : std::initializer_list<std::pair<const char*, ByteBuffer::Type>>{
           {"Int8Array", ByteBuffer::Type::kInt8},
           {"Uint8Array", ByteBuffer::Type::kUint8},
           {"Int16Array", ByteBuffer::Type::kInt16},
           {"Uint16Array", ByteBuffer::Type::kUint16},
           {"Int32Array", ByteBuffer::Type::kInt32},
           {"Uint32Array", ByteBuffer::Type::kUint32},
#ifdef SCRIPTX_BACKEND_V8
           {"BigInt64Array", ByteBuffer::Type::kInt64},
           {"BigUint64Array", ByteBuffer::Type::kUint64},
#endif
           {"Float32Array", ByteBuffer::Type::KFloat32},
           {"Float64Array", ByteBuffer::Type::kFloat64},
           {"DataView", ByteBuffer::Type::kUnspecified}}) {
    std::ostringstream code;
    code << R"(
        ab = new ArrayBuffer(8);
        view = new Int8Array(ab);
        view[0] = 1;
        view[1] = 0;
        view[2] = 2;
        view[3] = 4;
    )";
    code << "new " << type.first << "(ab);";

    EngineScope engineScope(engine);
    try {
      auto ret = engine->eval(code.str()).asByteBuffer();
      EXPECT_EQ(ret.getType(), type.second);
      testByteBufferReadWrite(engine, ret);
    } catch (const Exception& e) {
      FAIL() << e;
    }
  }
}

#endif

TEST_F(ByteBufferTest, CreateShared) {
  EngineScope engineScope(engine);
  auto shared = std::shared_ptr<uint8_t>(new uint8_t[8], std::default_delete<uint8_t[]>());
  auto ptr = shared.get();

  auto buffer = ByteBuffer::newByteBuffer(shared, 8);
  ASSERT_EQ(buffer.getRawBytes(), ptr);
  ASSERT_EQ(buffer.getRawBytesShared().get(), ptr);
  ptr[4] = 2;
  ptr[5] = 0;
  ptr[6] = 4;
  ptr[7] = 8;

  engine->set("buffer", buffer);
  engine->eval(TS().js(
#ifdef SCRIPTX_BACKEND_WEBASSEMBLY
                       "view = new Int8Array(buffer.buffer, buffer.byteOffset, buffer.byteLength);"
#else
                       "view = new Int8Array(buffer);"
#endif
                       R"(
view[0] = 1;
view[1] = 0;
view[2] = 2;
view[3] = 4;
)")
                   .lua(R"(
local view = buffer;
view:writeInt8(1, 1)
view:writeInt8(2, 0)
view:writeInt8(3, 2)
view:writeInt8(4, 4)
return view
)")
                   .select());
  EXPECT_EQ(ptr[0], 1);
  EXPECT_EQ(ptr[1], 0);
  EXPECT_EQ(ptr[2], 2);
  EXPECT_EQ(ptr[3], 4);

  auto success =
      engine->eval(TS().js("view[4] == 2 && view[5] == 0 && view[6] == 4 && view[7] == 8;")
                       .lua(R"(
return buffer:readInt8(5) == 2 and buffer:readInt8(6) == 0 and buffer:readInt8(7) == 4 and buffer:readInt8(8) == 8
)")
                       .select());
  ASSERT_TRUE(success.isBoolean()) << success.describeUtf8();
  ASSERT_TRUE(success.asBoolean().value());

#ifdef SCRIPTX_BACKEND_WEBASSEMBLY
  wasm_interop::destroySharedByteBuffer(buffer);
#endif
}

TEST_F(ByteBufferTest, IsInstance) {
  EngineScope engineScope(engine);
  auto buffer = ByteBuffer::newByteBuffer(8);

  engine->set("buffer", buffer);

  auto ret = engine->eval(TS().js("buffer instanceof ArrayBuffer")
                              .lua("return ScriptX.isInstanceOf(buffer, ByteBuffer)")
                              .select());

  ASSERT_TRUE(ret.isBoolean());
  EXPECT_TRUE(ret.asBoolean().value());
}

#ifdef SCRIPTX_BACKEND_WEBASSEMBLY

TEST_F(ByteBufferTest, wasm_interop_newSharedByteBuffer) {
  std::weak_ptr<void> weak;
  {
    EngineScope engineScope(engine);
    auto sharedBuffer = wasm_interop::newSharedByteBuffer(1);
    weak = sharedBuffer.getRawBytesShared();

    engine->set("buffer", sharedBuffer);
    EXPECT_TRUE(engine->eval("buffer instanceof ScriptX.SharedByteBuffer").asBoolean().value());
    wasm_interop::destroySharedByteBuffer(sharedBuffer);
  }
  EXPECT_TRUE(weak.lock() == nullptr);
}

TEST_F(ByteBufferTest, SharedByteBufferType) {
  std::weak_ptr<void> weak;
  {
    EngineScope engineScope(engine);
    auto shared = std::shared_ptr<uint8_t>(new uint8_t[8], std::default_delete<uint8_t[]>());
    auto buffer = ByteBuffer::newByteBuffer(shared, 8);

    weak = buffer.getRawBytesShared();
    engine->set("buffer", buffer);
    EXPECT_TRUE(engine->eval("buffer instanceof ScriptX.SharedByteBuffer").asBoolean().value());
    wasm_interop::destroySharedByteBuffer(buffer);
  }

  EXPECT_TRUE(weak.lock() == nullptr);
}

TEST_F(ByteBufferTest, SharedByteBufferTypeJS) {
  EngineScope engineScope(engine);
  auto buffer = engine->eval(R"(
buffer = new ScriptX.SharedByteBuffer(16);
if (buffer.byteOffset == 0 || buffer.byteLength != 16 || !(buffer.buffer instanceof ArrayBuffer)) {
  throw Error("new ScriptX.SharedByteBuffer(16); test failed");
}
buffer;

)");

  std::weak_ptr<void> weak;

  EXPECT_TRUE(buffer.isByteBuffer());
  {
    auto b = buffer.asByteBuffer();

    weak = b.getRawBytesShared();
    EXPECT_EQ(b.byteLength(), 16);

    auto ptr = static_cast<int8_t*>(b.getRawBytes());
    ptr[0] = 42;
    engine->eval(R"(
      if (new Int8Array(buffer.buffer, buffer.byteOffset, buffer.byteLength)[0] != 42) {
        throw Error("SharedByteBufferTypeJS write test fail");
      }

      buffer.destroy();
    )");
  }

  // b still hold a shared_ptr to underlying buffer.
  EXPECT_TRUE(weak.lock() == nullptr);
}

TEST_F(ByteBufferTest, IsSharedByteBuffer) {
  EngineScope engineScope(engine);
  auto nonShared = ByteBuffer::newByteBuffer(0);
  auto nonShared1 = engine->eval("new ArrayBuffer(0)").asByteBuffer();
  EXPECT_FALSE(nonShared.isShared());
  EXPECT_FALSE(nonShared1.isShared());

  auto shared = wasm_interop::newSharedByteBuffer(0);
  auto shared1 = engine->eval("new ScriptX.SharedByteBuffer(0)").asByteBuffer();
  EXPECT_TRUE(shared.isShared());
  EXPECT_TRUE(shared1.isShared());
}

#endif

#if defined(SCRIPTX_LANG_JAVASCRIPT) && !defined(SCRIPTX_BACKEND_WEBASSEMBLY)

TEST_F(ByteBufferTest, Variants) {
  EngineScope engineScope(engine);
  try {
    auto shared = std::shared_ptr<uint8_t>(new uint8_t[64], std::default_delete<uint8_t[]>());
    auto backing = shared.get();
    auto buffer = ByteBuffer::newByteBuffer(shared, 64);

    engine->set("ab", buffer);

    {
      auto ret = engine->eval(R"(
view = new Int16Array(ab, 4);
view[0] = 42;
view;
)");

      ASSERT_TRUE(ret.isByteBuffer());
      EXPECT_EQ(ret.asByteBuffer().elementCount(), 60 / 2);
      ASSERT_EQ(ret.asByteBuffer().getType(), ByteBuffer::Type::kInt16);
      auto ptr = ret.asByteBuffer().getRawBytes();
      EXPECT_EQ(static_cast<uint8_t*>(ptr), &backing[4]);
      EXPECT_EQ(static_cast<int16_t*>(ptr)[0], 42);
    }

    {
      auto ret = engine->eval(
          u8R"(
view = new Float64Array(ab, 16);
view[0] = 3.14;
view;
)");

      ASSERT_TRUE(ret.isByteBuffer());
      EXPECT_EQ(ret.asByteBuffer().elementCount(), (64 - 16) / 8);
      ASSERT_EQ(ret.asByteBuffer().getType(), ByteBuffer::Type::kFloat64);
      auto ptr = ret.asByteBuffer().getRawBytes();
      EXPECT_EQ(static_cast<uint8_t*>(ptr), &backing[16]);
      EXPECT_DOUBLE_EQ(static_cast<double*>(ptr)[0], 3.14);
    }

    {
      auto ret = engine->eval(
          u8R"(
view = new DataView(ab, 16, 32);
view.setInt32(0, 42, true);
view;
)");

      ASSERT_TRUE(ret.isByteBuffer());
      EXPECT_EQ(ret.asByteBuffer().byteLength(), 32);
      ASSERT_EQ(ret.asByteBuffer().getType(), ByteBuffer::Type::kUnspecified);
      auto ptr = ret.asByteBuffer().getRawBytes();
      EXPECT_EQ(static_cast<uint8_t*>(ptr), &backing[16]);
      EXPECT_EQ(static_cast<int32_t*>(ptr)[0], 42);
    }
  } catch (Exception& e) {
    FAIL() << e.message() << e.stacktrace();
  }
}

#elif defined(SCRIPTX_LANG_LUA)

TEST_F(ByteBufferTest, Variants) {
  EngineScope engineScope(engine);
  auto shared = std::shared_ptr<uint8_t>(new uint8_t[64], std::default_delete<uint8_t[]>());
  auto backing = shared.get();
  auto buffer = ByteBuffer::newByteBuffer(shared, 64);
  engine->set("buffer", buffer);
  engine->eval(R"(

buffer:writeInt32(1, 42);
buffer:writeFloat(5, 3.14);

)");

  EXPECT_EQ(42, *static_cast<uint8_t*>(backing));
  EXPECT_FLOAT_EQ(3.14f, *reinterpret_cast<float*>(backing + 4));

  engine->set("buffer", {});
}

#endif
}  // namespace script::test