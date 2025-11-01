#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

struct ChangeMobPropertyPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mPropName;
    ::ll::TypedStorage<1, 1, bool> mBoolComponentVal;
    ::ll::TypedStorage<4, 4, float> mFloatComponentVal;
    ::ll::TypedStorage<4, 4, int> mIntComponentVal;
    ::ll::TypedStorage<8, 32, ::std::string> mStringComponentVal;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mActorId;
    // NOLINTEND

public:
    // prevent constructor by default
    ChangeMobPropertyPacketPayload& operator=(ChangeMobPropertyPacketPayload const&);
    ChangeMobPropertyPacketPayload(ChangeMobPropertyPacketPayload const&);
    ChangeMobPropertyPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ChangeMobPropertyPacketPayload& operator=(::ChangeMobPropertyPacketPayload&&);

    MCAPI ~ChangeMobPropertyPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
