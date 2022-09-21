/**
 * @file  MC/CircuitSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CircuitSystem.
 *
 */
class CircuitSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CIRCUITSYSTEM
public:
    class CircuitSystem& operator=(class CircuitSystem const &) = delete;
    CircuitSystem(class CircuitSystem const &) = delete;
#endif

public:
    /**
     * @hash   -1554597644
     * @symbol ??0CircuitSystem@@QEAA@XZ
     */
    MCAPI CircuitSystem();
    /**
     * @hash   428588273
     * @symbol ?evaluate@CircuitSystem@@QEAAXPEAVBlockSource@@@Z
     */
    MCAPI void evaluate(class BlockSource *);
    /**
     * @hash   1882293047
     * @symbol ?getStrength@CircuitSystem@@QEAAHAEBVBlockPos@@@Z
     */
    MCAPI int getStrength(class BlockPos const &);
    /**
     * @hash   1094364540
     * @symbol ?invalidatePos@CircuitSystem@@QEAAXAEBVBlockPos@@@Z
     */
    MCAPI void invalidatePos(class BlockPos const &);
    /**
     * @hash   806145549
     * @symbol ?isAvailableAt@CircuitSystem@@QEAA_NAEBVBlockPos@@@Z
     */
    MCAPI bool isAvailableAt(class BlockPos const &);
    /**
     * @hash   1855532428
     * @symbol ?preSetupPoweredBlocks@CircuitSystem@@QEAAXAEBVChunkPos@@@Z
     */
    MCAPI void preSetupPoweredBlocks(class ChunkPos const &);
    /**
     * @hash   -284330182
     * @symbol ?removeComponents@CircuitSystem@@QEAAXAEBVBlockPos@@@Z
     */
    MCAPI void removeComponents(class BlockPos const &);
    /**
     * @hash   -1776832137
     * @symbol ?setStrength@CircuitSystem@@QEAAXAEBVBlockPos@@H@Z
     */
    MCAPI void setStrength(class BlockPos const &, int);
    /**
     * @hash   414442773
     * @symbol ?updateBlocks@CircuitSystem@@QEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void updateBlocks(class BlockSource &, class BlockPos const &);
    /**
     * @hash   1681326319
     * @symbol ?updateDependencies@CircuitSystem@@QEAAXPEAVBlockSource@@@Z
     */
    MCAPI void updateDependencies(class BlockSource *);

//private:
    /**
     * @hash   -202296068
     * @symbol ?createComponent@CircuitSystem@@AEAAPEAVBaseCircuitComponent@@AEBVBlockPos@@EV?$unique_ptr@VBaseCircuitComponent@@U?$default_delete@VBaseCircuitComponent@@@std@@@std@@@Z
     */
    MCAPI class BaseCircuitComponent * createComponent(class BlockPos const &, unsigned char, std::unique_ptr<class BaseCircuitComponent>);
    /**
     * @hash   -1977158671
     * @symbol ?evaluateComponents@CircuitSystem@@AEAAX_N@Z
     */
    MCAPI void evaluateComponents(bool);
    /**
     * @hash   -1044451154
     * @symbol ?updateIndividualBlock@CircuitSystem@@AEAAXV?$not_null@PEAVBaseCircuitComponent@@@gsl@@AEBVBlockPos@@1AEAVBlockSource@@@Z
     */
    MCAPI void updateIndividualBlock(class gsl::not_null<class BaseCircuitComponent *>, class BlockPos const &, class BlockPos const &, class BlockSource &);

private:

};