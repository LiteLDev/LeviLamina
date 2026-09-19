#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
struct SubChunk;
// clang-format on

namespace Poi {

class Manager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkd7ecdb;
    ::ll::UntypedStorage<8, 8>   mUnkaa6282;
    ::ll::UntypedStorage<8, 488> mUnk3cda98;
    // NOLINTEND

public:
    // prevent constructor by default
    Manager& operator=(Manager const&);
    Manager(Manager const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Manager();

    MCNAPI Manager(::Poi::Manager&& o);

    MCNAPI void syncSectionWithBlocks(::BlockPos pos, ::SubChunk const& blockSection);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Poi::Manager&& o);
    // NOLINTEND
};

} // namespace Poi
