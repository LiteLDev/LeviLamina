#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CerealHelpers {

struct IdentifierString {
public:
    // prevent constructor by default
    IdentifierString& operator=(IdentifierString const&);
    IdentifierString(IdentifierString const&);
    IdentifierString();

public:
    // NOLINTBEGIN
    MCAPI ~IdentifierString();

    // NOLINTEND
};

}; // namespace CerealHelpers
