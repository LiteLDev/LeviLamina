#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/item/components/ItemUseMethod.h"

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
    virtual void updateEntitySpecificMolangVariables(class RenderParams& renderParams);

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 160
    virtual bool checkSpawnRules(bool fromSpawner);

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

    MCAPI static void applyShulkerBounds(struct ShulkerBounds const&, class EntityContext&);

    MCAPI static struct ShulkerBounds computeShulkerBounds(struct ShulkerBoundsInput const&);

    MCAPI static void
    postSetPosSetShulkerAttachPosAndPeekAmount(class SynchedActorDataWriter data, class BlockPos const&);

    MCAPI static void setShulkerAttachPos(class SynchedActorDataWriter data, class BlockPos const& pos);

    MCAPI static std::shared_ptr<class AttributeModifier> COVERED_ARMOR_MODIFIER;

    MCAPI static class mce::UUID const COVERED_ARMOR_MODIFIER_UUID;

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
};
