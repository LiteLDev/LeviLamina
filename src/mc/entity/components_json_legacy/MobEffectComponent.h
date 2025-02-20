#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorFilterGroup;
class ExpiringTick;
struct EffectDuration;
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
