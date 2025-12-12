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
    // virtual functions
    // NOLINTBEGIN
    virtual int getItemUseDuration() const /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual ~HumanoidMonster() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getItemUseDuration() const;

    MCFOLD void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCFOLD void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
