#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LegacyStructureSettings;
// clang-format on

class LegacyBlockPlacementProcessor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>    mUnkbcf931;
    ::ll::UntypedStorage<8, 2568> mUnk80a116;
    ::ll::UntypedStorage<1, 1>    mUnkdb38a5;
    ::ll::UntypedStorage<8, 8>    mUnka563e9;
    ::ll::UntypedStorage<8, 8>    mUnke90a00;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyBlockPlacementProcessor& operator=(LegacyBlockPlacementProcessor const&);
    LegacyBlockPlacementProcessor(LegacyBlockPlacementProcessor const&);
    LegacyBlockPlacementProcessor();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LegacyBlockPlacementProcessor(::LegacyStructureSettings const& settings);

    MCAPI ~LegacyBlockPlacementProcessor();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LegacyStructureSettings const& settings);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
