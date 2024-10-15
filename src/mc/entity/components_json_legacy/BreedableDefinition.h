#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BreedableDefinition {
public:
    // prevent constructor by default
    BreedableDefinition& operator=(BreedableDefinition const&);
    BreedableDefinition(BreedableDefinition const&);

public:
    // NOLINTBEGIN
    MCAPI BreedableDefinition();

    MCAPI void addBreedItem(class ItemDescriptor const& itemDescriptor);

    MCAPI void addBreedableType(struct BreedableType const& breedType);

    MCAPI void addEnvironmentRequirement(struct EnvironmentRequirement const& envReq);

    MCAPI void addParentCentricAttributeBlending(std::string const& attributesToUseParentCentricBlendingFor);

    MCAPI void initialize(class EntityContext&, class BreedableComponent& component) const;

    MCAPI void setMutationStrategy(std::string const& strategyCased);

    MCAPI ~BreedableDefinition();

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BreedableDefinition>>&
            root
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
