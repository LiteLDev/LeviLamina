/**
 * @file  MC/EventResponseFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EventResponseFactory.
 *
 */
class EventResponseFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EVENTRESPONSEFACTORY
public:
    class EventResponseFactory& operator=(class EventResponseFactory const &) = delete;
    EventResponseFactory(class EventResponseFactory const &) = delete;
    EventResponseFactory() = delete;
#endif

public:
    /**
     * @hash   1898676836
     * @symbol ?getSchema@EventResponseFactory@@QEBAAEBV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UEventResponseCollection@@@JsonUtil@@@std@@XZ
     */
    MCAPI class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>> const & getSchema() const;
    /**
     * @hash   607533011
     * @symbol ?initSchema@EventResponseFactory@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSemVersion@@@Z
     */
    MCAPI void initSchema(std::string const &, class SemVersion const &);

};