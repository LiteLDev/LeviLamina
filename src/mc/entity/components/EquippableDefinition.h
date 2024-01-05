#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

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
    // symbol: ?initialize@EquippableDefinition@@QEBAXAEAVEntityContext@@AEAVEquippableComponent@@@Z
    MCAPI void initialize(class EntityContext&, class EquippableComponent& component) const;

    // symbol:
    // ?buildSchema@EquippableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VEquippableDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EquippableDefinition>>&
            root
    );

    // NOLINTEND
};
