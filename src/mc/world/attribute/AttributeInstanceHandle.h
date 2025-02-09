#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AttributeInstance;
class BaseAttributeMap;
// clang-format on

class AttributeInstanceHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BaseAttributeMap*> mAttributeMap;
    ::ll::TypedStorage<4, 4, uint>                mAttributeID;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::AttributeInstance const& getInstance() const;
    // NOLINTEND
};
