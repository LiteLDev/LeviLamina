#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

struct LoaderConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mReadDeprecatedFields;
    // NOLINTEND
};

} // namespace cereal
