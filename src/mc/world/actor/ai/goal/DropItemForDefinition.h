#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DropItemForDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    DropItemForDefinition& operator=(DropItemForDefinition const&);
    DropItemForDefinition(DropItemForDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DropItemForDefinition() = default;

    MCAPI DropItemForDefinition();

    MCAPI void initialize(class EntityContext& entity, class DropItemForGoal& goal) const;

    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DropItemForDefinition>>&
            root
    );

    // NOLINTEND
};
