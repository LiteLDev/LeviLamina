#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
class Mob;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TakeBlockGoal : public ::Goal {
public:
    // TakeBlockGoal inner types declare
    // clang-format off
    struct Definition;
    // clang-format on
    
    // TakeBlockGoal inner types define
    struct Definition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mValidBlocks;
        ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mCanTake;
        ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnTake;
        ::ll::TypedStorage<4, 8, ::IntRange> mXZRange;
        ::ll::TypedStorage<4, 8, ::IntRange> mYRange;
        ::ll::TypedStorage<4, 4, float> mChance;
        ::ll::TypedStorage<1, 1, bool> mAffectedByGriefingRule;
        ::ll::TypedStorage<1, 1, bool> mRequiresLineOfSight;
        // NOLINTEND
    
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Definition() /*override*/;
        // NOLINTEND
    
    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void buildSchema(::std::string const& name, ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::TakeBlockGoal::Definition>>& root);
        // NOLINTEND
    
    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static bool const& DEFAULT_AFFECTED_BY_GRIEFING_RULE();
    
        MCAPI static bool const& DEFAULT_REQUIRES_LINE_OF_SIGHT();
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    ::ll::TypedStorage<8, 232, ::TakeBlockGoal::Definition> mDefinition;
    // NOLINTEND

public:
    // prevent constructor by default
    TakeBlockGoal& operator=(TakeBlockGoal const&);
    TakeBlockGoal(TakeBlockGoal const&);
    TakeBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~TakeBlockGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
