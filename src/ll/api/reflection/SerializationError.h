#pragma once

#include <stdexcept>

#include "fmt/format.h"

namespace ll::reflection {

class SerializationError : public std::exception {
    std::string           mField;
    std::string           mMsg;
    std::exception const* mErr{};

public:
    SerializationError(std::string_view field, std::exception const& err) : mField(field), mErr(&err) {
        mMsg = fmt::format("Reflection error in field '{}': {}", field, err.what());
    }

    SerializationError(std::string_view field, SerializationError const& other) {
        mField = fmt::format("{}.{}", field, other.mField);
        mErr   = other.mErr;
        mMsg   = fmt::format(
            "Reflection error in field '{}': {}",
            mField,
            other.mErr ? other.mErr->what() : "Unknown error"
        );
    }

    SerializationError(std::string_view field, std::string_view msg)
    : SerializationError(field, std::runtime_error{msg.data()}) {}

    explicit SerializationError(std::string_view field) : mField(field) {
        mMsg = fmt::format("Reflection error in field '{}'", field);
    }

    [[nodiscard]] char const* what() const noexcept override { return mMsg.c_str(); }

    [[nodiscard]] std::string_view field() const noexcept { return mField; };

    [[nodiscard]] std::exception const* error() const noexcept { return mErr; };
};

} // namespace ll::reflection
