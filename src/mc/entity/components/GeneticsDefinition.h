#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GeneticsDefinition {
public:
    // prevent constructor by default
    GeneticsDefinition& operator=(GeneticsDefinition const&);
    GeneticsDefinition(GeneticsDefinition const&);

public:
    // NOLINTBEGIN
    MCAPI GeneticsDefinition();

    MCAPI void addGeneDefinition(struct GeneDefinition const& geneDefinition);

    MCAPI void initialize(class EntityContext& entity, class GeneticsComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GeneticsDefinition>>&
            root
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static float const DEFAULT_MUTATION_RATE;

    // NOLINTEND
};
