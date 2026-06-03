#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

struct SaverConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mWriteDeprecatedFields;
    ::ll::TypedStorage<1, 1, bool> mSkipDefaultFields;
    // NOLINTEND
};

} // namespace cereal
