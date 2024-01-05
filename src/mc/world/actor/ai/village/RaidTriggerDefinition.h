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
    // symbol:
    // ?buildSchema@RaidTriggerDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VRaidTriggerDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RaidTriggerDefinition>>&
            root
    );

    // symbol: ?getStrictParsingVersion@RaidTriggerDefinition@@SA?AVSemVersion@@XZ
    MCAPI static class SemVersion getStrictParsingVersion();

    // NOLINTEND
};
