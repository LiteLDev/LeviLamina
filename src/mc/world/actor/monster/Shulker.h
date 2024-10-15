#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/network/packet/types/world/actor/ActorEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class Shulker : public ::Mob {
public:
    // prevent constructor by default
    Shulker& operator=(Shulker const&);
    Shulker(Shulker const&);
    Shulker();

public:
    // NOLINTBEGIN
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 9
    virtual void _doInitialMove();

    // vIndex: 10
    virtual ~Shulker() = default;

    // vIndex: 33
    virtual bool isInWall() const;

    // vIndex: 38
    virtual float getShadowRadius() const;

    // vIndex: 54
    virtual bool canAttack(class Actor* actor, bool allowInvulnerable) const;

    // vIndex: 66
    virtual bool shouldRender() const;

    // vIndex: 69
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 144
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 160
    virtual bool checkSpawnRules(bool);

    // vIndex: 165
    virtual float getMaxHeadXRot();

    // vIndex: 168
    virtual int getArmorValue() const;

    // vIndex: 186
    virtual std::unique_ptr<class BodyControl> initBodyControl();

    MCAPI Shulker(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void postNormalTick();

    MCAPI static void applyShulkerBounds(struct ShulkerBounds const& bounds, class EntityContext& shulker);

    MCAPI static struct ShulkerBounds computeShulkerBounds(struct ShulkerBoundsInput const& input);

    MCAPI static void
    postSetPosSetShulkerAttachPosAndPeekAmount(class SynchedActorDataWriter data, class BlockPos const& newAttachPos);

    MCAPI static void setShulkerAttachPos(class SynchedActorDataWriter data, class BlockPos const& pos);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _canOpenLidAt(class BlockPos position, uchar direction) const;

    MCAPI static void _setPeekAmount(class SynchedActorDataWriter data, int amount);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _calculateBB();

    MCAPI bool _isPosOccupiedByOtherShulker(class BlockPos blockPos) const;

    MCAPI bool _isValidAttach(class BlockPos attachPos, uchar direction);

    MCAPI void _peekAmountTick();

    MCAPI void _setAttachFace(uchar facing);

    MCAPI bool _tryAttachingToNeighbouringFaces(class BlockPos currentPos);

    MCAPI void _trySpawnShulker();

    MCAPI bool _tryTeleportSomewhere();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void _doInitialMove$();

    MCAPI bool _hurt$(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI void addAdditionalSaveData$(class CompoundTag& tag) const;

    MCAPI bool canAttack$(class Actor* actor, bool allowInvulnerable) const;

    MCAPI bool checkSpawnRules$(bool);

    MCAPI int getArmorValue$() const;

    MCAPI float getMaxHeadXRot$();

    MCAPI float getShadowRadius$() const;

    MCAPI std::unique_ptr<class BodyControl> initBodyControl$();

    MCAPI bool isInWall$() const;

    MCAPI bool isInvulnerableTo$(class ActorDamageSource const& source) const;

    MCAPI void readAdditionalSaveData$(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void reloadHardcoded$(::ActorInitializationMethod method, class VariantParameterList const& params);

    MCAPI bool shouldRender$() const;

    MCAPI void updateEntitySpecificMolangVariables$(class RenderParams&);

    MCAPI static std::shared_ptr<class AttributeModifier>& COVERED_ARMOR_MODIFIER();

    MCAPI static class mce::UUID const& COVERED_ARMOR_MODIFIER_UUID();

    // NOLINTEND
};
