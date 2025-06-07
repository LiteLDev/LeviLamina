#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorFilterGroup.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
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
    AreaAttackComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI ::AreaAttackComponent& operator=(::AreaAttackComponent&&);

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);

    MCNAPI ~AreaAttackComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
