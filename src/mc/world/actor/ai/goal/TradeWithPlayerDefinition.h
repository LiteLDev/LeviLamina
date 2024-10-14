#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TradeWithPlayerDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    TradeWithPlayerDefinition& operator=(TradeWithPlayerDefinition const&);
    TradeWithPlayerDefinition(TradeWithPlayerDefinition const&);
    TradeWithPlayerDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TradeWithPlayerDefinition() = default;

    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TradeWithPlayerDefinition>>& root
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
