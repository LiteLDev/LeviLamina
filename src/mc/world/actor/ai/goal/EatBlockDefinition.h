#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
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
    ::ll::UntypedStorage<8, 64>  mUnk968c7c;
    // NOLINTEND

public:
    // prevent constructor by default
    EatBlockDefinition& operator=(EatBlockDefinition const&);
    EatBlockDefinition(EatBlockDefinition const&);
    EatBlockDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EatBlockDefinition() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addSuccessChanceExpressionNode(::ExpressionNode const& node);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::string const&                                                                               name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EatBlockDefinition>>& root
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
