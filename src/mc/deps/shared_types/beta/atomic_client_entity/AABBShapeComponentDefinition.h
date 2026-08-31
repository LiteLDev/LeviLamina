#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Beta::AtomicClientEntity {

struct AABBShapeComponentDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mWidth;
    ::ll::TypedStorage<4, 4, float> mHeight;
    // NOLINTEND
};

} // namespace SharedTypes::Beta::AtomicClientEntity
