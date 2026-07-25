#include "ll/api/reflection/ReflectionError.h"

#include <string>
#include <utility>

#include "fmt/format.h"

#include "ll/api/i18n/I18n.h"

namespace ll::reflection {

class ReflectionPathError : public ErrorInfoBase {
    std::string mPath;
    Error       mErr;

public:
    ReflectionPathError(std::string path, Error&& err) noexcept;
    std::string message(std::string_view locale) const noexcept override;

    static std::string normalizePathSegment(std::string segment) {
        while (!segment.empty() && segment.back() == '.') segment.pop_back();
        return segment;
    }
};

ReflectionPathError::ReflectionPathError(std::string path, Error&& err) noexcept
: mPath(normalizePathSegment(std::move(path))),
  mErr() {
    if (err.isA<ReflectionPathError>()) {
        auto& nested = err.as<ReflectionPathError>();
        {
            auto prefix = normalizePathSegment(std::move(mPath));
            auto suffix = normalizePathSegment(std::move(nested.mPath));
            if (prefix.empty()) mPath = std::move(suffix);
            else if (suffix.empty()) mPath = std::move(prefix);
            else if (suffix.front() == '[') {
                prefix += suffix;
                mPath   = std::move(prefix);
            } else {
                prefix += '.';
                prefix += suffix;
                mPath   = std::move(prefix);
            }
        }
        mErr = std::move(nested.mErr);
    } else {
        mErr = std::move(err);
    }
}

std::string ReflectionPathError::message(std::string_view locale) const noexcept {
    return "Reflection error in field '{0}':\n{1}"_trl(locale, mPath, mErr.message(locale));
}

Unexpected makePathError(std::string path, Error&& err) noexcept {
    return makeError<ReflectionPathError>(std::move(path), std::move(err));
}

Unexpected makeSerObjectTypeError() noexcept { return makeI18nStringError<"target must be an object">(); }

Unexpected makeSerMemberError(std::string_view name, Error& err) noexcept {
    return makePathError(std::string{name}, std::move(err));
}

Unexpected makeSerIndexError(std::size_t idx, Error& err) noexcept {
    return makePathError(fmt::format("[{}]", idx), std::move(err));
}

Unexpected makeSerKeyError(std::string_view key, Error& err) noexcept {
    return makePathError(fmt::format("[\"{}\"]", key), std::move(err));
}

Unexpected makeDeserMemberError(std::string_view name, Error& err) noexcept {
    return makePathError(std::string{name}, std::move(err));
}

Unexpected makeDeserIndexError(std::size_t idx, Error& err) noexcept {
    return makePathError(fmt::format("[{}]", idx), std::move(err));
}

Unexpected makeDeserKeyError(std::string_view key, Error& err) noexcept {
    return makePathError(fmt::format("[\"{}\"]", key), std::move(err));
}

Unexpected makeDeserArithmeticTypeError() noexcept { return makeI18nStringError<"field must be a number or boolean">(); }

Unexpected makeDeserNumberTypeError(std::string_view actualType) noexcept {
    return makeI18nStringError<"type must be a number, but got {0}">(std::string{actualType});
}

Unexpected makeDeserStringTypeError() noexcept { return makeI18nStringError<"field must be a string">(); }

Unexpected makeDeserStringViewLifetimeError() noexcept {
    return makeI18nStringError<"field cannot be safely deserialized into string_view from a temporary or non-borrowing source">();
}

Unexpected makeDeserArrayTypeError() noexcept { return makeI18nStringError<"field must be an array">(); }

Unexpected makeDeserObjectTypeError() noexcept { return makeI18nStringError<"field must be an object">(); }

Unexpected makeDeserEnumValueError(std::string_view value) noexcept {
    return makeI18nStringError<"invalid enum value: {0}">(std::string{value});
}

Unexpected makeDeserEnumFlagsValueError(std::string_view value) noexcept {
    return makeI18nStringError<"invalid enum flags value: {0}">(std::string{value});
}

Unexpected makeDeserEnumTypeError() noexcept {
    return makeI18nStringError<"field must be a string or number when deserializing enum">();
}

Unexpected makeDeserInvalidKeyError(std::string_view key) noexcept {
    return makeI18nStringError<"invalid key: {0}">(std::string{key});
}

Unexpected makeDeserArraySizeError(std::size_t expectedSize) noexcept {
    return makeI18nStringError<"array size must be {0}">(expectedSize);
}

Unexpected makeDeserMissingRequiredFieldError(std::string const& fieldName) noexcept {
    return makeI18nStringError<"missing required field \"{0}\" when deserializing">(fieldName);
}

Unexpected makeDeserVariantCastError(std::string_view actualType, std::string_view dumpedValue) noexcept {
    return makeI18nStringError<"could not cast target {0} ({1}) to any type in the variant">(
        std::string{actualType},
        std::string{dumpedValue}
    );
}

} // namespace ll::reflection
