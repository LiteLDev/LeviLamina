#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class EatBlockGoal;
class EntityContext;
class ExpressionNode;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class EatBlockDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk32f382;
    ::ll::UntypedStorage<8, 104> mUnk536a98;
    ::ll::UntypedStorage<8, 24>  mUnka0b6bd;
    ::ll::UntypedStorage<8, 64>  mUnkc6d532;
    // NOLINTEND

public:
    // prevent constructor by default
    EatBlockDefinition& operator=(EatBlockDefinition const&);
    EatBlockDefinition(EatBlockDefinition const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EatBlockDefinition() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EatBlockDefinition();

    MCAPI void addSuccessChanceExpressionNode(::ExpressionNode const& node);

    MCAPI void initialize(::EntityContext& entity, ::EatBlockGoal& goal) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::string const&                                                                               name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EatBlockDefinition>>& root
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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
