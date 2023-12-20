#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct CanJoinRaidDefinition {
public:
    // prevent constructor by default
    CanJoinRaidDefinition& operator=(CanJoinRaidDefinition const&);
    CanJoinRaidDefinition(CanJoinRaidDefinition const&);
    CanJoinRaidDefinition();

public:
    // NOLINTBEGIN
    // symbol:
    // ?buildSchema@CanJoinRaidDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UCanJoinRaidDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct CanJoinRaidDefinition>>&);

    // NOLINTEND
};
