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
    ::ll::UntypedStorage<8, 64> mUnk37e34c;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyStructureBlockPalette& operator=(LegacyStructureBlockPalette const&);
    LegacyStructureBlockPalette(LegacyStructureBlockPalette const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyStructureBlockPalette();

    MCAPI void addMapping(int id, ::Block const& block);

    MCFOLD void clearMap();

    MCAPI ::Block const& getBlock(int id);

    MCAPI ~LegacyStructureBlockPalette();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
