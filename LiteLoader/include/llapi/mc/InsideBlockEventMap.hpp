/**
 * @file  InsideBlockEventMap.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InsideBlockEventMap.
 *
 */
class InsideBlockEventMap {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEBLOCKEVENTMAP
public:
    InsideBlockEventMap() = delete;
#endif

public:
    /**
     * @symbol ??0InsideBlockEventMap\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI InsideBlockEventMap(class InsideBlockEventMap const &);
    /**
     * @symbol ?getEnteredEvent\@InsideBlockEventMap\@\@QEBAAEBVActorDefinitionTrigger\@\@XZ
     */
    MCAPI class ActorDefinitionTrigger const & getEnteredEvent() const;
    /**
     * @symbol ?getExitedEvent\@InsideBlockEventMap\@\@QEBAAEBVActorDefinitionTrigger\@\@XZ
     */
    MCAPI class ActorDefinitionTrigger const & getExitedEvent() const;
    /**
     * @symbol ?isActorCurrentlyInside\@InsideBlockEventMap\@\@QEBA_NXZ
     */
    MCAPI bool isActorCurrentlyInside() const;
    /**
     * @symbol ?isWatchingIfActorEnters\@InsideBlockEventMap\@\@QEBA_NXZ
     */
    MCAPI bool isWatchingIfActorEnters() const;
    /**
     * @symbol ?isWatchingIfActorExits\@InsideBlockEventMap\@\@QEBA_NXZ
     */
    MCAPI bool isWatchingIfActorExits() const;
    /**
     * @symbol ??4InsideBlockEventMap\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class InsideBlockEventMap & operator=(class InsideBlockEventMap const &);
    /**
     * @symbol ?wasActorInsideLastTick\@InsideBlockEventMap\@\@QEBA_NXZ
     */
    MCAPI bool wasActorInsideLastTick() const;
    /**
     * @symbol ??1InsideBlockEventMap\@\@QEAA\@XZ
     */
    MCAPI ~InsideBlockEventMap();

};
