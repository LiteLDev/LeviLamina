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

    MCAPI void _destroyWithEffects(class Actor*);

    MCAPI void _dropHeldItems();

    MCAPI void _dropHeldItemsAndResource();

    MCAPI void _dropItem(class ItemStack const& item);

    MCAPI bool _trySwapItem(class Player&, ::Puv::Legacy::EquipmentSlot);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static struct ArmorStand::Pose const POSE_ATHENA;

    MCAPI static struct ArmorStand::Pose const POSE_BRANDISH;

    MCAPI static struct ArmorStand::Pose const POSE_CANCAN_A;

    MCAPI static struct ArmorStand::Pose const POSE_CANCAN_B;

    MCAPI static struct ArmorStand::Pose const POSE_DEFAULT;

    MCAPI static struct ArmorStand::Pose const POSE_ENTERTAIN;

    MCAPI static struct ArmorStand::Pose const POSE_HERO;

    MCAPI static struct ArmorStand::Pose const POSE_HONOR;

    MCAPI static struct ArmorStand::Pose const POSE_RIPOSTE;

    MCAPI static struct ArmorStand::Pose const POSE_SALUTE;

    MCAPI static struct ArmorStand::Pose const POSE_SOLEMN;

    MCAPI static struct ArmorStand::Pose const POSE_ZERO_ROTATION;

    MCAPI static struct ArmorStand::Pose const POSE_ZOMBIE;

    MCAPI static struct ArmorStand::Pose const* STAND_POSES[];

    // NOLINTEND
};
