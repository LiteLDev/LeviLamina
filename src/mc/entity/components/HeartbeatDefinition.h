#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class HeartbeatDefinition {
public:
    // prevent constructor by default
    HeartbeatDefinition& operator=(HeartbeatDefinition const&);
    HeartbeatDefinition(HeartbeatDefinition const&);
    HeartbeatDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?initialize@HeartbeatDefinition@@QEBAXAEAVEntityContext@@AEAVHeartbeatServerComponent@@@Z
    MCAPI void initialize(class EntityContext& entity, class HeartbeatServerComponent& component) const;

    // symbol:
    // ?buildSchema@HeartbeatDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VHeartbeatDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class HeartbeatDefinition>>&
            root
    );

    // NOLINTEND
};
