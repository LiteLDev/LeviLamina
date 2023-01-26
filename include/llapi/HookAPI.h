#pragma once
#include "llapi/Global.h"
#include "llapi/utils/Hash.h"
#include <vector>
#include <string>
#include <thread>

// The core api of the hook function
//__declspec(dllimport) int HookFunction(void* oldfunc, void** poutold, void* newfunc);
// Used to get a server-defined specific function by name
extern "C" {
LIAPI int HookFunction(void* oldfunc, void** poutold, void* newfunc);
LIAPI void* dlsym_real(char const* name);
}

namespace ll::hook {
LIAPI uintptr_t findSig(const char* szSignature);
} // namespace ll::Hook
extern std::vector<std::string> dlsym_reverse(int addr);

template <typename RTN = void, typename... Args>
RTN inline VirtualCall(void const* _this, uintptr_t off, Args... args) {
    return (*(RTN(**)(void const*, Args...))(*(uintptr_t*)_this + off))(_this, args...);
}

template <typename T, uintptr_t off>
inline T& dAccess(void* ptr) {
    return *(T*)(((uintptr_t)ptr) + off);
}
template <typename T, uintptr_t off>
inline T const& dAccess(void const* ptr) {
    return *(T*)(((uintptr_t)ptr) + off);
}
template <typename T>
inline T& dAccess(void* ptr, uintptr_t off) {
    return *(T*)(((uintptr_t)ptr) + off);
}
template <typename T>
inline const T& dAccess(void const* ptr, uintptr_t off) {
    return *(T*)(((uintptr_t)ptr) + off);
}

// internal functions
namespace {
namespace PtrConv {
inline std::string ptrToStr(uintptr_t ptr) {
    std::ostringstream ss;
    ss << std::hex << ((UINT64)ptr) << std::endl;
    return ss.str();
}
inline void* uintptrToPtr(uintptr_t ptr) {
    return (void*)ptr;
}
template <typename dst_type = void*, typename src_type = int>
inline void* toRawPtr(int src) {
    return (void*)static_cast<__int64>(src);
}
template <typename dst_type = void*, typename src_type = __int64>
inline void* toRawPtr(__int64 src) {
    return (void*)src;
}
template <typename dst_type, typename src_type>
inline dst_type toRawPtr(src_type src) {
    static_assert(std::is_pointer<src_type>() || std::is_member_pointer<src_type>(), "HookAPI PtrConv::toRawPtr:src_type should be a pointer");
    return *static_cast<dst_type*>(static_cast<void*>(&src));
}
} // namespace PtrConv
#if _HAS_CXX20
template <size_t N>
struct FixedString {
    char buf[N + 1]{};
    constexpr FixedString(char const* s) {
        for (unsigned i = 0; i != N; ++i)
            buf[i] = s[i];
    }
    constexpr operator char const*() const {
        return buf;
    }
};
template <size_t N>
FixedString(char const (&)[N]) -> FixedString<N - 1>;
#endif
} // namespace

#if _HAS_CXX20
template <FixedString Fn>
__declspec(selectany) void* __dlsym_ptr_cache = dlsym_real(Fn);

#define VA_EXPAND(...) __VA_ARGS__
template <FixedString Fn, typename ret, typename... p>
static __forceinline auto __imp_Call() {
    return ((ret(*)(p...))(__dlsym_ptr_cache<Fn>));
}

template <FixedString Sig>
__declspec(selectany) void* __sigfind_ptr_cache = (void*)ll::hook::findSig(Sig);
template <FixedString Sig, typename ret, typename... p>
static __forceinline auto __imp_Call_Sig() {
    return ((ret(*)(p...))(__sigfind_ptr_cache<Sig>));
}

template <typename ret, typename... p>
static __forceinline auto __imp_Call_Addr(void* Fn) {
    return ((ret(*)(p...))(Fn));
}

#define AddrCall(fn, ret, ...) (__imp_Call_Addr<ret, __VA_ARGS__>((void*)fn))
#define SigCall(fn, ret, ...) (__imp_Call_Sig<fn, ret, __VA_ARGS__>())
#define SymCall(fn, ret, ...) (__imp_Call<fn, ret, __VA_ARGS__>())
#define SYM(fn) (__dlsym_ptr_cache<fn>)
#define dlsym(xx) SYM(xx)

#else
template <CHash, CHash>
__declspec(selectany) void* __ptr_cache;
template <CHash hash, CHash hash2>
inline static void* dlsym_cache(const char* fn) {
    if (!__ptr_cache<hash, hash2>) {
        __ptr_cache<hash, hash2> = dlsym_real(fn);
    }
    return __ptr_cache<hash, hash2>;
}

#define VA_EXPAND(...) __VA_ARGS__
template <CHash hash, CHash hash2, typename ret, typename... p>
static inline auto __imp_Call(const char* fn) {
    return ((ret(*)(p...))(dlsym_cache<hash, hash2>(fn)));
}

#define SymCall(fn, ret, ...) (__imp_Call<do_hash(fn), do_hash2(fn), ret, __VA_ARGS__>(fn))
#define SYM(fn) (dlsym_cache<do_hash(fn), do_hash2(fn)>(fn))
#define dlsym(xx) SYM(xx)
#endif
class THookRegister {
public:
    THookRegister(void* address, void* hook, void** org) {
        auto ret = HookFunction(address, org, hook);
        if (ret != 0) {
            printf("FailedToHook: %p\n", address);
        }
    }
    THookRegister(char const* sym, void* hook, void** org) {
        auto found = dlsym_real(sym);
        if (found == nullptr) {
            printf("FailedToHook: %p\n", sym);
        } else {
            auto ret = HookFunction(found, org, hook);
            if (ret != 0) {
                printf("FailedToHook: %s\n", sym);
            }
        }
    }
    template <typename T>
    THookRegister(const char* sym, T hook, void** org) {
        union {
            T a;
            void* b;
        } hookUnion;
        hookUnion.a = hook;
        THookRegister(sym, hookUnion.b, org);
    }
    template <typename T>
    THookRegister(void* address, T hook, void** org) {
        union {
            T a;
            void* b;
        } hookUnion;
        hookUnion.a = hook;
        THookRegister(address, hookUnion.b, org);
    }
};

#define VA_EXPAND(...) __VA_ARGS__
template <CHash, CHash>
struct THookTemplate;
template <CHash, CHash>
extern THookRegister THookRegisterTemplate;

#define _TInstanceHook(class_inh, pclass, iname, sym, ret, ...)                              \
    template <>                                                                              \
    struct THookTemplate<do_hash(iname), do_hash2(iname)> class_inh {                        \
        typedef ret (THookTemplate::*original_type)(__VA_ARGS__);                            \
        static original_type& _original() {                                                  \
            static original_type storage;                                                    \
            return storage;                                                                  \
        }                                                                                    \
        template <typename... Params>                                                        \
        static ret original(pclass* _this, Params&&... params) {                             \
            return (((THookTemplate*)_this)->*_original())(std::forward<Params>(params)...); \
        }                                                                                    \
        ret _hook(__VA_ARGS__);                                                              \
    };                                                                                       \
    template <>                                                                              \
    static THookRegister THookRegisterTemplate<do_hash(iname), do_hash2(iname)>{             \
        sym, &THookTemplate<do_hash(iname), do_hash2(iname)>::_hook,                         \
        (void**)&THookTemplate<do_hash(iname), do_hash2(iname)>::_original()};               \
    ret THookTemplate<do_hash(iname), do_hash2(iname)>::_hook(__VA_ARGS__)

#define _TInstanceDefHook(iname, sym, ret, type, ...) \
    _TInstanceHook(                                   \
        : public type, type, iname, sym, ret, VA_EXPAND(__VA_ARGS__))
#define _TInstanceNoDefHook(iname, sym, ret, ...) \
    _TInstanceHook(, void, iname, sym, ret, VA_EXPAND(__VA_ARGS__))

#define _TStaticHook(pclass, iname, sym, ret, ...)                               \
    template <>                                                                  \
    struct THookTemplate<do_hash(iname), do_hash2(iname)> pclass {               \
        typedef ret (*original_type)(__VA_ARGS__);                               \
        static original_type& _original() {                                      \
            static original_type storage;                                        \
            return storage;                                                      \
        }                                                                        \
        template <typename... Params>                                            \
        static ret original(Params&&... params) {                                \
            return _original()(std::forward<Params>(params)...);                 \
        }                                                                        \
        static ret _hook(__VA_ARGS__);                                           \
    };                                                                           \
    template <>                                                                  \
    static THookRegister THookRegisterTemplate<do_hash(iname), do_hash2(iname)>{ \
        sym, &THookTemplate<do_hash(iname), do_hash2(iname)>::_hook,             \
        (void**)&THookTemplate<do_hash(iname), do_hash2(iname)>::_original()};   \
    ret THookTemplate<do_hash(iname), do_hash2(iname)>::_hook(__VA_ARGS__)

#define _TStaticDefHook(iname, sym, ret, type, ...) \
    _TStaticHook(                                   \
        : public type, iname, sym, ret, VA_EXPAND(__VA_ARGS__))
#define _TStaticNoDefHook(iname, sym, ret, ...) \
    _TStaticHook(, iname, sym, ret, VA_EXPAND(__VA_ARGS__))

#define SHook2(iname, ret, sig, ...) _TStaticNoDefHook(iname, (void*)ll::hook::findSig(sig), ret, VA_EXPAND(__VA_ARGS__))
#define SHook(ret, sig, ...) SHook2(sig, ret, sig, VA_EXPAND(__VA_ARGS__))
#define SStaticHook2(iname, ret, sig, type, ...) \
    _TStaticDefHook(iname, (void*)ll::hook::findSig(sig), ret, type, VA_EXPAND(__VA_ARGS__))
#define SStaticHook(ret, sig, type, ...) SStaticHook2(sig, ret, sig, type, VA_EXPAND(__VA_ARGS__))
#define SClasslessInstanceHook2(iname, ret, sig, ...) \
    _TInstanceNoDefHook(iname, (void*)ll::hook::findSig(sig), ret, VA_EXPAND(__VA_ARGS__))
#define SClasslessInstanceHook(ret, sig, ...) \
    SClasslessInstanceHook2(sig, ret, sig, VA_EXPAND(__VA_ARGS__))
#define SInstanceHook2(iname, ret, sig, type, ...) \
    _TInstanceDefHook(iname, (void*)ll::hook::findSig(sig), ret, type, VA_EXPAND(__VA_ARGS__))
#define SInstanceHook(ret, sig, type, ...) \
    SInstanceHook2(sig, ret, sig, type, VA_EXPAND(__VA_ARGS__))

#define AHook2(iname, ret, addr, ...) _TStaticNoDefHook(iname, PtrConv::toRawPtr<void*>(addr), ret, VA_EXPAND(__VA_ARGS__))
#define AHook(ret, addr, ...) AHook2(#addr, ret, addr, VA_EXPAND(__VA_ARGS__))
#define AStaticHook2(iname, ret, addr, type, ...) \
    _TStaticDefHook(iname, PtrConv::toRawPtr<void*>(addr), ret, type, VA_EXPAND(__VA_ARGS__))
#define AStaticHook(ret, addr, type, ...) AStaticHook2(#addr, ret, addr, type, VA_EXPAND(__VA_ARGS__))
#define AClasslessInstanceHook2(iname, ret, addr, ...) \
    _TInstanceNoDefHook(iname, PtrConv::toRawPtr<void*>(addr), ret, VA_EXPAND(__VA_ARGS__))
#define AClasslessInstanceHook(ret, addr, ...) \
    AClasslessInstanceHook2(#addr, ret, addr, VA_EXPAND(__VA_ARGS__))
#define AInstanceHook2(iname, ret, addr, type, ...) \
    _TInstanceDefHook(iname, PtrConv::toRawPtr<void*>(addr), ret, type, VA_EXPAND(__VA_ARGS__))
#define AInstanceHook(ret, addr, type, ...) \
    AInstanceHook2(#addr, ret, addr, type, VA_EXPAND(__VA_ARGS__))

#define THook2(iname, ret, sym, ...) _TStaticNoDefHook(iname, sym, ret, VA_EXPAND(__VA_ARGS__))
#define THook(ret, sym, ...) THook2(sym, ret, sym, VA_EXPAND(__VA_ARGS__))
#define TStaticHook2(iname, ret, sym, type, ...) \
    _TStaticDefHook(iname, sym, ret, type, VA_EXPAND(__VA_ARGS__))
#define TStaticHook(ret, sym, type, ...) TStaticHook2(sym, ret, sym, type, VA_EXPAND(__VA_ARGS__))
#define TClasslessInstanceHook2(iname, ret, sym, ...) \
    _TInstanceNoDefHook(iname, sym, ret, VA_EXPAND(__VA_ARGS__))
#define TClasslessInstanceHook(ret, sym, ...) \
    TClasslessInstanceHook2(sym, ret, sym, VA_EXPAND(__VA_ARGS__))
#define TInstanceHook2(iname, ret, sym, type, ...) \
    _TInstanceDefHook(iname, sym, ret, type, VA_EXPAND(__VA_ARGS__))
#define TInstanceHook(ret, sym, type, ...) \
    TInstanceHook2(sym, ret, sym, type, VA_EXPAND(__VA_ARGS__))
