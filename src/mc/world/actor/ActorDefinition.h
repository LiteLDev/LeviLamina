#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorDefinition {

public:
    // prevent constructor by default
    ActorDefinition& operator=(ActorDefinition const&) = delete;
    ActorDefinition(ActorDefinition const&)            = delete;
    ActorDefinition()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0ActorDefinition\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI ActorDefinition(std::string const&);
    /**
     * @symbol
     * ?parse\@ActorDefinition\@\@QEAA?AW4ActorDefinitionParseStatus\@\@UDeserializeDataParams\@\@AEAVActorDefinitionDescriptor\@\@AEAVActorFactory\@\@W4LogArea\@\@\@Z
     */
    MCAPI enum class ActorDefinitionParseStatus
    parse(struct DeserializeDataParams, class ActorDefinitionDescriptor&, class ActorFactory&, enum class LogArea);
    /**
     * @symbol ?parseAttributes\@ActorDefinition\@\@QEAAXUDeserializeDataParams\@\@AEAVActorDefinitionDescriptor\@\@\@Z
     */
    MCAPI void parseAttributes(struct DeserializeDataParams, class ActorDefinitionDescriptor&);
    /**
     * @symbol ?parseEntityDescription\@ActorDefinition\@\@QEAAXUDeserializeDataParams\@\@\@Z
     */
    MCAPI void parseEntityDescription(struct DeserializeDataParams);
    /**
     * @symbol
     * ?parseEvents\@ActorDefinition\@\@QEAAXAEBVValue\@Json\@\@AEBVSemVersion\@\@1PEAVActorEventResponseFactory\@\@\@Z
     */
    MCAPI void
    parseEvents(class Json::Value const&, class SemVersion const&, class SemVersion const&, class ActorEventResponseFactory*);
    /**
     * @symbol ?parsePermutations\@ActorDefinition\@\@QEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@1AEAVActorFactory\@\@\@Z
     */
    MCAPI void
    parsePermutations(class Json::Value&, class SemVersion const&, class SemVersion const&, class ActorFactory&);
    /**
     * @symbol ?validatePermutationJson\@ActorDefinition\@\@QEAA_NAEAVValue\@Json\@\@\@Z
     */
    MCAPI bool validatePermutationJson(class Json::Value&);
    /**
     * @symbol ??1ActorDefinition\@\@QEAA\@XZ
     */
    MCAPI ~ActorDefinition();
    // NOLINTEND
};
