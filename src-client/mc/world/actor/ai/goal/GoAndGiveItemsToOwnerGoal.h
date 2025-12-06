#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
class Mob;
class Path;
namespace JsonUtil { struct EmptyClass; }
// clang-format on

class GoAndGiveItemsToOwnerGoal : public ::Goal {
public:
    // GoAndGiveItemsToOwnerGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // GoAndGiveItemsToOwnerGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                                    mRunSpeed;
        ::ll::TypedStorage<4, 4, float>                                    mReachMobDistance;
        ::ll::TypedStorage<4, 4, float>                                    mThrowForce;
        ::ll::TypedStorage<4, 4, float>                                    mVerticalThrowMul;
        ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>   mThrowSound;
        ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTrigger>> mOnItemThrowTriggers;
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
        MCAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<
                ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GoAndGiveItemsToOwnerGoal::Definition>>& root
        );
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    enum class State : int {
        GoToOwner = 0,
        Done      = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                   mMob;
    ::ll::TypedStorage<8, 64, ::GoAndGiveItemsToOwnerGoal::Definition> mDefinition;
    ::ll::TypedStorage<4, 4, ::GoAndGiveItemsToOwnerGoal::State>       mState;
    ::ll::TypedStorage<8, 8, ::Tick>                                   mLastPathCalculationTick;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>>                mPath;
    // NOLINTEND

public:
    // prevent constructor by default
    GoAndGiveItemsToOwnerGoal& operator=(GoAndGiveItemsToOwnerGoal const&);
    GoAndGiveItemsToOwnerGoal(GoAndGiveItemsToOwnerGoal const&);
    GoAndGiveItemsToOwnerGoal();

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
    virtual ~GoAndGiveItemsToOwnerGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _attemptToGiveItem();
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

    MCFOLD void $stop();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
