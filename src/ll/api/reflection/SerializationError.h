#pragma once

#include <stdexcept>

#include "fmt/format.h"
#include "ll/api/Expected.h"

namespace ll::reflection {
class SerializationError : public ErrorInfoBase {
    std::string mField;
    std::string mMsg;

public:
    SerializationError(std::string field, Error&& err) noexcept {
        if (err.isA<SerializationError>()) {
            auto ptr  = err.as<SerializationError>();
            mField    = std::move(field);
            mField   += std::move(ptr->mField);
            mMsg      = std::move(ptr->mMsg);
        } else {
            if (field.ends_with('.')) {
                field.pop_back();
            }
            mField = std::move(field);
            mMsg   = err.message();
        }
    }
    std::string message() const noexcept override {
        return fmt::format("Reflection error in field '{}':\n{}", mField, mMsg);
    }
};
inline Unexpected makeSerMemberError(std::string_view name, Error& err) noexcept {
    return makeError<SerializationError>(fmt::format("{}.", name), std::move(err));
}
inline Unexpected makeSerIndexError(std::size_t idx, Error& err) noexcept {
    return makeError<SerializationError>(fmt::format("[{}]", idx), std::move(err));
}
inline Unexpected makeSerKeyError(std::string_view key, Error& err) noexcept {
    return makeError<SerializationError>(fmt::format("[\"{}\"]", key), std::move(err));
}
} // namespace ll::reflection
