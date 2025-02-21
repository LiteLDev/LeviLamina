#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorFilterGroup;
class CompoundTag;
class DataLoadHelper;
class Vec3;
struct ActorUniqueID;
struct Tick;
// clang-format on

class AreaAttackComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                                              mDamageRange;
    ::ll::TypedStorage<4, 4, int>                                                  mDamagePerTick;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause>              mDamageCause;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                                  mEntityFilter;
    ::ll::TypedStorage<4, 4, int>                                                  mAttackCooldownTicks;
    ::ll::TypedStorage<1, 1, bool>                                                 mPlayAttackSound;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ActorUniqueID, ::Tick>>> mAttackCooldownVector;
    // NOLINTEND

public:
    // prevent constructor by default
    AreaAttackComponent& operator=(AreaAttackComponent const&);
    AreaAttackComponent(AreaAttackComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI ::AreaAttackComponent& operator=(::AreaAttackComponent&&);

    MCAPI void readAdditionalSaveData(::Actor& tag, ::CompoundTag const&, ::DataLoadHelper&);

    MCAPI ~AreaAttackComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
