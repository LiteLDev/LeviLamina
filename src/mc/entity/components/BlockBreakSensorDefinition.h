#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BlockBreakSensorDefinition {
public:
    // prevent constructor by default
    BlockBreakSensorDefinition& operator=(BlockBreakSensorDefinition const&);
    BlockBreakSensorDefinition(BlockBreakSensorDefinition const&);

public:
    // NOLINTBEGIN
    // symbol: ??0BlockBreakSensorDefinition@@QEAA@XZ
    MCAPI BlockBreakSensorDefinition();

    // symbol: ?initialize@BlockBreakSensorDefinition@@QEBAXAEAVEntityContext@@AEAVBlockBreakSensorComponent@@@Z
    MCAPI void initialize(class EntityContext&, class BlockBreakSensorComponent& component) const;

    // symbol:
    // ?buildSchema@BlockBreakSensorDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VBlockBreakSensorDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BlockBreakSensorDefinition>>& root
    );

    // NOLINTEND
};
