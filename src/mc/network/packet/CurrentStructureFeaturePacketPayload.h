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
    CurrentStructureFeaturePacketPayload& operator=(CurrentStructureFeaturePacketPayload const&);
    CurrentStructureFeaturePacketPayload(CurrentStructureFeaturePacketPayload const&);
    CurrentStructureFeaturePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::CurrentStructureFeaturePacketPayload& operator=(::CurrentStructureFeaturePacketPayload&&);

    MCNAPI ~CurrentStructureFeaturePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
