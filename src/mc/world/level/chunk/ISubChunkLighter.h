#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class LevelChunk;
struct SubChunkLightUpdate;
// clang-format on

class ISubChunkLighter : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::vector<::BlockPos> relightSubChunk(
        ::BlockSource&                              source,
        ::LevelChunk const&                         levelChunk,
        uint64                                      centerSubChunkIndex,
        ::std::vector<::SubChunkLightUpdate> const& alteredBlockList
    ) const = 0;

    virtual ~ISubChunkLighter() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
