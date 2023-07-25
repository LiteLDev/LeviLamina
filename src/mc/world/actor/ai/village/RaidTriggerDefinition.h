#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RaidTriggerDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAIDTRIGGERDEFINITION
public:
    RaidTriggerDefinition& operator=(RaidTriggerDefinition const&) = delete;
    RaidTriggerDefinition(RaidTriggerDefinition const&)            = delete;
    RaidTriggerDefinition()                                        = delete;
#endif

public:
    /**
     * @symbol
     * ?buildSchema\@RaidTriggerDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VRaidTriggerDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RaidTriggerDefinition>>&);
    /**
     * @symbol ?getStrictParsingVersion\@RaidTriggerDefinition\@\@SA?AVSemVersion\@\@XZ
     */
    MCAPI static class SemVersion getStrictParsingVersion();
};
