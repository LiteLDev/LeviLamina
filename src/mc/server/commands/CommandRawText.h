#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandRawText {
public:
    std::string                      text;
    [[nodiscard]] constexpr explicit operator std::string() const { return text; }

public:
    // NOLINTBEGIN
    MCAPI std::string const& getText() const;

    // NOLINTEND
};
