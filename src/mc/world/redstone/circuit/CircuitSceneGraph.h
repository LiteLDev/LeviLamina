#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"

// auto generated forward declare list
// clang-format off
class BaseCircuitComponent;
class BlockSource;
class ChunkPos;
class CircuitComponentList;
struct ChunkCircuitComponentList;
// clang-format on

class CircuitSceneGraph {
public:
    // CircuitSceneGraph inner types declare
    // clang-format off
    class PendingEntry;
    // clang-format on

    // CircuitSceneGraph inner types define
    class PendingEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BaseCircuitComponent*>                   mRawComponentPtr;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BaseCircuitComponent>> mComponent;
        ::ll::TypedStorage<4, 12, ::BlockPos>                               mPos;
        // NOLINTEND
    };

    using ComponentMap = ::std::unordered_map<::BlockPos, ::std::unique_ptr<::BaseCircuitComponent>>;

    using ComponentsPerChunkMap = ::std::unordered_map<::BlockPos, ::ChunkCircuitComponentList>;

    using ComponentsPerPosMap = ::std::unordered_map<::BlockPos, ::CircuitComponentList>;

public:
    // member variables
    // NOLINTBEGIN
    ComponentMap                                                        mAllComponents;
    ComponentsPerChunkMap                                               mActiveComponentsPerChunk;
    ComponentsPerPosMap                                                 mPowerAssociationMap;
    ::std::unordered_map<::BlockPos, ::CircuitSceneGraph::PendingEntry> mPendingAdds;
    ::std::unordered_map<::BlockPos, ::CircuitSceneGraph::PendingEntry> mPendingUpdates;
    ::std::unordered_map<::BlockPos, ::std::vector<::BlockPos>>         mComponentsToReEvaluate;
    ::std::vector<::CircuitSceneGraph::PendingEntry>                    mPendingRemoves;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CircuitSceneGraph();

    MCAPI void add(::BlockPos const& pos, ::std::unique_ptr<::BaseCircuitComponent> component);

    MCAPI ::BaseCircuitComponent* addIfPoweredBlockAt(::BlockSource& source, ::BlockPos const& pos);

    MCAPI void findRelationships(::BlockPos const& pos, ::BaseCircuitComponent* producerTarget, ::BlockSource* region);

    MCAPI ::BaseCircuitComponent* getBaseComponent(::BlockPos const& pos);

    MCAPI ::BaseCircuitComponent* getComponent(::BlockPos const& pos, ::CircuitComponentType typeID);

    MCAPI ::BaseCircuitComponent* getFromPendingAdd(::BlockPos const& pos, ::CircuitComponentType typeID);

    MCAPI void invalidatePos(::BlockPos const& pos);

    MCAPI void preSetupPoweredBlocks(::ChunkPos const& chunkPos);

    MCAPI void processPendingAdds();

    MCAPI void remove(::BlockPos const& pos, ::BaseCircuitComponent* component);

    MCAPI void removeComponent(::BlockPos const& pos);

    MCAPI void removeStaleRelationships();

    MCAPI void update(::BlockSource* region);

    MCAPI ~CircuitSceneGraph();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
