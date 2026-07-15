#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/CircuitSceneGraph.h"

// auto generated forward declare list
// clang-format off
class BaseCircuitComponent;
class BlockPos;
class BlockSource;
// clang-format on

class CircuitSystem {
public:
    // CircuitSystem inner types declare
    // clang-format off
    class LevelChunkTracking;
    // clang-format on

    // CircuitSystem inner types define
    class LevelChunkTracking {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                mLockGraph;
    ::ll::TypedStorage<8, 408, ::CircuitSceneGraph>                               mSceneGraph;
    ::ll::TypedStorage<8, 24, ::std::vector<::CircuitSystem::LevelChunkTracking>> mAddedLevelChunk;
    ::ll::TypedStorage<1, 1, bool>                                                mHasBeenEvaluated;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BaseCircuitComponent*
    createComponent(::BlockPos const& pos, uchar direction, ::std::unique_ptr<::BaseCircuitComponent> newComponent);

    MCAPI void evaluate(::BlockSource* region);

    MCAPI bool isConnectionAllowed(
        ::BaseCircuitComponent& component,
        ::BlockPos const&       componentPos,
        uchar                   connectionDirection,
        bool                    directlyPowered,
        bool                    speculativeConnection
    );

    MCAPI void setStrength(::BlockPos const& pos, int strength);

    MCAPI void updateBlocks(::BlockSource& region, ::BlockPos const& chunkPos);
    // NOLINTEND
};
