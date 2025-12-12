#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/Mob.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class BlockPos;
class BodyControl;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class SynchedActorDataWriter;
struct ActorDefinitionIdentifier;
struct ShulkerBounds;
struct ShulkerBoundsInput;
struct VariantParameterList;
// clang-format on

class Shulker : public ::Mob {
public:
    // prevent constructor by default
    Shulker();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    virtual bool checkSpawnRules(bool) /*override*/;

    virtual int getArmorValue() const /*override*/;

    virtual void _doInitialMove() /*override*/;

    virtual ::std::unique_ptr<::BodyControl> initBodyControl() /*override*/;

    virtual float getShadowRadius() const /*override*/;

    virtual float getMaxHeadXRot() /*override*/;

    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    virtual ~Shulker() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Shulker(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void _calculateBB();

    MCAPI bool _canOpenLidAt(::BlockPos position, uchar direction) const;

    MCAPI bool _getAttached() const;

    MCAPI bool _isPosOccupiedByOtherShulker(::BlockPos blockPos) const;

    MCAPI bool _isValidAttach(::BlockPos attachPos, uchar direction);

    MCAPI void _peekAmountTick();

    MCAPI bool _tryAttachingToNeighbouringFaces(::BlockPos currentPos);

    MCAPI bool _trySetNewAttachPosition(::BlockPos pos);

    MCAPI void _trySpawnShulker();

    MCAPI bool _tryTeleportSomewhere();

    MCAPI void postNormalTick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void applyShulkerBounds(::ShulkerBounds const& bounds, ::EntityContext& shulker);

    MCAPI static ::ShulkerBounds computeShulkerBounds(::ShulkerBoundsInput const& input);

    MCAPI static void setShulkerAttachPos(::SynchedActorDataWriter data, ::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCAPI bool $checkSpawnRules(bool);

    MCAPI int $getArmorValue() const;

    MCFOLD void $_doInitialMove();

    MCFOLD ::std::unique_ptr<::BodyControl> $initBodyControl();

    MCFOLD float $getShadowRadius() const;

    MCFOLD float $getMaxHeadXRot();

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
