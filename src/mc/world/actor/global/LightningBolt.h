#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorInitializationMethod.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DataLoadHelper;
struct VariantParameterList;
// clang-format on

class LightningBolt : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mSeed;
    ::ll::TypedStorage<4, 4, int>  mLife;
    ::ll::TypedStorage<4, 4, int>  mFlashes;
    ::ll::TypedStorage<1, 1, bool> mCanHurt;
    ::ll::TypedStorage<1, 1, bool> mHasTriedToHurt;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    virtual void normalTick() /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual float getShadowRadius() const /*override*/;

    virtual bool shouldAlwaysRender();

    virtual ~LightningBolt() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _shouldSetOnFire() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $reloadHardcodedClient(::ActorInitializationMethod method);

    MCAPI void $normalTick();

    MCFOLD void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCFOLD void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCFOLD float $getShadowRadius() const;

    MCFOLD bool $shouldAlwaysRender();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
