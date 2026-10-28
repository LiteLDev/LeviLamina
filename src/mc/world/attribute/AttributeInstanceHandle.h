#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AttributeInstanceConstRef;
class BaseAttributeMap;
// clang-format on

class AttributeInstanceHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mAttributeID;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::AttributeInstanceConstRef getInstance(::BaseAttributeMap const& map) const;
    // NOLINTEND
};
