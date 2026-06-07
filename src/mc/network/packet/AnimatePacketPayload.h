#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/world/actor/ActorSwingSource.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

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

public:
    // prevent constructor by default
    AnimatePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AnimatePacketPayload(::AnimatePacketPayload::Action action, ::Actor& actor);

    MCAPI AnimatePacketPayload(::AnimatePacketPayload::Action action, ::Actor& actor, ::ActorSwingSource swingSource);

    MCAPI AnimatePacketPayload(::AnimatePacketPayload::Action action, ::ActorRuntimeID runtimeId, float data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AnimatePacketPayload::Action action, ::Actor& actor);

    MCAPI void* $ctor(::AnimatePacketPayload::Action action, ::Actor& actor, ::ActorSwingSource swingSource);

    MCAPI void* $ctor(::AnimatePacketPayload::Action action, ::ActorRuntimeID runtimeId, float data);
    // NOLINTEND
};
