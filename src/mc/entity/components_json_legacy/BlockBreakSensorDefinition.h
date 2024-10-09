#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

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
    MCAPI BlockBreakSensorDefinition();

    MCAPI void initialize(class EntityContext&, class BlockBreakSensorComponent& component) const;

    MCAPI static void buildSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BlockBreakSensorDefinition>>& root
    );

    // NOLINTEND
};
