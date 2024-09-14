#pragma once
#ifdef LL_MEMORY_OPERATORS
// This header provides convenient overrides for the new and
// delete operations in C++.
//
// This header should be included in only one source file!

#include "mc/deps/core/common/bedrock/IMemoryAllocator.h"

#include "ll/api/memory/Memory.h"

extern "C" LL_SHARED_EXPORT int const ll_memory_operator_overrided{};

void operator delete(void* p) noexcept { ::ll::memory::getDefaultAllocator().release(p); }

void operator delete(void* p, std::nothrow_t const&) noexcept { operator delete(p); }

void operator delete[](void* p) noexcept { operator delete(p); }

void operator delete[](void* p, std::nothrow_t const&) noexcept { operator delete[](p); }

void operator delete(void* p, std::size_t) noexcept { operator delete(p); };

void operator delete[](void* p, std::size_t) noexcept { operator delete[](p); };

void operator delete(void* p, std::align_val_t) noexcept { ::ll::memory::getDefaultAllocator().alignedRelease(p); }

void operator delete(void* p, std::align_val_t alignment, std::nothrow_t const&) noexcept {
    operator delete(p, alignment);
}
void operator delete[](void* p, std::align_val_t alignment) noexcept { operator delete(p, alignment); }

void operator delete[](void* p, std::align_val_t alignment, std::nothrow_t const&) noexcept {
    operator delete[](p, alignment);
}
void operator delete(void* p, std::size_t, std::align_val_t alignment) noexcept { operator delete(p, alignment); };

void operator delete[](void* p, std::size_t, std::align_val_t alignment) noexcept { operator delete[](p, alignment); };

[[nodiscard]] LL_ALLOCATOR void* operator new(std::size_t size) {
    if (void* const block = ::ll::memory::getDefaultAllocator().allocate(size)) {
        return block;
    }
    ::ll::memory::throwMemoryException(size);
}
[[nodiscard]] LL_NOTHROW_ALLOCATOR void* operator new(std::size_t size, std::nothrow_t const&) noexcept {
    return ::ll::memory::getDefaultAllocator().allocate(size);
}
[[nodiscard]] LL_ALLOCATOR void* operator new[](std::size_t size) { return operator new(size); }

[[nodiscard]] LL_NOTHROW_ALLOCATOR void* operator new[](std::size_t size, std::nothrow_t const& tag) noexcept {
    return operator new(size, tag);
}
[[nodiscard]] LL_ALLOCATOR void* operator new(std::size_t size, std::align_val_t alignment) {
    if (void* const block = ::ll::memory::getDefaultAllocator().alignedAllocate(size, static_cast<size_t>(alignment))) {
        return block;
    }
    ::ll::memory::throwMemoryException(size);
}
[[nodiscard]] LL_NOTHROW_ALLOCATOR void*
operator new(std::size_t size, std::align_val_t alignment, std::nothrow_t const&) noexcept {
    return ::ll::memory::getDefaultAllocator().alignedAllocate(size, static_cast<size_t>(alignment));
}
[[nodiscard]] LL_ALLOCATOR void* operator new[](std::size_t size, std::align_val_t alignment) {
    return operator new(size, alignment);
}
[[nodiscard]] LL_NOTHROW_ALLOCATOR void*
operator new[](std::size_t size, std::align_val_t alignment, std::nothrow_t const& tag) noexcept {
    return operator new(size, alignment, tag);
}
#endif
