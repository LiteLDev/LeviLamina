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

class LeashFenceKnotActor : public ::HangingActor {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&) /*override*/;

    // vIndex: 3
    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    // vIndex: 35
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 138
    virtual int getWidth() const /*override*/;

    // vIndex: 139
    virtual int getHeight() const /*override*/;

    // vIndex: 140
    virtual void dropItem() /*override*/;

    // vIndex: 137
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 136
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 142
    virtual bool wouldSurvive(::BlockSource& region) /*override*/;

    // vIndex: 11
    virtual void remove() /*override*/;

    // vIndex: 118
    virtual bool getInteraction(::Player&, ::ActorInteraction& interaction, ::Vec3 const&) /*override*/;

    // vIndex: 21
    virtual void teleportTo(
        ::Vec3 const& pos,
        bool          shouldStopRiding,
        int           cause,
        int           sourceEntityType,
        bool          keepVelocity
    ) /*override*/;

    // vIndex: 8
    virtual ~LeashFenceKnotActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _removeAttachedActors();
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

    MCAPI bool $getInteraction(::Player&, ::ActorInteraction& interaction, ::Vec3 const&);

    MCAPI void
    $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
