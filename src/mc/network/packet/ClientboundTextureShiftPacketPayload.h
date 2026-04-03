#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientboundTextureShiftPacketPayload {
public:
    // ClientboundTextureShiftPacketPayload inner types define
    enum class Action : uchar {
        Invalid    = 0,
        Initialize = 1,
        Start      = 2,
        SetEnabled = 3,
        Sync       = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ClientboundTextureShiftPacketPayload::Action> mAction;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mCollectionName;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mFromStep;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mToStep;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                  mAllSteps;
    ::ll::TypedStorage<8, 8, uint64>                                         mTotalLengthInTicks;
    ::ll::TypedStorage<8, 8, uint64>                                         mCurrentLengthInTicks;
    ::ll::TypedStorage<1, 1, bool>                                           mEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientboundTextureShiftPacketPayload(ClientboundTextureShiftPacketPayload const&);
    ClientboundTextureShiftPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ClientboundTextureShiftPacketPayload& operator=(::ClientboundTextureShiftPacketPayload&&);

    MCAPI ::ClientboundTextureShiftPacketPayload& operator=(::ClientboundTextureShiftPacketPayload const&);

    MCAPI ~ClientboundTextureShiftPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
