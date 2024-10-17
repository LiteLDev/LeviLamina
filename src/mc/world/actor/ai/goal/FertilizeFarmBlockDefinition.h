#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class FertilizeFarmBlockDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    FertilizeFarmBlockDefinition& operator=(FertilizeFarmBlockDefinition const&);
    FertilizeFarmBlockDefinition(FertilizeFarmBlockDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FertilizeFarmBlockDefinition() = default;

    MCAPI FertilizeFarmBlockDefinition();

    MCAPI void initialize(class EntityContext& entity, class FertilizeFarmBlockGoal& goal) const;

    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class FertilizeFarmBlockDefinition>>& root
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    // NOLINTEND
};
