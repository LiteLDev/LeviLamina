#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CerealHelpers {

struct LocIdString {
public:
    // prevent constructor by default
    LocIdString& operator=(LocIdString const&);
    LocIdString(LocIdString const&);
    LocIdString();

public:
    // NOLINTBEGIN
    MCAPI ~LocIdString();

    // NOLINTEND
};

}; // namespace CerealHelpers
