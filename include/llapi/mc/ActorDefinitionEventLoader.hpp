/**
 * @file  ActorDefinitionEventLoader.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorDefinitionEventLoader.
 *
 */
class ActorDefinitionEventLoader {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDEFINITIONEVENTLOADER
public:
    class ActorDefinitionEventLoader& operator=(class ActorDefinitionEventLoader const &) = delete;
    ActorDefinitionEventLoader(class ActorDefinitionEventLoader const &) = delete;
    ActorDefinitionEventLoader() = delete;
#endif

public:
    /**
     * @symbol  ?loadEvent\@ActorDefinitionEventLoader\@\@SA?AVActorDefinitionEvent\@\@VValue\@Json\@\@AEBVSemVersion\@\@1PEBVActorEventResponseFactory\@\@\@Z
     */
    MCAPI static class ActorDefinitionEvent loadEvent(class Json::Value, class SemVersion const &, class SemVersion const &, class ActorEventResponseFactory const *);

//private:
    /**
     * @symbol  ?_loadCollection\@ActorDefinitionEventLoader\@\@CAXAEAVActorDefinitionEvent\@\@AEBVValue\@Json\@\@AEBVSemVersion\@\@PEBVActorEventResponseFactory\@\@\@Z
     */
    MCAPI static void _loadCollection(class ActorDefinitionEvent &, class Json::Value const &, class SemVersion const &, class ActorEventResponseFactory const *);
    /**
     * @symbol  ?_loadEvent\@ActorDefinitionEventLoader\@\@CA?AVActorDefinitionEvent\@\@AEAVValue\@Json\@\@AEBVSemVersion\@\@PEBVActorEventResponseFactory\@\@\@Z
     */
    MCAPI static class ActorDefinitionEvent _loadEvent(class Json::Value &, class SemVersion const &, class ActorEventResponseFactory const *);

private:

};