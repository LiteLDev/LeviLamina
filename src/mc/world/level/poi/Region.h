#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace Poi { struct Chunk; }
// clang-format on

namespace Poi {

struct Region {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk126dfe;
    ::ll::UntypedStorage<8, 80> mUnk153f26;
    ::ll::UntypedStorage<8, 8>  mUnkd30fd1;
    ::ll::UntypedStorage<4, 24> mUnkcfe556;
    // NOLINTEND

public:
    // prevent constructor by default
    Region& operator=(Region const&);
    Region(Region const&);
    Region();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Poi::Chunk& getOrCreate(::BlockPos pos);
    // NOLINTEND
};

} // namespace Poi
