#pragma once

#include <memory>

#include "liteloader/api/Macro.h"
#include "liteloader/api/memory/MemoryUtils.h"

namespace ll::memory {

enum class HookPriority : int {
    Highest = 0,
    High    = 100,
    Normal  = 200,
    Low     = 300,
    Lowest  = 400,
};

LLAPI int hook(FuncPtr target, FuncPtr detour, FuncPtr* originalFunc, HookPriority priority);

LLAPI bool unhook(FuncPtr target, FuncPtr detour);

/**
 * @brief Get the pointer of a function by identifier.
 *
 * @param identifier symbol or signature
 * @return FuncPtr
 */
LLAPI FuncPtr resolveIdentifier(const char* identifier);

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
        using FuncPtr        = ::ll::memory::FuncPtr;                                                                  \
        using OriginFuncType = Ret OriginPtrType(__VA_ARGS__);                                                         \
        using HookPriority   = ::ll::memory::HookPriority;                                                             \
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
            target = ll::memory::resolveIdentifier(identifier);                                                        \
                                                                                                                       \
            if (target == nullptr) {                                                                                   \
                return -1;                                                                                             \
            }                                                                                                          \
            return ll::memory::hook(                                                                                   \
                target, ll::memory::toFuncPtr(&DefType::detour), reinterpret_cast<FuncPtr*>(&originFunc), priority     \
            );                                                                                                         \
        }                                                                                                              \
                                                                                                                       \
        static bool unhook() { return ll::memory::unhook(target, ll::memory::toFuncPtr(&DefType::detour)); }           \
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

/**
 * @brief Register a hook for a typed static function.
 * @param DefType The name of the hook definition.
 * @param type The type of the function.
 * @param priority The priority of the hook.
 * @param identifier The identifier of the hook. It can be a function symbol, address or a signature.
 * @param Ret The return type of the hook.
 * @param ... The parameters of the hook.
 *
 * @note register or unregister by calling DefType::hook() and DefType::unhook().
 */
#define LL_TYPED_STATIC_HOOK(DefType, type, priority, identifier, Ret, ...)                                            \
    LL_VA_EXPAND(LL_STATIC_HOOK_IMPL(DefType, : public type, priority, identifier, Ret, __VA_ARGS__))

/**
 * @brief Register a hook for a static function.
 * @param DefType The name of the hook definition.
 * @param priority The priority of the hook.
 * @param identifier The identifier of the hook. It can be a function symbol, address or a signature.
 * @param Ret The return type of the hook.
 * @param ... The parameters of the hook.
 *
 * @note register or unregister by calling DefType::hook() and DefType::unhook().
 */
#define LL_STATIC_HOOK(DefType, priority, identifier, Ret, ...)                                                        \
    LL_VA_EXPAND(LL_STATIC_HOOK_IMPL(DefType, , priority, identifier, Ret, __VA_ARGS__))

/**
 * @brief Register a hook for a typed static function.
 * @details The hook will be automatically registered and unregistered.
 * @see LL_TYPED_STATIC_HOOK for usage.
 */
#define LL_AUTO_TYPED_STATIC_HOOK(DefType, type, priority, identifier, Ret, ...)                                       \
    LL_VA_EXPAND(LL_AUTO_STATIC_HOOK_IMPL(DefType, : public type, priority, identifier, Ret, __VA_ARGS__))

/**
 * @brief Register a hook for a static function.
 * @details The hook will be automatically registered and unregistered.
 * @see LL_STATIC_HOOK for usage.
 */
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

/**
 * @brief Register a hook for a typed instance function.
 * @param DefType The name of the hook definition.
 * @param type The type of the function.
 * @param priority The priority of the hook.
 * @param identifier The identifier of the hook. It can be a function symbol, address or a signature.
 * @param Ret The return type of the hook.
 * @param ... The parameters of the hook.
 *
 * @note register or unregister by calling DefType::hook() and DefType::unhook().
 */
#define LL_TYPED_INSTANCE_HOOK(DefType, type, priority, identifier, Ret, ...)                                          \
    LL_VA_EXPAND(LL_INSTANCE_HOOK_IMPL(DefType, : public type, priority, identifier, Ret, __VA_ARGS__))

/**
 * @brief Register a hook for a instance function.
 * @param DefType The name of the hook definition.
 * @param priority The priority of the hook.
 * @param identifier The identifier of the hook. It can be a function symbol, address or a signature.
 * @param Ret The return type of the hook.
 * @param ... The parameters of the hook.
 *
 * @note register or unregister by calling DefType::hook() and DefType::unhook().
 */
#define LL_INSTANCE_HOOK(DefType, priority, identifier, Ret, ...)                                                      \
    LL_VA_EXPAND(LL_INSTANCE_HOOK_IMPL(DefType, , priority, identifier, Ret, __VA_ARGS__))

/**
 * @brief Register a hook for a typed instance function.
 * @details The hook will be automatically registered and unregistered.
 * @see LL_TYPED_INSTANCE_HOOK for usage.
 */
#define LL_AUTO_TYPED_INSTANCE_HOOK(DefType, type, priority, identifier, Ret, ...)                                     \
    LL_VA_EXPAND(LL_AUTO_INSTANCE_HOOK_IMPL(DefType, : public type, priority, identifier, Ret, __VA_ARGS__))

/**
 * @brief Register a hook for a instance function.
 * @details The hook will be automatically registered and unregistered.
 * @see LL_INSTANCE_HOOK for usage.
 */
#define LL_AUTO_INSTANCE_HOOK(DefType, priority, identifier, Ret, ...)                                                 \
    LL_VA_EXPAND(LL_AUTO_INSTANCE_HOOK_IMPL(DefType, , priority, identifier, Ret, __VA_ARGS__))
