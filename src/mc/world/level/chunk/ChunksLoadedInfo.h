#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunksLoadedStatus.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class ChunkViewSource;
class Dimension;
struct Bounds;
struct Tick;
// clang-format on

struct ChunksLoadedInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk2a6d44;
    ::ll::UntypedStorage<8, 8> mUnkb9c08b;
    ::ll::UntypedStorage<8, 8> mUnk9ad6f7;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunksLoadedInfo& operator=(ChunksLoadedInfo const&);
    ChunksLoadedInfo(ChunksLoadedInfo const&);
    ChunksLoadedInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::ChunkViewSource> getChunkViewSource() const;

    MCFOLD ::ChunksLoadedStatus getChunksLoadedStatus() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ChunksLoadedStatus areAllChunksLoadedAndTicking(
        ::Dimension const& dimension,
        ::ChunkSource&     source,
        ::Bounds const&    bounds,
        bool               isCircleArea,
        ::Tick             currentLevelTick,
        bool               allowNonTickingPlayerAndTickingAreaChunks
    );

    MCAPI static ::ChunksLoadedInfo calculateChunksLoadedInfo(
        ::Dimension const& dimension,
        ::ChunkSource&     source,
        ::Bounds const&    bounds,
        bool               isCircleArea,
        ::Tick             currentLevelTick,
        bool               allowUnloadedChunks,
        bool               allowNonTickingPlayerAndTickingAreaChunks,
        bool               allowPlayerChunks
    );
    // NOLINTEND
};
