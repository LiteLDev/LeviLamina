/**
 * @file  ActorEventResponseCollection.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ActorEventResponseCollection.
 *
 */
struct ActorEventResponseCollection {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTOREVENTRESPONSECOLLECTION
public:
    struct ActorEventResponseCollection& operator=(struct ActorEventResponseCollection const &) = delete;
    ActorEventResponseCollection(struct ActorEventResponseCollection const &) = delete;
    ActorEventResponseCollection() = delete;
#endif

public:
    /**
     * @symbol  ?buildSchema\@ActorEventResponseCollection\@\@SA?AV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UActorEventResponseCollection\@\@\@JsonUtil\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVSemVersion\@\@AEBV?$Factory\@VActorEventResponse\@\@$$V\@\@\@Z
     */
    MCAPI static class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct ActorEventResponseCollection>> buildSchema(std::string const &, class SemVersion const &, class Factory<class ActorEventResponse> const &);

};