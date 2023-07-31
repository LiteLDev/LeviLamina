#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorDefinitionEventLoader {

public:
    // prevent constructor by default
    ActorDefinitionEventLoader& operator=(ActorDefinitionEventLoader const&) = delete;
    ActorDefinitionEventLoader(ActorDefinitionEventLoader const&)            = delete;
    ActorDefinitionEventLoader()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?loadEvent\@ActorDefinitionEventLoader\@\@SA?AVActorDefinitionEvent\@\@VValue\@Json\@\@AEBVSemVersion\@\@1PEBVActorEventResponseFactory\@\@\@Z
     */
    MCAPI static class ActorDefinitionEvent
    loadEvent(class Json::Value, class SemVersion const&, class SemVersion const&, class ActorEventResponseFactory const*);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_loadCollection\@ActorDefinitionEventLoader\@\@CAXAEAVActorDefinitionEvent\@\@AEBVValue\@Json\@\@AEBVSemVersion\@\@PEBVActorEventResponseFactory\@\@\@Z
     */
    MCAPI static void
    _loadCollection(class ActorDefinitionEvent&, class Json::Value const&, class SemVersion const&, class ActorEventResponseFactory const*);
    /**
     * @symbol
     * ?_loadEvent\@ActorDefinitionEventLoader\@\@CA?AVActorDefinitionEvent\@\@AEAVValue\@Json\@\@AEBVSemVersion\@\@PEBVActorEventResponseFactory\@\@\@Z
     */
    MCAPI static class ActorDefinitionEvent
    _loadEvent(class Json::Value&, class SemVersion const&, class ActorEventResponseFactory const*);
    // NOLINTEND
};
