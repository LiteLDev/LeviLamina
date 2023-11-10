#include "ll/api/utils/SystemError.h"
#include "ll/api/utils/StringUtils.h"

#include "errhandlingapi.h"

namespace ll::utils::system_error {

struct u8system_category : public std::_System_error_category {
    constexpr u8system_category() noexcept : _System_error_category() {}
    [[nodiscard]] std::string message(int errCode) const override {
        const std::_System_error_message msg(static_cast<unsigned long>(errCode));
        if (msg._Length == 0) {
            return "unknown error";
        } else {
            return string_utils::str2str({msg._Str, msg._Length}, string_utils::CodePage::ANSI);
        }
    }
};

const std::error_category& u8system_category() noexcept {
    static constexpr struct u8system_category u8system_category_const;
    return u8system_category_const;
}

std::system_error getLastError() noexcept { return std::error_code{(int)GetLastError(), u8system_category()}; }
} // namespace ll::utils::system_error
