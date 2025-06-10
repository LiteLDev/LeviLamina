#define LL_MEMORY_OPERATORS

#include "ll/api/memory/MemoryOperators.h"

#include "ll/core/LeviLamina.h"

#include "mc/deps/core/memory/IMemoryAllocator.h"
#include "mc/deps/core/memory/MemoryTracker.h"

#include "ll/api/base/Containers.h"

#include "mimalloc.h"

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
    void* allocate(uint64 size) override try { return mi_malloc(size != 0ull ? size : 1ull); } catch (...) {
        return nullptr;
    }

    void release(void* ptr) override try { mi_free(ptr); } catch (...) {
    }

    void* alignedAllocate(uint64 size, uint64 alignment) override try {
        return mi_malloc_aligned(size != 0ull ? size : 1ull, alignment);
    } catch (...) {
        return nullptr;
    }

    void alignedRelease(void* ptr) override try { mi_free(ptr); } catch (...) {
    }

    uint64 getUsableSize(void* ptr, bool) override try { return mi_usable_size(ptr); } catch (...) {
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

    void* _realloc(gsl::not_null<void*> ptr, uint64 newSize) override try {
        return mi_realloc(ptr, newSize);
    } catch (...) {
        return nullptr;
    }
};

class StdMemoryAllocator : public ::Bedrock::Memory::IMemoryAllocator {
public:
    void* allocate(uint64 size) override try { return malloc(size != 0ull ? size : 1ull); } catch (...) {
        return nullptr;
    }

    void release(void* ptr) override try { free(ptr); } catch (...) {
    }

    void* alignedAllocate(uint64 size, uint64 alignment) override try {
        return _aligned_malloc(size != 0ull ? size : 1ull, alignment);
    } catch (...) {
        return nullptr;
    }

    void alignedRelease(void* ptr) override try { _aligned_free(ptr); } catch (...) {
    }

    uint64 getUsableSize(void* ptr, bool) override try { return ptr ? _msize(ptr) : 0ull; } catch (...) {
        return 0ull;
    }

    void* _realloc(gsl::not_null<void*> ptr, uint64 newSize) override try {
        return realloc(ptr, newSize);
    } catch (...) {
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
    void* allocate(uint64 size) override {
        auto res = T::allocate(size);
        getDebugMap()[LL_RETURN_ADDRESS].alloc(T::getUsableSize(res));
        return res;
    }

    void release(void* ptr) override {
        getDebugMap()[LL_RETURN_ADDRESS].free(T::getUsableSize(ptr));
        T::release(ptr);
    }

    void* alignedAllocate(uint64 size, uint64 alignment) override {
        auto res = T::alignedAllocate(size, alignment);
        getDebugMap()[LL_RETURN_ADDRESS].alloc(T::getUsableSize(res));
        return res;
    }

    void alignedRelease(void* ptr) override {
        getDebugMap()[LL_RETURN_ADDRESS].free(T::getUsableSize(ptr));
        T::alignedRelease(ptr);
    }

    void* _realloc(gsl::not_null<void*> ptr, uint64 newSize) override {
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

::Memory::MemoryTracker& getMemoryTracker() {
    static ::Memory::MemoryTracker tracker;
    return tracker;
}
} // namespace ll::memory
