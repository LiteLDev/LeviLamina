#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UpdateSoftEnumPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnke89271;
    ::ll::UntypedStorage<8, 32> mUnk5f5f20;
    ::ll::UntypedStorage<8, 24> mUnkf259af;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateSoftEnumPacketPayload& operator=(UpdateSoftEnumPacketPayload const&);
    UpdateSoftEnumPacketPayload(UpdateSoftEnumPacketPayload const&);
    UpdateSoftEnumPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::UpdateSoftEnumPacketPayload& operator=(::UpdateSoftEnumPacketPayload&&);

    MCNAPI ~UpdateSoftEnumPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
