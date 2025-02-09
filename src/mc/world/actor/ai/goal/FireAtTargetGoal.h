#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/actor/projectile/ProjectileAnchor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorFilterGroup;
class EntityContext;
class Mob;
class Vec3;
struct ActorDefinitionIdentifier;
struct FloatRange;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class FireAtTargetGoal : public ::Goal {
public:
    // FireAtTargetGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // FireAtTargetGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64>  mUnk8e6641;
        ::ll::UntypedStorage<4, 8>   mUnkd650d5;
        ::ll::UntypedStorage<4, 4>   mUnk398502;
        ::ll::UntypedStorage<4, 4>   mUnk1f57eb;
        ::ll::UntypedStorage<4, 4>   mUnk783825;
        ::ll::UntypedStorage<4, 4>   mUnk48d9aa;
        ::ll::UntypedStorage<4, 4>   mUnkbdeaf0;
        ::ll::UntypedStorage<4, 4>   mUnk726124;
        ::ll::UntypedStorage<8, 176> mUnk1a68a2;
        ::ll::UntypedStorage<4, 4>   mUnkf78fb0;
        ::ll::UntypedStorage<4, 12>  mUnkda49e6;
        ::ll::UntypedStorage<4, 4>   mUnkb5f2b2;
        ::ll::UntypedStorage<4, 12>  mUnkad172b;
        // NOLINTEND

    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);
        Definition();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Definition() /*override*/ = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void initialize(::EntityContext& entity, ::FireAtTargetGoal& goal) const;

        MCAPI void setOwnerAnchor(int const& value);

        MCAPI void setProjectileDefinitionByName(::std::string const& name);

        MCAPI void setTargetAnchor(int const& value);
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::FireAtTargetGoal::Definition>>&
                root
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                        mMob;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>           mFilters;
    ::ll::TypedStorage<4, 8, ::FloatRange>                  mAttackRangeSquared;
    ::ll::TypedStorage<4, 4, uint>                          mAttackCooldownTicks;
    ::ll::TypedStorage<4, 4, uint>                          mPreShootDelayTicks;
    ::ll::TypedStorage<8, 8, uint64>                        mDurationTicks;
    ::ll::TypedStorage<4, 4, float>                         mMaxHeadRotationX;
    ::ll::TypedStorage<4, 4, float>                         mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float>                         mRangedFOV;
    ::ll::TypedStorage<1, 1, bool>                          mTriedToShoot;
    ::ll::TypedStorage<8, 8, uint64>                        mAttackCooldownTimeStamp;
    ::ll::TypedStorage<8, 8, uint64>                        mPreShootDelayTimeStamp;
    ::ll::TypedStorage<8, 8, uint64>                        mEndTimeStamp;
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mProjectileDefinition;
    ::ll::TypedStorage<4, 4, ::ProjectileAnchor>            mOwnerAnchor;
    ::ll::TypedStorage<4, 12, ::Vec3>                       mOwnerOffset;
    ::ll::TypedStorage<4, 4, ::ProjectileAnchor>            mTargetAnchor;
    ::ll::TypedStorage<4, 12, ::Vec3>                       mTargetOffset;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~FireAtTargetGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FireAtTargetGoal(::Mob& mob);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Vec3
    _getAnchorAndOffsetPosition(::Actor const& actor, ::ProjectileAnchor anchor, ::Vec3 const& offset);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
