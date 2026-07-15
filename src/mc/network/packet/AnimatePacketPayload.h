#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/world/actor/ActorSwingSource.h"

struct AnimatePacketPayload {
public:
    // AnimatePacketPayload inner types define
    enum class Action : uchar {
        NoAction         = 0,
        Swing            = 1,
        WakeUp           = 3,
        CriticalHit      = 4,
        MagicCriticalHit = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                    mRuntimeId;
    ::ll::TypedStorage<1, 1, ::AnimatePacketPayload::Action>      mAction;
    ::ll::TypedStorage<4, 4, float>                               mData;
    ::ll::TypedStorage<1, 2, ::std::optional<::ActorSwingSource>> mSwingSource;
    // NOLINTEND
};
