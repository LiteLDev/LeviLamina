#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/FloatRange.h"
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
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
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
    // prevent constructor by default
    VillagerCelebrationGoal& operator=(VillagerCelebrationGoal const&);
    VillagerCelebrationGoal(VillagerCelebrationGoal const&);
    VillagerCelebrationGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~VillagerCelebrationGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _launchFirework();

    MCAPI void _setNextFireworkTick();
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
