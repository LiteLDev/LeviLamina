/**
 * @file  RaidTriggerDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class RaidTriggerDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAIDTRIGGERDEFINITION
public:
    class RaidTriggerDefinition& operator=(class RaidTriggerDefinition const &) = delete;
    RaidTriggerDefinition(class RaidTriggerDefinition const &) = delete;
    RaidTriggerDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@RaidTriggerDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VRaidTriggerDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class RaidTriggerDefinition>> &);
    /**
     * @symbol  ?getStrictParsingVersion\@RaidTriggerDefinition\@\@SA?AVSemVersion\@\@XZ
     */
    MCAPI static class SemVersion getStrictParsingVersion();

};