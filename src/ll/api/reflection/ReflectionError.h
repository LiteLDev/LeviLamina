#pragma once

#include <cstddef>
#include <stdexcept>

#include "ll/api/Expected.h"

namespace ll::reflection {
LLNDAPI Unexpected makeSerMemberError(std::string_view name, Error& err) noexcept;
LLNDAPI Unexpected makeSerIndexError(std::size_t idx, Error& err) noexcept;
LLNDAPI Unexpected makeSerKeyError(std::string_view key, Error& err) noexcept;

LLNDAPI Unexpected makeDeserStringTypeError() noexcept;
LLNDAPI Unexpected makeDeserArrayTypeError() noexcept;
LLNDAPI Unexpected makeDeserObjectTypeError() noexcept;
LLNDAPI Unexpected makeDeserArraySizeError(std::size_t expectedSize) noexcept;
LLNDAPI Unexpected makeDeserMissingRequiredFieldError(std::string_view fieldName) noexcept;
} // namespace ll::reflection
