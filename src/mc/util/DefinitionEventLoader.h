#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class DefinitionEventLoader {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFINITIONEVENTLOADER
public:
    DefinitionEventLoader& operator=(DefinitionEventLoader const&) = delete;
    DefinitionEventLoader(DefinitionEventLoader const&)            = delete;
    DefinitionEventLoader()                                        = delete;
#endif

public:
    /**
     * @symbol
     * ?loadEvent\@DefinitionEventLoader\@\@SA?AVDefinitionEvent\@\@VValue\@Json\@\@AEBVSemVersion\@\@W4TypeExecutingEvent\@\@PEBVEventResponseFactory\@\@\@Z
     */
    MCAPI static class DefinitionEvent
    loadEvent(class Json::Value, class SemVersion const&, enum class TypeExecutingEvent, class EventResponseFactory const*);

    // private:
    /**
     * @symbol
     * ?_loadCollection\@DefinitionEventLoader\@\@CAXAEAVDefinitionEvent\@\@AEBVValue\@Json\@\@AEBVSemVersion\@\@W4TypeExecutingEvent\@\@PEBVEventResponseFactory\@\@\@Z
     */
    MCAPI static void
    _loadCollection(class DefinitionEvent&, class Json::Value const&, class SemVersion const&, enum class TypeExecutingEvent, class EventResponseFactory const*);

private:
};
