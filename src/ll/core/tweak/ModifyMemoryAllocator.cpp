#include "ll/api/memory/Hook.h"
#include "ll/core/LeviLamina.h"

#include "mc/deps/core/common/bedrock/IMemoryAllocator.h"
#include "mc/deps/core/common/bedrock/Memory.h"

#include "ll/api/utils/WinUtils.h"

#include "mimalloc.h"

#include "windows.h"

#include "Psapi.h"

#include "heapapi.h"

#ifdef LL_USE_MIMALLOC
#define LL_DEFALUT_MEMORY_ALLOCATOR MimallocMemoryAllocator
#else
#define LL_DEFALUT_MEMORY_ALLOCATOR StdMemoryAllocator
#endif

// #define LL_MEMORY_DEBUG

namespace ll::memory {

static std::string memStr(size_t mem) {
    double r  = (double)mem;
    r        /= 1024;
    if (r < 1024) {
        return ::fmt::format("{:>8.1f} KiB", r);
    }
    r /= 1024;
    if (r < 1024) {
        return ::fmt::format("{:>8.1f} MiB", r);
    }
    r /= 1024;
    if (r < 1024) {
        return ::fmt::format("{:>8.1f} GiB", r);
    }
    r /= 1024;
    return ::fmt::format("{:>8.1f} TiB", r);
}
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
        HeapSummary(GetProcessHeap(), 0, &summary);
        PROCESS_MEMORY_COUNTERS_EX info{.cb = sizeof(PROCESS_MEMORY_COUNTERS_EX)};
        GetProcessMemoryInfo(GetCurrentProcess(), (PPROCESS_MEMORY_COUNTERS)&info, info.cb);
        // clang-format off
        logger.info("heap stats: {:>12} {:>12}", "peak", "current");
        logger.info("  reserved: {:>12} {:>12}", memStr(summary.cbMaxReserve), memStr(summary.cbReserved));
        logger.info(" committed: {:>12} {:>12}", "", memStr(summary.cbCommitted));
        logger.info(" allocated: {:>12} {:>12}", "", memStr(summary.cbAllocated));
        logger.info(" pagefault: {:>12} {:>8}", "", info.PageFaultCount);
        logger.info("workingset: {:>12} {:>12}", memStr(info.PeakWorkingSetSize), memStr(info.WorkingSetSize));
        logger.info(" pagedpool: {:>12} {:>12}", memStr(info.QuotaPeakPagedPoolUsage), memStr(info.QuotaPagedPoolUsage));
        logger.info("  nonpaged: {:>12} {:>12}", memStr(info.QuotaPeakNonPagedPoolUsage), memStr(info.QuotaNonPagedPoolUsage));
        logger.info("  pagefile: {:>12} {:>12}", memStr(info.PeakPagefileUsage), memStr(info.PagefileUsage));
        logger.info("   private: {:>12} {:>12}", "", memStr(info.PrivateUsage));
        // clang-format on
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
    size_t a{0};
    size_t f{0};

    void alloc(size_t s) { a += s; }
    void free(size_t s) { f += s; }
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

            res[name].a += mem.a;
            res[name].f += mem.f;
        }

        for (auto& [module, mem] : res) {
            logger.info(
                " {:<32} alloc: {:>12}, free: {:>12}, curr: {:>12}",
                module,
                memStr(mem.a),
                memStr(mem.f),
                memStr(abs((int64)mem.f - (int64)mem.a))
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
