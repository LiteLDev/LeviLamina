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
    RaidTriggerDefinition& operator=(RaidTriggerDefinition const&) = delete;
    RaidTriggerDefinition(RaidTriggerDefinition const&)            = delete;
    RaidTriggerDefinition()                                        = delete;

public:
    /**
     * @symbol
     * ?buildSchema\@RaidTriggerDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VRaidTriggerDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                      class JsonUtil::EmptyClass,
                                      class RaidTriggerDefinition>>&); // NOLINT
    /**
     * @symbol ?getStrictParsingVersion\@RaidTriggerDefinition\@\@SA?AVSemVersion\@\@XZ
     */
    MCAPI static class SemVersion getStrictParsingVersion(); // NOLINT
};
