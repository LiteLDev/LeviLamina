#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
};

} // namespace Poi
