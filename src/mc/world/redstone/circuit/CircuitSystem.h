#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseCircuitComponent;
class BlockPos;
class BlockSource;
class ChunkPos;
class CircuitSceneGraph;
// clang-format on

class CircuitSystem {
public:
    // CircuitSystem inner types declare
    // clang-format off
    class LevelChunkTracking;
    // clang-format on

    // CircuitSystem inner types define
    class LevelChunkTracking {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk167359;
        // NOLINTEND

    public:
        // prevent constructor by default
        LevelChunkTracking& operator=(LevelChunkTracking const&);
        LevelChunkTracking(LevelChunkTracking const&);
        LevelChunkTracking();
    };

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
    MCAPI CircuitSystem();

    MCAPI ::BaseCircuitComponent*
    createComponent(::BlockPos const& pos, uchar direction, ::std::unique_ptr<::BaseCircuitComponent> newComponent);

    MCAPI void evaluate(::BlockSource* region);

    MCAPI void evaluateComponents(bool bOnlyProducers);

    MCAPI int getStrength(::BlockPos const& pos);

    MCAPI void invalidatePos(::BlockPos const& pos);

    MCAPI bool isAvailableAt(::BlockPos const& pos);

    MCAPI bool isConnectionAllowed(
        ::BaseCircuitComponent& component,
        ::BlockPos const&       componentPos,
        uchar                   connectionDirection,
        bool                    directilyPowered
    );

    MCAPI void preSetupPoweredBlocks(::ChunkPos const& chunkPos);

    MCAPI void removeComponents(::BlockPos const& pos);

    MCAPI void setStrength(::BlockPos const& pos, int strength);

    MCAPI void updateBlocks(::BlockSource& region, ::BlockPos const& chunkPos);

    MCAPI void updateDependencies(::BlockSource* region);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
