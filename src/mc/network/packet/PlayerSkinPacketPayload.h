#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/SerializedSkinRef.h"

struct PlayerSkinPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>         mUUID;
    ::ll::TypedStorage<8, 16, ::SerializedSkinRef> mSkin;
    ::ll::TypedStorage<8, 32, ::std::string>       mLocalizedNewSkinName;
    ::ll::TypedStorage<8, 32, ::std::string>       mLocalizedOldSkinName;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerSkinPacketPayload(PlayerSkinPacketPayload const&);
    PlayerSkinPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::PlayerSkinPacketPayload& operator=(::PlayerSkinPacketPayload&&);

    MCAPI ::PlayerSkinPacketPayload& operator=(::PlayerSkinPacketPayload const&);

    MCAPI ~PlayerSkinPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
