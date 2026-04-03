#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ISubChunkLighter.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class LevelChunk;
struct SubChunkLightUpdate;
// clang-format on

class ServerSubChunkLighter : public ::ISubChunkLighter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::vector<::BlockPos> relightSubChunk(
        ::BlockSource&                              source,
        ::LevelChunk const&                         levelChunk,
        uint64                                      centerSubChunkIndex,
        ::std::vector<::SubChunkLightUpdate> const& alteredBlockList
    ) const /*override*/;

    virtual ~ServerSubChunkLighter() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::vector<::BlockPos> $relightSubChunk(
        ::BlockSource&                              source,
        ::LevelChunk const&                         levelChunk,
        uint64                                      centerSubChunkIndex,
        ::std::vector<::SubChunkLightUpdate> const& alteredBlockList
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
