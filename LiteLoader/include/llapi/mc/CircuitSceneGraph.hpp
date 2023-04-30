/**
 * @file  CircuitSceneGraph.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "BlockPos.hpp"
#include "BaseCircuitComponent.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class CircuitSceneGraph.
 *
 */
class CircuitSceneGraph {

#define AFTER_EXTRA
// Add Member There
public:
    class PendingEntry {
    public:
        class BaseCircuitComponent* mRawComponentPtr;
        std::unique_ptr<class BaseCircuitComponent> mComponent;
        class BlockPos mPos;
    };

    std::unordered_map<BlockPos, std::unique_ptr<BaseCircuitComponent>> mAllComponents;
    CircuitComponentList mActiveComponents;
    std::unordered_map<BlockPos, CircuitComponentList> mActiveComponentsPerChunk;
    std::unordered_map<BlockPos, CircuitComponentList> mPowerAssociationMap;
    std::unordered_map<BlockPos, PendingEntry> mPendingAdds;
    std::unordered_map<BlockPos, PendingEntry> mPendingUpdates;
    std::unordered_map<BlockPos, std::vector<BlockPos>> mComponentsToReEvaluate;
    std::vector<PendingEntry> mPendingRemoves;

#define DISABLE_CONSTRUCTOR_PREVENTION_CIRCUITSCENEGRAPH
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CIRCUITSCENEGRAPH
public:
    class CircuitSceneGraph& operator=(class CircuitSceneGraph const &) = delete;
    CircuitSceneGraph(class CircuitSceneGraph const &) = delete;
#endif

public:
    /**
     * @symbol ??0CircuitSceneGraph\@\@QEAA\@XZ
     */
    MCAPI CircuitSceneGraph();
    /**
     * @symbol ?add\@CircuitSceneGraph\@\@QEAAXAEBVBlockPos\@\@V?$unique_ptr\@VBaseCircuitComponent\@\@U?$default_delete\@VBaseCircuitComponent\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void add(class BlockPos const &, std::unique_ptr<class BaseCircuitComponent>);
    /**
     * @symbol ?getBaseComponent\@CircuitSceneGraph\@\@QEAAPEAVBaseCircuitComponent\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class BaseCircuitComponent * getBaseComponent(class BlockPos const &);
    /**
     * @symbol ?getComponent\@CircuitSceneGraph\@\@QEAAPEAVBaseCircuitComponent\@\@AEBVBlockPos\@\@W4CircuitComponentType\@\@\@Z
     */
    MCAPI class BaseCircuitComponent * getComponent(class BlockPos const &, enum class CircuitComponentType);
    /**
     * @symbol ?getFromPendingAdd\@CircuitSceneGraph\@\@QEAAPEAVBaseCircuitComponent\@\@AEBVBlockPos\@\@W4CircuitComponentType\@\@\@Z
     */
    MCAPI class BaseCircuitComponent * getFromPendingAdd(class BlockPos const &, enum class CircuitComponentType);
    /**
     * @symbol ?invalidatePos\@CircuitSceneGraph\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void invalidatePos(class BlockPos const &);
    /**
     * @symbol ?preSetupPoweredBlocks\@CircuitSceneGraph\@\@QEAAXAEBVChunkPos\@\@\@Z
     */
    MCAPI void preSetupPoweredBlocks(class ChunkPos const &);
    /**
     * @symbol ??1CircuitSceneGraph\@\@QEAA\@XZ
     */
    MCAPI ~CircuitSceneGraph();

//private:
    /**
     * @symbol ?findRelationships\@CircuitSceneGraph\@\@AEAAXAEBVBlockPos\@\@PEAVBaseCircuitComponent\@\@PEAVBlockSource\@\@\@Z
     */
    MCAPI void findRelationships(class BlockPos const &, class BaseCircuitComponent *, class BlockSource *);
    /**
     * @symbol ?processPendingAdds\@CircuitSceneGraph\@\@AEAAXXZ
     */
    MCAPI void processPendingAdds();
    /**
     * @symbol ?processPendingUpdates\@CircuitSceneGraph\@\@AEAAXPEAVBlockSource\@\@\@Z
     */
    MCAPI void processPendingUpdates(class BlockSource *);
    /**
     * @symbol ?removeComponent\@CircuitSceneGraph\@\@AEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void removeComponent(class BlockPos const &);
    /**
     * @symbol ?removeStaleRelationships\@CircuitSceneGraph\@\@AEAAXXZ
     */
    MCAPI void removeStaleRelationships();
    /**
     * @symbol ?scheduleRelationshipUpdate\@CircuitSceneGraph\@\@AEAAXAEBVBlockPos\@\@PEAVBaseCircuitComponent\@\@\@Z
     */
    MCAPI void scheduleRelationshipUpdate(class BlockPos const &, class BaseCircuitComponent *);

private:

};
