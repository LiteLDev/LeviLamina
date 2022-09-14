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

#include <cassert>
#include <cstdint>
#include <optional>
#include <sstream>
#include <tuple>
#include <type_traits>
#include "Native.h"
#include "NativeConverter.hpp"
#include "Reference.h"
#include "Scope.h"
#include "Utils.h"
#include "types.h"

// script::internal are implementation details, not public API
namespace script::internal {

namespace traits {

template <typename Args>
struct TupleTrait;

template <typename HeadT, typename... TailT>
struct TupleTrait<std::tuple<HeadT, TailT...>> {
  using Head = HeadT;
  using Tail = std::tuple<TailT...>;

  static constexpr size_t count = 1 + sizeof...(TailT);

  template <size_t i>
  using Arg = typename std::tuple_element_t<i, std::tuple<HeadT, TailT...>>;
};

template <>
struct TupleTrait<std::tuple<>> {
  using Tail = std::tuple<>;
  static constexpr size_t count = 0;
};

template <typename Func, typename Enable = void>
struct FunctionTrait;

template <typename Ret, typename... Args>
struct FunctionTrait<Ret (*)(Args...)> {
  using ReturnType = Ret;
  using Arguments = std::tuple<Args...>;
};

template <typename C, typename Ret, typename... Args>
struct FunctionTrait<Ret (C::*)(Args...)> : FunctionTrait<Ret (*)(C*, Args...)> {};

template <typename C, typename Ret, typename... Args>
struct FunctionTrait<Ret (C::*)(Args...) const> : FunctionTrait<Ret (*)(C*, Args...)> {};

template <typename C, typename Ret, typename... Args>
struct FunctionTrait<Ret (C::*)(Args...) volatile> : FunctionTrait<Ret (*)(C*, Args...)> {};

template <typename C, typename Ret, typename... Args>
struct FunctionTrait<Ret (C::*)(Args...) const volatile> : FunctionTrait<Ret (*)(C*, Args...)> {};

// functor and lambda
template <typename Functor>
struct FunctionTrait<Functor, std::void_t<decltype(&Functor::operator())>> {
 private:
  using FunctorTrait = FunctionTrait<decltype(&Functor::operator())>;

 public:
  using ReturnType = typename FunctorTrait::ReturnType;
  using Arguments = typename TupleTrait<typename FunctorTrait::Arguments>::Tail;
};

// decay: remove const, reference; function type to function pointer
template <typename Func>
struct FunctionTrait<Func, std::enable_if_t<!std::is_same_v<Func, std::decay_t<Func>>>>
    : FunctionTrait<std::decay_t<Func>> {};

}  // namespace traits

template <typename T>
using FuncTrait = traits::FunctionTrait<T>;

template <typename T>
using ArgsTrait = traits::TupleTrait<typename FuncTrait<T>::Arguments>;

// SFINAE helper
template <typename T, typename...>
using type_t = T;

template <typename T, typename Enable = void>
struct TypeHolder {
  explicit TypeHolder(Local<Value> ref) : ref_(std::move(ref)) {}

  template <typename CppType>
  decltype(auto) toCpp() {
    return TypeConverter<CppType>::toCpp(ref_);
  }

 private:
  Local<Value> ref_;
};

template <typename T>
struct TypeHolder<T, std::enable_if_t<StringLikeConceptCondition(T)>> {
  explicit TypeHolder(const Local<Value>& str) : stringHolder_(str.asString()) {}

  template <typename CppType>
  decltype(auto) toCpp() {
    return TypeConverter<CppType>::toCpp(stringHolder_);
  }

 private:
  StringHolder stringHolder_;
};

template <typename T, typename = void>
struct IsArgsConvertibleHelper : std::false_type {};

template <typename... Args>
struct IsArgsConvertibleHelper<
    std::tuple<Args...>, std::enable_if_t<std::conjunction_v<IsConvertibleHelper<Args>...>, void>>
    : std::true_type {};

template <typename T>
constexpr bool isArgsConvertible = IsArgsConvertibleHelper<T>::value;

inline Local<Value> handleException(const Exception& e, bool nothrow) {
  if (!nothrow) throw e;
#ifndef NDEBUG
  Logger() << e;
#endif
  return {};
}

class OverloadInvalidArguments : public std::exception {};

template <typename>
struct ConvertingFuncCallHelper {};

template <typename Ret, typename... Args>
struct ConvertingFuncCallHelper<std::pair<Ret, std::tuple<Args...>>> {
 private:
  static constexpr auto ArgsLength = sizeof...(Args);

  using TypeHolderTupleType = std::tuple<TypeHolder<Args>...>;

  /**
   * using template matching, to get an index of Args;
   */
  template <typename Func, size_t... index>
  static Local<Value> call(Func& func, const Arguments& args, std::index_sequence<index...>,
                           bool nothrow, bool throwForOverload) {
    std::optional<TypeHolderTupleType> typeHolders;
    std::optional<typename std::tuple<typename ConverterDecay<Args>::type...>> cppArgs;
    // notice: avoid using std::optional::value, iOS support that only on 12+
    // using std::optional::operator* instead

    try {
      if (args.size() != sizeof...(Args)) {
        // fail fast
        if (nothrow) return {};
        std::ostringstream msg;
        msg << "Argument count mismatch, expect:" << (sizeof...(Args)) << " got:" << args.size();
        throw Exception(msg.str());
      }
      typeHolders.emplace(args[index]...);
      cppArgs.emplace(std::get<index>(*typeHolders).template toCpp<Args>()...);
    } catch (const Exception& e) {
      if (!nothrow && throwForOverload) throw OverloadInvalidArguments();
      return handleException(e, nothrow);
    }

    if constexpr (std::is_same_v<Ret, void>) {
      std::apply(func, *std::move(cppArgs));
      return {};
    } else {
      auto ret = std::apply(func, *std::move(cppArgs));
      try {
        return TypeConverter<Ret>::toScript(std::forward<Ret>(ret));
      } catch (const Exception& e) {
        return handleException(e, nothrow);
      }
    }
  }

  template <typename Func, typename Ins, size_t... index>
  static Local<Value> callInstanceFunc(Func& func, Ins* ins, const Arguments& args,
                                       std::index_sequence<index...>, bool nothrow,
                                       bool throwForOverload) {
    std::optional<TypeHolderTupleType> typeHolders;
    std::optional<std::tuple<Ins*, typename ConverterDecay<Args>::type...>> cppArgs;

    try {
      if (args.size() != sizeof...(Args)) {
        // fail fast
        if (nothrow) return {};
        std::ostringstream msg;
        msg << "Argument count mismatch, expect:" << (sizeof...(Args)) << " got:" << args.size();
        throw Exception(msg.str());
      }
      typeHolders.emplace(args[index]...);
      cppArgs.emplace(ins, std::get<index>(*typeHolders).template toCpp<Args>()...);
    } catch (const Exception& e) {
      if (!nothrow && throwForOverload) throw OverloadInvalidArguments();
      return handleException(e, nothrow);
    }

    if constexpr (std::is_same_v<Ret, void>) {
      std::apply(func, *std::move(cppArgs));
      return {};
    } else {
      auto ret = std::apply(func, *std::move(cppArgs));
      try {
        return TypeConverter<Ret>::toScript(std::forward<Ret>(ret));
      } catch (const Exception& e) {
        return handleException(e, nothrow);
      }
    }
  }

 public:
  template <typename Func>
  static Local<Value> call(Func& func, const Arguments& args, bool nothrow, bool throwForOverload) {
    return call(func, args, std::make_index_sequence<ArgsLength>(), nothrow, throwForOverload);
  }

  template <typename Func, typename Ins>
  static Local<Value> callInstanceFunc(Func& func, Ins* ins, const Arguments& args, bool nothrow,
                                       bool throwForOverload) {
    return callInstanceFunc(func, ins, args, std::make_index_sequence<ArgsLength>(), nothrow,
                            throwForOverload);
  }
};

template <typename T, typename = void>
struct ClassConstructorHelper : std::false_type {};

template <typename T, typename Arg, typename = void>
struct IsScriptClassConstructible : public std::false_type {};

// we don't use std::is_constructible_v here, because it also implies to be destructible
// in our case, the destructible can be protected/private, and we want T be made pointer.
// so just use `new T` syntax to check on it.
template <typename T, typename Arg>
struct IsScriptClassConstructible<T, Arg, std::void_t<decltype(new T(std::declval<Arg>()))>>
    : public std::true_type {};

template <typename T>
struct ClassConstructorHelper<T,
                              std::enable_if_t<IsScriptClassConstructible<T, Local<Object>>::value>>
    : std::true_type {
  static InstanceConstructor<T> ctor() {
    return [](const Arguments& args) -> T* { return new T(args.thiz()); };
  }
};

template <typename T>
struct ClassConstructorHelper<
    T, std::enable_if_t<IsScriptClassConstructible<T, Arguments>::value
                        // add inverse check, to avoid both two specialize can fit
                        && !IsScriptClassConstructible<T, Local<Object>>::value>> : std::true_type {
  static InstanceConstructor<T> ctor() {
    return [](const Arguments& args) -> T* { return new T(args); };
  }
};

// bind static function
template <typename Func>
std::enable_if_t<::script::converter::isConvertible<typename FuncTrait<Func>::ReturnType> &&
                     isArgsConvertible<typename FuncTrait<Func>::Arguments>,
                 FunctionCallback>
bindStaticFunc(Func&& func, bool nothrow, bool throwForOverload = false) {
  return [f = std::forward<Func>(func), nothrow,
          throwForOverload](const Arguments& args) -> Local<Value> {
    using Helper = ConvertingFuncCallHelper<
        std::pair<typename FuncTrait<Func>::ReturnType, typename FuncTrait<Func>::Arguments>>;
    return Helper::call(f, args, nothrow, throwForOverload);
  };
}

// plain overload
inline FunctionCallback bindStaticFunc(FunctionCallback&& func, bool, bool = false) {
  return std::move(func);
}
inline FunctionCallback bindStaticFunc(const FunctionCallback& func, bool, bool = false) {
  return func;
}

template <typename... Func>
FunctionCallback adaptOverLoadedFunction(Func&&... functions) {
  std::vector funcs{bindStaticFunc(std::forward<Func>(functions), false, true)...};
  return [overload = std::move(funcs)](const Arguments& args) -> Local<Value> {
    for (size_t i = 0; i < sizeof...(Func); ++i) {
      try {
        return std::invoke(overload[i], args);
      } catch (const OverloadInvalidArguments&) {
        if (i == sizeof...(Func) - 1) {
          throw Exception("no valid overloaded function chosen");
        }
      }
    }
    return {};
  };
}

// using strict type-check to have better SFINA support
template <typename Func>
std::enable_if_t<::script::converter::isConvertible<typename FuncTrait<Func>::ReturnType> &&
                     ArgsTrait<Func>::count == 0,
                 GetterCallback>
bindStaticGet(Func&& get, bool nothrow) {
  return [g = std::forward<Func>(get), nothrow]() -> Local<Value> {
    using Type = typename FuncTrait<Func>::ReturnType;
    auto&& ret = std::invoke(g);
    try {
      return TypeConverter<Type>::toScript(ret);
    } catch (Exception& e) {
      return handleException(e, nothrow);
    }
  };
}

// type-helper
inline GetterCallback bindStaticGet(GetterCallback&& g, bool) { return std::move(g); }
inline GetterCallback bindStaticGet(const GetterCallback& g, bool) { return g; }

template <typename Func>
// using strict type-check to have better SFINA support
std::enable_if_t<std::is_same_v<typename FuncTrait<Func>::ReturnType, void> &&
                     ArgsTrait<Func>::count == 1 &&
                     isArgsConvertible<typename FuncTrait<Func>::Arguments>,
                 SetterCallback>
bindStaticSet(Func&& set, bool nothrow) {
  return [s = std::forward<Func>(set), nothrow](const Local<Value>& value) {
    using Type = typename ConverterDecay<typename ArgsTrait<Func>::Head>::type;
    std::optional<TypeHolder<Type>> typeHolder;
    std::optional<Type> arg;
    try {
      typeHolder.emplace(value);
      arg = typeHolder->template toCpp<Type>();
    } catch (Exception& e) {
      handleException(e, nothrow);
    }
    std::invoke(s, *std::move(arg));
  };
}

inline SetterCallback bindStaticSet(SetterCallback&& s, bool) { return std::move(s); }
inline SetterCallback bindStaticSet(const SetterCallback& s, bool) { return s; }

template <typename T>
std::enable_if_t<::script::converter::isConvertible<T>, std::pair<GetterCallback, SetterCallback>>
bindStaticProp(T* prop, bool nothrow) {
  if constexpr (!std::is_const_v<T>) {
    return {bindStaticGet([prop]() -> T { return *prop; }, nothrow),
            bindStaticSet([prop](T val) { *prop = val; }, nothrow)};
  } else {
    return {bindStaticGet([prop]() -> T { return *prop; }, nothrow), nullptr};
  }
}

template <typename Class, typename Func>
std::enable_if_t<::script::converter::isConvertible<typename FuncTrait<Func>::ReturnType> &&
                     // if Arg<0> is base class of Class
                     std::is_convertible_v<Class*, typename ArgsTrait<Func>::template Arg<0>> &&
                     isArgsConvertible<typename ArgsTrait<Func>::Tail>,
                 InstanceFunctionCallback<Class>>
bindInstanceFunc(Func&& func, bool nothrow, bool throwForOverload = false) {
  return
      [f = std::forward<Func>(func), nothrow, throwForOverload](Class* ins, const Arguments& args) {
        using Helper = ConvertingFuncCallHelper<
            std::pair<typename ConverterDecay<typename FuncTrait<Func>::ReturnType>::type,
                      typename ArgsTrait<Func>::Tail>>;

        return Helper::callInstanceFunc(f, ins, args, nothrow, throwForOverload);
      };
}

template <typename Class>
InstanceFunctionCallback<Class> bindInstanceFunc(InstanceFunctionCallback<Class>&& func, bool,
                                                 bool = false) {
  return std::move(func);
}

template <typename Class>
InstanceFunctionCallback<Class> bindInstanceFunc(const InstanceFunctionCallback<Class>& func, bool,
                                                 bool = false) {
  return func;
}

template <typename Class, typename... Func>
InstanceFunctionCallback<Class> adaptOverloadedInstanceFunction(Func&&... functions) {
  std::vector funcs{bindInstanceFunc<Class>(std::forward<Func>(functions), false, true)...};
  return [overload = std::move(funcs)](Class* thiz, const Arguments& args) -> Local<Value> {
    for (size_t i = 0; i < sizeof...(Func); ++i) {
      try {
        return std::invoke(overload[i], thiz, args);
      } catch (const OverloadInvalidArguments&) {
        if (i == sizeof...(Func) - 1) {
          throw Exception("no valid overloaded function chosen");
        }
      }
    }
    return {};
  };
}

template <typename Class, typename Func>
std::enable_if_t<::script::converter::isConvertible<typename FuncTrait<Func>::ReturnType> &&
                     ArgsTrait<Func>::count == 1 &&
                     // if Arg<0> is base class of C
                     std::is_convertible_v<Class*, typename ArgsTrait<Func>::template Arg<0>>,
                 InstanceGetterCallback<Class>>
bindInstanceGet(Func&& get, bool nothrow) {
  return [g = std::forward<Func>(get), nothrow](Class* thiz) -> Local<Value> {
    using Type = typename FuncTrait<Func>::ReturnType;
    try {
      return TypeConverter<Type>::toScript(std::invoke(g, thiz));
    } catch (Exception& e) {
      return handleException(e, nothrow);
    }
  };
}

template <typename C>
InstanceGetterCallback<C> bindInstanceGet(InstanceGetterCallback<C>&& g, bool) {
  return std::move(g);
}

template <typename C>
InstanceGetterCallback<C> bindInstanceGet(const InstanceGetterCallback<C>& g, bool) {
  return g;
}

template <typename Class, typename Func>
std::enable_if_t<std::is_same_v<typename FuncTrait<Func>::ReturnType, void> &&
                     ArgsTrait<Func>::count == 2 &&
                     // if Arg<0> is base class of C
                     std::is_convertible_v<Class*, typename ArgsTrait<Func>::template Arg<0>> &&
                     isArgsConvertible<typename ArgsTrait<Func>::Tail>,
                 InstanceSetterCallback<Class>>
bindInstanceSet(Func&& get, bool nothrow) {
  return [g = std::forward<Func>(get), nothrow](Class* thiz, const Local<Value>& value) -> void {
    using SecondArg = typename ConverterDecay<typename ArgsTrait<Func>::template Arg<1>>::type;

    std::optional<TypeHolder<SecondArg>> typeHolder;
    std::optional<SecondArg> arg;
    try {
      typeHolder.emplace(value);
      arg = typeHolder->template toCpp<SecondArg>();
    } catch (Exception& e) {
      handleException(e, nothrow);
    }
    std::invoke(g, thiz, *std::move(arg));
  };
}

template <typename C>
InstanceSetterCallback<C> bindInstanceSet(InstanceSetterCallback<C>&& s, bool) {
  return std::move(s);
}

template <typename C>
InstanceSetterCallback<C> bindInstanceSet(const InstanceSetterCallback<C>&& s, bool) {
  return s;
}

// BaseClass maybe super type of Class or same as Class.
template <typename Class, typename BaseClass, typename T>
std::enable_if_t<std::is_convertible_v<Class*, BaseClass*>&& ::script::converter::isConvertible<T>,
                 std::pair<InstanceGetterCallback<Class>, InstanceSetterCallback<Class>>>
bindInstanceProp(T BaseClass::*prop, bool nothrow) {
  if constexpr (!std::is_const_v<T>) {
    return {
        bindInstanceGet<Class>([prop](Class* thiz) -> T { return thiz->*prop; }, nothrow),
        bindInstanceSet<Class>([prop](Class* thiz, T val) -> void { thiz->*prop = val; }, nothrow)};
  } else {
    return {bindInstanceGet<Class>([prop](Class* thiz) -> T { return thiz->*prop; }, nothrow),
            nullptr};
  }
}

template <typename T, typename = std::void_t<decltype(&ClassConstructorHelper<T>::ctor)>>
InstanceConstructor<T> bindConstructor() {
  return ClassConstructorHelper<T>::ctor();
}

constexpr bool kBindingNoThrowDefaultValue =
#ifdef SCRIPTX_NO_EXCEPTION_ON_BIND_FUNCTION
    true;
#else
    false;
#endif

template <typename RetType, typename... Args>
std::enable_if_t<::script::converter::isConvertible<RetType> &&
                     isArgsConvertible<std::tuple<Args...>>,
                 std::function<RetType(Args...)>>
createFunctionWrapperInner(const Local<Function>& function, const Local<Value>& thiz,
                           const std::tuple<Args...>*) {
  using EngineImpl = typename ImplType<ScriptEngine>::type;
  return std::function(
      [func = Global<Function>(function), receiver = Global<Value>(thiz),
       engine = EngineScope::currentEngineAs<EngineImpl>()](Args... args) -> RetType {
        // use EngineImpl to avoid possible dynamic_cast
        EngineScope scope(engine);
        auto ret = func.get().call(receiver.getValue(), args...);
        if constexpr (!std::is_void_v<RetType>) {
          return ::script::converter::Converter<RetType>::toCpp(ret);
        }
      });
}

template <typename FuncType>
inline std::function<FuncType> createFunctionWrapper(const Local<Function>& function,
                                                     const Local<Value>& thiz) {
  using FC = traits::FunctionTrait<FuncType>;
  return createFunctionWrapperInner<typename FC::ReturnType>(
      function, thiz, static_cast<typename FC::Arguments*>(nullptr));
}

}  // namespace script::internal

namespace script {

template <typename Func>
inline internal::type_t<
    Local<Function>, std::void_t<decltype(internal::bindStaticFunc(std::declval<Func>(), false))>>
Function::newFunction(Func&& callback, bool nothrow) {
  return newFunction(internal::bindStaticFunc(std::forward<Func>(callback), nothrow));
}

template <typename T>
inline internal::type_t<void, std::void_t<decltype(&internal::TypeConverter<T>::toScript)>>
Local<Object>::set(const Local<String>& key, T&& value) const {
  auto val = internal::TypeConverter<T>::toScript(std::forward<T>(value));
  // static_cast is crucial!!!
  // force the compiler to chose the non-template version
  // to avoid a recursive call
  set(key, static_cast<const Local<Value>&>(val));
}

template <typename StringLike, typename T, typename>
inline internal::type_t<void, std::void_t<decltype(&internal::TypeConverter<T>::toScript)>>
Local<Object>::set(StringLike&& keyStringLike, T&& value) const {
  auto val = internal::TypeConverter<T>::toScript(std::forward<T>(value));
  set(String::newString(std::forward<StringLike>(keyStringLike)),
      static_cast<const Local<Value>&>(val));
}

template <typename T>
inline internal::type_t<void, std::void_t<decltype(&internal::TypeConverter<T>::toScript)>>
Local<Array>::set(size_t index, T&& value) const {
  auto val = internal::TypeConverter<T>::toScript(std::forward<T>(value));
  set(index, static_cast<const Local<Value>&>(val));
}

template <typename T>
inline internal::type_t<void, std::void_t<decltype(&internal::TypeConverter<T>::toScript)>>
InternalStoreHelper::set(T&& value) const {
  auto val = internal::TypeConverter<T>::toScript(std::forward<T>(value));
  set(static_cast<const Local<Value>&>(val));
}

template <typename... T>
inline internal::type_t<Local<Value>,
                        std::void_t<decltype(&internal::TypeConverter<T>::toScript)>...>
Local<Function>::call(const Local<Value>& thiz, T&&... args) const {
  return call(thiz, {internal::TypeConverter<T>::toScript(std::forward<T>(args))...});
}

template <typename FuncType>
std::function<FuncType> Local<Function>::wrapper(const Local<Value>& thiz) const {
  return internal::createFunctionWrapper<FuncType>(*this, thiz);
}

template <typename... T>
inline internal::type_t<Local<Object>,
                        std::void_t<decltype(&internal::TypeConverter<T>::toScript)>...>
Object::newObject(const Local<Value>& type, T&&... args) {
  return newObject(type, {internal::TypeConverter<T>::toScript(std::forward<T>(args))...});
}

inline Local<Object> Object::newObject(const Local<Value>& type,
                                       const std::vector<Local<Value>>& args) {
  return newObjectImpl(type, args.size(), args.data());
}

inline Local<Object> Object::newObject(const Local<Value>& type,
                                       const std::initializer_list<Local<Value>>& args) {
  return newObjectImpl(type, args.size(), args.begin());
}

inline Local<Array> Array::newArray(const std::vector<Local<Value>>& elements) {
  return newArrayImpl(elements.size(), elements.data());
}

inline Local<Array> Array::newArray(const std::initializer_list<Local<Value>>& elements) {
  return newArrayImpl(elements.size(), elements.begin());
}

template <typename... T>
inline internal::type_t<Local<Array>,
                        std::void_t<decltype(&internal::TypeConverter<T>::toScript)>...>
Array::of(T&&... args) {
  return newArray({internal::TypeConverter<T>::toScript(std::forward<T>(args))...});
}

namespace internal {

#ifndef __cpp_char8_t
template <typename StringLike, StringLikeConcept(StringLike)>
std::string extractStringLike(StringLike&& str) {
  return std::string{std::forward<StringLike>(str)};
}
#else
// tag dispatch
inline std::string extractStringLike(const char* str) { return str; }
inline std::string extractStringLike(std::string str) { return str; }
inline std::string extractStringLike(std::string_view str) { return std::string{str}; }

inline std::string extractStringLike(const char8_t* str) {
  return reinterpret_cast<const char*>(str);
}
inline std::string extractStringLike(const std::u8string& str) {
  return std::string{reinterpret_cast<const char*>(str.c_str()), str.size()};
}
inline std::string extractStringLike(std::u8string_view str) {
  return std::string{reinterpret_cast<const char*>(str.data()), str.size()};
}
#endif
}  // namespace internal

template <typename StringLike, typename>
Exception::Exception(StringLike&& messageStringLike)
    : Exception(internal::extractStringLike(std::forward<StringLike>(messageStringLike))) {}

template <typename T>
inline internal::type_t<void, std::void_t<decltype(&internal::TypeConverter<T>::toScript)>>
ScriptEngine::set(const Local<String>& key, T&& value) {
  auto val = internal::TypeConverter<T>::toScript(std::forward<T>(value));
  set(key, static_cast<const Local<Value>&>(val));
}

template <typename StringLike, typename T, typename>
inline internal::type_t<void, std::void_t<decltype(&internal::TypeConverter<T>::toScript)>>
ScriptEngine::set(StringLike&& keyStringLike, T&& value) {
  auto val = internal::TypeConverter<T>::toScript(std::forward<T>(value));
  set(String::newString(std::forward<StringLike>(keyStringLike)),
      static_cast<const Local<Value>&>(val));
}

template <typename D, typename... T>
inline internal::type_t<Local<Object>,
                        std::void_t<decltype(&internal::TypeConverter<T>::toScript)>...>
ScriptEngine::newNativeClass(T&&... args) {
  return newNativeClass<D>({internal::TypeConverter<T>::toScript(std::forward<T>(args))...});
}

namespace internal {

template <typename T>
void validateClassDefine(const ClassDefine<T>* classDefine) {
  auto throwException = [classDefine](const char* msg) {
    std::string info = msg;
    if (classDefine) {
      info = "failed to valid class define [" + classDefine->className + "] " + msg;
    }
    if (EngineScope::currentEngine()) {
      throw Exception(info);
    } else {
      throw std::runtime_error(info);
    }
  };

  if (classDefine == nullptr) {
    throwException("null class define");
  }

  if (classDefine->className.empty()) {
    throwException("empty class name");
  }

  bool hasStatic =
      !classDefine->staticDefine.functions.empty() || !classDefine->staticDefine.properties.empty();

  bool hasInstance = static_cast<bool>(classDefine->instanceDefine.constructor) ||
                     !classDefine->instanceDefine.functions.empty() ||
                     !classDefine->instanceDefine.properties.empty();

  if (!hasStatic && !hasInstance) {
    throwException("both static and instance define are empty");
  }

  if (hasStatic) {
    for (auto funcDef : classDefine->staticDefine.functions) {
      if (funcDef.name.empty()) {
        throwException("staticDefine.functions has no name");
      }
      if (funcDef.callback == nullptr) {
        throwException("staticDefine.functions has no callback");
      }
    }

    for (auto propDef : classDefine->staticDefine.properties) {
      if (propDef.name.empty()) {
        throwException("staticDefine.properties has no name");
      }
      if (propDef.getter == nullptr && propDef.setter == nullptr) {
        throwException("staticDefine.functions has no getter&setter");
      }
    }
  }

  if (classDefine->instanceDefine.constructor) {
    if (!std::is_base_of_v<ScriptClass, T>) {
      throwException("ClassDefine with instance must have a valid type parameter");
    }
    for (auto funcDef : classDefine->instanceDefine.functions) {
      if (funcDef.name.empty()) {
        throwException("instanceDefine.functions has no name");
      }
      if (funcDef.callback == nullptr) {
        throwException("instanceDefine.functions has no callback");
      }
    }

    for (auto propDef : classDefine->instanceDefine.properties) {
      if (propDef.name.empty()) {
        throwException("instanceDefine.functions has no name");
      }
      if (propDef.getter == nullptr && propDef.setter == nullptr) {
        throwException("instanceDefine.functions has no getter&setter");
      }
    }
  } else {
    if (!classDefine->instanceDefine.properties.empty() ||
        !classDefine->instanceDefine.functions.empty()) {
      throwException("instance has no constructor");
    }
  }
}

template <typename T>
class InstanceDefineBuilder {
  template <typename...>
  using sfina = ClassDefineBuilder<T>&;

  ClassDefineBuilder<T>& thiz;

 protected:
  // instance
  typename InstanceDefine<T>::Constructor constructor_{};
  std::vector<typename InstanceDefine<T>::FunctionDefine> insFunctions_{};
  std::vector<typename InstanceDefine<T>::PropertyDefine> insProperties_{};

  explicit InstanceDefineBuilder(ClassDefineBuilder<T>& thiz) : thiz(thiz) {}

 public:
  ClassDefineBuilder<T>& constructor(InstanceConstructor<T> constructor) {
    constructor_ = std::move(constructor);
    return thiz;
  }

  /**
   * A helper method to add constructor to class define
   * if Class T has constructor in signature of
   * 1. T::T(Local<Object>)
   * 2. T::T(Arguments)
   */
  ClassDefineBuilder<T>& constructor() {
    static_assert(ClassConstructorHelper<T>::value);
    constructor_ = internal::bindConstructor<T>();
    return thiz;
  }

  /**
   * A helper method to disallow construct of this Class. (It's constructor always throw exception)
   */
  ClassDefineBuilder<T>& constructor(std::nullptr_t) {
    constructor_ = [](const Arguments&) -> T* { return nullptr; };
    return thiz;
  }

  ClassDefineBuilder<T>& instanceFunction(std::string name, InstanceFunctionCallback<T> func) {
    insFunctions_.push_back(
        typename InstanceDefine<T>::FunctionDefine{std::move(name), std::move(func), {}});
    return thiz;
  }

  template <typename Func>
  sfina<decltype(internal::bindInstanceFunc<T>(std::declval<Func>(), false))> instanceFunction(
      std::string name, Func func, bool nothrow = kBindingNoThrowDefaultValue) {
    insFunctions_.push_back(typename InstanceDefine<T>::FunctionDefine{
        std::move(name), internal::bindInstanceFunc<T>(std::move(func), nothrow), {}});
    return thiz;
  }

  template <typename G, typename S = InstanceSetterCallback<T>>
  sfina<decltype(internal::bindInstanceGet<T>(std::declval<G>(), false)),
        decltype(internal::bindInstanceSet<T>(std::declval<S>(), false))>
  instanceProperty(std::string name, G&& getter, S&& setterCallback = nullptr,
                   bool nothrow = kBindingNoThrowDefaultValue) {
    insProperties_.push_back(typename InstanceDefine<T>::PropertyDefine{
        std::move(name),
        internal::bindInstanceGet<T>(std::forward<G>(getter), nothrow),
        internal::bindInstanceSet<T>(std::forward<S>(setterCallback), nothrow),
        {}});
    return thiz;
  }

  template <typename S>
  sfina<decltype(internal::bindInstanceSet<T>(std::declval<S>(), false))> instanceProperty(
      std::string name, S&& setterCallback, bool nothrow = kBindingNoThrowDefaultValue) {
    insProperties_.push_back(typename InstanceDefine<T>::PropertyDefine{
        std::move(name),
        nullptr,
        internal::bindInstanceSet<T>(std::forward<S>(setterCallback), nothrow),
        {}});
    return thiz;
  }

  template <typename P, typename BaseClass>
  sfina<decltype(internal::bindInstanceProp<T, BaseClass, P>(std::declval<P BaseClass::*>(),
                                                             false))>
  instanceProperty(std::string name, P BaseClass::*ptr,
                   bool nothrow = kBindingNoThrowDefaultValue) {
    auto prop = internal::bindInstanceProp<T, BaseClass, P>(ptr, nothrow);
    insProperties_.push_back(typename InstanceDefine<T>::PropertyDefine{
        std::move(name), std::move(prop.first), std::move(prop.second), {}});
    return thiz;
  }
};

// specialize for void
template <>
class InstanceDefineBuilder<void> {
 protected:
  typename InstanceDefine<void>::Constructor constructor_{};
  std::vector<typename InstanceDefine<void>::FunctionDefine> insFunctions_{};
  std::vector<typename InstanceDefine<void>::PropertyDefine> insProperties_{};

  explicit InstanceDefineBuilder(ClassDefineBuilder<void>&) {}

 public:
  // nothing here
};

}  // namespace internal

template <typename T>
class ClassDefineBuilder : public internal::InstanceDefineBuilder<T> {
  static_assert(std::is_void_v<T> || std::is_convertible_v<T*, ScriptClass*>,
                "T must be subclass of ScriptClass, "
                "and can be void if no instance is required.");
  template <typename...>
  using sfina = ClassDefineBuilder<T>&;

  std::string className_{};
  std::string nameSpace_{};

  // static
  std::vector<internal::StaticDefine::FunctionDefine> functions_{};
  std::vector<internal::StaticDefine::PropertyDefine> properties{};

 public:
  explicit ClassDefineBuilder(std::string className)
      : internal::InstanceDefineBuilder<T>(*this), className_(std::move(className)) {}

  ClassDefineBuilder<T>& nameSpace(std::string nameSpace) {
    nameSpace_ = std::move(nameSpace);
    return *this;
  }

  ClassDefineBuilder<T>& function(std::string name, FunctionCallback func) {
    functions_.push_back(internal::StaticDefine::FunctionDefine{
        std::move(name), std::forward<FunctionCallback>(func), {}});
    return *this;
  }

  template <typename Func>
  sfina<decltype(internal::bindStaticFunc(std::declval<Func>(), false))> function(
      std::string name, Func func, bool nothrow = internal::kBindingNoThrowDefaultValue) {
    functions_.push_back(internal::StaticDefine::FunctionDefine{
        std::move(name), internal::bindStaticFunc(std::forward<Func>(func), nothrow), {}});
    return *this;
  }

  template <typename G, typename S = SetterCallback>
  sfina<decltype(internal::bindStaticGet(std::declval<G>(), false)),
        decltype(internal::bindStaticSet(std::declval<S>(), false))>
  property(std::string name, G&& getter, S&& setterCallback = nullptr,
           bool nothrow = internal::kBindingNoThrowDefaultValue) {
    properties.push_back(internal::StaticDefine::PropertyDefine{
        std::move(name),
        internal::bindStaticGet(std::forward<G>(getter), nothrow),
        internal::bindStaticSet(std::forward<S>(setterCallback), nothrow),
        {}});
    return *this;
  }

  template <typename S>
  sfina<decltype(internal::bindStaticSet(std::declval<S>(), false))> property(std::string name,
                                                                              S&& setterCallback) {
    properties.push_back(internal::StaticDefine::PropertyDefine{
        std::move(name), nullptr, internal::bindStaticSet(std::forward<S>(setterCallback)), {}});
    return *this;
  }

  template <typename P>
  sfina<decltype(internal::bindStaticProp(std::declval<P*>(), false))> property(
      std::string name, P* ptr, bool nothrow = internal::kBindingNoThrowDefaultValue) {
    auto prop = internal::bindStaticProp(ptr, nothrow);
    properties.push_back(internal::StaticDefine::PropertyDefine{
        std::move(name), std::move(prop.first), std::move(prop.second), {}});
    return *this;
  }

  ClassDefine<T> build() {
    using Instance = internal::InstanceDefineBuilder<T>;
    // fill trace name
    for (auto&& f : functions_) {
      f.traceName = className_ + "::" + f.name;
    }
    for (auto&& p : properties) {
      p.traceName = className_ + "::" + p.name;
    }
    for (auto&& f : Instance::insFunctions_) {
      f.traceName = className_ + "::" + f.name;
    }
    for (auto&& p : Instance::insProperties_) {
      p.traceName = className_ + "::" + p.name;
    }
    ClassDefine<T> define(std::move(className_), std::move(nameSpace_),
                          internal::StaticDefine{std::move(functions_), std::move(properties)},
                          internal::InstanceDefine<T>{std::move(Instance::constructor_),
                                                      std::move(Instance::insFunctions_),
                                                      std::move(Instance::insProperties_)});
    ::script::internal::validateClassDefine(&define);
    return define;
  }
};

template <typename T>
inline ClassDefineBuilder<T> defineClass(std::string name) {
  return ClassDefineBuilder<T>(std::move(name));
}

class NativeRegister {
  void (*registerFunc_)(const void* def, ScriptEngine* engine);
#ifdef __cpp_rtti
  void (*visitFunc_)(const void* def, ClassDefineVisitor& visitor);
#endif

  const void* define_;

  template <typename T>
  explicit NativeRegister(const ClassDefine<T>* define) : registerFunc_(nullptr), define_(define) {
    registerFunc_ = [](const void* def, ScriptEngine* engine) {
      engine->registerNativeClass(*static_cast<const ClassDefine<T>*>(def));
    };
#ifdef __cpp_rtti
    visitFunc_ = [](const void* def, ClassDefineVisitor& visitor) {
      static_cast<const ClassDefine<T>*>(def)->visit(visitor);
    };
#endif
  }

  template <typename T>
  friend class ClassDefine;

 public:
  /**
   * register the wrapped class define to engine.
   * this is equivalent to call
   * \code
   * engine->registerNativeClass(wrappedDefine);
   * \endcode
   * @param engine
   */
  void registerNativeClass(ScriptEngine* engine) const { registerFunc_(define_, engine); }

#ifdef __cpp_rtti
  /**
   * You must enable rtti feature to use this api.
   * @param visitor
   */
  void visit(ClassDefineVisitor& visitor) const { visitFunc_(define_, visitor); }
#endif
};

template <typename T>
inline NativeRegister ClassDefine<T>::getNativeRegister() const {
  return NativeRegister(this);
}

#ifdef __cpp_rtti

template <typename T>
void script::ClassDefine<T>::visit(script::ClassDefineVisitor& visitor) const {
  visitor.beginClassDefine(className, nameSpace);

  for (auto&& prop : staticDefine.properties) {
    visitor.visitStaticProperty(prop.name, prop.getter.target_type(), prop.setter.target_type());
  }
  for (auto&& function : staticDefine.functions) {
    visitor.visitStaticFunction(function.name, function.callback.target_type());
  }

  if (instanceDefine.constructor) {
    visitor.visitConstructor(instanceDefine.constructor.target_type());
  }

  for (auto&& prop : instanceDefine.properties) {
    visitor.visitInstanceProperty(prop.name, prop.getter.target_type(), prop.setter.target_type());
  }
  for (auto&& function : instanceDefine.functions) {
    visitor.visitInstanceFunction(function.name, function.callback.target_type());
  }

  visitor.endClassDefine();
}

#else

template <typename T>
void script::ClassDefine<T>::visit(script::ClassDefineVisitor& visitor) const {
  static_assert(!std::is_same_v<T, T>, "ClassDefine::visit api requires rtti feature be enabled.");
}

#endif

template <typename... T>
inline FunctionCallback adaptOverLoadedFunction(T&&... functions) {
  return internal::adaptOverLoadedFunction(std::forward<T>(functions)...);
}

template <typename C, typename... T>
inline InstanceFunctionCallback<C> adaptOverloadedInstanceFunction(T&&... functions) {
  return internal::adaptOverloadedInstanceFunction<C>(std::forward<T>(functions)...);
}

}  // namespace script
