#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DataLoadHelper;
// clang-format on

class HumanoidMonster : public ::Monster {
public:
    // prevent constructor by default
    HumanoidMonster& operator=(HumanoidMonster const&);
    HumanoidMonster(HumanoidMonster const&);
    HumanoidMonster();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 154
    virtual int getItemUseDuration() const /*override*/;

    // vIndex: 141
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 140
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 8
    virtual ~HumanoidMonster() /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& MAX_ENCHANTED_ARMOR_CHANCE();

    MCAPI static float const& MAX_ENCHANTED_WEAPON_CHANCE();

    MCAPI static float const& MAX_PICKUP_LOOT_CHANCE();

    MCAPI static float const& MAX_WEARING_ARMOR_CHANCE();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getItemUseDuration() const;

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
