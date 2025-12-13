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
        virtual ~Definition() /*override*/ = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void setOwnerAnchor(int const& value);

        MCNAPI void setProjectileDefinitionByName(::std::string const& name);

        MCNAPI void setTargetAnchor(int const& value);
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void buildSchema(
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
    MCNAPI explicit FireAtTargetGoal(::Mob& mob);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Vec3
    _getAnchorAndOffsetPosition(::Actor const& actor, ::ProjectileAnchor anchor, ::Vec3 const& offset);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
