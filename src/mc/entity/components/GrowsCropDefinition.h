#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GrowsCropDefinition {
public:
    // prevent constructor by default
    GrowsCropDefinition& operator=(GrowsCropDefinition const&);
    GrowsCropDefinition(GrowsCropDefinition const&);

public:
    // NOLINTBEGIN
    // symbol: ??0GrowsCropDefinition@@QEAA@XZ
    MCAPI GrowsCropDefinition();

    // symbol: ?initialize@GrowsCropDefinition@@QEBAXAEAVEntityContext@@AEAVGrowsCropComponent@@@Z
    MCAPI void initialize(class EntityContext&, class GrowsCropComponent& component) const;

    // symbol:
    // ?buildSchema@GrowsCropDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VGrowsCropDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GrowsCropDefinition>>&
            root
    );

    // NOLINTEND
};
