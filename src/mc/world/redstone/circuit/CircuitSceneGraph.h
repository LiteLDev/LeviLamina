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
        MCAPI PendingEntry(class CircuitSceneGraph::PendingEntry&& entry);

        MCAPI class CircuitSceneGraph::PendingEntry& operator=(class CircuitSceneGraph::PendingEntry&& rhs);

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
    MCAPI CircuitSceneGraph();

    MCAPI void add(class BlockPos const& pos, std::unique_ptr<class BaseCircuitComponent> component);

    MCAPI class BaseCircuitComponent* getBaseComponent(class BlockPos const& pos);

    MCAPI class BaseCircuitComponent* getComponent(class BlockPos const& pos, ::CircuitComponentType typeID);

    MCAPI class BaseCircuitComponent* getFromPendingAdd(class BlockPos const& pos, ::CircuitComponentType typeID);

    MCAPI void invalidatePos(class BlockPos const& pos);

    MCAPI void preSetupPoweredBlocks(class ChunkPos const& chunkPos);

    MCAPI ~CircuitSceneGraph();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    findRelationships(class BlockPos const& pos, class BaseCircuitComponent* producerTarget, class BlockSource* region);

    MCAPI void processPendingAdds();

    MCAPI void processPendingUpdates(class BlockSource* region);

    MCAPI void removeComponent(class BlockPos const& pos);

    MCAPI void removeStaleRelationships();

    MCAPI void scheduleRelationshipUpdate(class BlockPos const& pos, class BaseCircuitComponent* component);

    // NOLINTEND
};
