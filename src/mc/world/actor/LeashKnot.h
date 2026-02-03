#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/HangingActor.h"

// auto generated forward declare list
// clang-format off
class ActorInteraction;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class Player;
class Vec3;
struct VariantParameterList;
// clang-format on

class LeashKnot : public ::HangingActor {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&) /*override*/;

    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    virtual float getShadowRadius() const /*override*/;

    virtual int getWidth() const /*override*/;

    virtual int getHeight() const /*override*/;

    virtual void dropItem() /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool wouldSurvive(::BlockSource& region) /*override*/;

    virtual void remove() /*override*/;

    virtual bool getInteraction(::Player& player, ::ActorInteraction& interaction, ::Vec3 const& location) /*override*/;

    virtual void teleportTo(
        ::Vec3 const& pos,
        bool          shouldStopRiding,
        int           cause,
        int           sourceEntityType,
        bool          keepVelocity
    ) /*override*/;

    virtual ~LeashKnot() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    MCFOLD void $reloadHardcodedClient(::ActorInitializationMethod method);

    MCFOLD float $getShadowRadius() const;

    MCFOLD int $getWidth() const;

    MCFOLD int $getHeight() const;

    MCFOLD void $dropItem();

    MCFOLD void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCFOLD void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $wouldSurvive(::BlockSource& region);

    MCAPI void $remove();

    MCAPI bool $getInteraction(::Player& player, ::ActorInteraction& interaction, ::Vec3 const& location);

    MCAPI void
    $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
