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
    class InsideBlockEventMap& operator=(class InsideBlockEventMap const &) = delete;
    InsideBlockEventMap() = delete;
#endif

public:
    /**
     * @symbol  ??0InsideBlockEventMap\@\@QEAA\@AEBVBlock\@\@_N11AEBVActorDefinitionTrigger\@\@2\@Z
     */
    MCAPI InsideBlockEventMap(class Block const &, bool, bool, bool, class ActorDefinitionTrigger const &, class ActorDefinitionTrigger const &);
    /**
     * @symbol  ??0InsideBlockEventMap\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI InsideBlockEventMap(class InsideBlockEventMap const &);
    /**
     * @symbol  ?getBlock\@InsideBlockEventMap\@\@QEBA?AV?$not_null\@PEBVBlock\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class Block const *> getBlock() const;
    /**
     * @symbol  ?getEnteredEvent\@InsideBlockEventMap\@\@QEBAAEBVActorDefinitionTrigger\@\@XZ
     */
    MCAPI class ActorDefinitionTrigger const & getEnteredEvent() const;
    /**
     * @symbol  ?getExitedEvent\@InsideBlockEventMap\@\@QEBAAEBVActorDefinitionTrigger\@\@XZ
     */
    MCAPI class ActorDefinitionTrigger const & getExitedEvent() const;
    /**
     * @symbol  ?isActorCurrentlyInside\@InsideBlockEventMap\@\@QEBA_NXZ
     */
    MCAPI bool isActorCurrentlyInside() const;
    /**
     * @symbol  ?isIgnoringStates\@InsideBlockEventMap\@\@QEBA_NXZ
     */
    MCAPI bool isIgnoringStates() const;
    /**
     * @symbol  ?isWatchingIfActorEnters\@InsideBlockEventMap\@\@QEBA_NXZ
     */
    MCAPI bool isWatchingIfActorEnters() const;
    /**
     * @symbol  ?isWatchingIfActorExits\@InsideBlockEventMap\@\@QEBA_NXZ
     */
    MCAPI bool isWatchingIfActorExits() const;
    /**
     * @symbol  ?setCurrentlyInside\@InsideBlockEventMap\@\@QEAAX_N\@Z
     */
    MCAPI void setCurrentlyInside(bool);
    /**
     * @symbol  ?setWasInside\@InsideBlockEventMap\@\@QEAAX_N\@Z
     */
    MCAPI void setWasInside(bool);
    /**
     * @symbol  ?wasActorInsideLastTick\@InsideBlockEventMap\@\@QEBA_NXZ
     */
    MCAPI bool wasActorInsideLastTick() const;
    /**
     * @symbol  ??1InsideBlockEventMap\@\@QEAA\@XZ
     */
    MCAPI ~InsideBlockEventMap();

};