#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"

namespace BlockDefinitionValidate {

struct ValidateContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>          mUpcomingCreatorFeaturesEnabled;
    ::ll::TypedStorage<8, 24, ::SemVersion> mOriginalJsonVersion;
    // NOLINTEND
};

} // namespace BlockDefinitionValidate
