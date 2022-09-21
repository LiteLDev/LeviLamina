/**
 * @file  MC/TickWorldComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1636285852
     * @symbol ??0TickWorldComponent@@QEAA@XZ
     */
    MCAPI TickWorldComponent();
    /**
     * @hash   -1074823175
     * @symbol ??0TickWorldComponent@@QEAA@$$QEAV0@@Z
     */
    MCAPI TickWorldComponent(class TickWorldComponent &&);
    /**
     * @hash   384870754
     * @symbol ?getChunkRadius@TickWorldComponent@@QEBAIXZ
     */
    MCAPI unsigned int getChunkRadius() const;
    /**
     * @hash   1674677012
     * @symbol ?getMaxDistToPlayers@TickWorldComponent@@QEBAMXZ
     */
    MCAPI float getMaxDistToPlayers() const;
    /**
     * @hash   -980282225
     * @symbol ?getTickingArea@TickWorldComponent@@QEAA?AV?$shared_ptr@VITickingArea@@@std@@XZ
     */
    MCAPI class std::shared_ptr<class ITickingArea> getTickingArea();
    /**
     * @hash   -443817938
     * @symbol ?hasTickingArea@TickWorldComponent@@QEBA_NXZ
     */
    MCAPI bool hasTickingArea() const;
    /**
     * @hash   1310439226
     * @symbol ?initFromDefinition@TickWorldComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   -522913988
     * @symbol ?isAlwaysActive@TickWorldComponent@@QEBA_NXZ
     */
    MCAPI bool isAlwaysActive() const;
    /**
     * @hash   -1523757940
     * @symbol ??4TickWorldComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class TickWorldComponent & operator=(class TickWorldComponent &&);
    /**
     * @hash   -298120603
     * @symbol ?removeArea@TickWorldComponent@@QEAAXXZ
     */
    MCAPI void removeArea();
    /**
     * @hash   513436
     * @symbol ?setTickingArea@TickWorldComponent@@QEAAXAEAVActor@@V?$shared_ptr@VITickingArea@@@std@@@Z
     */
    MCAPI void setTickingArea(class Actor &, class std::shared_ptr<class ITickingArea>);
    /**
     * @hash   435997482
     * @symbol ?updateArea@TickWorldComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void updateArea(class Actor &);
    /**
     * @hash   -1273762286
     * @symbol ??1TickWorldComponent@@QEAA@XZ
     */
    MCAPI ~TickWorldComponent();

};