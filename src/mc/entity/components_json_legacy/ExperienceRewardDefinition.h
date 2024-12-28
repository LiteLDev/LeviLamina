#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class ExperienceRewardComponent;
class ExpressionNode;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ExperienceRewardDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk6a1248;
    ::ll::UntypedStorage<8, 24> mUnk5681e0;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperienceRewardDefinition& operator=(ExperienceRewardDefinition const&);
    ExperienceRewardDefinition(ExperienceRewardDefinition const&);
    ExperienceRewardDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addBredExpressionNode(::ExpressionNode const& node);

    MCAPI void addDeathExpressionNode(::ExpressionNode const& node);

    MCAPI void initialize(::EntityContext&, ::ExperienceRewardComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ExperienceRewardDefinition>>& root
    );
    // NOLINTEND
};
