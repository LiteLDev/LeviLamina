#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class BlockType;
class EatBlockGoal;
class EntityContext;
class ExpressionNode;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class EatBlockDefinition : public ::BaseGoalDefinition {
public:
    // EatBlockDefinition inner types define
    using self = ::EatBlockDefinition;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mTimeUntilEat;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnEat;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>> mSuccessChance;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockType const*, ::BlockType const*>> mEatAndReplaceBlockPairs;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EatBlockDefinition() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addSuccessChanceExpressionNode(::ExpressionNode const& node);

    MCAPI void initialize(::EntityContext& entity, ::EatBlockGoal& goal) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(::std::string const& name, ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EatBlockDefinition>>& root);
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
