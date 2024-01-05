#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class InsideBlockNotifierDefinition {
public:
    // prevent constructor by default
    InsideBlockNotifierDefinition& operator=(InsideBlockNotifierDefinition const&);
    InsideBlockNotifierDefinition(InsideBlockNotifierDefinition const&);
    InsideBlockNotifierDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?initialize@InsideBlockNotifierDefinition@@QEBAXAEAVEntityContext@@AEAVInsideBlockNotifierComponent@@@Z
    MCAPI void initialize(class EntityContext&, class InsideBlockNotifierComponent& component) const;

    // symbol:
    // ?buildSchema@InsideBlockNotifierDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VInsideBlockNotifierDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class InsideBlockNotifierDefinition>>& root
    );

    // NOLINTEND
};
