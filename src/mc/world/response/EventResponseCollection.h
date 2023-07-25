#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/Factory.h"
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct EventResponseCollection {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EVENTRESPONSECOLLECTION
public:
    EventResponseCollection& operator=(EventResponseCollection const&) = delete;
    EventResponseCollection(EventResponseCollection const&)            = delete;
    EventResponseCollection()                                          = delete;
#endif

public:
    /**
     * @symbol
     * ?buildSchema\@EventResponseCollection\@\@SA?AV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UEventResponseCollection\@\@\@JsonUtil\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVSemVersion\@\@AEBV?$Factory\@VEventResponse\@\@$$V\@\@\@Z
     */
    MCAPI static class std::shared_ptr<
        class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>>
    buildSchema(std::string const&, class SemVersion const&, class Factory<class EventResponse> const&);
};
