#define LL_MEMORY_OPERATORS

#include "ll/api/memory/MemoryOperators.h"

#include "ll/core/LeviLamina.h"

#include "mc/deps/core/memory/IMemoryAllocator.h"

// #define LL_MEMORY_DEBUG

namespace ll::memory {

class StdMemoryAllocator : public ::Bedrock::Memory::IMemoryAllocator {
public:
    void* _allocate(uint64 size) override try { return malloc(size != 0ull ? size : 1ull); } catch (...) {
        return nullptr;
    }

    void _release(::gsl::not_null<void*> ptr) override try { free(ptr); } catch (...) {
    }

    void* _alignedAllocate(uint64 size, uint64 alignment) override try {
        return _aligned_malloc(size != 0ull ? size : 1ull, alignment);
    } catch (...) {
        return nullptr;
    }

    void _alignedRelease(::gsl::not_null<void*> ptr) override try { _aligned_free(ptr); } catch (...) {
    }

    uint64 _getUsableSize(::gsl::not_null<void*> ptr, bool) override try {
        return ptr ? _msize(ptr) : 0ull;
    } catch (...) {
        return 0ull;
    }

    void* _realloc(gsl::not_null<void*> ptr, uint64 newSize) override try {
        return realloc(ptr, newSize);
    } catch (...) {
        return nullptr;
    }
    void* _alignedRealloc(gsl::not_null<void*> ptr, uint64 newSize, uint64 alignment) override try {
        return _aligned_realloc(ptr, newSize, alignment);
    } catch (...) {
        return nullptr;
    }
};

::Bedrock::Memory::IMemoryAllocator& getDefaultAllocator() {
    static StdMemoryAllocator ins;
    return ins;
}
} // namespace ll::memory
