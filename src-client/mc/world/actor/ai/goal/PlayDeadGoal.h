#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/util/IntRange.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
namespace JsonUtil { struct EmptyClass; }
// clang-format on

class PlayDeadGoal : public ::Goal {
public:
    // PlayDeadGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // PlayDeadGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                                                   mDuration;
        ::ll::TypedStorage<4, 4, float>                                                   mRandomStartChance;
        ::ll::TypedStorage<4, 4, int>                                                     mForceUseBelowHealth;
        ::ll::TypedStorage<4, 8, ::IntRange>                                              mActivationDamageRange;
        ::ll::TypedStorage<1, 1, bool>                                                    mApplyRegeneration;
        ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ActorDamageCause>> mDamageCauses;
        ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                                     mFilters;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Definition() /*override*/ = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void addDamageCause(::std::string const& causeCased);
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::PlayDeadGoal::Definition>>&
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
    ::ll::TypedStorage<8, 128, ::PlayDeadGoal::Definition> mDefinition;
    ::ll::TypedStorage<8, 8, ::Mob&>                       mMob;
    ::ll::TypedStorage<8, 8, uint64>                       mPlayDeadDuration;
    ::ll::TypedStorage<8, 8, uint64>                       mStopPlayingDeadTime;
    ::ll::TypedStorage<8, 8, uint64>                       mLastDamagedTimestamp;
    ::ll::TypedStorage<1, 1, bool>                         mPlayDeadOnAllCauses;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayDeadGoal& operator=(PlayDeadGoal const&);
    PlayDeadGoal(PlayDeadGoal const&);
    PlayDeadGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~PlayDeadGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI bool $canContinueToUse();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
