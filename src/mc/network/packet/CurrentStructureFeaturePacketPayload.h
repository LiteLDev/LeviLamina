#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CurrentStructureFeaturePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mCurrentStructureFeature;
    // NOLINTEND

public:
    // prevent constructor by default
    CurrentStructureFeaturePacketPayload(CurrentStructureFeaturePacketPayload const&);
    CurrentStructureFeaturePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::CurrentStructureFeaturePacketPayload& operator=(::CurrentStructureFeaturePacketPayload const&);

    MCFOLD ::CurrentStructureFeaturePacketPayload& operator=(::CurrentStructureFeaturePacketPayload&&);

    MCAPI ~CurrentStructureFeaturePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
