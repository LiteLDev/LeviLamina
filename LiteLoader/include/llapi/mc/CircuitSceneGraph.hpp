/**
 * @file  CircuitSceneGraph.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CircuitSceneGraph.
 *
 */
class CircuitSceneGraph {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CIRCUITSCENEGRAPH
public:
    class CircuitSceneGraph& operator=(class CircuitSceneGraph const &) = delete;
    CircuitSceneGraph(class CircuitSceneGraph const &) = delete;
#endif

public:
    /**
     * @hash   -1766577001
     * @symbol  ??0CircuitSceneGraph\@\@QEAA\@XZ
     */
    MCAPI CircuitSceneGraph();
    /**
     * @hash   -1692356795
     * @symbol  ?add\@CircuitSceneGraph\@\@QEAAXAEBVBlockPos\@\@V?$unique_ptr\@VBaseCircuitComponent\@\@U?$default_delete\@VBaseCircuitComponent\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void add(class BlockPos const &, std::unique_ptr<class BaseCircuitComponent>);
    /**
     * @hash   -1848095688
     * @symbol  ?getBaseComponent\@CircuitSceneGraph\@\@QEAAPEAVBaseCircuitComponent\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class BaseCircuitComponent * getBaseComponent(class BlockPos const &);
    /**
     * @hash   1619865779
     * @symbol  ?getComponent\@CircuitSceneGraph\@\@QEAAPEAVBaseCircuitComponent\@\@AEBVBlockPos\@\@W4CircuitComponentType\@\@\@Z
     */
    MCAPI class BaseCircuitComponent * getComponent(class BlockPos const &, enum class CircuitComponentType);
    /**
     * @hash   -8162626
     * @symbol  ?getFromPendingAdd\@CircuitSceneGraph\@\@QEAAPEAVBaseCircuitComponent\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class BaseCircuitComponent * getFromPendingAdd(class BlockPos const &);
    /**
     * @hash   -2105967327
     * @symbol  ?getFromPendingAdd\@CircuitSceneGraph\@\@QEAAPEAVBaseCircuitComponent\@\@AEBVBlockPos\@\@W4CircuitComponentType\@\@\@Z
     */
    MCAPI class BaseCircuitComponent * getFromPendingAdd(class BlockPos const &, enum class CircuitComponentType);
    /**
     * @hash   -861443646
     * @symbol  ?invalidatePos\@CircuitSceneGraph\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void invalidatePos(class BlockPos const &);
    /**
     * @hash   1047655266
     * @symbol  ?preSetupPoweredBlocks\@CircuitSceneGraph\@\@QEAAXAEBVChunkPos\@\@\@Z
     */
    MCAPI void preSetupPoweredBlocks(class ChunkPos const &);
    /**
     * @hash   -314725658
     * @symbol  ?remove\@CircuitSceneGraph\@\@QEAAXAEBVBlockPos\@\@PEAVBaseCircuitComponent\@\@\@Z
     */
    MCAPI void remove(class BlockPos const &, class BaseCircuitComponent *);
    /**
     * @hash   924328097
     * @symbol  ?update\@CircuitSceneGraph\@\@QEAAXPEAVBlockSource\@\@\@Z
     */
    MCAPI void update(class BlockSource *);
    /**
     * @hash   626564023
     * @symbol  ??1CircuitSceneGraph\@\@QEAA\@XZ
     */
    MCAPI ~CircuitSceneGraph();

//private:
    /**
     * @hash   -1280987876
     * @symbol  ?findRelationships\@CircuitSceneGraph\@\@AEAAXAEBVBlockPos\@\@PEAVBaseCircuitComponent\@\@PEAVBlockSource\@\@\@Z
     */
    MCAPI void findRelationships(class BlockPos const &, class BaseCircuitComponent *, class BlockSource *);
    /**
     * @hash   -1361066565
     * @symbol  ?processPendingAdds\@CircuitSceneGraph\@\@AEAAXXZ
     */
    MCAPI void processPendingAdds();
    /**
     * @hash   356550589
     * @symbol  ?processPendingUpdates\@CircuitSceneGraph\@\@AEAAXPEAVBlockSource\@\@\@Z
     */
    MCAPI void processPendingUpdates(class BlockSource *);
    /**
     * @hash   -1179210168
     * @symbol  ?removeComponent\@CircuitSceneGraph\@\@AEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void removeComponent(class BlockPos const &);
    /**
     * @hash   -260189577
     * @symbol  ?removeStaleRelationships\@CircuitSceneGraph\@\@AEAAXXZ
     */
    MCAPI void removeStaleRelationships();
    /**
     * @hash   1388173514
     * @symbol  ?scheduleRelationshipUpdate\@CircuitSceneGraph\@\@AEAAXAEBVBlockPos\@\@PEAVBaseCircuitComponent\@\@\@Z
     */
    MCAPI void scheduleRelationshipUpdate(class BlockPos const &, class BaseCircuitComponent *);

private:

};