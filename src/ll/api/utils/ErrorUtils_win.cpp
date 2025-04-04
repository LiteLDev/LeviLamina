#include "ll/api/utils/ErrorUtils.h"

#include <filesystem>

#include "ll/api/io/Logger.h"
#include "ll/api/memory/Memory.h"
#include "ll/api/reflection/Reflection.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/SystemUtils.h"

#include "windows.h"

#include "DbgHelp.h"

#ifdef LL_DEBUG
#include "ll/api/utils/StacktraceUtils.h"
#endif

namespace ll::inline utils::error_utils {

struct MsvcExceptionRef {
    static constexpr uint msc                = 0x6D7363; // 'msc'
    static constexpr uint exceptionCodeOfCpp = (msc | 0xE0000000);

    void*                      exceptionObject;
    ::_EXCEPTION_RECORD const* exc;
    void*                      handle    = nullptr;
    internal::ThrowInfo const* throwInfo = nullptr;
    _CatchableTypeArray const* cArray    = nullptr;

    MsvcExceptionRef(::_EXCEPTION_RECORD const& er);

    [[nodiscard]] uint getNumCatchableTypes() const { return cArray ? cArray->nCatchableTypes : 0u; }

    [[nodiscard]] internal::CatchableType const* cType(uint i) const {
        return rva2va<internal::CatchableType const*>(reinterpret_cast<uint const*>(cArray->arrayOfCatchableTypes)[i]);
    }

    [[nodiscard]] std::type_info const* getTypeInfo(uint i) const {
        return rva2va<std::type_info const*>(cType(i)->pType);
    }
    [[nodiscard]] uint getThisDisplacement(uint i) const { return cType(i)->thisDisplacement.mdisp; }

    template <class T>
    [[nodiscard]] T rva2va(auto addr) const {
        return reinterpret_cast<T>((uintptr_t)handle + (uintptr_t)(addr));
    }
};
MsvcExceptionRef::MsvcExceptionRef(EXCEPTION_RECORD const& er)
: exceptionObject(reinterpret_cast<void*>(er.ExceptionInformation[1])),
  exc(&er) {
    if (exc->NumberParameters >= 3) {
        handle    = (exc->NumberParameters >= 4) ? (void*)exc->ExceptionInformation[3] : nullptr;
        throwInfo = (internal::ThrowInfo const*)exc->ExceptionInformation[2];
        if (throwInfo) cArray = rva2va<_CatchableTypeArray const*>(throwInfo->pCatchableTypeArray);
    }
}
AnyExceptionRef::AnyExceptionRef(std::exception_ptr const& ptr)
: impl((void*)(((std::shared_ptr<EXCEPTION_RECORD const>*)(&ptr))->get())) {}

AnyExceptionRef::~AnyExceptionRef() = default;

void* AnyExceptionRef::typeCast(std::type_info const& typeInfo) const {
    auto exp = MsvcExceptionRef(*reinterpret_cast<EXCEPTION_RECORD*>(impl));

    for (uint i = 0, e = exp.getNumCatchableTypes(); i < e; i++) {
        if ((*exp.getTypeInfo(i)) == typeInfo) {
            return reinterpret_cast<char*>(exp.exceptionObject) + exp.getThisDisplacement(i);
        }
    }
    return nullptr;
}

struct u8system_category : public std::_System_error_category {
    constexpr u8system_category() noexcept : _System_error_category() {}
    [[nodiscard]] std::string message(int errCode) const override {
        const std::_System_error_message msg(static_cast<ulong>(errCode));
        if (msg._Length) {
            std::string res{string_utils::str2str({msg._Str, msg._Length})};
            if (res.ends_with('\n')) {
                res.pop_back();
                if (res.ends_with('\r')) {
                    res.pop_back();
                }
            }
            return string_utils::replaceAll(res, "\r\n", ", ");
        }
        return "unknown error";
    }
};

inline std::error_category const& u8system_category() noexcept {
    return std::_Immortalize_memcpy_image<struct u8system_category>();
}

struct ntstatus_category : public std::error_category {
    constexpr ntstatus_category() noexcept : error_category() {}
    [[nodiscard]] std::string message(int errCode) const override {
        static DWORD langId = [] {
            DWORD res;
            if (GetLocaleInfoEx(
                    LOCALE_NAME_SYSTEM_DEFAULT,
                    LOCALE_SNAME | LOCALE_RETURN_NUMBER,
                    reinterpret_cast<LPWSTR>(&res),
                    sizeof(res) / sizeof(wchar_t)
                )
                == 0) {
                res = 0;
            }
            return res;
        }();
        static auto nt = GetModuleHandleW(L"ntdll");

        wchar_t* msg  = nullptr;
        auto     size = FormatMessageW(
            FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_HMODULE | FORMAT_MESSAGE_IGNORE_INSERTS,
            nt,
            errCode,
            langId,
            (wchar_t*)&msg,
            0,
            nullptr
        );
        if (size) {
            std::string res{string_utils::wstr2str({msg, size})};
            LocalFree(msg);
            if (res.ends_with('\n')) {
                res.pop_back();
                if (res.ends_with('\r')) {
                    res.pop_back();
                }
            }
            return string_utils::replaceAll(res, "\r\n", ", ");
        }
        return "unknown error";
    }
    [[nodiscard]] char const* name() const noexcept override { return "ntstatus"; }
};

inline std::error_category const& ntstatus_category() noexcept {
    return std::_Immortalize_memcpy_image<struct ntstatus_category>();
}

std::system_error getLastSystemError() noexcept { return std::error_code{(int)GetLastError(), u8system_category()}; }

extern "C" PEXCEPTION_RECORD* __current_exception();
extern "C" PCONTEXT*          __current_exception_context();

optional_ref<::_EXCEPTION_RECORD> current_exception_record() noexcept { return **__current_exception(); }
optional_ref<_CONTEXT>            current_exception_context() noexcept { return **__current_exception_context(); }

std::exception_ptr createExceptionPtr(void* rec) noexcept {
    auto               realType = std::make_shared<_EXCEPTION_RECORD>(*(PEXCEPTION_RECORD)rec);
    std::exception_ptr res;
    __ExceptionPtrAssign(&res, &realType);
    return res;
}
Stacktrace stacktraceFromContext(optional_ref<_CONTEXT const> context, size_t skip, size_t maxDepth) {
    if (!context) {
        return {};
    }
    STACKFRAME64 sf{};
    sf.AddrPC.Offset    = context->Rip;
    sf.AddrStack.Offset = context->Rsp;
    sf.AddrFrame.Offset = context->Rbp;
    sf.AddrPC.Mode      = AddrModeFlat;
    sf.AddrStack.Mode   = AddrModeFlat;
    sf.AddrFrame.Mode   = AddrModeFlat;
    HANDLE thread       = GetCurrentThread();
    HANDLE process      = GetCurrentProcess();

    struct RealStacktrace {
        std::vector<decltype(sf.AddrPC.Offset)> addresses;
        size_t                                  hash;
    } realStacktrace;

    static_assert(sizeof(RealStacktrace) == sizeof(Stacktrace));
    static_assert(sizeof(StacktraceEntry) == sizeof(sf.AddrPC.Offset));

    constexpr auto machine = IMAGE_FILE_MACHINE_AMD64;

    auto tmpCtx = *context;

    for (size_t i = 0; i < maxDepth; ++i) {
        SetLastError(0);
        BOOL correct = StackWalk64(
            machine,
            process,
            thread,
            &sf,
            &tmpCtx,
            nullptr,
            &SymFunctionTableAccess64,
            &SymGetModuleBase64,
            nullptr
        );
        if (!correct || !sf.AddrFrame.Offset) break;
        if (i < skip) {
            continue;
        }
        realStacktrace.hash += sf.AddrPC.Offset;
        realStacktrace.addresses.push_back(sf.AddrPC.Offset);
    }
    return *reinterpret_cast<Stacktrace*>(&realStacktrace);
}
Stacktrace stacktraceFromCurrentException(size_t skip, size_t maxDepth) {
    return stacktraceFromContext(current_exception_context(), skip, maxDepth);
}

template <class T>
static std::exception_ptr getNested(T const& e) {
    constexpr bool can_use_dynamic_cast =
        std::is_polymorphic_v<T>
        && (!std::is_base_of_v<std::nested_exception, T> || std::is_convertible_v<T*, std::nested_exception*>);

    if constexpr (can_use_dynamic_cast) {
        const auto n = dynamic_cast<std::nested_exception const*>(std::addressof(e));
        if (n) {
            return n->nested_ptr();
        }
    }
    return nullptr;
}

std::string makeExceptionString(std::exception_ptr ePtr) noexcept {
    if (!ePtr) {
        return "bad exception, can't make exception string";
    }
    try {
        std::string res;

    nextNest:

        auto& rt = *(std::shared_ptr<EXCEPTION_RECORD const>*)(&ePtr);

        if (rt->ExceptionCode == MsvcExceptionRef::exceptionCodeOfCpp) {
            try {
                MsvcExceptionRef exc{*rt};
                std::string      handleName =
                    sys_utils::getModulePath(exc.handle)
                        .transform([](auto&& path) { return string_utils::u8str2str(path.stem().u8string()); })
                        .value_or("unknown module");
                if (exc.getNumCatchableTypes() > 0) {
                    auto& type  = *exc.getTypeInfo(0);
                    res        += fmt::format(
                        "C++ Exception: {}, from <{}>:\n",
                        reflection::removeTypePrefix(type.name()),
                        handleName
                    );
                } else {
                    res += fmt::format("C++ Exception: unknown type, from <{}>:\n", handleName);
                }
            } catch (...) {}
        } else {
            res += "Raw Seh Exception:\n";
        }
        try {
            std::exception_ptr yeptr;
            std::swap(ePtr, yeptr);
            std::rethrow_exception(yeptr);
        } catch (std::system_error const& e) {
            res += fmt::format(
                "[0x{:0>8X}:{}] {}",
                (uint)e.code().value(),
                e.code().category().name(),
                string_utils::tou8str(e.what())
            );
            ePtr = getNested(e);
        } catch (std::exception const& e) {
            res  += string_utils::tou8str(e.what());
            ePtr  = getNested(e);
        } catch (std::string const& e) {
            res += string_utils::tou8str(e);
        } catch (char const* e) {
            res += string_utils::tou8str(e);
        } catch (...) {
            auto& unkExc  = *current_exception_record();
            res          += fmt::format(
                "[0x{:0>8X}:{}] {}",
                (uint)unkExc.ExceptionCode,
                ntstatus_category().name(),
                ntstatus_category().message((int)unkExc.ExceptionCode)
            );
            for (size_t i = 0; i < unkExc.NumberParameters; i++) {
                res += fmt::format("\nParameter {}: {}", i, (void*)unkExc.ExceptionInformation[i]);
            }
        }

        if (ePtr) {
            res += ",\nwith: ";
            goto nextNest;
        }

        return res;
    } catch (...) {}
    return "unknown error when make exception string";
}

void printCurrentException(io::Logger& logger, io::LogLevel level, std::exception_ptr const& e) noexcept {
    try {
#if defined(LL_DEBUG)
        std::string res;
        auto        stacktrace = stacktraceFromCurrentException();
        if (stacktrace.empty()) {
            stacktrace = Stacktrace::current(1);
            if (!stacktrace.empty()) {
                res = "\ncurrent stacktrace:\n" + stacktrace_utils::toString(stacktrace);
            }
        } else {
            res = "\nexception stacktrace:\n" + stacktrace_utils::toString(stacktrace);
        }
        res = makeExceptionString(e) + res;
#else
        auto res = makeExceptionString(e);
#endif
        for (auto& sv : string_utils::splitByPattern(res, "\n")) {
            logger.log(level, sv);
        }
        return;
    } catch (...) {}
    logger.log(level, "unknown error");
}

} // namespace ll::inline utils::error_utils
