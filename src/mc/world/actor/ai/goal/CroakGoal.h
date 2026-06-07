#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/FloatRange.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Mob;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class CroakGoal : public ::BaseGoal {
public:
    // CroakGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // CroakGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 8, ::FloatRange>        mIntervalRange;
        ::ll::TypedStorage<4, 8, ::FloatRange>        mDurationRange;
        ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mFilters;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Definition();

        MCAPI void initialize(::EntityContext& entity, ::CroakGoal& goal) const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(
            ::std::string const&                                                                                  name,
            ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::CroakGoal::Definition>>& root
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();
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
    ::ll::TypedStorage<8, 8, ::Mob&>                   mMob;
    ::ll::TypedStorage<8, 96, ::CroakGoal::Definition> mDefinition;
    ::ll::TypedStorage<8, 8, ::Tick>                   mTickOfNextCroak;
    ::ll::TypedStorage<8, 8, ::Tick>                   mTickOfEndCroak;
    // NOLINTEND

public:
    // prevent constructor by default
    CroakGoal& operator=(CroakGoal const&);
    CroakGoal(CroakGoal const&);
    CroakGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CroakGoal(::Mob& mob);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
