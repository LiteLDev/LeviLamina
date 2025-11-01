#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/util/FloatRange.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/versionless/world/level/BlockPos.h"
#include "mc/versionless/world/phys/AABB.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
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
        ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mFilters;
        ::ll::TypedStorage<4, 4, float> mCooldownSeconds;
        ::ll::TypedStorage<4, 4, float> mCooldownWhenHurtSeconds;
        ::ll::TypedStorage<4, 4, float> mLastHurtDurationSeconds;
        ::ll::TypedStorage<4, 4, float> mPrepareJumpDurationSeconds;
        ::ll::TypedStorage<4, 4, float> mMaxJumpVelocity;
        ::ll::TypedStorage<1, 1, bool> mCheckCollision;
        ::ll::TypedStorage<4, 4, float> mBoundingBoxScaleFactor;
        ::ll::TypedStorage<4, 4, int> mLineOfSightCheckHeight;
        ::ll::TypedStorage<4, 8, ::FloatRange> mDistanceToTargetRange;
        ::ll::TypedStorage<4, 4, int> mLandingPositionSpreadDegrees;
        ::ll::TypedStorage<4, 8, ::FloatRange> mLandingPositionRange;
        ::ll::TypedStorage<4, 4, int> mRequiredAirBlocksAbove;
        ::ll::TypedStorage<4, 4, int> mSnapToSurfaceBlockRange;
        ::ll::TypedStorage<4, 4, float> mJumpingFromWaterTimeoutSeconds;
        ::ll::TypedStorage<8, 24, ::std::vector<float>> mAllowedJumpAngles;
        // NOLINTEND
    
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Definition() /*override*/ = default;
        // NOLINTEND
    
    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(::std::string const& name, ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::JumpAroundTargetGoal::Definition>>& root);
        // NOLINTEND
    
    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    
    };
    
    enum class State : int {
        PrepareJump = 0,
        Jumping = 1,
        Done = 2,
    };
    
    struct Jump {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> targetPosition;
        ::ll::TypedStorage<4, 12, ::Vec3> velocityVector;
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mFilters;
    ::ll::TypedStorage<4, 4, int> mCooldownTicks;
    ::ll::TypedStorage<4, 4, int> mCooldownWhenHurtTicks;
    ::ll::TypedStorage<4, 4, int> mLastHurtDurationTicks;
    ::ll::TypedStorage<4, 4, float> mMaxJumpVelocity;
    ::ll::TypedStorage<1, 1, bool> mCheckCollision;
    ::ll::TypedStorage<4, 4, float> mBoundingBoxScaleFactor;
    ::ll::TypedStorage<4, 4, int> mLineOfSightCheckHeight;
    ::ll::TypedStorage<4, 8, ::FloatRange> mDistanceToTargetSqrRange;
    ::ll::TypedStorage<4, 4, int> mLandingPositionSpreadDegrees;
    ::ll::TypedStorage<4, 8, ::FloatRange> mDistanceFromTargetLandingPosition;
    ::ll::TypedStorage<4, 4, int> mRequiredAirBlocksAbove;
    ::ll::TypedStorage<4, 4, int> mSnapToSurfaceBlockRange;
    ::ll::TypedStorage<8, 24, ::std::vector<float>> mAllowedJumpAngles;
    ::ll::TypedStorage<4, 4, int> mJumpFromWaterTimeoutTicks;
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    ::ll::TypedStorage<1, 1, bool> mDiscardFrictionDefault;
    ::ll::TypedStorage<8, 8, ::Tick> mJumpedFromWaterEndTick;
    ::ll::TypedStorage<4, 24, ::AABB const> mOriginalAabb;
    ::ll::TypedStorage<4, 4, ::JumpAroundTargetGoal::State> mState;
    ::ll::TypedStorage<4, 12, ::BlockPos> mStartingPos;
    ::ll::TypedStorage<8, 8, ::Tick> mGoalStartTick;
    ::ll::TypedStorage<8, 8, ::Tick> mCooldownEndTick;
    ::ll::TypedStorage<4, 28, ::std::optional<::JumpAroundTargetGoal::Jump>> mJumpData;
    ::ll::TypedStorage<8, 8, uint64> mPrepareJumpDurationTicks;
    // NOLINTEND

public:
    // prevent constructor by default
    JumpAroundTargetGoal& operator=(JumpAroundTargetGoal const&);
    JumpAroundTargetGoal(JumpAroundTargetGoal const&);
    JumpAroundTargetGoal();

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

    MCAPI bool _canJumpFromCurrentPosition() const;

    MCAPI void _jump() const;

    MCAPI void _postJumpCleanup() const;

    MCAPI ::std::optional<::BlockPos> _snapToSurface(::Vec3 const& targetPosition) const;
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

    MCFOLD bool $canBeInterrupted();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
