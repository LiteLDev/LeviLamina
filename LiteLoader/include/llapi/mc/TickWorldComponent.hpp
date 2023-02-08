/**
 * @file  TickWorldComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TickWorldComponent.
 *
 */
class TickWorldComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKWORLDCOMPONENT
public:
    class TickWorldComponent& operator=(class TickWorldComponent const &) = delete;
    TickWorldComponent(class TickWorldComponent const &) = delete;
#endif

public:
    /**
     * @hash   1726726708
     * @symbol  ??0TickWorldComponent\@\@QEAA\@XZ
     */
    MCAPI TickWorldComponent();
    /**
     * @hash   -2006777911
     * @symbol  ??0TickWorldComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI TickWorldComponent(class TickWorldComponent &&);
    /**
     * @hash   635883954
     * @symbol  ?getChunkRadius\@TickWorldComponent\@\@QEBAIXZ
     */
    MCAPI unsigned int getChunkRadius() const;
    /**
     * @hash   1940205156
     * @symbol  ?getMaxDistToPlayers\@TickWorldComponent\@\@QEBAMXZ
     */
    MCAPI float getMaxDistToPlayers() const;
    /**
     * @hash   -1912236961
     * @symbol  ?getTickingArea\@TickWorldComponent\@\@QEAA?AV?$shared_ptr\@VITickingArea\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class ITickingArea> getTickingArea();
    /**
     * @hash   -1375772674
     * @symbol  ?hasTickingArea\@TickWorldComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasTickingArea() const;
    /**
     * @hash   378484490
     * @symbol  ?initFromDefinition\@TickWorldComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   -1373498932
     * @symbol  ?isAlwaysActive\@TickWorldComponent\@\@QEBA_NXZ
     */
    MCAPI bool isAlwaysActive() const;
    /**
     * @hash   1839254620
     * @symbol  ??4TickWorldComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class TickWorldComponent & operator=(class TickWorldComponent &&);
    /**
     * @hash   -1230075339
     * @symbol  ?removeArea\@TickWorldComponent\@\@QEAAXXZ
     */
    MCAPI void removeArea();
    /**
     * @hash   -931410548
     * @symbol  ?setTickingArea\@TickWorldComponent\@\@QEAAXAEAVActor\@\@V?$shared_ptr\@VITickingArea\@\@\@std\@\@\@Z
     */
    MCAPI void setTickingArea(class Actor &, class std::shared_ptr<class ITickingArea>);
    /**
     * @hash   -496141766
     * @symbol  ?updateArea\@TickWorldComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void updateArea(class Actor &);
    /**
     * @hash   2089250274
     * @symbol  ??1TickWorldComponent\@\@QEAA\@XZ
     */
    MCAPI ~TickWorldComponent();

};