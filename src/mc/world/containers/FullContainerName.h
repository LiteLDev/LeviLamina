#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"

struct FullContainerName {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ContainerEnumName>   mName;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> mDynamicId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string toString() const;
    // NOLINTEND
};
