#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ChunksLoadedStatus.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class Dimension;
class ITickingAreaView;
class Player;
struct Bounds;
struct Tick;
// clang-format on

struct ChunksLoadedInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ChunksLoadedStatus> mStatus;
    ::ll::TypedStorage<8, 8, ::Player*>            mPlayer;
    ::ll::TypedStorage<8, 8, ::ITickingAreaView*>  mTickingAreaView;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ChunksLoadedStatus areAllChunksLoadedAndTicking(
        ::Dimension const& dimension,
        ::ChunkSource&     source,
        ::Bounds const&    bounds,
        bool               isCircleArea,
        ::Tick             currentLevelTick,
        bool               allowNonTickingPlayerAndTickingAreaChunks
    );
    // NOLINTEND
};
