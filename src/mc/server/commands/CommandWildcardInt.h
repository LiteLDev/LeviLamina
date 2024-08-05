#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandWildcardInt {
public:
    // prevent constructor by default
    CommandWildcardInt& operator=(CommandWildcardInt const&);
    CommandWildcardInt(CommandWildcardInt const&);

public:
    // NOLINTBEGIN
    MCAPI CommandWildcardInt();

    MCAPI int getValue() const;

    MCAPI bool isWildcard() const;

    // NOLINTEND
};
