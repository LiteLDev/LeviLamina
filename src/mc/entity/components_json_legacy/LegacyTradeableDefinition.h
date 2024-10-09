#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class LegacyTradeableDefinition {
public:
    // prevent constructor by default
    LegacyTradeableDefinition& operator=(LegacyTradeableDefinition const&);
    LegacyTradeableDefinition(LegacyTradeableDefinition const&);

public:
    // NOLINTBEGIN
    MCAPI LegacyTradeableDefinition();

    MCAPI void initialize(class EntityContext& entity, class LegacyTradeableComponent&) const;

    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class LegacyTradeableDefinition>>& root
    );

    // NOLINTEND
};
