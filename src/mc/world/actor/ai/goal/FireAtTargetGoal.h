#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/util/FloatRange.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/actor/projectile/ProjectileAnchor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
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
        ::ll::TypedStorage<8, 64, ::ActorFilterGroup>           mFilters;
        ::ll::TypedStorage<4, 8, ::FloatRange>                  mAttackRange;
        ::ll::TypedStorage<4, 4, float>                         mAttackCooldownInSeconds;
        ::ll::TypedStorage<4, 4, float>                         mPreShootDelayInSeconds;
        ::ll::TypedStorage<4, 4, float>                         mPostShootDelayInSeconds;
        ::ll::TypedStorage<4, 4, float>                         mMaxHeadRotationX;
        ::ll::TypedStorage<4, 4, float>                         mMaxHeadRotationY;
        ::ll::TypedStorage<4, 4, float>                         mRangedFOV;
        ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mProjectileDefinition;
        ::ll::TypedStorage<4, 4, ::ProjectileAnchor>            mOwnerAnchor;
        ::ll::TypedStorage<4, 12, ::Vec3>                       mOwnerOffset;
        ::ll::TypedStorage<4, 4, ::ProjectileAnchor>            mTargetAnchor;
        ::ll::TypedStorage<4, 12, ::Vec3>                       mTargetOffset;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~Definition() /*override*/ = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
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
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
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
    // prevent constructor by default
    FireAtTargetGoal& operator=(FireAtTargetGoal const&);
    FireAtTargetGoal(FireAtTargetGoal const&);
    FireAtTargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
