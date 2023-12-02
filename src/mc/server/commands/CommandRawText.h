#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandRawText {
public:
    std::string                      text;
    [[nodiscard]] constexpr explicit operator std::string() const { return text; }

public:
    // NOLINTBEGIN
    // symbol: ?getText@CommandRawText@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getText() const;

    // NOLINTEND
};
