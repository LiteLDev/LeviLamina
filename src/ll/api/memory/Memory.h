#pragma once

#include <functional>
#include <memory>
#include <span>
#include <string>
#include <type_traits>
#include <vector>

#include "ll/api/base/FixedString.h"
#include "ll/api/base/Macro.h"
#include "ll/api/memory/Signature.h"
#include "ll/api/memory/Symbol.h"
#include "mc/platform/brstd/function_ref.h"

namespace Bedrock::Memory {
class IMemoryAllocator;
}

namespace ll::memory {

using FuncPtr = void*;

template <class T>
    requires(sizeof(T) == sizeof(FuncPtr))
constexpr FuncPtr toFuncPtr(T t) {
    union {
        FuncPtr fp;
        T       t;
    } u{};
    u.t = t;
    return u.fp;
}

template <class T>
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

template <class T>
inline void memcpy_t(void* dst, void const* src, size_t count) {
    memcpy(dst, src, count * sizeof(T));
}

template <class T>
inline void memcpy_t(void* dst, void const* src) {
    memcpy(dst, src, sizeof(T));
}
/**
 * @brief make a region of memory writable and executable, then call the
 * callback, and finally restore the region.
 * @param ptr Pointer to the region
 * @param len Length of the region
 * @param callback Callback
 */
LLAPI void modify(void* ptr, size_t len, brstd::function_ref<void()> callback);

template <class T>
inline void modify(T& ref, brstd::function_ref<void(std::remove_cv_t<T>&)> f) {
    modify((void*)std::addressof(ref), sizeof(T), [&] { f((std::remove_cv_t<T>&)(ref)); });
}

template <class R = void, class... Args>
constexpr auto addressCall(void const* address, auto&&... args) -> R {
    return ((R(*)(Args...))address)(std::forward<decltype(args)>(args)...);
}

template <class R = void, class... Args>
constexpr auto virtualCall(void const* self, ptrdiff_t vIndex, auto&&... args) -> R {
    return (*(R(**)(void const*, Args...))(*(uintptr_t**)self + vIndex))(self, std::forward<decltype(args)>(args)...);
}

template <class T>
[[nodiscard]] constexpr T& dAccess(void* ptr, ptrdiff_t off) {
    return *(T*)((uintptr_t)((uintptr_t)ptr + off));
}

template <class T>
[[nodiscard]] constexpr T const& dAccess(void const* ptr, ptrdiff_t off) {
    return *(T*)((uintptr_t)((uintptr_t)ptr + off));
}

template <class T>
constexpr void destruct(void* ptr, ptrdiff_t off) noexcept {
    std::destroy_at(std::launder(reinterpret_cast<T*>((uintptr_t)((uintptr_t)ptr + off))));
}

template <class T, class... Args>
constexpr auto construct(void* ptr, ptrdiff_t off, Args&&... args) {
    return std::construct_at(
        std::launder(reinterpret_cast<T*>((uintptr_t)((uintptr_t)ptr + off))),
        std::forward<Args>(args)...
    );
}

LLNDAPI ::Bedrock::Memory::IMemoryAllocator& getDefaultAllocator();

[[noreturn]] LLAPI void throwMemoryException(size_t);

LLNDAPI size_t getUsableSize(void* ptr);

template <class T, class D>
[[nodiscard]] inline size_t getUsableSize(std::unique_ptr<T, D>& ptr) {
    if (!ptr) {
        return 0;
    }
    return getUsableSize(ptr.get());
}

#ifdef _MSC_VER
template <template <class> class P, class T>
[[nodiscard]] inline size_t getUsableSize(P<T>& ptr)
    requires(std::derived_from<P<T>, std::_Ptr_base<T>>)
{
    auto& refc = dAccess<std::_Ref_count_base*>(std::addressof(ptr), 8);
    if (!refc) {
        return 0;
    }
    auto& rawptr = dAccess<T*>(std::addressof(ptr), 0);
    if (!rawptr) {
        return 0;
    }
    if constexpr (!std::is_array_v<T>) {
        if (rawptr == dAccess<T*>(refc, 8 + 4 * 2)) {
            return getUsableSize(rawptr);
        }
    }
    // clang-format off
    return getUsableSize(refc // ptr* 8, rep* 8
    ) - ( // rep:
    8 +                        // vtable
    4 * 2 +                    // uses & weaks
   (std::is_array_v<T> ? 8 : 0)// size
    /**/                       // storage
    );
    // clang-format on
}
#endif

class DualMapping {
    void*  rw{};
    void*  rx{};
    size_t memSize{};

public:
    LLAPI void alloc(size_t size);
    LLAPI void free();

    DualMapping() = default;

    DualMapping(size_t size) { alloc(size); }

    ~DualMapping() { free(); }

    size_t size() const { return memSize; }

    void* writable() const { return rw; }
    void* executable() const { return rx; }
};
} // namespace ll::memory
