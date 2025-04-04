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
namespace JsonUtil { class EmptyClass; }
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
        ::ll::UntypedStorage<4, 4>  mUnka74a71;
        ::ll::UntypedStorage<4, 4>  mUnk7331df;
        ::ll::UntypedStorage<4, 4>  mUnk1e8f68;
        ::ll::UntypedStorage<4, 8>  mUnk1d2779;
        ::ll::UntypedStorage<1, 1>  mUnk278a3a;
        ::ll::UntypedStorage<8, 24> mUnk5f3f3f;
        ::ll::UntypedStorage<8, 64> mUnkd46bef;
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
        // member functions
        // NOLINTBEGIN
        MCAPI void addDamageCause(::std::string const& causeCased);

        MCAPI void initialize(::EntityContext& entity, ::PlayDeadGoal& goal) const;
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 160, ::PlayDeadGoal::Definition> mDefinition;
    ::ll::TypedStorage<8, 8, ::Mob&>                       mMob;
    ::ll::TypedStorage<8, 8, uint64>                       mPlayDeadDuration;
    ::ll::TypedStorage<8, 8, uint64>                       mStopPlayingDeadTime;
    ::ll::TypedStorage<8, 8, uint64>                       mLastDamagedTimestamp;
    ::ll::TypedStorage<1, 1, bool>                         mPlayDeadOnAllCauses;
    // NOLINTEND

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
    // destructor thunk
    // NOLINTBEGIN

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
