#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorDefinitionEventLoader {
public:
    // prevent constructor by default
    ActorDefinitionEventLoader& operator=(ActorDefinitionEventLoader const&);
    ActorDefinitionEventLoader(ActorDefinitionEventLoader const&);
    ActorDefinitionEventLoader();

public:
    // NOLINTBEGIN
    // symbol:
    // ?loadEvent@ActorDefinitionEventLoader@@SA?AVActorDefinitionEvent@@VValue@Json@@AEBVSemVersion@@1PEBVActorEventResponseFactory@@@Z
    MCAPI static class ActorDefinitionEvent loadEvent(
        class Json::Value                      root,
        class SemVersion const&                engineVersion,
        class SemVersion const&                formatVersion,
        class ActorEventResponseFactory const* responseFactory
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_loadCollection@ActorDefinitionEventLoader@@CAXAEAVActorDefinitionEvent@@AEBVValue@Json@@AEBVSemVersion@@PEBVActorEventResponseFactory@@@Z
    MCAPI static void _loadCollection(
        class ActorDefinitionEvent&            defEvent,
        class Json::Value const&               collection,
        class SemVersion const&                engineVersion,
        class ActorEventResponseFactory const* responseFactory
    );

    // symbol:
    // ?_loadEvent@ActorDefinitionEventLoader@@CA?AVActorDefinitionEvent@@AEAVValue@Json@@AEBVSemVersion@@PEBVActorEventResponseFactory@@@Z
    MCAPI static class ActorDefinitionEvent _loadEvent(
        class Json::Value&                     root,
        class SemVersion const&                engineVersion,
        class ActorEventResponseFactory const* responseFactory
    );

    // NOLINTEND
};
