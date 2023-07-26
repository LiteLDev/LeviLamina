#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CircuitSceneGraph {
public:
    // CircuitSceneGraph inner types declare
    // clang-format off
    class PendingEntry;
    // clang-format on

    // CircuitSceneGraph inner types define
    class PendingEntry {

    public:
        // prevent constructor by default
        PendingEntry& operator=(PendingEntry const&) = delete;
        PendingEntry(PendingEntry const&)            = delete;
        PendingEntry()                               = delete;

    public:
        /**
         * @symbol ??0PendingEntry\@CircuitSceneGraph\@\@QEAA\@$$QEAV01\@\@Z
         */
        MCAPI PendingEntry(class CircuitSceneGraph::PendingEntry&&); // NOLINT
        /**
         * @symbol ??4PendingEntry\@CircuitSceneGraph\@\@QEAAAEAV01\@$$QEAV01\@\@Z
         */
        MCAPI class CircuitSceneGraph::PendingEntry& operator=(class CircuitSceneGraph::PendingEntry&&); // NOLINT
        /**
         * @symbol ??1PendingEntry\@CircuitSceneGraph\@\@QEAA\@XZ
         */
        MCAPI ~PendingEntry(); // NOLINT
    };

public:
    // prevent constructor by default
    CircuitSceneGraph& operator=(CircuitSceneGraph const&) = delete;
    CircuitSceneGraph(CircuitSceneGraph const&)            = delete;

public:
    /**
     * @symbol ??0CircuitSceneGraph\@\@QEAA\@XZ
     */
    MCAPI CircuitSceneGraph(); // NOLINT
    /**
     * @symbol
     * ?add\@CircuitSceneGraph\@\@QEAAXAEBVBlockPos\@\@V?$unique_ptr\@VBaseCircuitComponent\@\@U?$default_delete\@VBaseCircuitComponent\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void add(class BlockPos const&, std::unique_ptr<class BaseCircuitComponent>); // NOLINT
    /**
     * @symbol ?getBaseComponent\@CircuitSceneGraph\@\@QEAAPEAVBaseCircuitComponent\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class BaseCircuitComponent* getBaseComponent(class BlockPos const&); // NOLINT
    /**
     * @symbol
     * ?getComponent\@CircuitSceneGraph\@\@QEAAPEAVBaseCircuitComponent\@\@AEBVBlockPos\@\@W4CircuitComponentType\@\@\@Z
     */
    MCAPI class BaseCircuitComponent* getComponent(class BlockPos const&, enum class CircuitComponentType); // NOLINT
    /**
     * @symbol
     * ?getFromPendingAdd\@CircuitSceneGraph\@\@QEAAPEAVBaseCircuitComponent\@\@AEBVBlockPos\@\@W4CircuitComponentType\@\@\@Z
     */
    MCAPI class BaseCircuitComponent*
    getFromPendingAdd(class BlockPos const&, enum class CircuitComponentType); // NOLINT
    /**
     * @symbol ?invalidatePos\@CircuitSceneGraph\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void invalidatePos(class BlockPos const&); // NOLINT
    /**
     * @symbol ?preSetupPoweredBlocks\@CircuitSceneGraph\@\@QEAAXAEBVChunkPos\@\@\@Z
     */
    MCAPI void preSetupPoweredBlocks(class ChunkPos const&); // NOLINT
    /**
     * @symbol ??1CircuitSceneGraph\@\@QEAA\@XZ
     */
    MCAPI ~CircuitSceneGraph(); // NOLINT

    // private:
    /**
     * @symbol
     * ?findRelationships\@CircuitSceneGraph\@\@AEAAXAEBVBlockPos\@\@PEAVBaseCircuitComponent\@\@PEAVBlockSource\@\@\@Z
     */
    MCAPI void findRelationships(class BlockPos const&, class BaseCircuitComponent*, class BlockSource*); // NOLINT
    /**
     * @symbol ?processPendingAdds\@CircuitSceneGraph\@\@AEAAXXZ
     */
    MCAPI void processPendingAdds(); // NOLINT
    /**
     * @symbol ?processPendingUpdates\@CircuitSceneGraph\@\@AEAAXPEAVBlockSource\@\@\@Z
     */
    MCAPI void processPendingUpdates(class BlockSource*); // NOLINT
    /**
     * @symbol ?removeComponent\@CircuitSceneGraph\@\@AEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void removeComponent(class BlockPos const&); // NOLINT
    /**
     * @symbol ?removeStaleRelationships\@CircuitSceneGraph\@\@AEAAXXZ
     */
    MCAPI void removeStaleRelationships(); // NOLINT
    /**
     * @symbol ?scheduleRelationshipUpdate\@CircuitSceneGraph\@\@AEAAXAEBVBlockPos\@\@PEAVBaseCircuitComponent\@\@\@Z
     */
    MCAPI void scheduleRelationshipUpdate(class BlockPos const&, class BaseCircuitComponent*); // NOLINT

private:
};
