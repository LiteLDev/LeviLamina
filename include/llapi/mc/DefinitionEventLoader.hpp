/**
 * @file  DefinitionEventLoader.hpp
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
 * @brief MC class DefinitionEventLoader.
 *
 */
class DefinitionEventLoader {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFINITIONEVENTLOADER
public:
    class DefinitionEventLoader& operator=(class DefinitionEventLoader const &) = delete;
    DefinitionEventLoader(class DefinitionEventLoader const &) = delete;
    DefinitionEventLoader() = delete;
#endif

public:
    /**
     * @symbol  ?loadEvent\@DefinitionEventLoader\@\@SA?AVDefinitionEvent\@\@VValue\@Json\@\@AEBVSemVersion\@\@W4TypeExecutingEvent\@\@PEBVEventResponseFactory\@\@\@Z
     */
    MCAPI static class DefinitionEvent loadEvent(class Json::Value, class SemVersion const &, enum class TypeExecutingEvent, class EventResponseFactory const *);

//private:
    /**
     * @symbol  ?_loadCollection\@DefinitionEventLoader\@\@CAXAEAVDefinitionEvent\@\@AEBVValue\@Json\@\@AEBVSemVersion\@\@W4TypeExecutingEvent\@\@PEBVEventResponseFactory\@\@\@Z
     */
    MCAPI static void _loadCollection(class DefinitionEvent &, class Json::Value const &, class SemVersion const &, enum class TypeExecutingEvent, class EventResponseFactory const *);

private:

};