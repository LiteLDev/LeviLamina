#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/FloatRange.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
namespace JsonUtil { struct EmptyClass; }
// clang-format on

class MoveAroundTargetGoal : public ::Goal {
public:
    // MoveAroundTargetGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // MoveAroundTargetGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mFilters;
        ::ll::TypedStorage<4, 4, float>               mSpeed;
        ::ll::TypedStorage<4, 4, float>               mSpreadDegrees;
        ::ll::TypedStorage<4, 8, ::FloatRange>        mDestinationRange;
        ::ll::TypedStorage<4, 4, float>               mHeightDifferenceLimit;
        ::ll::TypedStorage<4, 4, int>                 mHorizontalSearchDistance;
        ::ll::TypedStorage<4, 4, int>                 mVerticalSearchDistance;
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
                ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::MoveAroundTargetGoal::Definition>>& root
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
    ::ll::TypedStorage<8, 8, ::Mob&>              mMob;
    ::ll::TypedStorage<1, 1, bool>                mReachedTarget;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mFilters;
    ::ll::TypedStorage<4, 4, float>               mSpeed;
    ::ll::TypedStorage<4, 4, float>               mSpreadDegrees;
    ::ll::TypedStorage<4, 8, ::FloatRange>        mDestinationRange;
    ::ll::TypedStorage<4, 4, float>               mHeightDifferenceLimit;
    ::ll::TypedStorage<4, 4, int>                 mHorizontalSearchDistance;
    ::ll::TypedStorage<4, 4, int>                 mVerticalSearchDistance;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveAroundTargetGoal& operator=(MoveAroundTargetGoal const&);
    MoveAroundTargetGoal(MoveAroundTargetGoal const&);
    MoveAroundTargetGoal();

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
    virtual ~MoveAroundTargetGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCFOLD bool $canContinueToUse();

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
