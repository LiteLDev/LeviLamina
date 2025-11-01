#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WorldTemplatePackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkf9865e;
    ::ll::UntypedStorage<8, 8>  mUnk1d7453;
    ::ll::UntypedStorage<8, 16> mUnk6866b1;
    ::ll::UntypedStorage<1, 1>  mUnkfa6d4c;
    ::ll::UntypedStorage<1, 1>  mUnke10d57;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplatePackSourceOptions& operator=(WorldTemplatePackSourceOptions const&);
    WorldTemplatePackSourceOptions(WorldTemplatePackSourceOptions const&);
    WorldTemplatePackSourceOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldTemplatePackSourceOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
