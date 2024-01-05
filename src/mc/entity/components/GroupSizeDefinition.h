#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GroupSizeDefinition {
public:
    // prevent constructor by default
    GroupSizeDefinition& operator=(GroupSizeDefinition const&);
    GroupSizeDefinition(GroupSizeDefinition const&);
    GroupSizeDefinition();

public:
    // NOLINTBEGIN
    // symbol:
    // ?buildSchema@GroupSizeDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VGroupSizeDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GroupSizeDefinition>>&
            root
    );

    // NOLINTEND
};
