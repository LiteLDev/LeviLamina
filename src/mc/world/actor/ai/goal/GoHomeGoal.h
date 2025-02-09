#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
class BlockPos;
class EntityContext;
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
        // vIndex: 0
        virtual ~GoHomeDefinition() /*override*/ = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void initialize(::EntityContext& entity, ::GoHomeGoal& goal) const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GoHomeGoal::GoHomeDefinition>>&
                root
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
    virtual ~GoHomeGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit GoHomeGoal(::Mob& mob);

    MCAPI bool _hasRequiredComponents() const;

    MCAPI void _triggerOnFailedEvents();
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
    MCAPI bool $canUse();

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
