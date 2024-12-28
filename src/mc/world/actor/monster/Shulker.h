#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/Mob.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class AttributeModifier;
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
namespace mce { class UUID; }
// clang-format on

class Shulker : public ::Mob {
public:
    // prevent constructor by default
    Shulker& operator=(Shulker const&);
    Shulker(Shulker const&);
    Shulker();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 141
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 140
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 66
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    // vIndex: 152
    virtual bool checkSpawnRules(bool) /*override*/;

    // vIndex: 160
    virtual int getArmorValue() const /*override*/;

    // vIndex: 63
    virtual bool shouldRender() const /*override*/;

    // vIndex: 7
    virtual void _doInitialMove() /*override*/;

    // vIndex: 178
    virtual ::std::unique_ptr<::BodyControl> initBodyControl() /*override*/;

    // vIndex: 36
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 157
    virtual float getMaxHeadXRot() /*override*/;

    // vIndex: 31
    virtual bool isInWall() const /*override*/;

    // vIndex: 139
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    // vIndex: 8
    virtual ~Shulker() /*override*/;
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

    MCAPI bool _isPosOccupiedByOtherShulker(::BlockPos blockPos) const;

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

    MCAPI static void
    postSetPosSetShulkerAttachPosAndPeekAmount(::SynchedActorDataWriter data, ::BlockPos const& newAttachPos);

    MCAPI static void setShulkerAttachPos(::SynchedActorDataWriter data, ::BlockPos const& pos);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::shared_ptr<::AttributeModifier>& COVERED_ARMOR_MODIFIER();

    MCAPI static ::mce::UUID const& COVERED_ARMOR_MODIFIER_UUID();
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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

    MCAPI bool $shouldRender() const;

    MCAPI void $_doInitialMove();

    MCAPI ::std::unique_ptr<::BodyControl> $initBodyControl();

    MCAPI float $getShadowRadius() const;

    MCAPI float $getMaxHeadXRot();

    MCAPI bool $isInWall() const;

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
