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
// clang-format on

class ArmorStand : public ::Mob {
public:
    // ArmorStand inner types declare
    // clang-format off
    struct Pose;
    // clang-format on

    // ArmorStand inner types define
    struct Pose {
    public:
        // prevent constructor by default
        Pose& operator=(Pose const&);
        Pose(Pose const&);
        Pose();
    };

public:
    // prevent constructor by default
    ArmorStand& operator=(ArmorStand const&);
    ArmorStand(ArmorStand const&);
    ArmorStand();

public:
    // NOLINTBEGIN
    // vIndex: 10
    virtual ~ArmorStand() = default;

    // vIndex: 26
    virtual void normalTick();

    // vIndex: 38
    virtual float getShadowRadius() const;

    // vIndex: 69
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 124
    virtual bool getInteraction(class Player& player, class ActorInteraction& interaction, class Vec3 const& location);

    // vIndex: 130
    virtual void kill();

    // vIndex: 131
    virtual void die(class ActorDamageSource const& source);

    // vIndex: 144
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const& source, float, bool, bool);

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 159
    virtual void pushActors();

    MCAPI ArmorStand(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void setPoseIndex(int poseIndex);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _causeDamage(float dmg);

    MCAPI void _destroyWithEffects(class Actor* sourceActor);

    MCAPI void _dropHeldItems();

    MCAPI void _dropHeldItemsAndResource();

    MCAPI void _dropItem(class ItemStack const& item);

    MCAPI bool _trySwapItem(class Player& player, ::Puv::Legacy::EquipmentSlot slot);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI bool _hurt$(class ActorDamageSource const& source, float, bool, bool);

    MCAPI void addAdditionalSaveData$(class CompoundTag& tag) const;

    MCAPI void die$(class ActorDamageSource const& source);

    MCAPI bool getInteraction$(class Player& player, class ActorInteraction& interaction, class Vec3 const& location);

    MCAPI float getShadowRadius$() const;

    MCAPI bool isInvulnerableTo$(class ActorDamageSource const& source) const;

    MCAPI void kill$();

    MCAPI void normalTick$();

    MCAPI void pushActors$();

    MCAPI void readAdditionalSaveData$(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void updateEntitySpecificMolangVariables$(class RenderParams&);

    MCAPI static struct ArmorStand::Pose const& POSE_ATHENA();

    MCAPI static struct ArmorStand::Pose const& POSE_BRANDISH();

    MCAPI static struct ArmorStand::Pose const& POSE_CANCAN_A();

    MCAPI static struct ArmorStand::Pose const& POSE_CANCAN_B();

    MCAPI static struct ArmorStand::Pose const& POSE_DEFAULT();

    MCAPI static struct ArmorStand::Pose const& POSE_ENTERTAIN();

    MCAPI static struct ArmorStand::Pose const& POSE_HERO();

    MCAPI static struct ArmorStand::Pose const& POSE_HONOR();

    MCAPI static struct ArmorStand::Pose const& POSE_RIPOSTE();

    MCAPI static struct ArmorStand::Pose const& POSE_SALUTE();

    MCAPI static struct ArmorStand::Pose const& POSE_SOLEMN();

    MCAPI static struct ArmorStand::Pose const& POSE_ZERO_ROTATION();

    MCAPI static struct ArmorStand::Pose const& POSE_ZOMBIE();

    MCAPI static auto STAND_POSES() -> struct ArmorStand::Pose const* (&)[];

    // NOLINTEND
};
