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

#include <string>
#include <typeinfo>
#include <vector>
#include "Engine.h"
#include "Exception.h"
#include "Reference.h"
#include SCRIPTX_BACKEND(Native.h)
#include SCRIPTX_BACKEND(Engine.h)
#include SCRIPTX_BACKEND(Utils.h)

namespace script {

class Arguments {
 private:
  using InternalCallbackInfoType = typename internal::ImplType<Arguments>::type;

  InternalCallbackInfoType callbackInfo_;

  explicit Arguments(InternalCallbackInfoType callbackInfo);

 public:
  ~Arguments();

  SCRIPTX_DISALLOW_COPY_AND_MOVE(Arguments);

  /**
   * @return the `this` reference (receiver) to the method call,
   * may throw Exception is hasThiz() == false.
   *
   * note: on a native bind instance function, hasThiz() always is true.
   */
  Local<Object> thiz() const;

  /**
   * @return does this function call has a receiver.
   */
  bool hasThiz() const;

  /**
   * @return parameter count
   */
  size_t size() const;

  /**
   * get the i-th parameter, or null if i is out of range.
   */
  Local<Value> operator[](size_t i) const;

  /** get the current engine */
  ScriptEngine* engine() const;

  /** get the current engine and dynamic_cast to T*/
  template <typename T>
  T* engineAs() const;

 private:
  friend class ::script::ScriptEngine;

  friend typename internal::ImplType<::script::ScriptEngine>::type;
  friend typename internal::ImplType<::script::internal::interop>::type;
};

/**
 * base class for all Native binding js instance.
 */
class ScriptClass {
 public:
  SCRIPTX_DISALLOW_COPY_AND_MOVE(ScriptClass);

  /**
   * This constructor is to be used as binding, when Script call constructor.
   * use case:
   * \code
   * defineClass<MyScriptClass>("name")
   *  .constructor([](const Arguments& args) {
   *    // return the pointer to bind with script object.
   *    return new MyScriptClass(args.thiz());
   *  }
   *  .build();
   * \endcode
   * Inside the constructor, you are already scoped inside the engine.
   *
   * note: upon new, the returned pointer should be own(managed) by the script object,
   * caller should not delete the pointer.
   *
   * @param scriptObject the "this" object of the script constructor call.
   *
   * note: this constructor MUST be called under EngineScope.
   */
  explicit ScriptClass(const Local<Object>& scriptObject);

  template <typename T>
  struct ConstructFromCpp {};

  /**
   * This constructor is been used purely to create a ScriptObject along with
   * it's script object with cpp code (not from the script constructor binding).
   *
   * Please use this competence with extra CAUTION, read the following doc with care,
   * otherwise you may face strange crashes (memory issue).
   *
   * YOU HAVE BEEN WARNED.
   *
   *
   * use case:
   *
   * \code
   *
   * class Context : public ScriptObject {
   * public:
   *     Context(Canvas* canvas) :
   *        ScriptObject(ConstructFromCpp<Context>()) {
   *            // pay attention, in constructor the `this` is partial inited,
   *            // take care of publishing `this` pointer and/or script object.
   *        }
   * };
   *
   * Canvas* canvas = render->getCanvas();
   *
   * // NOTE: the pointer is managed be script object
   * // so, just return the script object out, it's all done.
   * auto pointer = new Context(canvas);
   * engine->set("context", pointer->getScriptObject());
   * // NEVER delete the pointer, ScriptEngine does that on finalization.
   * // AND NEVER keep the pointer from c++, still, it's managed by ScriptEngine,
   * // use a global reference instead.
   *
   * \endcode
   *
   *
   * another use case:
   *
   * \code
   *
   * auto getContext = Function::newFunction([]() {
   *   Canvas* canvas = render->getCanvas();
   *   auto pointer = new Context(canvas);
   *   return pointer->getScriptObject();
   * });
   *
   * \endcode
   *
   * NOTE: upon new, the returned pointer should be own(managed) by the script object,
   * caller should not delete the pointer.
   *
   * NOTE: this constructor MUST be called under EngineScope.
   *
   * NOTE: this ctor "CAN BE" implemented with no params, but which makes it the "default
   * constructor" however, there is heavy logic inside this ctor, we deliberately add a param --
   * policy.
   */
  template <typename T>
  explicit ScriptClass(ConstructFromCpp<T> policy);

  /**
   * get the script instance representing the native instance.
   *
   * also refer to ScriptEngine::isDestroying().
   *
   * The are case where js object is GCed, while  C++ ScriptClass still not destructed, at that time
   * getScriptObject will throw Exception.
   */
  Local<Object> getScriptObject() const;

  ScriptEngine* getScriptEngine() const;

  template <typename T>
  T* getScriptEngineAs() const;

 protected:
  /**
   * Get the internal storage array, this array is only viable by C++ api (not script api).
   */
  Local<Array> getInternalStore() const;

  /**
   * Be CAREFUL when overriding destructor.
   *
   * Inside the destructor, you can still call getScriptEngine,
   * but getScriptObject will always return null.
   *
   * 1. ScriptClass's destructor is scheduled to be called on the MessageQueue.
   *    1.1 which means there is a time gap when script object is GCed, but C++ ScriptClass is not
   * destructed.
   *    1.2 which also means all your destructor are called in the given thread that calls
   * MessageQueue::loopQueue.
   *
   * 2. called AFTER the real script object be GCed;
   *
   * 3. inside the destructor you can call ANY ScriptEngine API, EXCEPT when the engine is in the
   * process of DESTROYING, in which case you will risk at dangling pointer.
   *
   * 4. inside the destructor you are not inside EngineScope.
   *
   * note:
   * for 1: some Engine backend (V8, JSCore, etc.) requires NO ANY api be called in the destructor,
   * which is not handy.
   * for 2: the are case where js object is GCed, while C++ ScriptClass still not destructed
   * for 3: still be careful when calling ScriptApi in destructed, please check if the engine
   * is destroying
   */
  virtual ~ScriptClass();

 private:
  using InternalScriptClass = typename ::script::internal::ImplType<ScriptClass>::type;

  InternalScriptClass internalState_;

  friend class ScriptEngine;

  friend typename internal::ImplType<ScriptEngine>::type;

  friend class InternalStoreHelper;
};

/**
 * helper class to holder an internal store value for you
 *
 * \code
 *
 * class MyScriptClass: public ScriptClass {
 *  InternalStoreHolder callback_;
 *  // or: InternalStoreHolder callback_{this, 0};
 *
 *  MyScriptClass(const Local<Object>& thiz):
 *      ScriptClass(thiz), callback_(this, 0) {
 *  }
 *
 *  void setCallback(const Local<Value>& func) {
 *      callback_.set(func);
 *      // same as
 *      getInternalStorage().set(0, func);
 *  }
 *
 * }
 *
 * \endcode
 */
class InternalStoreHelper {
 public:
  InternalStoreHelper(ScriptClass* clazz, size_t indexInInternalStoreArray)
      : scriptClass_(clazz), index_(indexInInternalStoreArray) {}

  SCRIPTX_DISALLOW_COPY_AND_MOVE(InternalStoreHelper);

  Local<Value> get() const { return scriptClass_->getInternalStore().get(index_); }

  void set(const Local<Value>& value) const { scriptClass_->getInternalStore().set(index_, value); }

  /**
   * @param value any thing supported by the type converter
   */
  template <typename T>
  void set(T&& value) const;

 private:
  ScriptClass* scriptClass_;
  size_t index_;
};

template <typename T = void>
ClassDefineBuilder<T> defineClass(std::string name);

/**
 * adapt multi overloaded C++ functions to handle a common script call.
 *
 * for example:
 *
 * \code
 *
 * void func1(int age);
 *
 * void func2(std::string name);
 *
 * Local<Value> func3(const Arguments& args); // exactly same signature as FunctionCallback
 *
 * FunctionCallback func = adaptOverLoadedFunction(func1, func2, func3);
 *
 * auto f = Function::newFunction(func);
 *
 * \endcode
 *
 * now: f represents a script function,
 * when the argument is script::Number -> call func1
 * when the argument is script::String -> call func2
 * otherwise -> fallback to func3
 *
 * note: func1 and func2 arguments type must differs on script type(not C++ type);
 * so "int" differs "std::string", because "script::Number" differs "script::String".
 * but "int" is same as "double", because they both represented as "script::Number".
 *
 * The implements try to convert Argument to func1 argument,
 * if convert success call fun1, otherwise continue on func2, etc...
 * If no suitable func is found, an Exception is thrown with message "no valid overloaded function
 * chosen".
 *
 * @tparam FunctionCallback like
 */
template <typename... T>
FunctionCallback adaptOverLoadedFunction(T&&... functions);

/**
 * @see adaptOverLoadedFunction() for detailed docs
 *
 * @tparam C ScriptClass type
 * @tparam T InstanceFunctionCallback like
 */
template <typename C, typename... T>
InstanceFunctionCallback<C> adaptOverloadedInstanceFunction(T&&... functions);

/**
 * utils function to select one function with given signature from C++ overloaded functions
 *
 * example:
 * \code
 *
 * int overload(int) { return 0; }
 * int overload(double) { return 1; }
 *
 * auto o1 = script::selectOverloadedFunc<int(int)>(overload);
 * auto o2 = script::selectOverloadedFunc<int(double)>(overload);
 *
 * class X {
 *  public:
 *   int overload(int) { return 0; }
 *   int overload(int&) { return 1; }
 *   int overload(double) { return 2; }
 *   int overload(double) const { return 3; }
 * };
 * auto x0 = script::selectOverloadedFunc<int (X::*)(int)>(&X::overload);
 * auto x1 = script::selectOverloadedFunc<int (X::*)(int&)>(&X::overload);
 * auto x2 = script::selectOverloadedFunc<int (X::*)(double)>(&X::overload);
 * auto x3 = script::selectOverloadedFunc<int (X::*)(double) const>(&X::overload);
 */
template <typename Signature>
auto selectOverloadedFunc(std::decay_t<Signature> func) {
  return func;
}

// ==== ClassDefine ====

namespace internal {

template <typename T>
void validateClassDefine(const ClassDefine<T>* classDefine);

// forward declare
template <typename T>
class InstanceDefineBuilder;

#define SCRIPTX_CLASS_DEFINE_FRIENDS                                          \
  template <typename TT>                                                      \
  friend class ::script::ClassDefine;                                         \
  template <typename TT>                                                      \
  friend class ::script::ClassDefineBuilder;                                  \
  friend class ::script::ScriptEngine;                                        \
  friend typename ::script::internal::ImplType<::script::ScriptEngine>::type; \
  template <typename TT>                                                      \
  friend void ::script::internal::validateClassDefine(                        \
      const ::script::ClassDefine<TT>* classDefine);                          \
  template <typename TT>                                                      \
  friend class ::script::internal::InstanceDefineBuilder

class StaticDefine {
  class PropertyDefine {
    std::string name;
    GetterCallback getter = nullptr;
    SetterCallback setter = nullptr;
    std::string traceName = name;

    PropertyDefine(std::string name, GetterCallback getter, SetterCallback setter,
                   std::string traceName)
        : name(std::move(name)),
          getter(std::move(getter)),
          setter(std::move(setter)),
          traceName(std::move(traceName)) {}

    SCRIPTX_CLASS_DEFINE_FRIENDS;
  };

  struct FunctionDefine {
    std::string name;
    FunctionCallback callback;
    std::string traceName = name;

    FunctionDefine(std::string name, FunctionCallback callback, std::string traceName)
        : name(std::move(name)), callback(std::move(callback)), traceName(std::move(traceName)) {}

    SCRIPTX_CLASS_DEFINE_FRIENDS;
  };

  const std::vector<FunctionDefine> functions{};
  const std::vector<PropertyDefine> properties{};

  StaticDefine(std::vector<FunctionDefine> functions, std::vector<PropertyDefine> properties)
      : functions(std::move(functions)), properties(std::move(properties)) {}

  SCRIPTX_CLASS_DEFINE_FRIENDS;
};

template <typename T>
constexpr inline size_t sizeof_helper_v = sizeof(T);

template <>
constexpr inline size_t sizeof_helper_v<void> = 0;

template <typename T>
class InstanceDefine {
  static_assert(std::is_void_v<T> || std::is_base_of_v<ScriptClass, T>,
                "T must be subclass of ScriptClass, "
                "and can be void if no instance is required.");

  using Constructor = InstanceConstructor<T>;

  class PropertyDefine {
    using SetterCallback = InstanceSetterCallback<T>;
    using GetterCallback = InstanceGetterCallback<T>;

    std::string name;
    GetterCallback getter;
    SetterCallback setter;
    std::string traceName = name;

    PropertyDefine(std::string name, GetterCallback getter, SetterCallback setter,
                   std::string traceName)
        : name(std::move(name)),
          getter(std::move(getter)),
          setter(std::move(setter)),
          traceName(std::move(traceName)) {}

    SCRIPTX_CLASS_DEFINE_FRIENDS;
  };

  class FunctionDefine {
    using FunctionCallback = InstanceFunctionCallback<T>;

    std::string name;
    FunctionCallback callback;
    std::string traceName;

    FunctionDefine(std::string name, FunctionCallback callback, std::string traceName)
        : name(std::move(name)), callback(std::move(callback)), traceName(std::move(traceName)) {}

    SCRIPTX_CLASS_DEFINE_FRIENDS;
  };

  /**
   * constructor a native class associated with the script object.
   * when null is returned, an exception is thrown.
   * (Either inside the constructor, or if not, by the ScriptEngine).
   */
  const Constructor constructor{};
  const std::vector<FunctionDefine> functions{};
  const std::vector<PropertyDefine> properties{};
  const size_t instanceSize = internal::sizeof_helper_v<T>;

  InstanceDefine(Constructor constructor, std::vector<FunctionDefine> functions,
                 std::vector<PropertyDefine> properties)
      : constructor(std::move(constructor)),
        functions(std::move(functions)),
        properties(std::move(properties)) {}

  SCRIPTX_CLASS_DEFINE_FRIENDS;
};

}  // namespace internal

template <typename T /* = void */>
class ClassDefine {
  static_assert(std::is_same_v<T, std::remove_pointer_t<std::decay_t<T>>>,
                "T must be decayed value type, ie. no reference, pointer, cv qualifier.");

 public:
  /**
   * erase the template type.
   * so you can has a collection of different ClassDefines.
   */
  NativeRegister getNativeRegister() const;

  void visit(ClassDefineVisitor& visitor) const;

  const std::string& getClassName() const { return className; };

  const std::string& getNameSpace() const { return nameSpace; }

 private:
  const std::string className;
  const std::string nameSpace;

  /**
   * static methods & properties
   */
  const internal::StaticDefine staticDefine;

  /**
   * instance methods & properties
   */
  const internal::InstanceDefine<T> instanceDefine;

  ClassDefine(std::string className, std::string nameSpace, internal::StaticDefine staticDefine,
              internal::InstanceDefine<T> instanceDefine)
      : className(std::move(className)),
        nameSpace(std::move(nameSpace)),
        staticDefine(std::move(staticDefine)),
        instanceDefine(std::move(instanceDefine)) {}

  SCRIPTX_CLASS_DEFINE_FRIENDS;
};

class ClassDefineVisitor {
 public:
  ClassDefineVisitor() = default;
  virtual ~ClassDefineVisitor() = default;

  virtual void beginClassDefine(const std::string& name, const std::string& nameSpace) = 0;
  virtual void endClassDefine() = 0;

  virtual void visitConstructor(const std::type_info& type) = 0;

  virtual void visitStaticProperty(const std::string& name, const std::type_info& getter,
                                   const std::type_info& setter) = 0;
  virtual void visitStaticFunction(const std::string& name, const std::type_info& callback) = 0;

  virtual void visitInstanceProperty(const std::string& name, const std::type_info& getter,
                                     const std::type_info& setter) = 0;
  virtual void visitInstanceFunction(const std::string& name, const std::type_info& callback) = 0;
};

#undef SCRIPTX_CLASS_DEFINE_FRIENDS

}  // namespace script
