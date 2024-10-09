#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class HarvestFarmBlockDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    HarvestFarmBlockDefinition& operator=(HarvestFarmBlockDefinition const&);
    HarvestFarmBlockDefinition(HarvestFarmBlockDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HarvestFarmBlockDefinition() = default;

    MCAPI HarvestFarmBlockDefinition();

    MCAPI void initialize(class EntityContext& entity, class HarvestFarmBlockGoal& goal) const;

    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class HarvestFarmBlockDefinition>>& root
    );

    // NOLINTEND
};
