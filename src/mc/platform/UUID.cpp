#include "mc/platform/UUID.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/utils/RandomUtils.h"
#include <algorithm>

mce::UUID mce::UUID::random() { return {ll::random_utils::rand<uint64>(), ll::random_utils::rand<uint64>()}; }

bool mce::UUID::canParse(std::string_view in) { return tryFromString(in).has_value(); }

ll::Expected<mce::UUID> mce::UUID::tryFromString(::std::string_view str) {
    using namespace fmt::literals;

    if (str.size() != 36) {
        return ll::makeI18nStringError<"invalid UUID: wrong length">(
            "raw_uuid"_a        = str,
            "expected_length"_a = 36,
            "actual_length"_a   = str.size()
        );
    }
    if (str[8] != '-' || str[13] != '-' || str[18] != '-' || str[23] != '-') {
        return ll::makeI18nStringError<"invalid UUID: wrong separators">("raw_uuid"_a = str);
    }

    mce::UUID result;

    for (size_t i = 0, count = 0; i < 36; ++i) {
        if (i == 8 || i == 13 || i == 18 || i == 23) continue;

        char  c = str[i];
        uint8 digit;

        if (c >= '0' && c <= '9') {
            digit = c - '0';
        } else if (c >= 'a' && c <= 'f') {
            digit = c - 'a' + 10;
        } else if (c >= 'A' && c <= 'F') {
            digit = c - 'A' + 10;
        } else {
            return ll::makeI18nStringError<"invalid UUID: wrong character">(
                "raw_uuid"_a          = str,
                "invalid_character"_a = std::string{str.substr(i, 1)}
            );
        }

        if (count < 16) {
            result.a = (result.a << 4) | digit;
        } else {
            result.b = (result.b << 4) | digit;
        }
        ++count;
    }

    return result;
}