#include "ll/api/memory/Hook.h"
#include "ll/core/LeviLamina.h"

#include "mc/deps/core/common/bedrock/IMemoryAllocator.h"
#include "mc/deps/core/common/bedrock/Memory.h"

#include "mimalloc.h"

#include "heapapi.h"

#define LL_DEFALUT_MEMORY_ALLOCATOR StdMemoryAllocator

namespace ll::memory {
class MimallocMemoryAllocator : public ::Bedrock::Memory::IMemoryAllocator {
public:
    virtual void* allocate(uint64 size) { return mi_malloc(size != 0 ? size : 1); }

    virtual void release(void* ptr) { mi_free(ptr); }

    virtual void* alignedAllocate(uint64 size, uint64 alignment) {
        return mi_malloc_aligned(size != 0 ? size : 1, alignment);
    }

    virtual void alignedRelease(void* ptr) { mi_free(ptr); }

    virtual uint64 getUsableSize(void* ptr) { return mi_usable_size(ptr); }

    static void miOutput(char const* msg, void* /*arg*/) {
        std::string str{msg};
        if (str.ends_with('\n')) {
            str.pop_back();
            if (str.ends_with('\r')) {
                str.pop_back();
            }
        }
        logger.info(str);
    }

    virtual void logCurrentState() { mi_stats_print_out(miOutput, nullptr); }

    virtual void* _realloc(gsl::not_null<void*> ptr, uint64 newSize) { return mi_realloc(ptr, newSize); }
};

class StdMemoryAllocator : public ::Bedrock::Memory::IMemoryAllocator {
public:
    virtual void* allocate(uint64 size) { return malloc(size != 0 ? size : 1); }

    virtual void release(void* ptr) { free(ptr); }

    virtual void* alignedAllocate(uint64 size, uint64 alignment) {
        return _aligned_malloc(size != 0 ? size : 1, alignment);
    }

    virtual void alignedRelease(void* ptr) { _aligned_free(ptr); }

    virtual uint64 getUsableSize(void* ptr) { return ptr ? _msize(ptr) : 0ui64; }

    virtual void logCurrentState() {
        HEAP_SUMMARY summary{.cb = sizeof(HEAP_SUMMARY)};
        if (HeapSummary(GetProcessHeap(), 0, &summary)) {
            logger.info(" heap summary:");
            logger.info("  max reserve:{:>8.1f} MiB", (double)(summary.cbMaxReserve) / (1024 * 1024));
            logger.info("     reserved:{:>8.1f} MiB", (double)(summary.cbReserved) / (1024 * 1024));
            logger.info("    committed:{:>8.1f} MiB", (double)(summary.cbCommitted) / (1024 * 1024));
            logger.info("    allocated:{:>8.1f} MiB", (double)(summary.cbAllocated) / (1024 * 1024));
        } else {
            logger.error("fail to get heap summary");
        }
    }

    virtual void* _realloc(gsl::not_null<void*> ptr, uint64 newSize) { return realloc(ptr, newSize); }
};

class MimallocMemoryAllocatorWithCheck : public MimallocMemoryAllocator {
public:
    virtual void release(void* ptr) {
        if (mi_is_in_heap_region(ptr)) [[likely]] {
            mi_free(ptr);
        } else if (ptr) [[unlikely]] {
            free(ptr);
        }
    }

    virtual void alignedRelease(void* ptr) { release(ptr); }

    virtual uint64 getUsableSize(void* ptr) {
        if (mi_is_in_heap_region(ptr)) [[likely]] {
            return mi_usable_size(ptr);
        } else {
            return ptr ? _msize(ptr) : 0ui64;
        }
    }

    virtual void* _realloc(gsl::not_null<void*> ptr, uint64 newSize) {
        if (mi_is_in_heap_region(ptr)) [[likely]] {
            return mi_realloc(ptr, newSize);
        } else {
            return realloc(ptr, newSize);
        }
    }
};

::Bedrock::Memory::IMemoryAllocator& getDefaultAllocator() {
    static LL_DEFALUT_MEMORY_ALLOCATOR ins;
    return ins;
}

LL_AUTO_STATIC_HOOK(ReplaceMemoryAllocator, HookPriority::High, ::Bedrock::Memory::getDefaultAllocator, ::Bedrock::Memory::IMemoryAllocator&) {
    return ::ll::memory::getDefaultAllocator();
}

} // namespace ll::memory
