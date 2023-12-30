#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class LeashableDefinition {
public:
    // prevent constructor by default
    LeashableDefinition& operator=(LeashableDefinition const&);
    LeashableDefinition(LeashableDefinition const&);

public:
    // NOLINTBEGIN
    // symbol: ??0LeashableDefinition@@QEAA@XZ
    MCAPI LeashableDefinition();

    // symbol:
    // ?buildSchema@LeashableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VLeashableDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class LeashableDefinition>>&
            root
    );

    // NOLINTEND
};
