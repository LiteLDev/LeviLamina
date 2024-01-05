#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DashDefinition {
public:
    // prevent constructor by default
    DashDefinition& operator=(DashDefinition const&);
    DashDefinition(DashDefinition const&);
    DashDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?initialize@DashDefinition@@QEBAXAEAVEntityContext@@AEAVDashComponent@@@Z
    MCAPI void initialize(class EntityContext& entity, class DashComponent& component) const;

    // symbol: ?uninitialize@DashDefinition@@QEBAXAEAVEntityContext@@AEAVDashComponent@@@Z
    MCAPI void uninitialize(class EntityContext& entity, class DashComponent& component) const;

    // symbol:
    // ?buildSchema@DashDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDashDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DashDefinition>>& root
    );

    // NOLINTEND
};
