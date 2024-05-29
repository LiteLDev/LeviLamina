#pragma once
#ifdef LL_MEMORY_OPERATORS
// This header provides convenient overrides for the new and
// delete operations in C++.
//
// This header should be included in only one source file!

#include "mc/deps/core/common/bedrock/IMemoryAllocator.h"

#include "ll/api/memory/Memory.h"

__declspec(noreturn) void __CRTDECL __scrt_throw_std_bad_alloc();
__declspec(noreturn) void __CRTDECL __scrt_throw_std_bad_array_new_length();

extern "C" _declspec(dllexport) int const ll_memory_operator_overrided{};

void __CRTDECL operator delete(void* p) noexcept { ::ll::memory::getDefaultAllocator().release(p); }

void __CRTDECL operator delete(void* p, std::nothrow_t const&) noexcept { operator delete(p); }

void __CRTDECL operator delete[](void* p) noexcept { operator delete(p); }

void __CRTDECL operator delete[](void* p, std::nothrow_t const&) noexcept { operator delete[](p); }

void __CRTDECL operator delete(void* p, std::size_t) noexcept { operator delete(p); };

void __CRTDECL operator delete[](void* p, std::size_t) noexcept { operator delete[](p); };

void __CRTDECL operator delete(void* p, std::align_val_t) noexcept {
    ::ll::memory::getDefaultAllocator().alignedRelease(p);
}

void __CRTDECL operator delete(void* p, std::align_val_t alignment, std::nothrow_t const&) noexcept {
    operator delete(p, alignment);
}

void __CRTDECL operator delete[](void* p, std::align_val_t alignment) noexcept { operator delete(p, alignment); }

void __CRTDECL operator delete[](void* p, std::align_val_t alignment, std::nothrow_t const&) noexcept {
    operator delete[](p, alignment);
}

void __CRTDECL operator delete(void* p, std::size_t, std::align_val_t alignment) noexcept {
    operator delete(p, alignment);
};

void __CRTDECL operator delete[](void* p, std::size_t, std::align_val_t alignment) noexcept {
    operator delete[](p, alignment);
};


_NODISCARD _Ret_notnull_        _Post_writable_byte_size_(size)
_VCRT_ALLOCATOR void* __CRTDECL operator new(std::size_t size) {
    if (void* const block = ::ll::memory::getDefaultAllocator().allocate(size)) {
        return block;
    }
    if (size == SIZE_MAX) {
        __scrt_throw_std_bad_array_new_length();
    } else {
        __scrt_throw_std_bad_alloc();
    }
}

_NODISCARD _Ret_notnull_ _Success_(return != NULL) _Post_writable_byte_size_(size) _VCRT_ALLOCATOR
    void* __CRTDECL operator new(std::size_t size, std::nothrow_t const&) noexcept {
    return ::ll::memory::getDefaultAllocator().allocate(size);
}

_NODISCARD _Ret_notnull_        _Post_writable_byte_size_(size)
_VCRT_ALLOCATOR void* __CRTDECL operator new[](std::size_t size) { return operator new(size); }

_NODISCARD _Ret_notnull_ _Success_(return != NULL) _Post_writable_byte_size_(size) _VCRT_ALLOCATOR
    void* __CRTDECL operator new[](std::size_t size, std::nothrow_t const& tag) noexcept {
    return operator new(size, tag);
}


_NODISCARD _Ret_notnull_        _Post_writable_byte_size_(size)
_VCRT_ALLOCATOR void* __CRTDECL operator new(std::size_t size, std::align_val_t alignment) {
    if (void* const block = ::ll::memory::getDefaultAllocator().alignedAllocate(size, static_cast<size_t>(alignment))) {
        return block;
    }
    if (size == SIZE_MAX) {
        __scrt_throw_std_bad_array_new_length();
    } else {
        __scrt_throw_std_bad_alloc();
    }
}

_NODISCARD _Ret_notnull_ _Success_(return != NULL) _Post_writable_byte_size_(size) _VCRT_ALLOCATOR
    void* __CRTDECL operator new(std::size_t size, std::align_val_t alignment, std::nothrow_t const&) noexcept {
    return ::ll::memory::getDefaultAllocator().alignedAllocate(size, static_cast<size_t>(alignment));
}

_NODISCARD _Ret_notnull_        _Post_writable_byte_size_(size)
_VCRT_ALLOCATOR void* __CRTDECL operator new[](std::size_t size, std::align_val_t alignment) {
    return operator new(size, alignment);
}

_NODISCARD _Ret_notnull_ _Success_(return != NULL) _Post_writable_byte_size_(size) _VCRT_ALLOCATOR
    void* __CRTDECL operator new[](std::size_t size, std::align_val_t alignment, std::nothrow_t const& tag) noexcept {
    return operator new(size, alignment, tag);
}
#endif
