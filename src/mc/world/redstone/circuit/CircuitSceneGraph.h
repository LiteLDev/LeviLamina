#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"

// auto generated forward declare list
// clang-format off
class BaseCircuitComponent;
class BlockPos;
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
    using ComponentMap = ::std::unordered_map<::BlockPos, ::std::unique_ptr<::BaseCircuitComponent>>;

    using ComponentsPerPosMap = ::std::unordered_map<::BlockPos, ::CircuitComponentList>;

    using ComponentsPerChunkMap = ::std::unordered_map<::BlockPos, ::ChunkCircuitComponentList>;

    class PendingEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BaseCircuitComponent*>                   mRawComponentPtr;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BaseCircuitComponent>> mComponent;
        ::ll::TypedStorage<4, 12, ::BlockPos>                               mPos;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~PendingEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::std::unique_ptr<::BaseCircuitComponent>>>
                                                                                             mAllComponents;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::ChunkCircuitComponentList>> mActiveComponentsPerChunk;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::CircuitComponentList>>      mPowerAssociationMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::CircuitSceneGraph::PendingEntry>> mPendingAdds;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::CircuitSceneGraph::PendingEntry>> mPendingUpdates;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::std::vector<::BlockPos>>> mComponentsToReEvaluate;
    ::ll::TypedStorage<8, 24, ::std::vector<::CircuitSceneGraph::PendingEntry>>            mPendingRemoves;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CircuitSceneGraph();

    MCAPI void add(::BlockPos const& pos, ::std::unique_ptr<::BaseCircuitComponent> component);

    MCAPI void findRelationships(::BlockPos const& pos, ::BaseCircuitComponent* producerTarget, ::BlockSource* region);

    MCAPI ::BaseCircuitComponent* getComponent(::BlockPos const& pos, ::CircuitComponentType typeID);

    MCAPI ::BaseCircuitComponent* getFromPendingAdd(::BlockPos const& pos, ::CircuitComponentType typeID);

    MCAPI void invalidatePos(::BlockPos const& pos);

    MCAPI void preSetupPoweredBlocks(::ChunkPos const& chunkPos);

    MCAPI void processPendingAdds();

    MCAPI void removeComponent(::BlockPos const& pos);

    MCAPI void removeStaleRelationships();

    MCAPI void scheduleRelationshipUpdate(::BlockPos const& pos, ::BaseCircuitComponent* component);

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
