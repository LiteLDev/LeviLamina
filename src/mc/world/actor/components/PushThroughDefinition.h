#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct PushThroughDefinition {
public:
    // prevent constructor by default
    PushThroughDefinition& operator=(PushThroughDefinition const&);
    PushThroughDefinition(PushThroughDefinition const&);
    PushThroughDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?initialize@PushThroughDefinition@@QEBAXAEAVEntityContext@@@Z
    MCAPI void initialize(class EntityContext& entity) const;

    // symbol:
    // ?buildSchema@PushThroughDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UPushThroughDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct PushThroughDefinition>>&
            root
    );

    // NOLINTEND
};
