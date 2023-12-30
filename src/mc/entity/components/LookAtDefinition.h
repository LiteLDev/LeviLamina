#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class LookAtDefinition {
public:
    // prevent constructor by default
    LookAtDefinition& operator=(LookAtDefinition const&);
    LookAtDefinition(LookAtDefinition const&);

public:
    // NOLINTBEGIN
    // symbol: ??0LookAtDefinition@@QEAA@XZ
    MCAPI LookAtDefinition();

    // symbol: ?initialize@LookAtDefinition@@QEBAXAEAVEntityContext@@AEAVLookAtComponent@@@Z
    MCAPI void initialize(class EntityContext& entity, class LookAtComponent& component) const;

    // symbol:
    // ?buildSchema@LookAtDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VLookAtDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class LookAtDefinition>>& root
    );

    // NOLINTEND
};
