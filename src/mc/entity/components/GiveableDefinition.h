#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GiveableDefinition {
public:
    // prevent constructor by default
    GiveableDefinition& operator=(GiveableDefinition const&);
    GiveableDefinition(GiveableDefinition const&);
    GiveableDefinition();

public:
    // NOLINTBEGIN
    // symbol: ?addGiveableTrigger@GiveableDefinition@@QEAAXAEBUGiveableTrigger@@@Z
    MCAPI void addGiveableTrigger(struct GiveableTrigger const& trigger);

    // symbol: ?initialize@GiveableDefinition@@QEBAXAEAVEntityContext@@AEAVGiveableComponent@@@Z
    MCAPI void initialize(class EntityContext&, class GiveableComponent& component) const;

    // symbol:
    // ?buildSchema@GiveableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VGiveableDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GiveableDefinition>>&
            root
    );

    // NOLINTEND
};
