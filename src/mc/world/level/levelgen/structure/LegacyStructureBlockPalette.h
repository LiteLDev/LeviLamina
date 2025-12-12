#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class LegacyStructureBlockPalette {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::Block const*>> mMapper;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Block const& getBlock(int id);

    MCNAPI ~LegacyStructureBlockPalette();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
