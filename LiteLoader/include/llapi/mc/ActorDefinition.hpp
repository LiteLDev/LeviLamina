/**
 * @file  ActorDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   1298298141
     * @symbol  ??0ActorDefinition\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI ActorDefinition(std::string const &);
    /**
     * @hash   739769249
     * @symbol  ?parse\@ActorDefinition\@\@QEAAXUDeserializeDataParams\@\@AEAVActorDefinitionDescriptor\@\@AEAVActorFactory\@\@W4LogArea\@\@\@Z
     */
    MCAPI void parse(struct DeserializeDataParams, class ActorDefinitionDescriptor &, class ActorFactory &, enum class LogArea);
    /**
     * @hash   -1043558979
     * @symbol  ?parseAttributes\@ActorDefinition\@\@QEAAXUDeserializeDataParams\@\@AEAVActorDefinitionDescriptor\@\@\@Z
     */
    MCAPI void parseAttributes(struct DeserializeDataParams, class ActorDefinitionDescriptor &);
    /**
     * @hash   1097953364
     * @symbol  ?parseEntityDescription\@ActorDefinition\@\@QEAAXUDeserializeDataParams\@\@\@Z
     */
    MCAPI void parseEntityDescription(struct DeserializeDataParams);
    /**
     * @hash   -1235619012
     * @symbol  ?parseEvents\@ActorDefinition\@\@QEAAXAEBVValue\@Json\@\@AEBVSemVersion\@\@1PEAVActorEventResponseFactory\@\@\@Z
     */
    MCAPI void parseEvents(class Json::Value const &, class SemVersion const &, class SemVersion const &, class ActorEventResponseFactory *);
    /**
     * @hash   -2013848803
     * @symbol  ?parsePermutations\@ActorDefinition\@\@QEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@1AEAVActorFactory\@\@\@Z
     */
    MCAPI void parsePermutations(class Json::Value &, class SemVersion const &, class SemVersion const &, class ActorFactory &);
    /**
     * @hash   192853409
     * @symbol  ?validatePermutationJson\@ActorDefinition\@\@QEAA_NAEAVValue\@Json\@\@\@Z
     */
    MCAPI bool validatePermutationJson(class Json::Value &);
    /**
     * @hash   1791981524
     * @symbol  ??1ActorDefinition\@\@QEAA\@XZ
     */
    MCAPI ~ActorDefinition();

};