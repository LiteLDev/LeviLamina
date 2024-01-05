#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BlockClimberDefinition {
public:
    // prevent constructor by default
    BlockClimberDefinition& operator=(BlockClimberDefinition const&);
    BlockClimberDefinition(BlockClimberDefinition const&);
    BlockClimberDefinition();

public:
    // NOLINTBEGIN
    // symbol:
    // ?buildSchema@BlockClimberDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VBlockClimberDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BlockClimberDefinition>>&
            root
    );

    // NOLINTEND
};
