#include "ll/api/reflection/ReflectionError.h"

#include "fmt/format.h"

#include "ll/api/i18n/I18n.h"

namespace ll::reflection {
class SerializationError : public ErrorInfoBase {
    std::string mField;
    Error       mErr;

public:
    SerializationError(std::string field, Error&& err) noexcept;
    std::string message(std::string_view locale) const noexcept override;
};

SerializationError::SerializationError(std::string field, Error&& err) noexcept {
    if (err.isA<SerializationError>()) {
        auto& serr  = err.as<SerializationError>();
        mField      = std::move(field);
        mField     += std::move(serr.mField);
        mErr        = std::move(serr.mErr);
    } else {
        if (field.ends_with('.')) {
            field.pop_back();
        }
        mField = std::move(field);
        mErr   = std::move(err);
    }
}

std::string SerializationError::message(std::string_view locale) const noexcept {
    return "Reflection error in field '{}':\n{}"_trl(locale, mField, mErr.message(locale));
}

Unexpected makeSerMemberError(std::string_view name, Error& err) noexcept {
    return makeError<SerializationError>(fmt::format("{}.", name), std::move(err));
}

Unexpected makeSerIndexError(std::size_t idx, Error& err) noexcept {
    return makeError<SerializationError>(fmt::format("[{}]", idx), std::move(err));
}

Unexpected makeSerKeyError(std::string_view key, Error& err) noexcept {
    return makeError<SerializationError>(fmt::format("[\"{}\"]", key), std::move(err));
}

Unexpected makeDeserStringTypeError() noexcept { return makeI18nStringError<"field must be a string">(); }

Unexpected makeDeserArrayTypeError() noexcept { return makeI18nStringError<"field must be an array">(); }

Unexpected makeDeserObjectTypeError() noexcept { return makeI18nStringError<"field must be an object">(); }

Unexpected makeDeserArraySizeError(std::size_t expectedSize) noexcept {
    return makeI18nStringError<"array size must be {0}">(expectedSize);
}

Unexpected makeDeserMissingRequiredFieldError(std::string const& fieldName) noexcept {
    return makeI18nStringError<"missing required field \"{0}\" when deserializing">(fieldName);
}
} // namespace ll::reflection
