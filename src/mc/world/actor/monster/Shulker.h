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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 137
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 136
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 64
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    // vIndex: 147
    virtual bool checkSpawnRules(bool) /*override*/;

    // vIndex: 155
    virtual int getArmorValue() const /*override*/;

    // vIndex: 7
    virtual void _doInitialMove() /*override*/;

    // vIndex: 174
    virtual ::std::unique_ptr<::BodyControl> initBodyControl() /*override*/;

    // vIndex: 35
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 152
    virtual float getMaxHeadXRot() /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    // vIndex: 8
    virtual ~Shulker() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Shulker(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCNAPI void _calculateBB();

    MCNAPI bool _canOpenLidAt(::BlockPos position, uchar direction) const;

    MCNAPI bool _getAttached() const;

    MCNAPI bool _isPosOccupiedByOtherShulker(::BlockPos blockPos) const;

    MCNAPI bool _isValidAttach(::BlockPos attachPos, uchar direction);

    MCNAPI void _peekAmountTick();

    MCNAPI bool _tryAttachingToNeighbouringFaces(::BlockPos currentPos);

    MCNAPI bool _trySetNewAttachPosition(::BlockPos pos);

    MCNAPI void _trySpawnShulker();

    MCNAPI bool _tryTeleportSomewhere();

    MCNAPI void postNormalTick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void applyShulkerBounds(::ShulkerBounds const& bounds, ::EntityContext& shulker);

    MCNAPI static ::ShulkerBounds computeShulkerBounds(::ShulkerBoundsInput const& input);

    MCNAPI static void setShulkerAttachPos(::SynchedActorDataWriter data, ::BlockPos const& pos);
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
    MCNAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCNAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCNAPI bool $checkSpawnRules(bool);

    MCNAPI int $getArmorValue() const;

    MCNAPI void $_doInitialMove();

    MCNAPI ::std::unique_ptr<::BodyControl> $initBodyControl();

    MCNAPI float $getShadowRadius() const;

    MCNAPI float $getMaxHeadXRot();

    MCNAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
