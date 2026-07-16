#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/beta/eas/FloatAttributeOperation.h"

namespace SharedTypes::Beta {

struct FloatEnvironmentAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                        mValue;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Beta::FloatAttributeOperation> mOperation;
    // NOLINTEND
};

} // namespace SharedTypes::Beta
