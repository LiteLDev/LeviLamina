#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/safety/RedactableString.h"
#include "mc/world/actor/ai/util/BossBarColor.h"
#include "mc/world/actor/ai/util/BossBarOverlay.h"
#include "mc/world/actor/ai/util/BossEventUpdateType.h"

struct BossEventPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const>                            FLAG_DARKEN;
    ::ll::TypedStorage<4, 4, int const>                            FLAG_FOG;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mBossID;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mPlayerID;
    ::ll::TypedStorage<1, 1, ::BossEventUpdateType>                mEventType;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString> mName;
    ::ll::TypedStorage<4, 4, float>                                mHealthPercent;
    ::ll::TypedStorage<1, 1, ::BossBarColor>                       mColor;
    ::ll::TypedStorage<1, 1, ::BossBarOverlay>                     mOverlay;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BossEventPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
