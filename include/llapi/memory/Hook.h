#pragma once

#include <memory>

#include <pl/Hook.h>
#include <pl/SymbolProvider.h>

#include "llapi/Macro.h"
#include "llapi/memory/MemoryUtils.h"

namespace ll::memory {

using ::pl::hook::Priority;

LIAPI int hook(FuncPtr target, FuncPtr detour, FuncPtr* originalFunc, Priority priority);

LIAPI bool unhook(FuncPtr target, FuncPtr detour);

// Use a individual struct to register hook, in case DefType can't be constructed.
template <typename T>
struct HookAutoRegister {
    HookAutoRegister() { T::hook(); }
    ~HookAutoRegister() { T::unhook(); }
    static int  hook() { return T::hook(); }
    static bool unhook() { return T::unhook(); }
};

} // namespace ll::memory

#define LL_HOOK_IMPL(                                                                                                  \
    Register, OriginPtrType, StaticDescriptor, OriginCallWay, DefType, type, priority, identifier, Ret, ...            \
)                                                                                                                      \
    struct DefType type {                                                                                              \
        using FuncPtr        = ::pl::hook::FuncPtr;                                                                    \
        using OriginFuncType = Ret OriginPtrType(__VA_ARGS__);                                                         \
                                                                                                                       \
        inline static FuncPtr        target{};                                                                         \
        inline static OriginFuncType originFunc{};                                                                     \
                                                                                                                       \
        template <typename... P>                                                                                       \
        StaticDescriptor Ret origin(P&&... params) {                                                                   \
            return OriginCallWay(std::forward<P>(params)...);                                                          \
        }                                                                                                              \
                                                                                                                       \
        StaticDescriptor Ret detour(__VA_ARGS__);                                                                      \
                                                                                                                       \
        static int hook() {                                                                                            \
            target = ll::memory::getPtr(identifier);                                                                   \
                                                                                                                       \
            if (target == nullptr) {                                                                                   \
                return -1;                                                                                             \
            }                                                                                                          \
            return ll::memory::hook(                                                                                   \
                target, ll::memory::getPtr(&DefType::detour), reinterpret_cast<FuncPtr*>(&originFunc), priority        \
            );                                                                                                         \
        }                                                                                                              \
                                                                                                                       \
        static bool unhook() { return ll::memory::unhook(target, ll::memory::getPtr(&DefType::detour)); }              \
    };                                                                                                                 \
    Register;                                                                                                          \
    Ret DefType::detour(__VA_ARGS__)

#define LL_AUTO_REG_HOOK_IMPL(OriginPtrType, StaticDescriptor, OriginCallWay, DefType, ...)                            \
    LL_VA_EXPAND(LL_HOOK_IMPL(                                                                                         \
        inline ll::memory::HookAutoRegister<DefType> DefType##AutoRegister,                                            \
        OriginPtrType,                                                                                                 \
        StaticDescriptor,                                                                                              \
        OriginCallWay,                                                                                                 \
        DefType,                                                                                                       \
        __VA_ARGS__                                                                                                    \
    ))

#define LL_MANUAL_REG_HOOK_IMPL(...) LL_VA_EXPAND(LL_HOOK_IMPL(, __VA_ARGS__))

#define LL_STATIC_HOOK_IMPL(...) LL_VA_EXPAND(LL_MANUAL_REG_HOOK_IMPL((*), static, originFunc, __VA_ARGS__))

#define LL_AUTO_STATIC_HOOK_IMPL(...) LL_VA_EXPAND(LL_AUTO_REG_HOOK_IMPL((*), static, originFunc, __VA_ARGS__))

#define LL_TYPED_STATIC_HOOK(DefType, type, priority, identifier, Ret, ...)                                            \
    LL_VA_EXPAND(LL_STATIC_HOOK_IMPL(DefType, : public type, priority, identifier, Ret, __VA_ARGS__))

#define LL_STATIC_HOOK(DefType, priority, identifier, Ret, ...)                                                        \
    LL_VA_EXPAND(LL_STATIC_HOOK_IMPL(DefType, , priority, identifier, Ret, __VA_ARGS__))

#define LL_AUTO_TYPED_STATIC_HOOK(DefType, type, priority, identifier, Ret, ...)                                       \
    LL_VA_EXPAND(LL_AUTO_STATIC_HOOK_IMPL(DefType, : public type, priority, identifier, Ret, __VA_ARGS__))

#define LL_AUTO_STATIC_HOOK(DefType, priority, identifier, Ret, ...)                                                   \
    LL_VA_EXPAND(LL_AUTO_STATIC_HOOK_IMPL(DefType, , priority, identifier, Ret, __VA_ARGS__))

#define LL_INSTANCE_HOOK_IMPL(DefType, type, priority, identifier, Ret, ...)                                           \
    LL_VA_EXPAND(LL_MANUAL_REG_HOOK_IMPL(                                                                              \
        (DefType::*), , (this->*originFunc), DefType, type, priority, identifier, Ret, __VA_ARGS__                     \
    ))

#define LL_AUTO_INSTANCE_HOOK_IMPL(DefType, type, priority, identifier, Ret, ...)                                      \
    LL_VA_EXPAND(LL_AUTO_REG_HOOK_IMPL(                                                                                \
        (DefType::*), , (this->*originFunc), DefType, type, priority, identifier, Ret, __VA_ARGS__                     \
    ))

#define LL_TYPED_INSTANCE_HOOK(DefType, type, priority, identifier, Ret, ...)                                          \
    LL_VA_EXPAND(LL_INSTANCE_HOOK_IMPL(DefType, : public type, priority, identifier, Ret, __VA_ARGS__))

#define LL_INSTANCE_HOOK(DefType, priority, identifier, Ret, ...)                                                      \
    LL_VA_EXPAND(LL_INSTANCE_HOOK_IMPL(DefType, , priority, identifier, Ret, __VA_ARGS__))

#define LL_AUTO_TYPED_INSTANCE_HOOK(DefType, type, priority, identifier, Ret, ...)                                     \
    LL_VA_EXPAND(LL_AUTO_INSTANCE_HOOK_IMPL(DefType, : public type, priority, identifier, Ret, __VA_ARGS__))

#define LL_AUTO_INSTANCE_HOOK(DefType, priority, identifier, Ret, ...)                                                 \
    LL_VA_EXPAND(LL_AUTO_INSTANCE_HOOK_IMPL(DefType, , priority, identifier, Ret, __VA_ARGS__))
