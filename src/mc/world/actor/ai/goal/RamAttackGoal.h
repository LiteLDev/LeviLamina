#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/util/FloatRange.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
class Mob;
class Path;
namespace JsonUtil { class EmptyClass; }
namespace RamAttackGoalUtils { class RamGoalItemDropperInterface; }
// clang-format on

class RamAttackGoal : public ::Goal {
public:
    // RamAttackGoal inner types declare
    // clang-format off
    struct AttackPos;
    class Definition;
    // clang-format on

    // RamAttackGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                                                    mRamDistance;
        ::ll::TypedStorage<4, 4, int>                                                    mMinRamDistance;
        ::ll::TypedStorage<4, 4, float>                                                  mKnockbackForce;
        ::ll::TypedStorage<4, 4, float>                                                  mKnockbackHeight;
        ::ll::TypedStorage<4, 4, float>                                                  mBabyKnockbackModifier;
        ::ll::TypedStorage<4, 4, float>                                                  mRunSpeed;
        ::ll::TypedStorage<4, 4, float>                                                  mRamSpeed;
        ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTrigger>>               mOnStartTriggers;
        ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::LevelSoundEvent>> mPreRamSound;
        ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::LevelSoundEvent>> mRamImpactSound;
        ::ll::TypedStorage<4, 8, ::FloatRange>                                           mCooldownTime;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Definition() /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void addPreRamSoundEventByName(::std::string const& name);

        MCAPI void addRamImpactSoundEventByName(::std::string const& name);
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::RamAttackGoal::Definition>>&
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

    enum class State : int {
        TakeAttackPos               = 0,
        TurnToTarget                = 1,
        VerifyTargetStillInPosition = 2,
        WaitOneSec                  = 3,
        Charge                      = 4,
        KnockAfterCharge            = 5,
        Done                        = 6,
    };

    enum class Direction : int {
        North = 0,
        South = 1,
        West  = 2,
        East  = 3,
    };

    struct AttackPos {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3>                    mPosition;
        ::ll::TypedStorage<4, 4, float>                      mDistance;
        ::ll::TypedStorage<1, 1, bool>                       mCheckX;
        ::ll::TypedStorage<4, 4, ::RamAttackGoal::Direction> mDirection;
        ::ll::TypedStorage<1, 1, bool>                       mHasChargePos;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                     mMob;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>>                  mPath;
    ::ll::TypedStorage<4, 12, ::Vec3>                                    mPrepareChargePos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                    mTargetPos;
    ::ll::TypedStorage<4, 8, ::Vec2>                                     mRamDirection;
    ::ll::TypedStorage<8, 8, ::Tick>                                     mWaitBeforeChargeTimer;
    ::ll::TypedStorage<8, 8, ::Tick>                                     mChargeTimeoutTimer;
    ::ll::TypedStorage<8, 8, ::Tick>                                     mKnockAfterChargeTimeoutTimer;
    ::ll::TypedStorage<8, 8, ::Tick>                                     mRamRetryTimeout;
    ::ll::TypedStorage<4, 4, ::RamAttackGoal::State>                     mState;
    ::ll::TypedStorage<8, 24, ::std::vector<::RamAttackGoal::AttackPos>> mAttackPosVector;
    ::ll::TypedStorage<8, 128, ::RamAttackGoal::Definition>              mDefinition;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                            mTargetId;
    ::ll::TypedStorage<1, 1, bool>                                       mHasKnockbacked;
    ::ll::TypedStorage<8, 8, ::Tick>                                     mCooldownTimeout;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RamAttackGoalUtils::RamGoalItemDropperInterface>> mRamGoalItemDropper;
    // NOLINTEND

public:
    // prevent constructor by default
    RamAttackGoal& operator=(RamAttackGoal const&);
    RamAttackGoal(RamAttackGoal const&);
    RamAttackGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~RamAttackGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RamAttackGoal(::Mob& mob);

    MCAPI bool _hasChargePath();

    MCAPI bool _initiateRamAttack();

    MCAPI void _resetCooldown();

    MCAPI void _tryKnockbackTarget();

    MCAPI bool _verifyTargetStillInPositionAndPrepareForRamAttack();
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
    MCAPI void $start();

    MCAPI void $stop();

    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
