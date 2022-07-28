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

#include <algorithm>
#include "test.h"

namespace script::test {

DEFINE_ENGINE_TEST(ReferenceTest);

TEST_F(ReferenceTest, Global) {
  EngineScope engineScope(engine);
  Global<String> global;
  {
    EngineScope engineScope(engine);
    EXPECT_TRUE(global.isEmpty());

    auto hello = String::newString(u8"Hello");
    EXPECT_STREQ("Hello", hello.toString().c_str());

    Global<String> g(hello);
    EXPECT_FALSE(g.isEmpty());
    EXPECT_STREQ("Hello", g.get().toString().c_str());

    // assign
    global = g;
    EXPECT_FALSE(global.isEmpty());
    EXPECT_STREQ("Hello", global.get().toString().c_str());
  }

  {
    EngineScope engineScope(engine);
    // copy
    Global<String> copy(global);
    EXPECT_FALSE(copy.isEmpty());
    EXPECT_STREQ("Hello", copy.get().toString().c_str());

    // move
    Global<String> move(std::move(copy));
    EXPECT_TRUE(copy.isEmpty());
    EXPECT_TRUE(copy.getValue().isNull());
    //    EXPECT_THROW({ copy.get(); }, Exception);
    EXPECT_FALSE(move.isEmpty());
    EXPECT_STREQ("Hello", move.get().toString().c_str());

    // move-assign
    global = std::move(move);

    global.reset();
    EXPECT_TRUE(global.isEmpty());
  }

  {
    EngineScope engineScope(engine);
    global.reset();
  }
}

TEST_F(ReferenceTest, GlobalVector) {
  std::vector<Global<Object>> v;

  EngineScope engineScope(engine);
  v.push_back({});
}

TEST_F(ReferenceTest, Weak) {
  Weak<String> weak;
  Global<String> global;

  {
    EngineScope engineScope(engine);
    EXPECT_TRUE(weak.isEmpty());

    auto hello = String::newString(u8"Hello");
    EXPECT_STREQ("Hello", hello.toString().c_str());
    weak = Weak<String>(hello);
    global = Global<String>(hello);
    EXPECT_FALSE(weak.isEmpty());
    EXPECT_STREQ("Hello", weak.get().toString().c_str());

    auto obj = Object::newObject();
    Weak<Object> weakObj{obj};
    EXPECT_EQ(obj, weakObj.get());

    auto PI = 3.1416926;
    auto number = Number::newNumber(PI);
    Weak<Number> weakNumber{number};
    EXPECT_DOUBLE_EQ(PI, weakNumber.get().toDouble());
  }

  {
    EngineScope engineScope(engine);
    Weak<String> copy(weak);
    EXPECT_FALSE(copy.isEmpty());
    EXPECT_STREQ("Hello", copy.get().toString().c_str());

    Weak<String> move(std::move(copy));
    EXPECT_TRUE(copy.isEmpty());
    EXPECT_TRUE(copy.getValue().isNull());
    EXPECT_THROW({ copy.get(); }, Exception);
    EXPECT_FALSE(move.isEmpty());
    EXPECT_STREQ("Hello", move.get().toString().c_str());

    Weak<String> assign(String::newString(u8"Hello"));
    // assign
    move = assign;
    // move-assign
    move = std::move(assign);

    weak.reset();
    EXPECT_TRUE(weak.isEmpty());
    global.reset();
  }

  {
    EngineScope engineScope(engine);
    weak.reset();
    global.reset();
  }
}

TEST_F(ReferenceTest, LocalReset) {
  EngineScope engineScope(engine);
  Local<Value> ref = Object::newObject();
  EXPECT_FALSE(ref.isNull());
  ref.reset();
  EXPECT_TRUE(ref.isNull());

  ref = Object::newObject();
  EXPECT_FALSE(ref.isNull());
  Local<Value> newRef(std::move(ref));
  EXPECT_TRUE(ref.isNull());
}

// test local reference can be GCed
TEST_F(ReferenceTest, LocalGc) {
  {
    std::string chunk;
    chunk.resize(1024 * 1024, '.');

    EngineScope engineScope(engine);
    // test gc

    {
      for (int i = 0; i < 50; ++i) {
        StackFrameScope inner;
        Local<String> local = String::newString(chunk);
      }
    }

    // can we trust gc?
    engine->gc();
  }
}

TEST_F(ReferenceTest, WeakGc) {
  std::vector<Weak<Value>> weaks;
  {
    std::string chunk;
    chunk.resize(1024 * 1024, '.');

    EngineScope engineScope(engine);

    {
      StackFrameScope inner;
      for (int i = 0; i < 50; ++i) {
        auto obj = Object::newObject();
        obj.set("junk", String::newString(chunk));
        weaks.emplace_back(obj);
        engine->gc();
      }
    }

    // can we trust gc?
    engine->gc();
  }

  {
    EngineScope engineScope(engine);
    EXPECT_TRUE(std::find_if(weaks.begin(), weaks.end(),
                             [](auto& w) { return w.getValue().isNull(); }) != weaks.end());
    weaks.clear();
  }
}

TEST_F(ReferenceTest, WeakGlobal) {
  Weak<String> weak;
  Global<String> global;

  {
    EngineScope engineScope(engine);
    auto hello = String::newString(u8"Hello");
    global = Global<String>(hello);
    weak = Weak<String>(global);
    EXPECT_FALSE(weak.isEmpty());

    global.reset();
    weak.reset();

    weak = Weak<String>(hello);
    global = Global<String>(weak);
    EXPECT_FALSE(global.isEmpty());

    weak.reset();
    global.reset();
  }
}

TEST_F(ReferenceTest, WeakNotClrear) {
  Weak<String> weak;
  {
    EngineScope engineScope(engine);
    weak = String::newString("hello");
  }
  EXPECT_FALSE(weak.isEmpty());
  destroyEngine();
  EXPECT_TRUE(weak.isEmpty());
}

TEST_F(ReferenceTest, GlobalNotClear) {
  Global<String> global;
  {
    EngineScope engineScope(engine);
    global = String::newString("hello");
  }
  EXPECT_FALSE(global.isEmpty());
  destroyEngine();
  EXPECT_TRUE(global.isEmpty());
}

template <typename Ref, typename DFunc>
inline void testGlobalOrWeakOnEngineDestroy(ScriptEngine* engine, DFunc destroyEngine) {
  Ref globalEmpty;
  std::optional<Ref> ctor;
  Ref assignCreate;
  Ref copyAssign;
  std::optional<Ref> copyCtor;
  Ref moveAssign;
  std::optional<Ref> moveCtor;

  std::vector<Ref> blackBoxTest;

  {
    EngineScope engineScope(engine);
    assignCreate = Object::newObject();
    ctor.emplace(Object::newObject());
    copyAssign = assignCreate;
    copyCtor.emplace(assignCreate);

    moveAssign = std::move(assignCreate);
    moveCtor.emplace(std::move(copyAssign));
    copyAssign.swap(moveAssign);

    auto iteration = 64;
    for (int i = 0; i < iteration; ++i) {
      blackBoxTest.emplace_back(Object::newObject());
      // request vector reconstruct
      blackBoxTest.shrink_to_fit();
    }

    for (int i = 0; i < iteration; ++i) {
      blackBoxTest.emplace_back(assignCreate);
      // request vector reconstruct
      blackBoxTest.shrink_to_fit();
    }
  }

  destroyEngine();

  EXPECT_TRUE(globalEmpty.isEmpty());
  EXPECT_TRUE(ctor->isEmpty());
  EXPECT_TRUE(assignCreate.isEmpty());
  EXPECT_TRUE(copyAssign.isEmpty());
  EXPECT_TRUE(copyCtor->isEmpty());
  EXPECT_TRUE(moveAssign.isEmpty());
  EXPECT_TRUE(moveCtor->isEmpty());

  bool allRefsAreReset = true;
  for (auto&& i : blackBoxTest) {
    allRefsAreReset &= i.isEmpty();
  }
  EXPECT_TRUE(allRefsAreReset);
}

TEST_F(ReferenceTest, GlobalOnEngineDestroy) {
  // this test should be compiled with ASAN ON
  testGlobalOrWeakOnEngineDestroy<Global<Object>>(engine, [this]() { destroyEngine(); });
}

TEST_F(ReferenceTest, WeakOnEngineDestroy) {
  // this test should be compiled with ASAN ON
  testGlobalOrWeakOnEngineDestroy<Weak<Object>>(engine, [this]() { destroyEngine(); });
}

#define ALL_TYPES_EACH(FN) \
  FN(Value)                \
  FN(Object)               \
  FN(String)               \
  FN(Number)               \
  FN(Boolean)              \
  FN(Function)             \
  FN(Array)                \
  FN(ByteBuffer)           \
  FN(Unsupported)

TEST_F(ReferenceTest, GlobalTypes) {
  EngineScope engineScope(engine);
#define FN(V)                                   \
  Global<V> test_##V;                           \
  Global<V> test_copy_##V(test_##V);            \
  Global<V> test_move_##V(std::move(test_##V)); \
  test_##V = test_copy_##V;                     \
  test_##V = std::move(test_copy_##V);          \
  test_##V.reset();                             \
  test_##V.weakify();                           \
  test_##V.get();                               \
  test_##V.isNull();

  // TODO(taylorcyang): add test
//  ALL_TYPES_EACH(FN)
#undef FN
}

TEST_F(ReferenceTest, WeakTypes) {
  EngineScope engineScope(engine);
#define FN(V)                                 \
  Weak<V> test_##V;                           \
  Weak<V> test_copy_##V(test_##V);            \
  Weak<V> test_move_##V(std::move(test_##V)); \
  test_##V = test_copy_##V;                   \
  test_##V = std::move(test_copy_##V);        \
  test_##V.reset();                           \
  test_##V.strongify();                       \
  test_##V.get();                             \
  test_##V.isNull();

  // TODO(taylorcyang): add test
//  ALL_TYPES_EACH(FN)
#undef FN
}

TEST_F(ReferenceTest, LocalTypes) {
  EngineScope engineScope(engine);
#define FN(V)                                  \
  Local<V> test_##V;                           \
  Local<V> test_copy_##V(test_##V);            \
  Local<V> test_move_##V(std::move(test_##V)); \
  test_##V = test_copy_##V;                    \
  test_##V = std::move(test_copy_##V);         \
  test_##V.reset();                            \
  test_##V.isNull();                           \
  test_##V.describe();                         \
  test_##V.describeUtf8();

  // TODO(taylorcyang): add test
//  ALL_TYPES_EACH(FN)
#undef FN
}

#ifdef QUICK_JS_HAS_SCRIPTX_PATCH

TEST_F(ReferenceTest, QuickJsPatchStrictEqual) {
  EngineScope engineScope(engine);
  auto context = qjs_interop::currentContext();
  auto testEqual = [&](auto&& ref, auto&& ref2, bool eq = true) {
    EXPECT_TRUE(
        JS_StrictEqual(context, qjs_interop::peekLocal(ref), qjs_interop::peekLocal(ref2)) == eq);
  };
  auto str1 = String::newString("hello");
  auto str2 = String::newString("hello");
  auto str3 = String::newString("hello world");

  testEqual(str1, str1);
  testEqual(str1, str2);
  testEqual(str1, str3, false);

  auto obj1 = Object::newObject();
  auto obj2 = Object::newObject();

  testEqual(obj1, obj1);
  testEqual(obj1, obj2, false);
}

TEST_F(ReferenceTest, QuickJsPatchWeakRef) {
  EngineScope engineScope(engine);
  auto context = qjs_interop::currentContext();

  {
    auto obj = Object::newObject();
    auto weak = JS_NewWeakRef(context, qjs_interop::peekLocal(obj));
    auto g = JS_GetWeakRef(context, weak);

    EXPECT_TRUE(JS_StrictEqual(context, qjs_interop::peekLocal(obj), g));
    JS_FreeValue(context, g);
    JS_FreeValue(context, weak);
  }

  {
    // only object is weak
    JSValue weak;
    {
      auto obj = Object::newObject();
      weak = JS_NewWeakRef(context, qjs_interop::peekLocal(obj));
    }
    auto g = JS_GetWeakRef(context, weak);

    EXPECT_TRUE(JS_IsUndefined(g));
    JS_FreeValue(context, g);
    JS_FreeValue(context, weak);
  }

  {
    // non-object is actually not weak
    {
      JSValue weak;
      {
        auto str = String::newString("");
        weak = JS_NewWeakRef(context, qjs_interop::peekLocal(str));
      }
      auto g = JS_GetWeakRef(context, weak);

      EXPECT_TRUE(!JS_IsUndefined(g));
      JS_FreeValue(context, g);
      JS_FreeValue(context, weak);
    }
  }
}
#endif

}  // namespace script::test
