#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
class Mob;
struct FloatRange;
struct Tick;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class VillagerCelebrationGoal : public ::Goal {
public:
    // VillagerCelebrationGoal inner types declare
    // clang-format off
    class VillagerCelebrationDefinition;
    // clang-format on

    // VillagerCelebrationGoal inner types define
    class VillagerCelebrationDefinition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                      mDuration;
        ::ll::TypedStorage<4, 8, ::FloatRange>               mFireworksInterval;
        ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mCelebrationEndEvent;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~VillagerCelebrationDefinition() /*override*/ = default;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const&                                            name,
            ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
                ::JsonUtil::EmptyClass,
                ::VillagerCelebrationGoal::VillagerCelebrationDefinition>>& root
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                     mMob;
    ::ll::TypedStorage<8, 8, ::Tick>                     mNextFireworkTick;
    ::ll::TypedStorage<8, 8, ::Tick>                     mEndTick;
    ::ll::TypedStorage<4, 4, float>                      mDuration;
    ::ll::TypedStorage<4, 8, ::FloatRange>               mFireworksInterval;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mCelebrationEndEvent;
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

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~VillagerCelebrationGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _launchFirework();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
