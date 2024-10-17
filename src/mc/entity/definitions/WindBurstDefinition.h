#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class WindBurstDefinition {
public:
    // prevent constructor by default
    WindBurstDefinition& operator=(WindBurstDefinition const&);
    WindBurstDefinition(WindBurstDefinition const&);
    WindBurstDefinition();

public:
    // NOLINTBEGIN
    MCAPI void initialize(class EntityContext&, struct WindBurstComponent& component) const;

    MCAPI void setParticleDefinitionByName(std::string const& name);

    MCAPI void setSoundDefinitionByName(std::string const& name);

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class WindBurstDefinition>>&
            root
    );

    // NOLINTEND
};
