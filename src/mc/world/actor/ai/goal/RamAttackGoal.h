#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Mob;
class Path;
class Vec2;
class Vec3;
struct ActorUniqueID;
struct Tick;
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
        ::ll::UntypedStorage<4, 4>  mUnk8efcbe;
        ::ll::UntypedStorage<4, 4>  mUnk32af7a;
        ::ll::UntypedStorage<4, 4>  mUnk8389ff;
        ::ll::UntypedStorage<4, 4>  mUnkc9fbf3;
        ::ll::UntypedStorage<4, 4>  mUnk35de51;
        ::ll::UntypedStorage<4, 4>  mUnk17f729;
        ::ll::UntypedStorage<4, 4>  mUnkbad802;
        ::ll::UntypedStorage<8, 24> mUnkc4f47f;
        ::ll::UntypedStorage<8, 24> mUnk84003f;
        ::ll::UntypedStorage<8, 24> mUnk4a46c6;
        ::ll::UntypedStorage<4, 8>  mUnk7dcc37;
        // NOLINTEND

    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Definition() /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Definition();

        MCAPI void addPreRamSoundEventByName(::std::string const& name);

        MCAPI void addRamImpactSoundEventByName(::std::string const& name);

        MCAPI void initialize(::EntityContext& entity, ::RamAttackGoal& goal) const;
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
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
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
        ::ll::UntypedStorage<4, 12> mUnk25d45c;
        ::ll::UntypedStorage<4, 4>  mUnkc5456c;
        ::ll::UntypedStorage<1, 1>  mUnkdb23c3;
        ::ll::UntypedStorage<4, 4>  mUnka6f895;
        ::ll::UntypedStorage<1, 1>  mUnk1a20ee;
        // NOLINTEND

    public:
        // prevent constructor by default
        AttackPos& operator=(AttackPos const&);
        AttackPos(AttackPos const&);
        AttackPos();
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
    ::ll::TypedStorage<8, 160, ::RamAttackGoal::Definition>              mDefinition;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                            mTargetId;
    ::ll::TypedStorage<1, 1, bool>                                       mHasKnockbacked;
    ::ll::TypedStorage<8, 8, ::Tick>                                     mCooldownTimeout;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RamAttackGoalUtils::RamGoalItemDropperInterface>> mRamGoalItemDropper;
    // NOLINTEND

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
    virtual ~RamAttackGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RamAttackGoal(::Mob& mob);

    MCAPI bool _hasChargePath();

    MCAPI bool _initiateRamAttack();

    MCAPI void _resetCooldown();

    MCAPI void _tryKnockbackTarget();
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
