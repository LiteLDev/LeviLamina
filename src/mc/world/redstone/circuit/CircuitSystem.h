#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CircuitSystem {

public:
    // prevent constructor by default
    CircuitSystem& operator=(CircuitSystem const&) = delete;
    CircuitSystem(CircuitSystem const&)            = delete;

public:
    /**
     * @symbol ??0CircuitSystem\@\@QEAA\@XZ
     */
    MCAPI CircuitSystem(); // NOLINT
    /**
     * @symbol ?evaluate\@CircuitSystem\@\@QEAAXPEAVBlockSource\@\@\@Z
     */
    MCAPI void evaluate(class BlockSource*); // NOLINT
    /**
     * @symbol ?getStrength\@CircuitSystem\@\@QEAAHAEBVBlockPos\@\@\@Z
     */
    MCAPI int getStrength(class BlockPos const&); // NOLINT
    /**
     * @symbol ?invalidatePos\@CircuitSystem\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void invalidatePos(class BlockPos const&); // NOLINT
    /**
     * @symbol ?isAvailableAt\@CircuitSystem\@\@QEAA_NAEBVBlockPos\@\@\@Z
     */
    MCAPI bool isAvailableAt(class BlockPos const&); // NOLINT
    /**
     * @symbol ?isConnectionAllowed\@CircuitSystem\@\@QEAA_NAEAVBaseCircuitComponent\@\@AEBVBlockPos\@\@E_N\@Z
     */
    MCAPI bool isConnectionAllowed(class BaseCircuitComponent&, class BlockPos const&, unsigned char, bool); // NOLINT
    /**
     * @symbol ?preSetupPoweredBlocks\@CircuitSystem\@\@QEAAXAEBVChunkPos\@\@\@Z
     */
    MCAPI void preSetupPoweredBlocks(class ChunkPos const&); // NOLINT
    /**
     * @symbol ?removeComponents\@CircuitSystem\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void removeComponents(class BlockPos const&); // NOLINT
    /**
     * @symbol ?setStrength\@CircuitSystem\@\@QEAAXAEBVBlockPos\@\@H\@Z
     */
    MCAPI void setStrength(class BlockPos const&, int); // NOLINT
    /**
     * @symbol ?updateBlocks\@CircuitSystem\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void updateBlocks(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?updateDependencies\@CircuitSystem\@\@QEAAXPEAVBlockSource\@\@\@Z
     */
    MCAPI void updateDependencies(class BlockSource*); // NOLINT

    // private:
    /**
     * @symbol
     * ?createComponent\@CircuitSystem\@\@AEAAPEAVBaseCircuitComponent\@\@AEBVBlockPos\@\@EV?$unique_ptr\@VBaseCircuitComponent\@\@U?$default_delete\@VBaseCircuitComponent\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI class BaseCircuitComponent*
    createComponent(class BlockPos const&, unsigned char, std::unique_ptr<class BaseCircuitComponent>); // NOLINT
    /**
     * @symbol ?evaluateComponents\@CircuitSystem\@\@AEAAX_N\@Z
     */
    MCAPI void evaluateComponents(bool); // NOLINT
    /**
     * @symbol
     * ?updateIndividualBlock\@CircuitSystem\@\@AEAAXV?$not_null\@PEAVBaseCircuitComponent\@\@\@gsl\@\@AEBVBlockPos\@\@1AEAVBlockSource\@\@\@Z
     */
    MCAPI void
    updateIndividualBlock(class gsl::not_null<class BaseCircuitComponent*>, class BlockPos const&, class BlockPos const&, class BlockSource&); // NOLINT

private:
};
