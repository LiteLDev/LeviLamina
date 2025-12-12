#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DataLoadHelper;
struct ActorUniqueID;
struct VariantParameterList;
// clang-format on

class WindChargeProjectile : public ::PredictableProjectile {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initializeComponents(::ActorInitializationMethod, ::VariantParameterList const&) /*override*/;

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&) /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual ::ActorUniqueID getSourceUniqueID() const /*override*/;

    virtual void outOfWorld() /*override*/;

    virtual ~WindChargeProjectile() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCFOLD ::ActorUniqueID $getSourceUniqueID() const;

    MCAPI void $outOfWorld();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
