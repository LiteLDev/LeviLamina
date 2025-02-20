#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {

class Features {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> allowComments_;
    ::ll::TypedStorage<1, 1, bool> strictRoot_;
    // NOLINTEND
};

} // namespace Json
