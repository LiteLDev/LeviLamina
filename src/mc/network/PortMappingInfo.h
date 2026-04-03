#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PortMappingInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfc4af5;
    ::ll::UntypedStorage<8, 32> mUnk5e3ddc;
    // NOLINTEND

public:
    // prevent constructor by default
    PortMappingInfo& operator=(PortMappingInfo const&);
    PortMappingInfo(PortMappingInfo const&);
    PortMappingInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PortMappingInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
