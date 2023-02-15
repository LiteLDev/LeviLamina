#pragma once

#include <string>

#include "llapi/Macro.h"
#include "llapi/utils/FixedString.h"

namespace ll::memory {

using FuncPtr = void*;

template <typename T>
inline constexpr FuncPtr getPtr(T t) {
    union {
        T       t;
        FuncPtr fp;
    } u{};
    u.t = t;
    return u.fp;
}

/**
 * @brief Get pointer from symbol name or signature
 * @param t Symbol / Signature
 * @return pointer to resolved object. E.g. function pointer, vtable pointer, etc.
 */
template <>
LIAPI FuncPtr getPtr(const char* t);

template <uintptr_t off, typename RTN = void, typename... Args>
auto inline virtualCall(void const* _this, Args... args) -> RTN {
    return (*(RTN(**)(void const*, Args...))(*(uintptr_t*)_this + off))(_this, args...);
}

template <typename T, uintptr_t off>
inline T& dAccess(void* ptr) {
    return *(T*)(((uintptr_t)ptr) + off);
}

template <typename T, uintptr_t off>
inline T const& dAccess(void const* ptr) {
    return *(T*)(((uintptr_t)ptr) + off);
}

template <typename T>
inline T& dAccess(void* ptr, uintptr_t off) {
    return *(T*)(((uintptr_t)ptr) + off);
}

template <typename T>
inline const T& dAccess(void const* ptr, uintptr_t off) {
    return *(T*)(((uintptr_t)ptr) + off);
}

template <FixedString Fn>
inline FuncPtr symbolCache = getPtr((const char*)Fn);

} // namespace ll::memory

#define LL_VA_EXPAND(...) __VA_ARGS__

#define LL_SYMBOL_CALL(symbol, Ret, ...) ((Ret(*)(__VA_ARGS__))(ll::memory::symbolCache<symbol>))

#define LL_ADDRESS_CALL(address, Ret, ...) ((Ret(*)(__VA_ARGS__))(address))

#define LL_SIGNATURE_CALL(...) LL_SYMBOL_CALL(__VA_ARGS__)

#define LL_RESOLVE_SYMBOL(symbol) ll::memory::symbolCache<symbol>

#define LL_RESOLVE_SIGNATURE(signature) ll::memory::symbolCache<signature>
