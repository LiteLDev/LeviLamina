#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/util/FloatRange.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
class Mob;
class NavigationComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class JumpToBlockGoal : public ::Goal {
public:
    // JumpToBlockGoal inner types declare
    // clang-format off
    class Definition;
    struct WeightedJumpToBlockPos;
    // clang-format on

    // JumpToBlockGoal inner types define
    enum class JumpState : uchar {
        LookingForBlock = 0,
        FaceJump        = 1,
        Jump            = 2,
        Airborne        = 3,
        Done            = 4,
    };

    class Definition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                              mSearchWidth;
        ::ll::TypedStorage<4, 4, int>                              mSearchHeight;
        ::ll::TypedStorage<4, 4, int>                              mMinPathLength;
        ::ll::TypedStorage<4, 4, int>                              mMinDistance;
        ::ll::TypedStorage<4, 8, ::FloatRange>                     mCooldownTime;
        ::ll::TypedStorage<4, 4, float>                            mScaleFactor;
        ::ll::TypedStorage<4, 4, float>                            mMaxVelocity;
        ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mPreferredBlocks;
        ::ll::TypedStorage<4, 4, float>                            mPreferredBlocksChance;
        ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mForbiddenBlocks;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~Definition() /*override*/;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::JumpToBlockGoal::Definition>>&
                root
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct WeightedJumpToBlockPos {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos> targetPos;
        ::ll::TypedStorage<4, 12, ::Vec3>     velocityVector;
        ::ll::TypedStorage<4, 4, int>         mWeight;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                                    mMob;
    ::ll::TypedStorage<1, 1, bool>                                                      mDiscardFrictionDefault;
    ::ll::TypedStorage<8, 8, ::Tick>                                                    mCooldownTimeout;
    ::ll::TypedStorage<8, 8, ::Tick>                                                    mNextCandidateCheck;
    ::ll::TypedStorage<4, 4, int>                                                       mCandidateAttemptCounter;
    ::ll::TypedStorage<1, 1, ::JumpToBlockGoal::JumpState>                              mState;
    ::ll::TypedStorage<8, 24, ::std::vector<::Vec3>>                                    mJumpCurve;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                               mTargetBlockPos;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                                mCandidateBlocksPositions;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                               mStartingPos;
    ::ll::TypedStorage<8, 24, ::std::vector<::JumpToBlockGoal::WeightedJumpToBlockPos>> mJumpableBlocksPositions;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                   mVelocityVector;
    ::ll::TypedStorage<8, 8, ::Tick>                                                    mFaceJumpTimer;
    ::ll::TypedStorage<8, 104, ::JumpToBlockGoal::Definition>                           mDefinition;
    ::ll::TypedStorage<4, 24, ::AABB const>                                             mOriginalAabb;
    // NOLINTEND

public:
    // prevent constructor by default
    JumpToBlockGoal& operator=(JumpToBlockGoal const&);
    JumpToBlockGoal(JumpToBlockGoal const&);
    JumpToBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual bool canBeInterrupted() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~JumpToBlockGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit JumpToBlockGoal(::Mob& mob);

    MCAPI void _clearGoalState();

    MCAPI bool _findCandidateBlocks(::NavigationComponent& navigation);

    MCAPI bool _findJumpableBlocks(bool useOnlyPreferredBlocksIfAny);

    MCAPI bool _findTargetBlock();

    MCAPI void resetCooldown();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
