#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/redstone/circuit/components/CircuitComponentList.h"

// auto generated inclusion list
#include "mc/enums/CircuitComponentType.h"

class CircuitSceneGraph {
public:
    // CircuitSceneGraph inner types declare
    // clang-format off
    class PendingEntry;
    // clang-format on

    // CircuitSceneGraph inner types define
    class PendingEntry {
    public:
        class BaseCircuitComponent*                 mRawComponentPtr;
        std::unique_ptr<class BaseCircuitComponent> mComponent;
        class BlockPos                              mPos;

        // prevent constructor by default
        PendingEntry& operator=(PendingEntry const&);
        PendingEntry(PendingEntry const&);
        PendingEntry();

    public:
        // NOLINTBEGIN
        // symbol: ??0PendingEntry@CircuitSceneGraph@@QEAA@$$QEAV01@@Z
        MCAPI PendingEntry(class CircuitSceneGraph::PendingEntry&& entry);

        // symbol: ??4PendingEntry@CircuitSceneGraph@@QEAAAEAV01@$$QEAV01@@Z
        MCAPI class CircuitSceneGraph::PendingEntry& operator=(class CircuitSceneGraph::PendingEntry&& rhs);

        // symbol: ??1PendingEntry@CircuitSceneGraph@@QEAA@XZ
        MCAPI ~PendingEntry();

        // NOLINTEND
    };

public:
    std::unordered_map<BlockPos, std::unique_ptr<BaseCircuitComponent>> mAllComponents;
    CircuitComponentList                                                mActiveComponents;
    std::unordered_map<BlockPos, CircuitComponentList>                  mActiveComponentsPerChunk;
    std::unordered_map<BlockPos, CircuitComponentList>                  mPowerAssociationMap;
    std::unordered_map<BlockPos, PendingEntry>                          mPendingAdds;
    std::unordered_map<BlockPos, PendingEntry>                          mPendingUpdates;
    std::unordered_map<BlockPos, std::vector<BlockPos>>                 mComponentsToReEvaluate;
    std::vector<PendingEntry>                                           mPendingRemoves;

public:
    // NOLINTBEGIN
    // symbol: ??0CircuitSceneGraph@@QEAA@XZ
    MCAPI CircuitSceneGraph();

    // symbol:
    // ?add@CircuitSceneGraph@@QEAAXAEBVBlockPos@@V?$unique_ptr@VBaseCircuitComponent@@U?$default_delete@VBaseCircuitComponent@@@std@@@std@@@Z
    MCAPI void add(class BlockPos const& pos, std::unique_ptr<class BaseCircuitComponent> component);

    // symbol: ?getBaseComponent@CircuitSceneGraph@@QEAAPEAVBaseCircuitComponent@@AEBVBlockPos@@@Z
    MCAPI class BaseCircuitComponent* getBaseComponent(class BlockPos const& pos);

    // symbol: ?getComponent@CircuitSceneGraph@@QEAAPEAVBaseCircuitComponent@@AEBVBlockPos@@W4CircuitComponentType@@@Z
    MCAPI class BaseCircuitComponent* getComponent(class BlockPos const& pos, ::CircuitComponentType typeID);

    // symbol:
    // ?getFromPendingAdd@CircuitSceneGraph@@QEAAPEAVBaseCircuitComponent@@AEBVBlockPos@@W4CircuitComponentType@@@Z
    MCAPI class BaseCircuitComponent* getFromPendingAdd(class BlockPos const& pos, ::CircuitComponentType typeID);

    // symbol: ?invalidatePos@CircuitSceneGraph@@QEAAXAEBVBlockPos@@@Z
    MCAPI void invalidatePos(class BlockPos const& pos);

    // symbol: ?preSetupPoweredBlocks@CircuitSceneGraph@@QEAAXAEBVChunkPos@@@Z
    MCAPI void preSetupPoweredBlocks(class ChunkPos const& chunkPos);

    // symbol: ?remove@CircuitSceneGraph@@QEAAXAEBVBlockPos@@PEAVBaseCircuitComponent@@@Z
    MCAPI void remove(class BlockPos const& pos, class BaseCircuitComponent* component);

    // symbol: ?update@CircuitSceneGraph@@QEAAXPEAVBlockSource@@@Z
    MCAPI void update(class BlockSource* region);

    // symbol: ??1CircuitSceneGraph@@QEAA@XZ
    MCAPI ~CircuitSceneGraph();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?findRelationships@CircuitSceneGraph@@AEAAXAEBVBlockPos@@PEAVBaseCircuitComponent@@PEAVBlockSource@@@Z
    MCAPI void
    findRelationships(class BlockPos const& pos, class BaseCircuitComponent* producerTarget, class BlockSource* region);

    // symbol: ?processPendingAdds@CircuitSceneGraph@@AEAAXXZ
    MCAPI void processPendingAdds();

    // symbol: ?processPendingUpdates@CircuitSceneGraph@@AEAAXPEAVBlockSource@@@Z
    MCAPI void processPendingUpdates(class BlockSource* region);

    // symbol: ?removeComponent@CircuitSceneGraph@@AEAAXAEBVBlockPos@@@Z
    MCAPI void removeComponent(class BlockPos const& pos);

    // symbol: ?removeStaleRelationships@CircuitSceneGraph@@AEAAXXZ
    MCAPI void removeStaleRelationships();

    // symbol: ?scheduleRelationshipUpdate@CircuitSceneGraph@@AEAAXAEBVBlockPos@@PEAVBaseCircuitComponent@@@Z
    MCAPI void scheduleRelationshipUpdate(class BlockPos const& pos, class BaseCircuitComponent* component);

    // NOLINTEND
};
