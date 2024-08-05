#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RideableDefinition {
public:
    // prevent constructor by default
    RideableDefinition& operator=(RideableDefinition const&);
    RideableDefinition(RideableDefinition const&);
    RideableDefinition();

public:
    // NOLINTBEGIN
    MCAPI void addFamilyTypeByName(std::string const& name);

    MCAPI void initialize(class EntityContext& entity, class RideableComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RideableDefinition>>&
            root
    );

    // NOLINTEND
};
