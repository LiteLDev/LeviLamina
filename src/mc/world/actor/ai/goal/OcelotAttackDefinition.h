#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class OcelotAttackDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    OcelotAttackDefinition& operator=(OcelotAttackDefinition const&);
    OcelotAttackDefinition(OcelotAttackDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OcelotAttackDefinition() = default;

    MCAPI OcelotAttackDefinition();

    MCAPI void initialize(class EntityContext& entity, class OcelotAttackGoal& goal) const;

    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class OcelotAttackDefinition>>&
            root
    );

    // NOLINTEND
};
