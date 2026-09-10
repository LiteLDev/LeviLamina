#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace Editor { class BlockAdjacencyItem; }
// clang-format on

namespace Editor {

class BlockAdjacencyMap {
public:
    // BlockAdjacencyMap inner types declare
    // clang-format off
    struct Chunk;
    // clang-format on

    // BlockAdjacencyMap inner types define
    struct Chunk {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 512> mUnk4f64fe;
        ::ll::UntypedStorage<4, 4>   mUnkf0bfd4;
        // NOLINTEND

    public:
        // prevent constructor by default
        Chunk& operator=(Chunk const&);
        Chunk(Chunk const&);
        Chunk();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkaf19df;
    ::ll::UntypedStorage<8, 64> mUnk9b7834;
    ::ll::UntypedStorage<4, 12> mUnk28b958;
    ::ll::UntypedStorage<8, 8>  mUnkf2e02c;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockAdjacencyMap& operator=(BlockAdjacencyMap const&);
    BlockAdjacencyMap(BlockAdjacencyMap const&);
    BlockAdjacencyMap();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clear();

#ifdef LL_PLAT_C
    MCNAPI ::Editor::BlockAdjacencyItem getAdjacency(::BlockPos const& pos) const;
#endif

    MCNAPI void markRegionDirty(::BlockPos const& lo, ::BlockPos const& hi, uint64 version);

    MCNAPI ~BlockAdjacencyMap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
