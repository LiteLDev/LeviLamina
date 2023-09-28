#pragma once

#include <memory>
#include <type_traits>

#include "liteloader/api/base/Macro.h"
#include "liteloader/api/memory/MemoryUtils.h"

namespace ll::memory {

template <typename T>
struct IsConstMemberFun : std::false_type {};

template <typename T, typename Ret, typename... Args>
struct IsConstMemberFun<Ret (T::*)(Args...) const> : std::true_type {};

template <typename T>
inline constexpr bool IsConstMemberFunV = IsConstMemberFun<T>::value;

template <typename T>
struct AddConstAtMemberFun {
    using type = T;
};

template <typename T, typename Ret, typename... Args>
struct AddConstAtMemberFun<Ret (T::*)(Args...)> {
    using type = Ret (T::*)(Args...) const;
};

template <typename T>
using AddConstAtMemberFunT = typename AddConstAtMemberFun<T>::type;

template <typename T, typename U>
using AddConstAtMemberFunIfOriginIs = std::conditional_t<IsConstMemberFunV<U>, AddConstAtMemberFunT<T>, T>;

/**
 * @brief Hook priority enum.
 * @details The lower priority, the hook will be executed earlier
 */
enum class HookPriority : int {
    Lowest  = 0,
    Low     = 100,
    Normal  = 200,
    High    = 300,
    Highest = 400,
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

template <typename T>
concept FuncPtrType = std::is_function_v<std::remove_pointer_t<T>> || std::is_member_function_pointer_v<T>;

template <typename T>
    requires(FuncPtrType<T> || std::is_same_v<T, uintptr_t>)
constexpr FuncPtr resolveIdentifier(T identifier) {
    return toFuncPtr(identifier);
}

// redirect to resolveIdentifier(const char*)
template <typename T>
constexpr FuncPtr resolveIdentifier(const char* identifier) {
    return resolveIdentifier(identifier);
}

// redirect to resolveIdentifier(uintptr_t)
template <typename T>
constexpr FuncPtr resolveIdentifier(uintptr_t address) {
    return resolveIdentifier(address);
}

template <typename T>
struct HookAutoRegister {
    HookAutoRegister() { T::hook(); }
    ~HookAutoRegister() { T::unhook(); }
    static int  hook() { return T::hook(); }
    static bool unhook() { return T::unhook(); }
};

} // namespace ll::memory

#define LL_HOOK_IMPL(REGISTER, FUNC_PTR, STATIC, CALL, DEF_TYPE, TYPE, PRIORITY, IDENTIFIER, RET_TYPE, ...)            \
    struct DEF_TYPE TYPE {                                                                                             \
        using FuncPtr      = ::ll::memory::FuncPtr;                                                                    \
        using HookPriority = ::ll::memory::HookPriority;                                                               \
        using OriginFuncType =                                                                                         \
            ::ll::memory::AddConstAtMemberFunIfOriginIs<RET_TYPE FUNC_PTR(__VA_ARGS__), decltype(IDENTIFIER)>;         \
                                                                                                                       \
        inline static FuncPtr        target{};                                                                         \
        inline static OriginFuncType originFunc{};                                                                     \
                                                                                                                       \
        template <typename... Args>                                                                                    \
        STATIC RET_TYPE origin(Args&&... params) {                                                                     \
            return CALL(std::forward<Args>(params)...);                                                                \
        }                                                                                                              \
                                                                                                                       \
        STATIC RET_TYPE detour(__VA_ARGS__);                                                                           \
                                                                                                                       \
        static int hook() {                                                                                            \
            target = ll::memory::resolveIdentifier<OriginFuncType>(IDENTIFIER);                                        \
            if (target == nullptr) { return -1; }                                                                      \
            return ll::memory::hook(                                                                                   \
                target,                                                                                                \
                ll::memory::toFuncPtr(&DEF_TYPE::detour),                                                              \
                reinterpret_cast<FuncPtr*>(&originFunc),                                                               \
                PRIORITY                                                                                               \
            );                                                                                                         \
        }                                                                                                              \
                                                                                                                       \
        static bool unhook() { return ll::memory::unhook(target, ll::memory::toFuncPtr(&DEF_TYPE::detour)); }          \
    };                                                                                                                 \
    REGISTER;                                                                                                          \
    RET_TYPE DEF_TYPE::detour(__VA_ARGS__)

#define LL_AUTO_REG_HOOK_IMPL(FUNC_PTR, STATIC, CALL, DEF_TYPE, ...)                                                   \
    LL_VA_EXPAND(LL_HOOK_IMPL(                                                                                         \
        inline ll::memory::HookAutoRegister<DEF_TYPE> DEF_TYPE##AutoRegister,                                          \
        FUNC_PTR,                                                                                                      \
        STATIC,                                                                                                        \
        CALL,                                                                                                          \
        DEF_TYPE,                                                                                                      \
        __VA_ARGS__                                                                                                    \
    ))

#define LL_MANUAL_REG_HOOK_IMPL(...) LL_VA_EXPAND(LL_HOOK_IMPL(, __VA_ARGS__))

#define LL_STATIC_HOOK_IMPL(...) LL_VA_EXPAND(LL_MANUAL_REG_HOOK_IMPL((*), static, originFunc, __VA_ARGS__))

#define LL_AUTO_STATIC_HOOK_IMPL(...) LL_VA_EXPAND(LL_AUTO_REG_HOOK_IMPL((*), static, originFunc, __VA_ARGS__))

#define LL_INSTANCE_HOOK_IMPL(DEF_TYPE, ...)                                                                           \
    LL_VA_EXPAND(LL_MANUAL_REG_HOOK_IMPL((DEF_TYPE::*), , (this->*originFunc), DEF_TYPE, __VA_ARGS__))

#define LL_AUTO_INSTANCE_HOOK_IMPL(DEF_TYPE, ...)                                                                      \
    LL_VA_EXPAND(LL_AUTO_REG_HOOK_IMPL((DEF_TYPE::*), , (this->*originFunc), DEF_TYPE, __VA_ARGS__))

/**
 * @brief Register a hook for a typed static function.
 * @param DEF_TYPE The name of the hook definition.
 * @param TYPE The type which the function belongs to.
 * @param PRIORITY ll::memory::HookPriority The priority of the hook.
 * @param IDENTIFIER The identifier of the hook. It can be a function pointer, symbol, address or a signature.
 * @param RET_TYPE The return type of the hook.
 * @param ... The parameters of the hook.
 *
 * @note register or unregister by calling DEF_TYPE::hook() and DEF_TYPE::unhook().
 */
#define LL_TYPED_STATIC_HOOK(DEF_TYPE, PRIORITY, TYPE, IDENTIFIER, RET_TYPE, ...)                                      \
    LL_VA_EXPAND(LL_STATIC_HOOK_IMPL(DEF_TYPE, : public TYPE, PRIORITY, IDENTIFIER, RET_TYPE, __VA_ARGS__))

/**
 * @brief Register a hook for a static function.
 * @param DEF_TYPE The name of the hook definition.
 * @param PRIORITY ll::memory::HookPriority The priority of the hook.
 * @param IDENTIFIER The identifier of the hook. It can be a function pointer, symbol, address or a signature.
 * @param RET_TYPE The return type of the hook.
 * @param ... The parameters of the hook.
 *
 * @note register or unregister by calling DEF_TYPE::hook() and DEF_TYPE::unhook().
 */
#define LL_STATIC_HOOK(DEF_TYPE, PRIORITY, IDENTIFIER, RET_TYPE, ...)                                                  \
    LL_VA_EXPAND(LL_STATIC_HOOK_IMPL(DEF_TYPE, , PRIORITY, IDENTIFIER, RET_TYPE, __VA_ARGS__))

/**
 * @brief Register a hook for a typed static function.
 * @details The hook will be automatically registered and unregistered.
 * @see LL_TYPED_STATIC_HOOK for usage.
 */
#define LL_AUTO_TYPED_STATIC_HOOK(DEF_TYPE, PRIORITY, TYPE, IDENTIFIER, RET_TYPE, ...)                                 \
    LL_VA_EXPAND(LL_AUTO_STATIC_HOOK_IMPL(DEF_TYPE, : public TYPE, PRIORITY, IDENTIFIER, RET_TYPE, __VA_ARGS__))

/**
 * @brief Register a hook for a static function.
 * @details The hook will be automatically registered and unregistered.
 * @see LL_STATIC_HOOK for usage.
 */
#define LL_AUTO_STATIC_HOOK(DEF_TYPE, PRIORITY, IDENTIFIER, RET_TYPE, ...)                                             \
    LL_VA_EXPAND(LL_AUTO_STATIC_HOOK_IMPL(DEF_TYPE, , PRIORITY, IDENTIFIER, RET_TYPE, __VA_ARGS__))

/**
 * @brief Register a hook for a typed instance function.
 * @param DEF_TYPE The name of the hook definition.
 * @param TYPE The type which the function belongs to.
 * @param PRIORITY ll::memory::HookPriority The priority of the hook.
 * @param IDENTIFIER The identifier of the hook. It can be a function pointer, symbol, address or a signature.
 * @param RET_TYPE The return type of the hook.
 * @param ... The parameters of the hook.
 *
 * @note register or unregister by calling DEF_TYPE::hook() and DEF_TYPE::unhook().
 */
#define LL_TYPED_INSTANCE_HOOK(DEF_TYPE, TYPE, PRIORITY, IDENTIFIER, RET_TYPE, ...)                                    \
    LL_VA_EXPAND(LL_INSTANCE_HOOK_IMPL(DEF_TYPE, : public TYPE, PRIORITY, IDENTIFIER, RET_TYPE, __VA_ARGS__))

/**
 * @brief Register a hook for a instance function.
 * @param DEF_TYPE The name of the hook definition.
 * @param PRIORITY ll::memory::HookPriority The priority of the hook.
 * @param IDENTIFIER The identifier of the hook. It can be a function pointer, symbol, address or a signature.
 * @param RET_TYPE The return type of the hook.
 * @param ... The parameters of the hook.
 *
 * @note register or unregister by calling DEF_TYPE::hook() and DEF_TYPE::unhook().
 */
#define LL_INSTANCE_HOOK(DEF_TYPE, PRIORITY, IDENTIFIER, RET_TYPE, ...)                                                \
    LL_VA_EXPAND(LL_INSTANCE_HOOK_IMPL(DEF_TYPE, , PRIORITY, IDENTIFIER, RET_TYPE, __VA_ARGS__))

/**
 * @brief Register a hook for a typed instance function.
 * @details The hook will be automatically registered and unregistered.
 * @see LL_TYPED_INSTANCE_HOOK for usage.
 */
#define LL_AUTO_TYPED_INSTANCE_HOOK(DEF_TYPE, TYPE, PRIORITY, IDENTIFIER, RET_TYPE, ...)                               \
    LL_VA_EXPAND(LL_AUTO_INSTANCE_HOOK_IMPL(DEF_TYPE, : public TYPE, PRIORITY, IDENTIFIER, RET_TYPE, __VA_ARGS__))

/**
 * @brief Register a hook for a instance function.
 * @details The hook will be automatically registered and unregistered.
 * @see LL_INSTANCE_HOOK for usage.
 */
#define LL_AUTO_INSTANCE_HOOK(DEF_TYPE, PRIORITY, IDENTIFIER, RET_TYPE, ...)                                           \
    LL_VA_EXPAND(LL_AUTO_INSTANCE_HOOK_IMPL(DEF_TYPE, , PRIORITY, IDENTIFIER, RET_TYPE, __VA_ARGS__))
