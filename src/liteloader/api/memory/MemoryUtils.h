#pragma once

#include <string>
#include <type_traits>
#include <vector>

#include "liteloader/api/base/Macro.h"
#include "liteloader/api/utils/FixedString.h"

namespace ll::memory {

using FuncPtr = void*;

template <typename T>
    requires(sizeof(T) == sizeof(FuncPtr))
constexpr FuncPtr toFuncPtr(T t) {
    union {
        FuncPtr fp;
        T       t;
    } u{};
    u.t = t;
    return u.fp;
}


template <typename T>
    requires(std::is_member_function_pointer_v<T> && sizeof(T) == sizeof(FuncPtr) + sizeof(ptrdiff_t))
constexpr FuncPtr toFuncPtr(T t) {
    union {
        struct {
            FuncPtr   fp;
            ptrdiff_t offset;
        };
        T t;
    } u{};
    u.t = t;
    return u.fp;
}

template <typename T>
inline void memcpy_t(void* dst, const void* src, size_t count) {
    memcpy(dst, src, count * sizeof(T));
}

template <typename T>
inline void memcpy_t(void* dst, const void* src) {
    memcpy(dst, src, sizeof(T));
}

/**
 * @brief resolve symbol to function pointer
 * @param symbol Symbol
 * @return function pointer
 */
LLNDAPI FuncPtr resolveSymbol(const char* symbol);

/**
 * @brief resolve signature to function pointer
 * @param t Signature
 * @return function pointer
 */
LLNDAPI FuncPtr resolveSignature(const char* signature);

/**
 * @brief lookup symbol name of a function address
 * @param func Function address
 * @return symbols
 */
LLNDAPI std::vector<std::string> lookupSymbol(FuncPtr func);

template <uintptr_t off, typename RTN = void, typename... Args>
auto constexpr virtualCall(void const* _this, Args&&... args) -> RTN {
    return (*(RTN(**)(void const*, Args&&...))(*(uintptr_t*)_this + off))(_this, std::forward<Args>(args)...);
}

template <typename T>
[[nodiscard]] constexpr T& dAccess(void* ptr, uintptr_t off) {
    return *(T*)(((uintptr_t)ptr) + off);
}

template <typename T>
[[nodiscard]] constexpr T const& dAccess(void const* ptr, uintptr_t off) {
    return *(T*)(((uintptr_t)ptr) + off);
}

[[nodiscard]] inline size_t getMemSizeFromPtr(void* ptr) {
    if (!ptr) { return 0; }
    return _msize(ptr);
}

template <typename T, typename D>
[[nodiscard]] inline size_t getMemSizeFromPtr(std::unique_ptr<T, D>& ptr) {
    if (!ptr) { return 0; }
    return _msize(ptr.get());
}

template <template <typename> typename P, typename T>
[[nodiscard]] inline size_t getMemSizeFromPtr(P<T>& ptr)
    requires(std::derived_from<P<T>, std::_Ptr_base<T>>)
{
    auto& refc = dAccess<std::_Ref_count_base*>(std::addressof(ptr), 8);
    if (!refc) { return 0; }
    auto& rawptr = dAccess<T*>(std::addressof(ptr), 0);
    if (!rawptr) { return 0; }
    if constexpr (!std::is_array_v<T>) {
        if (rawptr == dAccess<T*>(refc, 8 + 4 * 2)) { return getMemSizeFromPtr(rawptr); }
    }
    // clang-format off
    return _msize(refc // ptr* 8, rep* 8
    ) - ( // rep:
    8 +                        // vtable
    4 * 2 +                    // uses & weaks
   (std::is_array_v<T> ? 8 : 0)// size
    /**/                       // storage
    );
    // clang-format on
}

template <FixedString symbol>
inline FuncPtr symbolCache = resolveSymbol(symbol);

template <FixedString signature>
inline FuncPtr signatureCache = resolveSignature(signature);

} // namespace ll::memory

#define LL_VA_EXPAND(...) __VA_ARGS__

#define LL_SYMBOL_CALL(symbol, Ret, ...) ((Ret(*)(__VA_ARGS__))(ll::memory::symbolCache<symbol>))

#define LL_ADDRESS_CALL(address, Ret, ...) ((Ret(*)(__VA_ARGS__))(address))

#define LL_SIGNATURE_CALL(...) LL_SYMBOL_CALL(__VA_ARGS__)

#define LL_RESOLVE_SYMBOL(symbol) ll::memory::symbolCache<symbol>

#define LL_RESOLVE_SIGNATURE(signature) ll::memory::signatureCache<signature>
