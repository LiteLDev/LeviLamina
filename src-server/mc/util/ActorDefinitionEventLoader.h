#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/JsonBetaState.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionEvent;
class ActorEventResponseFactory;
class MinEngineVersion;
namespace Json { class Value; }
// clang-format on

class ActorDefinitionEventLoader {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _loadCollection(::ActorDefinitionEvent& defEvent, ::Json::Value const& collection, ::MinEngineVersion const& minEngineVersion, ::ActorEventResponseFactory const* responseFactory, ::JsonBetaState useBetaFeatures);

    MCNAPI static ::ActorDefinitionEvent _loadEvent(::Json::Value& root, ::MinEngineVersion const& minEngineVersion, ::ActorEventResponseFactory const* responseFactory, ::JsonBetaState useBetaFeatures);
    // NOLINTEND

};
