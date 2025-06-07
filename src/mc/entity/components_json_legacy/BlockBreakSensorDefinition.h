#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockBreakSensorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke74226;
    ::ll::UntypedStorage<8, 24> mUnk71c6a4;
    ::ll::UntypedStorage<8, 24> mUnk60d9dd;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockBreakSensorDefinition& operator=(BlockBreakSensorDefinition const&);
    BlockBreakSensorDefinition(BlockBreakSensorDefinition const&);
    BlockBreakSensorDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BlockBreakSensorDefinition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
