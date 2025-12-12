#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UpdateEquipPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnke73a62;
    ::ll::UntypedStorage<1, 1>  mUnk1198fc;
    ::ll::UntypedStorage<4, 4>  mUnkc83cf2;
    ::ll::UntypedStorage<8, 8>  mUnk7ab5c8;
    ::ll::UntypedStorage<8, 24> mUnkc31e3f;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateEquipPacketPayload& operator=(UpdateEquipPacketPayload const&);
    UpdateEquipPacketPayload(UpdateEquipPacketPayload const&);
    UpdateEquipPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::UpdateEquipPacketPayload& operator=(::UpdateEquipPacketPayload&&);

    MCNAPI ~UpdateEquipPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
