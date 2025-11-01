#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/network/packet/PlayerInputTick.h"
#include "mc/world/effect/EffectDuration.h"

struct MobEffectPacketPayload {
public:
    // MobEffectPacketPayload inner types define
    enum class Event : uchar {
        Invalid = 0,
        Add = 1,
        Update = 2,
        Remove = 3,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID> mRuntimeId;
    ::ll::TypedStorage<4, 4, ::EffectDuration> mEffectDurationTicks;
    ::ll::TypedStorage<1, 1, ::MobEffectPacketPayload::Event> mEventId;
    ::ll::TypedStorage<4, 4, int> mEffectId;
    ::ll::TypedStorage<4, 4, int> mEffectAmplifier;
    ::ll::TypedStorage<1, 1, bool> mShowParticles;
    ::ll::TypedStorage<8, 8, ::PlayerInputTick> mTick;
    // NOLINTEND

};
