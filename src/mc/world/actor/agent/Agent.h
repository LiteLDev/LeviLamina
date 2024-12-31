#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/actor/agent/AgentAnimation.h"
#include "mc/world/actor/agent/AgentTravelType.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class BodyControl;
class EntityContext;
class ItemStack;
class Player;
class Vec2;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct AgentRenderData;
struct VariantParameterList;
namespace mce { class Color; }
// clang-format on

class Agent : public ::Mob {
public:
    // Agent inner types define
    enum class AnimState : int {
        Idle     = 0,
        Moving   = 1,
        ArmSwing = 2,
        Shrug    = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk618b0a;
    ::ll::UntypedStorage<4, 8>  mUnka894c6;
    ::ll::UntypedStorage<4, 4>  mUnkb25082;
    ::ll::UntypedStorage<4, 4>  mUnk8eff9b;
    ::ll::UntypedStorage<1, 1>  mUnk666d92;
    ::ll::UntypedStorage<1, 1>  mUnkb09f58;
    ::ll::UntypedStorage<8, 16> mUnk306c02;
    // NOLINTEND

public:
    // prevent constructor by default
    Agent& operator=(Agent const&);
    Agent(Agent const&);
    Agent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 35
    virtual ::mce::Color getNameTagTextColor() const /*override*/;

    // vIndex: 33
    virtual bool canShowNameTag() const /*override*/;

    // vIndex: 98
    virtual bool canBePulledIntoVehicle() const /*override*/;

    // vIndex: 107
    virtual bool canBeAffected(uint id) const /*override*/;

    // vIndex: 143
    virtual void knockback(::Actor*, int, float, float, float, float, float) /*override*/;

    // vIndex: 71
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    // vIndex: 4
    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 172
    virtual bool createAIGoals() /*override*/;

    // vIndex: 79
    virtual void setCarriedItem(::ItemStack const& item) /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 25
    virtual void baseTick() /*override*/;

    // vIndex: 21
    virtual void
    teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int entityType, bool keepVelocity) /*override*/;

    // vIndex: 177
    virtual bool canExistWhenDisallowMob() const /*override*/;

    // vIndex: 51
    virtual bool isTargetable() const /*override*/;

    // vIndex: 32
    virtual bool isInvisible() const /*override*/;

    // vIndex: 124
    virtual void kill() /*override*/;

    // vIndex: 56
    virtual void setOwner(::ActorUniqueID const id) /*override*/;

    // vIndex: 139
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    // vIndex: 178
    virtual ::std::unique_ptr<::BodyControl> initBodyControl() /*override*/;

    // vIndex: 8
    virtual ~Agent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Agent(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI ::AgentTravelType checkTravelType();

    MCAPI void doClientTravel(::AABB const& aabb);

    MCAPI ::Vec3 doServerTravel(::AABB const& aabb, ::AgentTravelType travelType);

    MCAPI float getMoveSpeedScalar() const;

    MCAPI ::AgentRenderData& getRenderData();

    MCAPI int getSelectedSlot() const;

    MCAPI int getSwingAnimationDuration() const;

    MCAPI void handleAnimationEvent(::AgentAnimation anim);

    MCAPI bool isArmSwinging() const;

    MCAPI bool isIdling();

    MCAPI bool isShrugging() const;

    MCAPI bool isValidSlotNum(int slotNum);

    MCAPI void setGameType(::GameType gameType);

    MCAPI void setMoveTarget(float target);

    MCAPI void setMoveTarget(::Vec2 target);

    MCAPI void setNameTagFromOwner(::Player const& player);

    MCAPI void shrug();

    MCAPI void startCommandMode();

    MCAPI void stopCommandMode();

    MCAPI void swingArm();

    MCAPI void tryFireCreateEvent(::Player& player);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Vec3 roundTeleportPos(::Vec3 const& pos);

    MCAPI static ::Agent* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);
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

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::mce::Color $getNameTagTextColor() const;

    MCAPI bool $canShowNameTag() const;

    MCAPI bool $canBePulledIntoVehicle() const;

    MCAPI bool $canBeAffected(uint id) const;

    MCAPI void $knockback(::Actor*, int, float, float, float, float, float);

    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI bool $createAIGoals();

    MCAPI void $setCarriedItem(::ItemStack const& item);

    MCAPI void $normalTick();

    MCAPI void $baseTick();

    MCAPI void $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int entityType, bool keepVelocity);

    MCAPI bool $canExistWhenDisallowMob() const;

    MCAPI bool $isTargetable() const;

    MCAPI bool $isInvisible() const;

    MCAPI void $kill();

    MCAPI void $setOwner(::ActorUniqueID const id);

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI ::std::unique_ptr<::BodyControl> $initBodyControl();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
