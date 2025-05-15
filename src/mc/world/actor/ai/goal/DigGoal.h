#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DigGoal : public ::Goal {
public:
    // DigGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // DigGoal inner types define
    enum class CanUseResult : int {
        CanDig                               = 0,
        IsDigging                            = 1,
        NamedAndNotAllowedToDigWhenNamed     = 2,
        NotOnGoundOrInWaterOrInLava          = 3,
        CanSeeDaylightAndShouldDigInDaylight = 4,
        DisturbedByVibration                 = 5,
        DisturbedBySuspicion                 = 6,
        IdlingBeforeStartingGoalAgain        = 7,
    };

    class Definition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>   mUnke229a2;
        ::ll::UntypedStorage<4, 4>   mUnk711dae;
        ::ll::UntypedStorage<1, 1>   mUnkdbff2e;
        ::ll::UntypedStorage<1, 1>   mUnk1366fe;
        ::ll::UntypedStorage<1, 1>   mUnk5f98e3;
        ::ll::UntypedStorage<1, 1>   mUnka52e69;
        ::ll::UntypedStorage<8, 104> mUnk4b8d8e;
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
        // static functions
        // NOLINTBEGIN
        MCNAPI static void buildSchema(
            ::std::string const&                                                                                name,
            ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::DigGoal::Definition>>& root
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
    ::ll::TypedStorage<8, 8, ::Mob&>                     mMob;
    ::ll::TypedStorage<8, 8, ::Tick>                     mGoalInitializationTick;
    ::ll::TypedStorage<4, 4, uint>                       mIdleTimeTicks;
    ::ll::TypedStorage<2, 2, ushort>                     mDurationTicks;
    ::ll::TypedStorage<8, 8, ::Tick>                     mEndTick;
    ::ll::TypedStorage<1, 1, bool>                       mAllowDigWhenNamed;
    ::ll::TypedStorage<1, 1, bool>                       mVibrationIsDisturbance;
    ::ll::TypedStorage<1, 1, bool>                       mSuspicionIsDisturbance;
    ::ll::TypedStorage<1, 1, bool>                       mDigsInDaylight;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnStartEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    DigGoal& operator=(DigGoal const&);
    DigGoal(DigGoal const&);
    DigGoal();

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
    virtual ~DigGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::DigGoal::CanUseResult _canUse() const;
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
