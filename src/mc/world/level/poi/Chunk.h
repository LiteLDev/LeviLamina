#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/poi/TypeId.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
struct SubChunk;
namespace Poi { struct RegionId; }
// clang-format on

namespace Poi {

struct Chunk {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk5dbe1d;
    ::ll::UntypedStorage<4, 24> mUnk2f93ca;
    ::ll::UntypedStorage<8, 24> mUnkd14ee7;
    ::ll::UntypedStorage<8, 8>  mUnk75c6bf;
    // NOLINTEND

public:
    // prevent constructor by default
    Chunk& operator=(Chunk const&);
    Chunk(Chunk const&);
    Chunk();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void add(::BlockPos pos, ::Poi::TypeId type, uchar ticketsRemaining);

    MCNAPI bool release(::BlockPos pos);

    MCNAPI void remove(::BlockPos pos);

    MCNAPI void update(::BlockPos sectionOrigin, ::SubChunk const& blockSection);
    // NOLINTEND
};

} // namespace Poi
