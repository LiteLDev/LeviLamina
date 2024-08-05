#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/TypeExecutingEvent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class DefinitionEventLoader {
public:
    // prevent constructor by default
    DefinitionEventLoader& operator=(DefinitionEventLoader const&);
    DefinitionEventLoader(DefinitionEventLoader const&);
    DefinitionEventLoader();

public:
    // NOLINTBEGIN
    MCAPI static class DefinitionEvent loadEvent(
        class Json::Value                 root,
        class SemVersion const&           engineVersion,
        ::TypeExecutingEvent              eventCaller,
        class EventResponseFactory const* responseFactory
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _loadCollection(
        class DefinitionEvent&            defEvent,
        class Json::Value const&          collection,
        class SemVersion const&           engineVersion,
        ::TypeExecutingEvent              eventCaller,
        class EventResponseFactory const* responseFactory
    );

    // NOLINTEND
};
