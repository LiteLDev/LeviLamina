#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TrustingDefinition {
public:
    // prevent constructor by default
    TrustingDefinition& operator=(TrustingDefinition const&);
    TrustingDefinition(TrustingDefinition const&);

public:
    // NOLINTBEGIN
    MCAPI TrustingDefinition();

    MCAPI void addTrustItemByName(std::string const& name);

    MCAPI void initialize(class EntityContext&, class TrustingComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TrustingDefinition>>&
            root
    );

    // NOLINTEND
};
