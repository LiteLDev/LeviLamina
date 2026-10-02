#pragma once

#include <cstddef>
#include <stdexcept>
#include <string>
#include <string_view>

#include "ll/api/Expected.h"

namespace ll::reflection {
LLNDAPI Unexpected makeSerObjectTypeError() noexcept;
LLNDAPI Unexpected makeSerMemberError(std::string_view name, Error& err) noexcept;
LLNDAPI Unexpected makeSerIndexError(std::size_t idx, Error& err) noexcept;
LLNDAPI Unexpected makeSerKeyError(std::string_view key, Error& err) noexcept;

LLNDAPI Unexpected makeDeserMemberError(std::string_view name, Error& err) noexcept;
LLNDAPI Unexpected makeDeserIndexError(std::size_t idx, Error& err) noexcept;
LLNDAPI Unexpected makeDeserKeyError(std::string_view key, Error& err) noexcept;
LLNDAPI Unexpected makeDeserArithmeticTypeError() noexcept;
LLNDAPI Unexpected makeDeserNumberTypeError(std::string_view actualType) noexcept;
LLNDAPI Unexpected makeDeserStringTypeError() noexcept;
LLNDAPI Unexpected makeDeserStringViewLifetimeError() noexcept;
LLNDAPI Unexpected makeDeserArrayTypeError() noexcept;
LLNDAPI Unexpected makeDeserObjectTypeError() noexcept;
LLNDAPI Unexpected makeDeserEnumValueError(std::string_view value) noexcept;
LLNDAPI Unexpected makeDeserEnumFlagsValueError(std::string_view value) noexcept;
LLNDAPI Unexpected makeDeserEnumTypeError() noexcept;
LLNDAPI Unexpected makeDeserInvalidKeyError(std::string_view key) noexcept;
LLNDAPI Unexpected makeDeserArraySizeError(std::size_t expectedSize) noexcept;
LLNDAPI Unexpected makeDeserMissingRequiredFieldError(std::string const& fieldName) noexcept;
LLNDAPI Unexpected makeDeserVariantCastError(std::string_view actualType, std::string_view dumpedValue) noexcept;
} // namespace ll::reflection
