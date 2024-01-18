#include "ll/api/utils/ErrorUtils.h"

#include <filesystem>

#include "ll/api/Logger.h"
#include "ll/api/memory/Memory.h"
#include "ll/api/reflection/Reflection.h"
#include "ll/api/utils/StringUtils.h"

#include "windows.h"

#if _HAS_CXX23
#include "DbgHelp.h"
#pragma comment(lib, "DbgHelp.lib")
#endif

#pragma warning(push, 3)
#include "comdef.h"
#pragma warning(pop)

#ifdef LL_DEBUG
#include "ll/api/utils/StacktraceUtils.h"
#endif

namespace ll::inline utils::error_utils {

UntypedException::UntypedException(const EXCEPTION_RECORD& er)
: exception_object(reinterpret_cast<void*>(er.ExceptionInformation[1])),
  exc(&er) {
    if (exc->NumberParameters >= 3) {
        handle    = (exc->NumberParameters >= 4) ? (void*)exc->ExceptionInformation[3] : nullptr;
        throwInfo = (RealInternal::ThrowInfo const*)exc->ExceptionInformation[2];
        if (throwInfo) cArray = rva2va<_CatchableTypeArray const*>(throwInfo->pCatchableTypeArray);
    }
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

std::error_category const& u8system_category() noexcept {
    static constexpr struct u8system_category category;
    return category;
}

struct hresult_category : public std::_System_error_category {
    constexpr hresult_category() noexcept : _System_error_category() {}
    [[nodiscard]] std::string message(int errCode) const override {
        try {
            std::wstring msg(_com_error((HRESULT)errCode).ErrorMessage());
            if (!msg.empty()) {
                std::string res{string_utils::wstr2str(msg)};
                if (res.ends_with('\n')) {
                    res.pop_back();
                    if (res.ends_with('\r')) {
                        res.pop_back();
                    }
                }
                return string_utils::replaceAll(res, "\r\n", ", ");
            }
        } catch (...) {}
        return "unknown error";
    }
    [[nodiscard]] char const* name() const noexcept override { return "hresult"; }
};

std::error_category const& hresult_category() noexcept {
    static constexpr struct hresult_category category;
    return category;
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

std::error_category const& ntstatus_category() noexcept {
    static constexpr struct ntstatus_category category;
    return category;
}

seh_exception::seh_exception(uint ntStatus, _EXCEPTION_POINTERS* expPtr)
: std::system_error(std::error_code{(int)ntStatus, ntstatus_category()}),
  expPtr(expPtr) {}

void setSehTranslator() { _set_se_translator(error_utils::translateSEHtoCE); }

std::system_error getWinLastError() noexcept { return std::error_code{(int)GetLastError(), u8system_category()}; }

extern "C" PEXCEPTION_RECORD* __current_exception();         // NOLINT
extern "C" PCONTEXT*          __current_exception_context(); // NOLINT

_EXCEPTION_RECORD& current_exception() noexcept { return **__current_exception(); }
_CONTEXT&          current_exception_context() noexcept { return **__current_exception_context(); }

std::exception_ptr createExceptionPtr(_EXCEPTION_RECORD const& rec) noexcept {
    auto               realType = std::make_shared<_EXCEPTION_RECORD>(rec);
    std::exception_ptr res;
    __ExceptionPtrAssign(&res, &realType);
    return res;
}

#if _HAS_CXX23

std::stacktrace stacktraceFromContext(_CONTEXT const& context, size_t skip, size_t maxDepth) {
    if (std::addressof(context) == nullptr) {
        return {};
    }
    STACKFRAME64 sf{};
    sf.AddrPC.Offset    = context.Rip;
    sf.AddrStack.Offset = context.Rsp;
    sf.AddrFrame.Offset = context.Rbp;
    sf.AddrPC.Mode      = AddrModeFlat;
    sf.AddrStack.Mode   = AddrModeFlat;
    sf.AddrFrame.Mode   = AddrModeFlat;
    HANDLE thread       = GetCurrentThread();
    HANDLE process      = GetCurrentProcess();

    struct RealStacktrace {
        std::vector<decltype(sf.AddrPC.Offset)> addresses;
        ulong                                   hash{};
    } realStacktrace;

    static_assert(sizeof(RealStacktrace) == sizeof(std::stacktrace));
    static_assert(sizeof(std::stacktrace_entry) == sizeof(sf.AddrPC.Offset));

    constexpr auto machine = IMAGE_FILE_MACHINE_AMD64;

    auto tmpCtx = context;

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
        realStacktrace.hash += (ulong)sf.AddrPC.Offset;
        realStacktrace.addresses.push_back(sf.AddrPC.Offset);
    }
    return *(std::stacktrace*)&realStacktrace;
}

#endif

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

        auto& rt = *(std::shared_ptr<const EXCEPTION_RECORD>*)(&ePtr);

        if (rt->ExceptionCode == UntypedException::exceptionCodeOfCpp) {
            try {
                UntypedException exc{*rt};
                std::string      handleName("unknown module");

                std::wstring buffer(32767, '\0');
                auto         size = GetModuleFileNameW((HMODULE)exc.handle, buffer.data(), 32767);
                if (size) {
                    buffer.resize(size);
                    handleName = string_utils::u8str2str(std::filesystem::path(buffer).stem().u8string());
                }

                auto expTypeName = exc.getNumCatchableTypes() > 0 ? exc.getTypeInfo(0)->name() : "unknown exception";
                if (expTypeName == typeid(seh_exception).name()) {
                    res += fmt::format("Seh Exception, from <{}>:\n", handleName);
                } else {
                    res += fmt::format(
                        "C++ Exception: {}, from <{}>:\n",
                        reflection::removeTypePrefix(expTypeName),
                        handleName
                    );
                }
            } catch (...) {}
        } else {
            res += "Raw Seh Exception:\n";
        }
        try {
            std::exception_ptr yeptr;
            std::swap(ePtr, yeptr);
            std::rethrow_exception(yeptr);
        } catch (const seh_exception& e) {
            res += fmt::format(
                "[0x{:0>8X}:{}] {}",
                (uint)e.code().value(),
                e.code().category().name(),
                string_utils::tou8str(e.what())
            );
            ePtr         = getNested(e);
            auto& unkExc = *(e.getExceptionPointer()->ExceptionRecord);
            for (size_t i = 0; i < unkExc.NumberParameters; i++) {
                res += fmt::format("\nParameter {}: {}", i, (void*)unkExc.ExceptionInformation[i]);
            }
        } catch (const std::system_error& e) {
            res += fmt::format(
                "[0x{:0>8X}:{}] {}",
                (uint)e.code().value(),
                e.code().category().name(),
                string_utils::tou8str(e.what())
            );
            ePtr = getNested(e);
        } catch (const std::exception& e) {
            res  += string_utils::tou8str(e.what());
            ePtr  = getNested(e);
        } catch (const std::string& e) {
            res += string_utils::tou8str(e);
        } catch (char const* e) {
            res += string_utils::tou8str(e);
        } catch (...) {
            auto& unkExc  = current_exception();
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

void printCurrentException(ll::Logger& logger, std::exception_ptr const& e) noexcept {
    try {
#if defined(LL_DEBUG) && _HAS_CXX23
        std::string res;
        auto        stacktrace = stacktraceFromCurrExc();
        if (stacktrace.empty()) {
            stacktrace = std::stacktrace::current(2);
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
            logger.error(sv);
        }
        return;
    } catch (...) {}
    logger.error("unknown error");
}
} // namespace ll::inline utils::error_utils
