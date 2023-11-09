#include "ll/api/utils/SystemError.h"
#include "ll/api/utils/StringUtils.h"

#include "errhandlingapi.h"

namespace ll::utils::system_error {

struct u8system_category : public std::_System_error_category {
    constexpr u8system_category() noexcept : _System_error_category() {}

    [[nodiscard]] const char* name() const noexcept override { return "system"; }

    [[nodiscard]] std::string message(int errCode) const override {
        const std::_System_error_message msg(static_cast<unsigned long>(errCode));
        if (msg._Length == 0) {
            static constexpr char unknownError[]     = "unknown error";
            constexpr size_t      unknownErrorLength = sizeof(unknownError) - 1;
            return std::string{unknownError, unknownErrorLength};
        } else {
            return string_utils::str2str({msg._Str, msg._Length}, string_utils::CodePage::ANSI);
        }
    }

    [[nodiscard]] std::error_condition default_error_condition(int errVal) const noexcept override {
        if (errVal == 0) { return {0, std::generic_category()}; }

        // make error_condition for error code (generic if possible)
        const int map = std::_Winerror_map(errVal);
        if (map == 0) {
            return {errVal, std::system_category()};
        } else {
            return {map, std::generic_category()};
        }
    }
};

const std::error_category& u8system_category() noexcept {
    static constexpr struct u8system_category u8system_category_const;
    return u8system_category_const;
}

std::error_code getLastError() noexcept { return {(int)GetLastError(), u8system_category()}; }
} // namespace ll::utils::system_error
