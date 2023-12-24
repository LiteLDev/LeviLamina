#pragma once

// #define LL_HOOK_DEBUG

#include <atomic>
#include <memory>
#include <type_traits>

#include "ll/api/base/Concepts.h"
#include "ll/api/base/Macro.h"
#include "ll/api/memory/Memory.h"
#include "ll/api/reflection/TypeName.h"

#ifdef LL_HOOK_DEBUG
#include "ll/api/Logger.h"
#define LL_HOOK_DEBUG_OUTPUT(IDENTIFIER)                                                                               \
    static inline int debugger() {                                                                                     \
        try {                                                                                                          \
            static FuncPtr t = ll::memory::resolveIdentifier<OriginFuncType>(IDENTIFIER);                              \
            if (t == nullptr) {                                                                                        \
                fmt::print("\x1b[91mCan't resolve: [" #IDENTIFIER "]\x1b[0m\n");                                       \
            } else {                                                                                                   \
                auto symbols = ll::memory::lookupSymbol(t);                                                            \
                if (symbols.size() > 1) {                                                                              \
                    fmt::print(                                                                                        \
                        "\x1b[93m[" #IDENTIFIER "] has {} matches, probability cause bugs.\x1b[0m\n",                  \
                        symbols.size()                                                                                 \
                    );                                                                                                 \
                }                                                                                                      \
                fmt::print("\x1b[96m v resolve [" #IDENTIFIER "] to:\x1b[0m\n");                                       \
                for (auto& str : symbols) {                                                                            \
                    fmt::print(" {} {}\n", (&str == &symbols.back()) ? '-' : '|', str);                                \
                }                                                                                                      \
            }                                                                                                          \
        } catch (...) {                                                                                                \
            fmt::print("\x1b[91m!!! Exception in resolve: [" #IDENTIFIER "]\x1b[0m\n");                                \
        }                                                                                                              \
        return 0;                                                                                                      \
    };                                                                                                                 \
    static inline int debugging = debugger()
#else
#define LL_HOOK_DEBUG_OUTPUT(...)
#endif

namespace ll::memory {

template <class T>
struct IsConstMemberFun : std::false_type {};

template <class T, class Ret, class... Args>
struct IsConstMemberFun<Ret (T::*)(Args...) const> : std::true_type {};

template <class T>
inline constexpr bool IsConstMemberFunV = IsConstMemberFun<T>::value;

template <class T>
struct AddConstAtMemberFun {
    using type = T;
};

template <class T, class Ret, class... Args>
struct AddConstAtMemberFun<Ret (T::*)(Args...)> {
    using type = Ret (T::*)(Args...) const;
};

template <class T>
using AddConstAtMemberFunT = typename AddConstAtMemberFun<T>::type;

template <class T, class U>
using AddConstAtMemberFunIfOriginIs = std::conditional_t<IsConstMemberFunV<U>, AddConstAtMemberFunT<T>, T>;

/**
 * @brief Hook priority enum.
 * @details The higher priority, the hook will be executed earlier
 */
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
LLNDAPI FuncPtr resolveIdentifier(std::string_view identifier, bool disableErrorOutput = false);

template <class T>
concept FuncPtrType = std::is_function_v<std::remove_pointer_t<T>> || std::is_member_function_pointer_v<T>;

template <class T>
    requires(FuncPtrType<T> || std::is_same_v<T, uintptr_t>)
constexpr FuncPtr resolveIdentifier(T identifier) {
    return toFuncPtr(identifier);
}

// redirect to resolveIdentifier(std::string_view)
template <class T>
constexpr FuncPtr resolveIdentifier(std::string_view identifier) {
    return resolveIdentifier(identifier);
}

// redirect to resolveIdentifier(uintptr_t)
template <class T>
constexpr FuncPtr resolveIdentifier(uintptr_t address) {
    return resolveIdentifier(address);
}

template <FixedString>
consteval bool virtualDetector() noexcept {
    return false;
}
template <auto f>
consteval bool virtualDetector() noexcept {
    return reflection::getRawName<f>().contains("::`vcall'{");
}

template <class... Ts>
struct HookRegistrar {
    HookRegistrar() { (Ts::hook(), ...); }
    ~HookRegistrar() { (Ts::unhook(), ...); }

    HookRegistrar(HookRegistrar const&)                = delete;
    HookRegistrar& operator=(HookRegistrar const&)     = delete;
    HookRegistrar(HookRegistrar&&) noexcept            = default;
    HookRegistrar& operator=(HookRegistrar&&) noexcept = default;
};

template <class... Ts>
class SharedHookRegistrar {
public:
    static inline std::atomic_uint count{};

    SharedHookRegistrar() {
        if (++count == 1) (Ts::hook(), ...);
    }
    ~SharedHookRegistrar() {
        if (--count == 0) (Ts::unhook(), ...);
    }
    SharedHookRegistrar(SharedHookRegistrar const&) { ++count; }
    SharedHookRegistrar& operator=(SharedHookRegistrar const& other) {
        if (this != std::addressof(other)) {
            ++count;
        }
        return *this;
    }

    SharedHookRegistrar(SharedHookRegistrar&&) noexcept            = default;
    SharedHookRegistrar& operator=(SharedHookRegistrar&&) noexcept = default;
};

} // namespace ll::memory

#define LL_HOOK_IMPL(REGISTER, FUNC_PTR, STATIC, CALL, DEF_TYPE, TYPE, PRIORITY, IDENTIFIER, RET_TYPE, ...)            \
    struct DEF_TYPE TYPE {                                                                                             \
        using FuncPtr      = ::ll::memory::FuncPtr;                                                                    \
        using HookPriority = ::ll::memory::HookPriority;                                                               \
        using OriginFuncType =                                                                                         \
            ::ll::memory::AddConstAtMemberFunIfOriginIs<RET_TYPE FUNC_PTR(__VA_ARGS__), decltype(IDENTIFIER)>;         \
                                                                                                                       \
        inline static FuncPtr        target__{};                                                                       \
        inline static OriginFuncType originFunc__{};                                                                   \
                                                                                                                       \
        LL_HOOK_DEBUG_OUTPUT(IDENTIFIER);                                                                              \
                                                                                                                       \
        template <class Arg>                                                                                           \
        static consteval void detector() {                                                                             \
            if constexpr (requires {                                                                                   \
                              ::ll::memory::virtualDetector<IDENTIFIER>();                                             \
                              ll::memory::resolveIdentifier<OriginFuncType>(IDENTIFIER);                               \
                          }) {                                                                                         \
                if constexpr (::ll::memory::virtualDetector<IDENTIFIER>()) {                                           \
                    static_assert(                                                                                     \
                        ::ll::concepts::always_false<Arg>,                                                             \
                        #IDENTIFIER " is a virtual function, for now you can't use function pointer to hook it."       \
                    );                                                                                                 \
                }                                                                                                      \
            }                                                                                                          \
        }                                                                                                              \
                                                                                                                       \
        template <class... Args>                                                                                       \
        STATIC RET_TYPE origin(Args&&... params) {                                                                     \
            return CALL(std::forward<Args>(params)...);                                                                \
        }                                                                                                              \
                                                                                                                       \
        STATIC RET_TYPE detour(__VA_ARGS__);                                                                           \
                                                                                                                       \
        static int hook() {                                                                                            \
            detector<DEF_TYPE>();                                                                                      \
            target__ = ll::memory::resolveIdentifier<OriginFuncType>(IDENTIFIER);                                      \
            if (target__ == nullptr) {                                                                                 \
                return -1;                                                                                             \
            }                                                                                                          \
            return ll::memory::hook(                                                                                   \
                target__,                                                                                              \
                ll::memory::toFuncPtr(&DEF_TYPE::detour),                                                              \
                reinterpret_cast<FuncPtr*>(&originFunc__),                                                             \
                PRIORITY                                                                                               \
            );                                                                                                         \
        }                                                                                                              \
                                                                                                                       \
        static bool unhook() { return ll::memory::unhook(target__, ll::memory::toFuncPtr(&DEF_TYPE::detour)); }        \
    };                                                                                                                 \
    REGISTER;                                                                                                          \
    RET_TYPE DEF_TYPE::detour(__VA_ARGS__)

#define LL_AUTO_REG_HOOK_IMPL(FUNC_PTR, STATIC, CALL, DEF_TYPE, ...)                                                   \
    LL_VA_EXPAND(LL_HOOK_IMPL(                                                                                         \
        inline ll::memory::HookRegistrar<DEF_TYPE> DEF_TYPE##AutoRegister,                                             \
        FUNC_PTR,                                                                                                      \
        STATIC,                                                                                                        \
        CALL,                                                                                                          \
        DEF_TYPE,                                                                                                      \
        __VA_ARGS__                                                                                                    \
    ))

#define LL_MANUAL_REG_HOOK_IMPL(...) LL_VA_EXPAND(LL_HOOK_IMPL(, __VA_ARGS__))

#define LL_STATIC_HOOK_IMPL(...) LL_VA_EXPAND(LL_MANUAL_REG_HOOK_IMPL((*), static, originFunc__, __VA_ARGS__))

#define LL_AUTO_STATIC_HOOK_IMPL(...) LL_VA_EXPAND(LL_AUTO_REG_HOOK_IMPL((*), static, originFunc__, __VA_ARGS__))

#define LL_INSTANCE_HOOK_IMPL(DEF_TYPE, ...)                                                                           \
    LL_VA_EXPAND(LL_MANUAL_REG_HOOK_IMPL((DEF_TYPE::*), , (this->*originFunc__), DEF_TYPE, __VA_ARGS__))

#define LL_AUTO_INSTANCE_HOOK_IMPL(DEF_TYPE, ...)                                                                      \
    LL_VA_EXPAND(LL_AUTO_REG_HOOK_IMPL((DEF_TYPE::*), , (this->*originFunc__), DEF_TYPE, __VA_ARGS__))

/**
 * @brief Register a hook for a typed static function.
 * @param DEF_TYPE The name of the hook definition.
 * @param PRIORITY ll::memory::HookPriority The priority of the hook.
 * @param TYPE The type which the function belongs to.
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
 * @param PRIORITY ll::memory::HookPriority The priority of the hook.
 * @param TYPE The type which the function belongs to.
 * @param IDENTIFIER The identifier of the hook. It can be a function pointer, symbol, address or a signature.
 * @param RET_TYPE The return type of the hook.
 * @param ... The parameters of the hook.
 *
 * @note register or unregister by calling DEF_TYPE::hook() and DEF_TYPE::unhook().
 */
#define LL_TYPED_INSTANCE_HOOK(DEF_TYPE, PRIORITY, TYPE, IDENTIFIER, RET_TYPE, ...)                                    \
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
#define LL_AUTO_TYPED_INSTANCE_HOOK(DEF_TYPE, PRIORITY, TYPE, IDENTIFIER, RET_TYPE, ...)                               \
    LL_VA_EXPAND(LL_AUTO_INSTANCE_HOOK_IMPL(DEF_TYPE, : public TYPE, PRIORITY, IDENTIFIER, RET_TYPE, __VA_ARGS__))

/**
 * @brief Register a hook for a instance function.
 * @details The hook will be automatically registered and unregistered.
 * @see LL_INSTANCE_HOOK for usage.
 */
#define LL_AUTO_INSTANCE_HOOK(DEF_TYPE, PRIORITY, IDENTIFIER, RET_TYPE, ...)                                           \
    LL_VA_EXPAND(LL_AUTO_INSTANCE_HOOK_IMPL(DEF_TYPE, , PRIORITY, IDENTIFIER, RET_TYPE, __VA_ARGS__))
