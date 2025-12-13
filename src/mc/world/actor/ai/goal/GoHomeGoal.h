#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
class Mob;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GoHomeGoal : public ::Goal {
public:
    // GoHomeGoal inner types declare
    // clang-format off
    class GoHomeDefinition;
    // clang-format on

    // GoHomeGoal inner types define
    class GoHomeDefinition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk87ac53;
        ::ll::UntypedStorage<4, 4>  mUnk88b2f2;
        ::ll::UntypedStorage<4, 4>  mUnk98587b;
        ::ll::UntypedStorage<4, 4>  mUnk3963f1;
        ::ll::UntypedStorage<8, 24> mUnk7b9d13;
        ::ll::UntypedStorage<8, 24> mUnk3d6b1b;
        // NOLINTEND

    public:
        // prevent constructor by default
        GoHomeDefinition& operator=(GoHomeDefinition const&);
        GoHomeDefinition(GoHomeDefinition const&);
        GoHomeDefinition();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~GoHomeDefinition() /*override*/;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GoHomeGoal::GoHomeDefinition>>&
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                   mMob;
    ::ll::TypedStorage<4, 4, float>                                    mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, int>                                      mInterval;
    ::ll::TypedStorage<4, 4, float>                                    mGoalRadius;
    ::ll::TypedStorage<4, 4, float>                                    mCalculateNewPathRadius;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTrigger>> mOnHomeTriggers;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTrigger>> mOnFailedTriggers;
    ::ll::TypedStorage<4, 12, ::BlockPos>                              mLastEndPos;
    ::ll::TypedStorage<4, 4, float>                                    mGoalRadiusSqr;
    // NOLINTEND

public:
    // prevent constructor by default
    GoHomeGoal& operator=(GoHomeGoal const&);
    GoHomeGoal(GoHomeGoal const&);
    GoHomeGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~GoHomeGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _hasReachedHome() const;

    MCNAPI bool _hasRequiredComponents() const;

    MCNAPI void _triggerOnFailedEvents();
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

    MCNAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
