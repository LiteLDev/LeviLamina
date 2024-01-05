#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BoostableDefinition {
public:
    // prevent constructor by default
    BoostableDefinition& operator=(BoostableDefinition const&);
    BoostableDefinition(BoostableDefinition const&);
    BoostableDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?initialize@BoostableDefinition@@QEBAXAEAVEntityContext@@AEAVBoostableComponent@@@Z
    MCAPI void initialize(class EntityContext&, class BoostableComponent& component) const;

    // symbol:
    // ?buildSchema@BoostableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VBoostableDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BoostableDefinition>>&
            root
    );

    // NOLINTEND
};
