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
     * @hash   -1686636471
     * @symbol  ??0InsideBlockEventMap\@\@QEAA\@AEBVBlock\@\@_N11AEBVActorDefinitionTrigger\@\@2\@Z
     */
    MCAPI InsideBlockEventMap(class Block const &, bool, bool, bool, class ActorDefinitionTrigger const &, class ActorDefinitionTrigger const &);
    /**
     * @hash   -1329674623
     * @symbol  ??0InsideBlockEventMap\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI InsideBlockEventMap(class InsideBlockEventMap const &);
    /**
     * @hash   460101771
     * @symbol  ?getBlock\@InsideBlockEventMap\@\@QEBA?AV?$not_null\@PEBVBlock\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class Block const *> getBlock() const;
    /**
     * @hash   -2052098108
     * @symbol  ?getEnteredEvent\@InsideBlockEventMap\@\@QEBAAEBVActorDefinitionTrigger\@\@XZ
     */
    MCAPI class ActorDefinitionTrigger const & getEnteredEvent() const;
    /**
     * @hash   -1426366250
     * @symbol  ?getExitedEvent\@InsideBlockEventMap\@\@QEBAAEBVActorDefinitionTrigger\@\@XZ
     */
    MCAPI class ActorDefinitionTrigger const & getExitedEvent() const;
    /**
     * @hash   1249575306
     * @symbol  ?isActorCurrentlyInside\@InsideBlockEventMap\@\@QEBA_NXZ
     */
    MCAPI bool isActorCurrentlyInside() const;
    /**
     * @hash   1315147738
     * @symbol  ?isIgnoringStates\@InsideBlockEventMap\@\@QEBA_NXZ
     */
    MCAPI bool isIgnoringStates() const;
    /**
     * @hash   -684142552
     * @symbol  ?isWatchingIfActorEnters\@InsideBlockEventMap\@\@QEBA_NXZ
     */
    MCAPI bool isWatchingIfActorEnters() const;
    /**
     * @hash   -1179802662
     * @symbol  ?isWatchingIfActorExits\@InsideBlockEventMap\@\@QEBA_NXZ
     */
    MCAPI bool isWatchingIfActorExits() const;
    /**
     * @hash   -1588992510
     * @symbol  ?setCurrentlyInside\@InsideBlockEventMap\@\@QEAAX_N\@Z
     */
    MCAPI void setCurrentlyInside(bool);
    /**
     * @hash   -766810318
     * @symbol  ?setWasInside\@InsideBlockEventMap\@\@QEAAX_N\@Z
     */
    MCAPI void setWasInside(bool);
    /**
     * @hash   2048938858
     * @symbol  ?wasActorInsideLastTick\@InsideBlockEventMap\@\@QEBA_NXZ
     */
    MCAPI bool wasActorInsideLastTick() const;
    /**
     * @hash   -1644519009
     * @symbol  ??1InsideBlockEventMap\@\@QEAA\@XZ
     */
    MCAPI ~InsideBlockEventMap();

};