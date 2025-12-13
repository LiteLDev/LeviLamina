#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/actor/agent/AgentAnimation.h"
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
    virtual ::mce::Color getNameTagTextColor() const /*override*/;

    virtual bool canShowNameTag() const /*override*/;

    virtual bool canBePulledIntoVehicle() const /*override*/;

    virtual bool canBeAffected(uint id) const /*override*/;

    virtual void knockback(::Actor*, int, float, float, float, float, float) /*override*/;

    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

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

    virtual void setOwner(::ActorUniqueID const ownerId) /*override*/;

    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    virtual ::std::unique_ptr<::BodyControl> initBodyControl() /*override*/;

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
