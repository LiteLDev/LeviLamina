﻿#pragma once
#include "Global.h"
#include "Utils/Hash.h"
#include <vector>
#include <string>
#include <thread>
#include "third-party/ModUtils/ModUtils.h"

// The core api of the hook function
//__declspec(dllimport) int HookFunction(void* oldfunc, void** poutold, void* newfunc);
// Used to get a server-defined specific function by name
extern "C" {
LIAPI int HookFunction(void* oldfunc, void** poutold, void* newfunc);
LIAPI void* dlsym_real(char const* name);
}

extern std::vector<std::string> dlsym_reverse(int addr);

template <typename RTN = void, typename... Args>
RTN inline VirtualCall(void const* _this, uintptr_t off, Args... args) {
    return (*(RTN(**)(void const*, Args...))(*(uintptr_t*)_this + off))(_this, args...);
}

template <typename T, int off>
inline T& dAccess(void* ptr) {
    return *(T*)(((uintptr_t)ptr) + off);
}
template <typename T, int off>
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

namespace mem {
inline std::string ptrToStr(uintptr_t ptr) {
    std::ostringstream ss;
    ss << std::hex << ((UINT64)ptr) << std::endl;
    return ss.str();
}

inline void* uintptrToPtr(uintptr_t ptr) {
    return (void*)ptr;
}
} // namespace mem

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

template <FixedString Fn>
__declspec(selectany) void* __dlsym_ptr_cache = dlsym_real(Fn);

#define VA_EXPAND(...) __VA_ARGS__
template <FixedString Fn, typename ret, typename... p>
static inline auto __imp_Call() {
    return ((ret(*)(p...))(__dlsym_ptr_cache<Fn>));
}

template <FixedString Fn, typename ret, typename... p>
static inline auto __imp_Call_Sig() {
    return ((ret(*)(p...))((void*)ModUtils::FindSig(Fn)));
}

template <FixedString Fn, typename ret, typename... p>
static inline auto __imp_Call_Addr() {
    return ((ret(*)(p...))((void*)Fn));
}

#define AddrCall(fn, ret, ...) (__imp_Call_Addr<fn, ret, __VA_ARGS__>())
#define SigCall(fn, ret, ...) (__imp_Call_Sig<fn, ret, __VA_ARGS__>())
#define AddrCall2(name, fn, ret, ...) (__imp_Call_Addr<fn, ret, __VA_ARGS__>())
#define SigCall2(name, fn, ret, ...) (__imp_Call_Sig<fn, ret, __VA_ARGS__>())
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

#define SHook2(iname, ret, sig, ...) _TStaticNoDefHook(iname, (void*)ModUtils::FindSig(sig), ret, VA_EXPAND(__VA_ARGS__))
#define SHook(ret, sig, ...) SHook2(sig, ret, sig, VA_EXPAND(__VA_ARGS__))
#define SStaticHook2(iname, ret, sig, type, ...) \
    _TStaticDefHook(iname, (void*)ModUtils::FindSig(sig), ret, type, VA_EXPAND(__VA_ARGS__))
#define SStaticHook(ret, sig, type, ...) SStaticHook2(sig, ret, sig, type, VA_EXPAND(__VA_ARGS__))
#define SClasslessInstanceHook2(iname, ret, sig, ...) \
    _TInstanceNoDefHook(iname, (void*)ModUtils::FindSig(sig), ret, VA_EXPAND(__VA_ARGS__))
#define SClasslessInstanceHook(ret, sig, ...) \
    SClasslessInstanceHook2(sig, ret, sig, VA_EXPAND(__VA_ARGS__))
#define SInstanceHook2(iname, ret, sig, type, ...) \
    _TInstanceDefHook(iname, (void*)ModUtils::FindSig(sig), ret, type, VA_EXPAND(__VA_ARGS__))
#define SInstanceHook(ret, sig, type, ...) \
    SInstanceHook2(sig, ret, sig, type, VA_EXPAND(__VA_ARGS__))

#define AHook2(iname, ret, addr, ...) _TStaticNoDefHook(iname, mem::uintptrToPtr(addr), ret, VA_EXPAND(__VA_ARGS__))
#define AHook(ret, addr, ...) AHook2(std::to_string(addr), ret, addr, VA_EXPAND(__VA_ARGS__))
#define AStaticHook2(iname, ret, addr, type, ...) \
    _TStaticDefHook(iname, mem::uintptrToPtr(addr), ret, type, VA_EXPAND(__VA_ARGS__))
#define AStaticHook(ret, addr, type, ...) AStaticHook2(std::to_string(addr), ret, addr, type, VA_EXPAND(__VA_ARGS__))
#define AClasslessInstanceHook2(iname, ret, addr, ...) \
    _TInstanceNoDefHook(iname, mem::uintptrToPtr(addr), ret, VA_EXPAND(__VA_ARGS__))
#define AClasslessInstanceHook(ret, addr, ...) \
    AClasslessInstanceHook2(std::to_string(addr), ret, addr, VA_EXPAND(__VA_ARGS__))
#define AInstanceHook2(iname, ret, addr, type, ...) \
    _TInstanceDefHook(iname, mem::uintptrToPtr(addr), ret, type, VA_EXPAND(__VA_ARGS__))
#define AInstanceHook(ret, addr, type, ...) \
    AInstanceHook2(std::to_string(addr), ret, addr, type, VA_EXPAND(__VA_ARGS__))

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
