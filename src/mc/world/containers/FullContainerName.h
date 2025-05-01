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
    MCNAPI bool operator==(::FullContainerName const& rhs) const;

    MCNAPI ::std::string toString() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::optional<uint> const& NON_DYNAMIC_ID();
    // NOLINTEND
};
