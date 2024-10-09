#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RaidTriggerDefinition {
public:
    // prevent constructor by default
    RaidTriggerDefinition& operator=(RaidTriggerDefinition const&);
    RaidTriggerDefinition(RaidTriggerDefinition const&);
    RaidTriggerDefinition();

public:
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RaidTriggerDefinition>>&
            root
    );

    MCAPI static class SemVersion getStrictParsingVersion();

    // NOLINTEND
};
