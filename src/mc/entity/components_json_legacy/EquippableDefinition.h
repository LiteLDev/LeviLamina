#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class EquippableDefinition {
public:
    // prevent constructor by default
    EquippableDefinition& operator=(EquippableDefinition const&);
    EquippableDefinition(EquippableDefinition const&);
    EquippableDefinition();

public:
    // NOLINTBEGIN
    MCAPI void initialize(class EntityContext&, class EquippableComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EquippableDefinition>>&
            root
    );

    // NOLINTEND
};
