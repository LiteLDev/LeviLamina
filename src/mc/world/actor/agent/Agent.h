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
struct HurtParameters;
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

    virtual void
    knockback(::Actor* source, float damage, float xd, float zd, ::KnockbackParameters const& parameters) /*override*/;

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
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;

    virtual ::std::unique_ptr<::BodyControl> initBodyControl() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Agent(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCNAPI void doClientTravel(::AABB const& aabb);

    MCNAPI ::Vec3 doServerTravel(::AABB const& aabb, ::AgentTravelType travelType);

    MCNAPI void handleAnimationEvent(::AgentAnimation anim);

    MCNAPI bool isValidSlotNum(int slotNum);

    MCNAPI void setNameTagFromOwner(::Player const& player);

    MCNAPI void startCommandMode();

    MCNAPI void tryFireCreateEvent(::Player& player);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Agent* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);
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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::mce::Color $getNameTagTextColor() const;

    MCNAPI bool $canShowNameTag() const;

    MCNAPI bool $canBePulledIntoVehicle() const;

    MCNAPI bool $canBeAffected(uint id) const;

    MCNAPI void $knockback(::Actor* source, float damage, float xd, float zd, ::KnockbackParameters const& parameters);

    MCNAPI void $handleEntityEvent(::ActorEvent id, int data);

    MCNAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCNAPI bool $createAIGoals();

    MCNAPI void $setCarriedItem(::ItemStack const& item);

    MCNAPI void $normalTick();

    MCNAPI void $baseTick();

    MCNAPI void $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int entityType, bool keepVelocity);

    MCNAPI bool $canExistWhenDisallowMob() const;

    MCNAPI bool $isTargetable() const;

    MCNAPI bool $isInvisible() const;

    MCNAPI void $kill();

    MCNAPI void $setOwner(::ActorUniqueID const id);

    MCNAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);

    MCNAPI ::std::unique_ptr<::BodyControl> $initBodyControl();


    // NOLINTEND
};
