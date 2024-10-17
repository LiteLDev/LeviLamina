#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GiveableDefinition {
public:
    // prevent constructor by default
    GiveableDefinition& operator=(GiveableDefinition const&);
    GiveableDefinition(GiveableDefinition const&);
    GiveableDefinition();

public:
    // NOLINTBEGIN
    MCAPI void addGiveableTrigger(struct GiveableTrigger const& trigger);

    MCAPI void initialize(class EntityContext&, class GiveableComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GiveableDefinition>>&
            root
    );

    // NOLINTEND
};
