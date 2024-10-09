#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TextureSetHelpers {

class NamePair {
public:
    // prevent constructor by default
    NamePair& operator=(NamePair const&);
    NamePair(NamePair const&);
    NamePair();

public:
    // NOLINTBEGIN
    MCAPI ~NamePair();

    // NOLINTEND
};

}; // namespace TextureSetHelpers
