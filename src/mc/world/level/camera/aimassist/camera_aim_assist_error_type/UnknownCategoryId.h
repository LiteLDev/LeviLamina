#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraAimAssistErrorType {

struct UnknownCategoryId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf5be2d;
    // NOLINTEND

public:
    // prevent constructor by default
    UnknownCategoryId& operator=(UnknownCategoryId const&);
    UnknownCategoryId(UnknownCategoryId const&);
    UnknownCategoryId();
};

} // namespace CameraAimAssistErrorType
