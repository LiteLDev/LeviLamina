#define LL_MEMORY_OPERATORS

#include "ll/api/memory/MemoryOperators.h"

#include "ll/core/LeviLamina.h"

#include "mc/deps/core/memory/IMemoryAllocator.h"
#include "mc/deps/core/memory/Memory.h"

#include "ll/api/base/Containers.h"
#include "ll/api/utils/SystemUtils.h"

#include "mimalloc.h"

#include "windows.h"

#include "Psapi.h"

// #define LL_MEMORY_DEBUG

namespace ll::memory {

[[maybe_unused]] static std::string memStr(size_t mem) {
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
    virtual void* allocate(uint64 size) try { return mi_malloc(size != 0ull ? size : 1ull); } catch (...) {
        return nullptr;
    }

    virtual void release(void* ptr) try { mi_free(ptr); } catch (...) {
    }

    virtual void* alignedAllocate(uint64 size, uint64 alignment) try {
        return mi_malloc_aligned(size != 0ull ? size : 1ull, alignment);
    } catch (...) {
        return nullptr;
    }

    virtual void alignedRelease(void* ptr) try { mi_free(ptr); } catch (...) {
    }

    virtual uint64 getUsableSize(void* ptr) try { return mi_usable_size(ptr); } catch (...) {
        return 0ull;
    }

    static void miOutput(char const* msg, void* /*arg*/) {
        std::string str{msg};
        if (str.ends_with('\n')) {
            str.pop_back();
            if (str.ends_with('\r')) {
                str.pop_back();
            }
        }
        getLogger().info(str);
    }

    virtual void logCurrentState() try { mi_stats_print_out(miOutput, nullptr); } catch (...) {
    }

    virtual void* _realloc(gsl::not_null<void*> ptr, uint64 newSize) try {
        return mi_realloc(ptr, newSize);
    } catch (...) {
        return nullptr;
    }
};

class StdMemoryAllocator : public ::Bedrock::Memory::IMemoryAllocator {
public:
    virtual void* allocate(uint64 size) try { return malloc(size != 0ull ? size : 1ull); } catch (...) {
        return nullptr;
    }

    virtual void release(void* ptr) try { free(ptr); } catch (...) {
    }

    virtual void* alignedAllocate(uint64 size, uint64 alignment) try {
        return _aligned_malloc(size != 0ull ? size : 1ull, alignment);
    } catch (...) {
        return nullptr;
    }

    virtual void alignedRelease(void* ptr) try { _aligned_free(ptr); } catch (...) {
    }

    virtual uint64 getUsableSize(void* ptr) try { return ptr ? _msize(ptr) : 0ull; } catch (...) {
        return 0ull;
    }

    virtual void logCurrentState() try {
        HEAP_SUMMARY summary{.cb = sizeof(HEAP_SUMMARY)};
        HeapSummary(GetProcessHeap(), 0, &summary);
        PROCESS_MEMORY_COUNTERS_EX info{.cb = sizeof(PROCESS_MEMORY_COUNTERS_EX)};
        GetProcessMemoryInfo(GetCurrentProcess(), (PPROCESS_MEMORY_COUNTERS)&info, info.cb);
        // clang-format off
        auto& logger= getLogger();
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
    } catch (...) {}

    virtual void* _realloc(gsl::not_null<void*> ptr, uint64 newSize) try { return realloc(ptr, newSize); } catch (...) {
        return nullptr;
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
    constexpr void deallocate(T* const _Ptr, const size_t) { free(_Ptr); }

    _NODISCARD_RAW_PTR_ALLOC constexpr __declspec(allocator) T* allocate(_CRT_GUARDOVERFLOW const size_t _Count) {
        return static_cast<T*>(malloc(std::_Get_size_of_n<sizeof(T)>(_Count)));
    }
};

static auto& getDebugMap() {
    static DenseMap<
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
        getDebugMap()[LL_RETURN_ADDRESS].alloc(T::getUsableSize(res));
        return res;
    }

    virtual void release(void* ptr) {
        getDebugMap()[LL_RETURN_ADDRESS].free(T::getUsableSize(ptr));
        T::release(ptr);
    }

    virtual void* alignedAllocate(uint64 size, uint64 alignment) {
        auto res = T::alignedAllocate(size, alignment);
        getDebugMap()[LL_RETURN_ADDRESS].alloc(T::getUsableSize(res));
        return res;
    }

    virtual void alignedRelease(void* ptr) {
        getDebugMap()[LL_RETURN_ADDRESS].free(T::getUsableSize(ptr));
        T::alignedRelease(ptr);
    }

    virtual void logCurrentState() {
        T::logCurrentState();

        DenseMap<std::string, MemSize> res;

        for (auto& [fn, mem] : getDebugMap()) {
            auto name = sys_utils::getModuleFileName(sys_utils::getModuleHandle(fn));

            res[name].a += mem.a;
            res[name].f += mem.f;
        }

        for (auto& [module, mem] : res) {
            getLogger().info(
                " {:<32} alloc: {:>12}, free: {:>12}, curr: {:>12}",
                module,
                memStr(mem.a),
                memStr(mem.f),
                memStr(abs((int64)mem.f - (int64)mem.a))
            );
        }
    }

    virtual void* _realloc(gsl::not_null<void*> ptr, uint64 newSize) {
        getDebugMap()[LL_RETURN_ADDRESS].free(T::getUsableSize(ptr));
        auto res = T::_realloc(ptr, newSize);
        getDebugMap()[LL_RETURN_ADDRESS].alloc(T::getUsableSize(res));
        return res;
    }
};
#endif

::Bedrock::Memory::IMemoryAllocator& getDefaultAllocator() {
#ifdef LL_MEMORY_DEBUG
    static DebugAllocator<MimallocMemoryAllocator> ins;
#else
    static MimallocMemoryAllocator ins;
#endif
    return ins;
}
} // namespace ll::memory
