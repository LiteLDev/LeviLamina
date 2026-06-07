#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/actor/agent/AgentAnimation.h"
#include "mc/world/actor/agent/AgentRenderData.h"
#include "mc/world/actor/agent/AgentTravelType.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class BodyControl;
class EntityContext;
class ItemStack;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct KnockbackParameters;
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
    ::ll::TypedStorage<1, 1, bool>               mIsHovering;
    ::ll::TypedStorage<4, 8, ::Vec2>             mHorizontalTarget;
    ::ll::TypedStorage<4, 4, float>              mVerticalTarget;
    ::ll::TypedStorage<4, 4, int>                mSelectedSlot;
    ::ll::TypedStorage<1, 1, bool>               mHasSetName;
    ::ll::TypedStorage<1, 1, bool>               mHasFiredCreationEvent;
    ::ll::TypedStorage<8, 16, ::AgentRenderData> mRenderData;
    // NOLINTEND

public:
    // prevent constructor by default
    Agent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::Color getNameTagTextColor() const /*override*/;

    virtual bool canShowNameTag() const /*override*/;

    virtual bool canBePulledIntoVehicle() const /*override*/;

    virtual bool canBeAffected(uint id) const /*override*/;

    virtual void knockback(::Actor*, int, float, float, ::KnockbackParameters const&) /*override*/;

    virtual void handleEntityEvent(::ActorEvent id, int data) /*override*/;

    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual bool createAIGoals() /*override*/;

    virtual void setCarriedItem(::ItemStack const& item) /*override*/;

    virtual void normalTick() /*override*/;

    virtual void baseTick() /*override*/;

    virtual void
    teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int entityType, bool keepVelocity) /*override*/;

    virtual bool canExistWhenDisallowMob() const /*override*/;

    virtual bool isTargetable() const /*override*/;

    virtual bool isInvisible() const /*override*/;

    virtual void kill() /*override*/;

    virtual void setOwner(::ActorUniqueID const id) /*override*/;

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    virtual ::std::unique_ptr<::BodyControl> initBodyControl() /*override*/;
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

    MCFOLD ::AgentRenderData& getRenderData();

    MCFOLD int getSelectedSlot() const;

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
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::mce::Color $getNameTagTextColor() const;

    MCFOLD bool $canShowNameTag() const;

    MCFOLD bool $canBePulledIntoVehicle() const;

    MCFOLD bool $canBeAffected(uint id) const;

    MCFOLD void $knockback(::Actor*, int, float, float, ::KnockbackParameters const&);

    MCAPI void $handleEntityEvent(::ActorEvent id, int data);

    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI bool $createAIGoals();

    MCAPI void $setCarriedItem(::ItemStack const& item);

    MCAPI void $normalTick();

    MCAPI void $baseTick();

    MCAPI void $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int entityType, bool keepVelocity);

    MCFOLD bool $canExistWhenDisallowMob() const;

    MCFOLD bool $isTargetable() const;

    MCAPI bool $isInvisible() const;

    MCAPI void $kill();

    MCAPI void $setOwner(::ActorUniqueID const id);

    MCAPI ::ActorHurtResult $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI ::std::unique_ptr<::BodyControl> $initBodyControl();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
