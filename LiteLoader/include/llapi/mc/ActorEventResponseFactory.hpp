/**
 * @file  MC/ActorEventResponseFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorEventResponseFactory.
 *
 */
class ActorEventResponseFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTOREVENTRESPONSEFACTORY
public:
    class ActorEventResponseFactory& operator=(class ActorEventResponseFactory const &) = delete;
    ActorEventResponseFactory(class ActorEventResponseFactory const &) = delete;
    ActorEventResponseFactory() = delete;
#endif

public:
    /**
     * @hash   2117977221
     * @symbol ?initSchema@ActorEventResponseFactory@@QEAAXXZ
     */
    MCAPI void initSchema();
    /**
     * @hash   -1749596144
     * @symbol ?initializeFactory@ActorEventResponseFactory@@QEAAXAEBVExperiments@@@Z
     */
    MCAPI void initializeFactory(class Experiments const &);

};