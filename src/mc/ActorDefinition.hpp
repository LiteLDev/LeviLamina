/**
 * @file  ActorDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorDefinition.
 *
 */
class ActorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDEFINITION
public:
    class ActorDefinition& operator=(class ActorDefinition const &) = delete;
    ActorDefinition(class ActorDefinition const &) = delete;
    ActorDefinition() = delete;
#endif

public:
    /**
     * @symbol  ??0ActorDefinition\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI ActorDefinition(std::string const &);
    /**
     * @symbol  ?parse\@ActorDefinition\@\@QEAAXUDeserializeDataParams\@\@AEAVActorDefinitionDescriptor\@\@AEAVActorFactory\@\@W4LogArea\@\@\@Z
     */
    MCAPI void parse(struct DeserializeDataParams, class ActorDefinitionDescriptor &, class ActorFactory &, enum class LogArea);
    /**
     * @symbol  ?parseAttributes\@ActorDefinition\@\@QEAAXUDeserializeDataParams\@\@AEAVActorDefinitionDescriptor\@\@\@Z
     */
    MCAPI void parseAttributes(struct DeserializeDataParams, class ActorDefinitionDescriptor &);
    /**
     * @symbol  ?parseEntityDescription\@ActorDefinition\@\@QEAAXUDeserializeDataParams\@\@\@Z
     */
    MCAPI void parseEntityDescription(struct DeserializeDataParams);
    /**
     * @symbol  ?parseEvents\@ActorDefinition\@\@QEAAXAEBVValue\@Json\@\@AEBVSemVersion\@\@1PEAVActorEventResponseFactory\@\@\@Z
     */
    MCAPI void parseEvents(class Json::Value const &, class SemVersion const &, class SemVersion const &, class ActorEventResponseFactory *);
    /**
     * @symbol  ?parsePermutations\@ActorDefinition\@\@QEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@1AEAVActorFactory\@\@\@Z
     */
    MCAPI void parsePermutations(class Json::Value &, class SemVersion const &, class SemVersion const &, class ActorFactory &);
    /**
     * @symbol  ?validatePermutationJson\@ActorDefinition\@\@QEAA_NAEAVValue\@Json\@\@\@Z
     */
    MCAPI bool validatePermutationJson(class Json::Value &);
    /**
     * @symbol  ??1ActorDefinition\@\@QEAA\@XZ
     */
    MCAPI ~ActorDefinition();

};