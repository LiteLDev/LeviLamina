/**
 * @file  MC/ActorTickNeededComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1841963335
     * @symbol ??0ActorTickNeededComponent@@QEAA@AEAVBlockSource@@@Z
     */
    MCAPI ActorTickNeededComponent(class BlockSource &);
    /**
     * @hash   150060805
     * @symbol ??0ActorTickNeededComponent@@QEAA@$$QEAV0@@Z
     */
    MCAPI ActorTickNeededComponent(class ActorTickNeededComponent &&);
    /**
     * @hash   -1270192932
     * @symbol ?getBlockSource@ActorTickNeededComponent@@QEAA?AV?$WeakRefT@U?$SharePtrRefTraits@VBlockSource@@@@@@XZ
     */
    MCAPI class WeakRefT<struct SharePtrRefTraits<class BlockSource>> getBlockSource();
    /**
     * @hash   -2141118040
     * @symbol ??4ActorTickNeededComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class ActorTickNeededComponent & operator=(class ActorTickNeededComponent &&);
    /**
     * @hash   -1842257792
     * @symbol ??1ActorTickNeededComponent@@QEAA@XZ
     */
    MCAPI ~ActorTickNeededComponent();

};