/**
 * @file  TickWorldComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0TickWorldComponent\@\@QEAA\@XZ
     */
    MCAPI TickWorldComponent();
    /**
     * @symbol  ??0TickWorldComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI TickWorldComponent(class TickWorldComponent &&);
    /**
     * @symbol  ?getChunkRadius\@TickWorldComponent\@\@QEBAIXZ
     */
    MCAPI unsigned int getChunkRadius() const;
    /**
     * @symbol  ?getMaxDistToPlayers\@TickWorldComponent\@\@QEBAMXZ
     */
    MCAPI float getMaxDistToPlayers() const;
    /**
     * @symbol  ?getTickingArea\@TickWorldComponent\@\@QEAA?AV?$shared_ptr\@VITickingArea\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class ITickingArea> getTickingArea();
    /**
     * @symbol  ?hasTickingArea\@TickWorldComponent\@\@QEBA_NXZ
     */
    MCAPI bool hasTickingArea() const;
    /**
     * @symbol  ?initFromDefinition\@TickWorldComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @symbol  ?isAlwaysActive\@TickWorldComponent\@\@QEBA_NXZ
     */
    MCAPI bool isAlwaysActive() const;
    /**
     * @symbol  ??4TickWorldComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class TickWorldComponent & operator=(class TickWorldComponent &&);
    /**
     * @symbol  ?removeArea\@TickWorldComponent\@\@QEAAXXZ
     */
    MCAPI void removeArea();
    /**
     * @symbol  ?setTickingArea\@TickWorldComponent\@\@QEAAXAEAVActor\@\@V?$shared_ptr\@VITickingArea\@\@\@std\@\@\@Z
     */
    MCAPI void setTickingArea(class Actor &, class std::shared_ptr<class ITickingArea>);
    /**
     * @symbol  ?updateArea\@TickWorldComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void updateArea(class Actor &);
    /**
     * @symbol  ??1TickWorldComponent\@\@QEAA\@XZ
     */
    MCAPI ~TickWorldComponent();

};