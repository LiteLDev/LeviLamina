#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ComponentItemDescriptionData_v1_20 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5f8e1e;
    ::ll::UntypedStorage<4, 8>  mUnk18f1a6;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemDescriptionData_v1_20(ComponentItemDescriptionData_v1_20 const&);
    ComponentItemDescriptionData_v1_20();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ComponentItemDescriptionData_v1_20& operator=(::ComponentItemDescriptionData_v1_20 const&);

    MCNAPI ::ComponentItemDescriptionData_v1_20& operator=(::ComponentItemDescriptionData_v1_20&&);

    MCNAPI ~ComponentItemDescriptionData_v1_20();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
