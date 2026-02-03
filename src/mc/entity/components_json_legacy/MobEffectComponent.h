#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/util/ExpiringTick.h"
#include "mc/world/effect/EffectDuration.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class MobEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                            mEffectRange;
    ::ll::TypedStorage<4, 4, int>                              mEffectId;
    ::ll::TypedStorage<4, 4, ::EffectDuration>                 mEffectTime;
    ::ll::TypedStorage<2, 2, ushort>                           mCooldownTicks;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>              mEntityFilter;
    ::ll::TypedStorage<1, 1, bool>                             mIsAmbient;
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>> mCooldown;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void tick(::Actor& owner);

    MCAPI ~MobEffectComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
