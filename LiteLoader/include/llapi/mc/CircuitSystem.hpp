/**
 * @file  CircuitSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1636751612
     * @symbol  ??0CircuitSystem\@\@QEAA\@XZ
     */
    MCAPI CircuitSystem();
    /**
     * @hash   346449681
     * @symbol  ?evaluate\@CircuitSystem\@\@QEAAXPEAVBlockSource\@\@\@Z
     */
    MCAPI void evaluate(class BlockSource *);
    /**
     * @hash   1800185207
     * @symbol  ?getStrength\@CircuitSystem\@\@QEAAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getStrength(class BlockPos const &);
    /**
     * @hash   1012272076
     * @symbol  ?invalidatePos\@CircuitSystem\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void invalidatePos(class BlockPos const &);
    /**
     * @hash   724053085
     * @symbol  ?isAvailableAt\@CircuitSystem\@\@QEAA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isAvailableAt(class BlockPos const &);
    /**
     * @hash   1773439964
     * @symbol  ?preSetupPoweredBlocks\@CircuitSystem\@\@QEAAXAEBVChunkPos\@\@\@Z
     */
    MCAPI void preSetupPoweredBlocks(class ChunkPos const &);
    /**
     * @hash   -366422646
     * @symbol  ?removeComponents\@CircuitSystem\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void removeComponents(class BlockPos const &);
    /**
     * @hash   -1858924601
     * @symbol  ?setStrength\@CircuitSystem\@\@QEAAXAEBVBlockPos\@\@H\@Z
     */
    MCAPI void setStrength(class BlockPos const &, int);
    /**
     * @hash   332365685
     * @symbol  ?updateBlocks\@CircuitSystem\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void updateBlocks(class BlockSource &, class BlockPos const &);
    /**
     * @hash   1599264607
     * @symbol  ?updateDependencies\@CircuitSystem\@\@QEAAXPEAVBlockSource\@\@\@Z
     */
    MCAPI void updateDependencies(class BlockSource *);

//private:
    /**
     * @hash   -284450036
     * @symbol  ?createComponent\@CircuitSystem\@\@AEAAPEAVBaseCircuitComponent\@\@AEBVBlockPos\@\@EV?$unique_ptr\@VBaseCircuitComponent\@\@U?$default_delete\@VBaseCircuitComponent\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI class BaseCircuitComponent * createComponent(class BlockPos const &, unsigned char, std::unique_ptr<class BaseCircuitComponent>);
    /**
     * @hash   -2059281887
     * @symbol  ?evaluateComponents\@CircuitSystem\@\@AEAAX_N\@Z
     */
    MCAPI void evaluateComponents(bool);
    /**
     * @hash   -1126512866
     * @symbol  ?updateIndividualBlock\@CircuitSystem\@\@AEAAXV?$not_null\@PEAVBaseCircuitComponent\@\@\@gsl\@\@AEBVBlockPos\@\@1AEAVBlockSource\@\@\@Z
     */
    MCAPI void updateIndividualBlock(class gsl::not_null<class BaseCircuitComponent *>, class BlockPos const &, class BlockPos const &, class BlockSource &);

private:

};