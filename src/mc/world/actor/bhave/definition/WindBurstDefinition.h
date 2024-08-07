#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

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
    MCAPI void initialize(class EntityContext&, struct WindBurstComponent&) const;

    MCAPI void setParticleDefinitionByName(std::string const&);

    MCAPI void setSoundDefinitionByName(std::string const&);

    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class WindBurstDefinition>>&);

    // NOLINTEND
};
