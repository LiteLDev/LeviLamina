/**
 * @file  ActorTickNeededComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
NCLUDE_PART_VANILLALEVELCHUNKUPGRADE
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorTickNeededComponent.
 *
 */
class ActorTickNeededComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORTICKNEEDEDCOMPONENT
public:
    class ActorTickNeededComponent& operator=(class ActorTickNeededComponent const &) = delete;
    ActorTickNeededComponent(class ActorTickNeededComponent const &) = delete;
    ActorTickNeededComponent() = delete;
#endif

public:
    /**
     * @hash   880655815
     * @symbol  ??0ActorTickNeededComponent\@\@QEAA\@AEAVBlockSource\@\@\@Z
     */
    MCAPI ActorTickNeededComponent(class BlockSource &);
    /**
     * @hash   75414917
     * @symbol  ??0ActorTickNeededComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ActorTickNeededComponent(class ActorTickNeededComponent &&);
    /**
     * @hash   2063482220
     * @symbol  ?getBlockSource\@ActorTickNeededComponent\@\@QEAA?AV?$WeakRefT\@U?$SharePtrRefTraits\@VBlockSource\@\@\@\@\@\@XZ
     */
    MCAPI class WeakRefT<struct SharePtrRefTraits<class BlockSource>> getBlockSource();
    /**
     * @hash   1192541736
     * @symbol  ??4ActorTickNeededComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ActorTickNeededComponent & operator=(class ActorTickNeededComponent &&);
    /**
     * @hash   -2049510896
     * @symbol  ??1ActorTickNeededComponent\@\@QEAA\@XZ
     */
    MCAPI ~ActorTickNeededComponent();

};