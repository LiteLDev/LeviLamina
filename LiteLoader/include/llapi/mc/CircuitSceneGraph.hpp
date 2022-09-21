/**
 * @file  MC/CircuitSceneGraph.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1844373559
     * @symbol ??0CircuitSceneGraph@@QEAA@XZ
     */
    MCAPI CircuitSceneGraph();
    /**
     * @hash   1918793653
     * @symbol ?add@CircuitSceneGraph@@QEAAXAEBVBlockPos@@V?$unique_ptr@VBaseCircuitComponent@@U?$default_delete@VBaseCircuitComponent@@@std@@@std@@@Z
     */
    MCAPI void add(class BlockPos const &, std::unique_ptr<class BaseCircuitComponent>);
    /**
     * @hash   1763131640
     * @symbol ?getBaseComponent@CircuitSceneGraph@@QEAAPEAVBaseCircuitComponent@@AEBVBlockPos@@@Z
     */
    MCAPI class BaseCircuitComponent * getBaseComponent(class BlockPos const &);
    /**
     * @hash   936110435
     * @symbol ?getComponent@CircuitSceneGraph@@QEAAPEAVBaseCircuitComponent@@AEBVBlockPos@@W4CircuitComponentType@@@Z
     */
    MCAPI class BaseCircuitComponent * getComponent(class BlockPos const &, enum CircuitComponentType);
    /**
     * @hash   -691948722
     * @symbol ?getFromPendingAdd@CircuitSceneGraph@@QEAAPEAVBaseCircuitComponent@@AEBVBlockPos@@@Z
     */
    MCAPI class BaseCircuitComponent * getFromPendingAdd(class BlockPos const &);
    /**
     * @hash   1505213873
     * @symbol ?getFromPendingAdd@CircuitSceneGraph@@QEAAPEAVBaseCircuitComponent@@AEBVBlockPos@@W4CircuitComponentType@@@Z
     */
    MCAPI class BaseCircuitComponent * getFromPendingAdd(class BlockPos const &, enum CircuitComponentType);
    /**
     * @hash   -1545245118
     * @symbol ?invalidatePos@CircuitSceneGraph@@QEAAXAEBVBlockPos@@@Z
     */
    MCAPI void invalidatePos(class BlockPos const &);
    /**
     * @hash   363946050
     * @symbol ?preSetupPoweredBlocks@CircuitSceneGraph@@QEAAXAEBVChunkPos@@@Z
     */
    MCAPI void preSetupPoweredBlocks(class ChunkPos const &);
    /**
     * @hash   -998880778
     * @symbol ?remove@CircuitSceneGraph@@QEAAXAEBVBlockPos@@PEAVBaseCircuitComponent@@@Z
     */
    MCAPI void remove(class BlockPos const &, class BaseCircuitComponent *);
    /**
     * @hash   239773201
     * @symbol ?update@CircuitSceneGraph@@QEAAXPEAVBlockSource@@@Z
     */
    MCAPI void update(class BlockSource *);
    /**
     * @hash   -57452713
     * @symbol ??1CircuitSceneGraph@@QEAA@XZ
     */
    MCAPI ~CircuitSceneGraph();

//private:
    /**
     * @hash   -1964912356
     * @symbol ?findRelationships@CircuitSceneGraph@@AEAAXAEBVBlockPos@@PEAVBaseCircuitComponent@@PEAVBlockSource@@@Z
     */
    MCAPI void findRelationships(class BlockPos const &, class BaseCircuitComponent *, class BlockSource *);
    /**
     * @hash   -2044791157
     * @symbol ?processPendingAdds@CircuitSceneGraph@@AEAAXXZ
     */
    MCAPI void processPendingAdds();
    /**
     * @hash   -1863396040
     * @symbol ?removeComponent@CircuitSceneGraph@@AEAAXAEBVBlockPos@@@Z
     */
    MCAPI void removeComponent(class BlockPos const &);
    /**
     * @hash   -944713721
     * @symbol ?removeStaleRelationships@CircuitSceneGraph@@AEAAXXZ
     */
    MCAPI void removeStaleRelationships();
    /**
     * @hash   703618618
     * @symbol ?scheduleRelationshipUpdate@CircuitSceneGraph@@AEAAXAEBVBlockPos@@PEAVBaseCircuitComponent@@@Z
     */
    MCAPI void scheduleRelationshipUpdate(class BlockPos const &, class BaseCircuitComponent *);

private:

};