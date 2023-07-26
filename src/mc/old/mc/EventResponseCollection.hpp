/**
 * @file  EventResponseCollection.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure EventResponseCollection.
 *
 */
struct EventResponseCollection {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EVENTRESPONSECOLLECTION
public:
    struct EventResponseCollection& operator=(struct EventResponseCollection const &) = delete;
    EventResponseCollection(struct EventResponseCollection const &) = delete;
    EventResponseCollection() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@EventResponseCollection\@\@SA?AV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UEventResponseCollection\@\@\@JsonUtil\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVSemVersion\@\@AEBV?$Factory\@VEventResponse\@\@$$V\@\@\@Z
     */
    MCAPI static class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>> buildSchema(std::string const &, class SemVersion const &, class Factory<class EventResponse> const &);

};