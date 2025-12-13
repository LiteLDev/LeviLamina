#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LegacyStructureSettings;
// clang-format on

class BlockTypePlacementProcessor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>    mUnk9c7d7c;
    ::ll::UntypedStorage<8, 2576> mUnk34687b;
    ::ll::UntypedStorage<1, 1>    mUnkcd479f;
    ::ll::UntypedStorage<8, 8>    mUnk1a06f4;
    ::ll::UntypedStorage<8, 8>    mUnk10a4fa;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockTypePlacementProcessor& operator=(BlockTypePlacementProcessor const&);
    BlockTypePlacementProcessor(BlockTypePlacementProcessor const&);
    BlockTypePlacementProcessor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockTypePlacementProcessor(::LegacyStructureSettings const& settings);

    MCNAPI ~BlockTypePlacementProcessor();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LegacyStructureSettings const& settings);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
