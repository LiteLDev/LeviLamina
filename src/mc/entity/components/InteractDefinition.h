#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class InteractDefinition {
public:
    // prevent constructor by default
    InteractDefinition& operator=(InteractDefinition const&);
    InteractDefinition(InteractDefinition const&);
    InteractDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?addInteraction@InteractDefinition@@QEAAXAEBVInteraction@@@Z
    MCAPI void addInteraction(class Interaction const& interaction);

    // symbol: ?initialize@InteractDefinition@@QEBAXAEAVEntityContext@@AEAVInteractComponent@@@Z
    MCAPI void initialize(class EntityContext& entity, class InteractComponent& component) const;

    // symbol:
    // ?buildSchema@InteractDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VInteractDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class InteractDefinition>>&
            root
    );

    // NOLINTEND
};
