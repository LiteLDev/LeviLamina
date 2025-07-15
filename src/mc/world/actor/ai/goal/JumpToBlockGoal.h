#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
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
    class Definition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnkf951bd;
        ::ll::UntypedStorage<4, 4>  mUnkca792f;
        ::ll::UntypedStorage<4, 4>  mUnk408f62;
        ::ll::UntypedStorage<4, 4>  mUnk7b4fd6;
        ::ll::UntypedStorage<4, 8>  mUnk835c86;
        ::ll::UntypedStorage<4, 4>  mUnk35e09f;
        ::ll::UntypedStorage<4, 4>  mUnkb92dc7;
        ::ll::UntypedStorage<8, 24> mUnk5db1ed;
        ::ll::UntypedStorage<4, 4>  mUnkcd10c0;
        ::ll::UntypedStorage<8, 24> mUnka9f5e1;
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
        virtual ~Definition() /*override*/;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::JumpToBlockGoal::Definition>>&
                root
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    enum class JumpState : uchar {
        LookingForBlock = 0,
        FaceJump        = 1,
        Jump            = 2,
        Airborne        = 3,
        Done            = 4,
    };

    struct WeightedJumpToBlockPos {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnkb2bcc9;
        ::ll::UntypedStorage<4, 12> mUnkdcd117;
        ::ll::UntypedStorage<4, 4>  mUnk99b073;
        // NOLINTEND

    public:
        // prevent constructor by default
        WeightedJumpToBlockPos& operator=(WeightedJumpToBlockPos const&);
        WeightedJumpToBlockPos(WeightedJumpToBlockPos const&);
        WeightedJumpToBlockPos();
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
    virtual ~JumpToBlockGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit JumpToBlockGoal(::Mob& mob);

    MCNAPI void _clearGoalState();

    MCNAPI bool _findCandidateBlocks(::NavigationComponent& navigation);

    MCNAPI bool _findJumpableBlocks(bool useOnlyPreferredBlocksIfAny);

    MCNAPI bool _findTargetBlock();

    MCNAPI void resetCooldown();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI bool $canBeInterrupted();

    MCNAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
