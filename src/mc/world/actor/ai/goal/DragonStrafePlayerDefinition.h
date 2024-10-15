#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/DragonBaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DragonStrafePlayerDefinition : public ::DragonBaseGoalDefinition {
public:
    // prevent constructor by default
    DragonStrafePlayerDefinition& operator=(DragonStrafePlayerDefinition const&);
    DragonStrafePlayerDefinition(DragonStrafePlayerDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DragonStrafePlayerDefinition() = default;

    MCAPI DragonStrafePlayerDefinition();

    MCAPI void initialize(class EntityContext& entity, class DragonStrafePlayerGoal& goal) const;

    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DragonStrafePlayerDefinition>>& root
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    // NOLINTEND
};
