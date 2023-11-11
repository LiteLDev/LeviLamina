#include "ll/api/utils/ErrorInfo.h"
#include "ll/api/utils/StringUtils.h"

#include "ll/core/LeviLamina.h"

#include "errhandlingapi.h"

#include "windows.h"

namespace ll::utils::error_info {

namespace {
template <class T>
std::exception_ptr getNested(T const& e) {
    constexpr bool can_use_dynamic_cast =
        std::is_polymorphic_v<T>
        && (!std::is_base_of_v<std::nested_exception, T> || std::is_convertible_v<T*, std::nested_exception*>);

    if constexpr (can_use_dynamic_cast) {
        const auto n = dynamic_cast<std::nested_exception const*>(std::addressof(e));
        if (n) { return n->nested_ptr(); }
    }
    return nullptr;
}

} // namespace

struct u8system_category : public std::_System_error_category {
    constexpr u8system_category() noexcept : _System_error_category() {}
    [[nodiscard]] std::string message(int errCode) const override {
        const std::_System_error_message msg(static_cast<unsigned long>(errCode));
        if (msg._Length) {
            std::string res{string_utils::str2str({msg._Str, msg._Length})};
            if (res.ends_with('\n')) { res.pop_back(); }
            if (res.ends_with('\r')) { res.pop_back(); }
            return string_utils::replaceAll(res, "\r\n", ", ");
        }
        return "unknown error";
    }
};

std::error_category const& u8system_category() noexcept {
    static constexpr struct u8system_category category;
    return category;
}

struct ntstatus_category : public std::error_category {
    constexpr ntstatus_category() noexcept : error_category() {}
    [[nodiscard]] std::string message(int errCode) const override {
        char* msg = nullptr;
        DWORD langId;
        if (GetLocaleInfoEx(
                LOCALE_NAME_SYSTEM_DEFAULT,
                LOCALE_ILANGUAGE | LOCALE_RETURN_NUMBER,
                reinterpret_cast<LPWSTR>(&langId),
                sizeof(langId) / sizeof(wchar_t)
            )
            == 0) {
            langId = 0;
        }
        auto size = FormatMessageA(
            FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_HMODULE | FORMAT_MESSAGE_IGNORE_INSERTS,
            GetModuleHandleA("ntdll"),
            errCode,
            langId,
            (char*)&msg,
            0,
            nullptr
        );
        if (size) {
            std::string res{string_utils::str2str({msg, size})};
            LocalFree(msg);
            if (res.ends_with('\n')) { res.pop_back(); }
            if (res.ends_with('\r')) { res.pop_back(); }
            return string_utils::replaceAll(res, "\r\n", ", ");
        }
        return "unknown error";
    }
    [[nodiscard]] const char* name() const noexcept override { return "ntstatus"; }
};

std::error_category const& ntstatus_category() noexcept {
    static constexpr struct ntstatus_category category;
    return category;
}

seh_exception::seh_exception(uint ntStatus, void* expPtr)
: std::system_error(std::error_code{(int)ntStatus, ntstatus_category()}),
  expPtr(expPtr) {}

std::system_error getLastWinError() noexcept { return std::error_code{(int)GetLastError(), u8system_category()}; }

std::string makeExceptionString(std::exception_ptr eptr) {
    if (!eptr) { throw std::bad_exception(); }

    std::string res;
    std::size_t numNested = 0;
nextNest:
    try {
        std::exception_ptr yeptr;
        std::swap(eptr, yeptr);
        std::rethrow_exception(yeptr);
    } catch (const std::system_error& e) {
        res += fmt::format(
            "[0x{:0>8X}:{}] {}",
            (uint)e.code().value(),
            e.code().category().name(),
            string_utils::tou8str(e.what())
        );
        eptr = getNested(e);
    } catch (const std::exception& e) {
        res  += string_utils::tou8str(e.what());
        eptr  = getNested(e);
    } catch (const std::string& e) { res += string_utils::tou8str(e); } catch (const char* e) {
        res += string_utils::tou8str(e);
    } catch (...) {
        std::cout << GetLastError() << std::endl;
        res += "unknown error type";
    }

    if (eptr) {
        res += ", with: (";
        numNested++;
        goto nextNest;
    }

    res += std::string(numNested, ')');
    return res;
}

void printCurrentException(optional_ref<ll::Logger> l, std::exception_ptr const& e) noexcept {
    try {
        l.value_or(logger).error(makeExceptionString(e));
    } catch (...) { l.value_or(logger).error("unknown error"); }
}
} // namespace ll::utils::error_info
