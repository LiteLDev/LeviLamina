#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DataLoadHelper;
struct VariantParameterList;
// clang-format on

class Allay : public ::Mob {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Tick> mDuplicationCooldownCompleteTick;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 145
    virtual void aiStep() /*override*/;

    // vIndex: 136
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 137
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 8
    virtual ~Allay() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool hasDuplicationCooldown();

    MCAPI void setNewDuplicationCooldown();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $aiStep();

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
