#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class AABB;
class ActorFilterGroup;
class BlockPos;
class EntityContext;
class Mob;
class Vec3;
struct FloatRange;
struct Tick;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class JumpAroundTargetGoal : public ::Goal {
public:
    // JumpAroundTargetGoal inner types declare
    // clang-format off
    class Definition;
    struct Jump;
    // clang-format on

    // JumpAroundTargetGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnk847e09;
        ::ll::UntypedStorage<4, 4>  mUnkce9b72;
        ::ll::UntypedStorage<4, 4>  mUnk1a5390;
        ::ll::UntypedStorage<4, 4>  mUnk3d9f20;
        ::ll::UntypedStorage<4, 4>  mUnk444002;
        ::ll::UntypedStorage<4, 4>  mUnk5c2703;
        ::ll::UntypedStorage<1, 1>  mUnka2d6e7;
        ::ll::UntypedStorage<4, 4>  mUnk44730f;
        ::ll::UntypedStorage<4, 4>  mUnkd2f898;
        ::ll::UntypedStorage<4, 8>  mUnkad043e;
        ::ll::UntypedStorage<4, 4>  mUnk89c7c3;
        ::ll::UntypedStorage<4, 8>  mUnk4501ce;
        ::ll::UntypedStorage<4, 4>  mUnkc54ede;
        ::ll::UntypedStorage<4, 4>  mUnkdc5697;
        ::ll::UntypedStorage<4, 4>  mUnkfe105c;
        ::ll::UntypedStorage<8, 24> mUnk35c3f0;
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
        MCAPI void initialize(::EntityContext& entity, ::JumpAroundTargetGoal& goal) const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<
                ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::JumpAroundTargetGoal::Definition>>& root
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

    enum class State : int {
        PrepareJump = 0,
        Jumping     = 1,
        Done        = 2,
    };

    struct Jump {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnkfedd89;
        ::ll::UntypedStorage<4, 12> mUnkc7e376;
        // NOLINTEND

    public:
        // prevent constructor by default
        Jump& operator=(Jump const&);
        Jump(Jump const&);
        Jump();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                            mFilters;
    ::ll::TypedStorage<4, 4, int>                                            mCooldownTicks;
    ::ll::TypedStorage<4, 4, int>                                            mCooldownWhenHurtTicks;
    ::ll::TypedStorage<4, 4, int>                                            mLastHurtDurationTicks;
    ::ll::TypedStorage<4, 4, float>                                          mMaxJumpVelocity;
    ::ll::TypedStorage<1, 1, bool>                                           mCheckCollision;
    ::ll::TypedStorage<4, 4, float>                                          mBoundingBoxScaleFactor;
    ::ll::TypedStorage<4, 4, int>                                            mLineOfSightCheckHeight;
    ::ll::TypedStorage<4, 8, ::FloatRange>                                   mDistanceToTargetSqrRange;
    ::ll::TypedStorage<4, 4, int>                                            mLandingPositionSpreadDegrees;
    ::ll::TypedStorage<4, 8, ::FloatRange>                                   mDistanceFromTargetLandingPosition;
    ::ll::TypedStorage<4, 4, int>                                            mRequiredAirBlocksAbove;
    ::ll::TypedStorage<4, 4, int>                                            mSnapToSurfaceBlockRange;
    ::ll::TypedStorage<8, 24, ::std::vector<float>>                          mAllowedJumpAngles;
    ::ll::TypedStorage<4, 4, int>                                            mJumpFromWaterTimeoutTicks;
    ::ll::TypedStorage<8, 8, ::Mob&>                                         mMob;
    ::ll::TypedStorage<1, 1, bool>                                           mDiscardFrictionDefault;
    ::ll::TypedStorage<8, 8, ::Tick>                                         mJumpedFromWaterEndTick;
    ::ll::TypedStorage<4, 24, ::AABB const>                                  mOriginalAabb;
    ::ll::TypedStorage<4, 4, ::JumpAroundTargetGoal::State>                  mState;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                    mStartingPos;
    ::ll::TypedStorage<8, 8, ::Tick>                                         mGoalStartTick;
    ::ll::TypedStorage<8, 8, ::Tick>                                         mCooldownEndTick;
    ::ll::TypedStorage<4, 28, ::std::optional<::JumpAroundTargetGoal::Jump>> mJumpData;
    ::ll::TypedStorage<8, 8, uint64>                                         mPrepareJumpDurationTicks;
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

    // vIndex: 3
    virtual bool canBeInterrupted() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~JumpAroundTargetGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit JumpAroundTargetGoal(::Mob& mob);

    MCAPI ::std::optional<::JumpAroundTargetGoal::Jump> _calculateOptimalJumpVector(::Vec3 const& targetPosition) const;

    MCAPI ::std::optional<::BlockPos> _snapToSurface(::Vec3 const& targetPosition) const;
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

    MCFOLD bool $canBeInterrupted();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
