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
class BodyControl;
class EntityContext;
class ItemStack;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
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
    // vIndex: 34
    virtual ::mce::Color getNameTagTextColor() const /*override*/;

    // vIndex: 32
    virtual bool canShowNameTag() const /*override*/;

    // vIndex: 96
    virtual bool canBePulledIntoVehicle() const /*override*/;

    // vIndex: 105
    virtual bool canBeAffected(uint id) const /*override*/;

    // vIndex: 138
    virtual void knockback(::Actor*, int, float, float, float, float, float) /*override*/;

    // vIndex: 69
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    // vIndex: 4
    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 168
    virtual bool createAIGoals() /*override*/;

    // vIndex: 77
    virtual void setCarriedItem(::ItemStack const& item) /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 25
    virtual void baseTick() /*override*/;

    // vIndex: 21
    virtual void
    teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int entityType, bool keepVelocity) /*override*/;

    // vIndex: 173
    virtual bool canExistWhenDisallowMob() const /*override*/;

    // vIndex: 50
    virtual bool isTargetable() const /*override*/;

    // vIndex: 31
    virtual bool isInvisible() const /*override*/;

    // vIndex: 122
    virtual void kill() /*override*/;

    // vIndex: 55
    virtual void setOwner(::ActorUniqueID const ownerId) /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    // vIndex: 175
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

    MCAPI bool _isOnGround(::AABB const& aabb);

    MCAPI ::Vec3 doServerTravel(::AABB const& aabb, ::AgentTravelType travelType);

    MCAPI float getMoveSpeedScalar() const;

    MCAPI void handleAnimationEvent(::AgentAnimation anim);

    MCAPI bool isShrugging() const;

    MCAPI void setNameTagFromOwner(::Player const& player);

    MCAPI void shrug();

    MCAPI void swingArm();

    MCAPI void tryFireCreateEvent(::Player& player);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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

    MCFOLD void $knockback(::Actor*, int, float, float, float, float, float);

    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);

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

    MCAPI void $setOwner(::ActorUniqueID const ownerId);

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI ::std::unique_ptr<::BodyControl> $initBodyControl();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
