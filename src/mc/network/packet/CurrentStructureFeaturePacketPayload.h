#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CurrentStructureFeaturePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mCurrentStructureFeature;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CurrentStructureFeaturePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
