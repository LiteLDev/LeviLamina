#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DragonFlamingDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    DragonFlamingDefinition& operator=(DragonFlamingDefinition const&);
    DragonFlamingDefinition(DragonFlamingDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DragonFlamingDefinition() = default;

    // vIndex: 1
    virtual bool validateMobType(class Mob& mob) const;

    MCAPI DragonFlamingDefinition();

    MCAPI void initialize(class EntityContext& entity, class DragonFlamingGoal& goal) const;

    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DragonFlamingDefinition>>& root
    );

    // NOLINTEND
};
