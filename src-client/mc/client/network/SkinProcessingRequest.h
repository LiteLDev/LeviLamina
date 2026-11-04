#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/SerializedSkinRef.h"

class SkinProcessingRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>         mPlayerId;
    ::ll::TypedStorage<8, 16, ::SerializedSkinRef> mSkin;
    ::ll::TypedStorage<8, 32, ::std::string>       mPlayFabId;
    ::ll::TypedStorage<4, 4, uint>                 mRequestId;
    // NOLINTEND
};
