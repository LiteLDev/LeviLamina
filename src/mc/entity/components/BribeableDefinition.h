#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BribeableDefinition {
public:
    // prevent constructor by default
    BribeableDefinition& operator=(BribeableDefinition const&);
    BribeableDefinition(BribeableDefinition const&);
    BribeableDefinition();

public:
    // NOLINTBEGIN
    MCAPI void addBribeItem(class ItemDescriptor const& itemDescriptor);

    MCAPI void initialize(class EntityContext&, class BribeableComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BribeableDefinition>>&
            root
    );

    // NOLINTEND
};
