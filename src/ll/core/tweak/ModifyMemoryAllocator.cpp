#include "ll/api/memory/Hook.h"
#include "ll/core/LeviLamina.h"

#include "mc/deps/core/common/bedrock/IMemoryAllocator.h"
#include "mc/deps/core/common/bedrock/Memory.h"

#include "ll/api/utils/WinUtils.h"

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

#ifdef LL_MEMORY_DEBUG
struct MemSize {
    size_t size{0};
    size_t peak{0};

    void alloc(size_t s) {
        size += s;
        peak += s;
    }
    void free(size_t s) { size -= s; }
};
template <typename T>
class debugAllocator : public std::allocator<T> {
public:
    _CONSTEXPR20 void deallocate(T* const _Ptr, const size_t) { free(_Ptr); }

    _NODISCARD_RAW_PTR_ALLOC _CONSTEXPR20 __declspec(allocator) T* allocate(_CRT_GUARDOVERFLOW const size_t _Count) {
        return static_cast<T*>(malloc(std::_Get_size_of_n<sizeof(T)>(_Count)));
    }
};

static auto& getDebugMap() {
    static std::unordered_map<
        void*,
        MemSize,
        std::hash<void*>,
        std::equal_to<void*>,
        debugAllocator<std::pair<void* const, MemSize>>>
        map;
    return map;
}

template <std::derived_from<::Bedrock::Memory::IMemoryAllocator> T>
class DebugAllocator : public T {


public:
    virtual void* allocate(uint64 size) {
        auto res = T::allocate(size);
        getDebugMap()[_ReturnAddress()].alloc(T::getUsableSize(res));
        return res;
    }

    virtual void release(void* ptr) {
        getDebugMap()[_ReturnAddress()].free(T::getUsableSize(ptr));
        T::release(ptr);
    }

    virtual void* alignedAllocate(uint64 size, uint64 alignment) {
        auto res = T::alignedAllocate(size, alignment);
        getDebugMap()[_ReturnAddress()].alloc(T::getUsableSize(res));
        return res;
    }

    virtual void alignedRelease(void* ptr) {
        getDebugMap()[_ReturnAddress()].free(T::getUsableSize(ptr));
        T::alignedRelease(ptr);
    }

    virtual void logCurrentState() {
        T::logCurrentState();

        std::unordered_map<std::string, MemSize> res;

        for (auto& [fn, mem] : getDebugMap()) {
            auto name = win_utils::getModuleFileName(win_utils::getModuleHandle(fn));

            res[name].size += mem.size;
            res[name].peak += mem.peak;
        }

        for (auto& [module, mem] : res) {
            logger.info(
                " {:<32} used: {:>8.2f} MiB ,  all: {:>8.2f} MiB",
                module,
                (double)(mem.size) / (1024 * 1024),
                (double)(mem.peak) / (1024 * 1024)
            );
        }
    }

    virtual void* _realloc(gsl::not_null<void*> ptr, uint64 newSize) {
        getDebugMap()[_ReturnAddress()].free(T::getUsableSize(ptr));
        auto res = T::_realloc(ptr, newSize);
        getDebugMap()[_ReturnAddress()].alloc(T::getUsableSize(res));
        return res;
    }
};
#endif

::Bedrock::Memory::IMemoryAllocator& getDefaultAllocator() {
#ifdef LL_MEMORY_DEBUG
    static DebugAllocator<LL_DEFALUT_MEMORY_ALLOCATOR> ins;
#else
    static LL_DEFALUT_MEMORY_ALLOCATOR ins;
#endif
    return ins;
}

LL_AUTO_STATIC_HOOK(ReplaceMemoryAllocator, HookPriority::High, ::Bedrock::Memory::getDefaultAllocator, ::Bedrock::Memory::IMemoryAllocator&) {
    return ::ll::memory::getDefaultAllocator();
}

} // namespace ll::memory
