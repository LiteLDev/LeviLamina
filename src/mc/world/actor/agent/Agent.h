#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AgentAnimation.h"
#include "mc/enums/AgentTravelType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/GameType.h"
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

class Agent : public ::Mob {
public:
    // prevent constructor by default
    Agent& operator=(Agent const&);
    Agent(Agent const&);
    Agent();

public:
    // NOLINTBEGIN
    // vIndex: 6
    virtual void initializeComponents(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~Agent() = default;

    // vIndex: 23
    virtual void teleportTo(class Vec3 const& pos, bool shouldStopRiding, int cause, int entityType, bool);

    // vIndex: 26
    virtual void normalTick();

    // vIndex: 27
    virtual void baseTick();

    // vIndex: 34
    virtual bool isInvisible() const;

    // vIndex: 35
    virtual bool canShowNameTag() const;

    // vIndex: 37
    virtual class mce::Color getNameTagTextColor() const;

    // vIndex: 53
    virtual bool isTargetable() const;

    // vIndex: 59
    virtual void setOwner(struct ActorUniqueID id);

    // vIndex: 74
    virtual void handleEntityEvent(::ActorEvent id, int data);

    // vIndex: 82
    virtual void setCarriedItem(class ItemStack const& item);

    // vIndex: 102
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 111
    virtual bool canBeAffected(uint) const;

    // vIndex: 130
    virtual void kill();

    // vIndex: 144
    virtual void updateEntitySpecificMolangVariables(class RenderParams& renderParams);

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 151
    virtual void knockback(class Actor*, int, float, float, float, float, float);

    // vIndex: 180
    virtual bool createAIGoals();

    // vIndex: 185
    virtual bool canExistWhenDisallowMob() const;

    // vIndex: 186
    virtual std::unique_ptr<class BodyControl> initBodyControl();

    MCAPI Agent(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI ::AgentTravelType checkTravelType();

    MCAPI void doClientTravel(class AABB const& aabb);

    MCAPI class Vec3 doServerTravel(class AABB const& aabb, ::AgentTravelType travelType);

    MCAPI float getMoveSpeedScalar() const;

    MCAPI int getSelectedSlot() const;

    MCAPI int getSwingAnimationDuration() const;

    MCAPI void handleAnimationEvent(::AgentAnimation);

    MCAPI bool isEmoting() const;

    MCAPI bool isValidSlotNum(int slotNum);

    MCAPI void setGameType(::GameType gameType);

    MCAPI void setMoveTarget(class Vec2 target);

    MCAPI void setMoveTarget(float target);

    MCAPI void setNameTagFromOwner(class Player const& player);

    MCAPI void shrug();

    MCAPI void startCommandMode();

    MCAPI void stopCommandMode();

    MCAPI void swingArm();

    MCAPI void tryFireCreateEvent(class Player& player);

    MCAPI static class Vec3 roundTeleportPos(class Vec3 const& pos);

    MCAPI static class Agent* tryGetFromEntity(class EntityContext& entity, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _isOnGround(class AABB const& aabb);

    // NOLINTEND
};
