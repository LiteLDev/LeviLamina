#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WorldTemplatePackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkf9865e;
    ::ll::UntypedStorage<8, 24> mUnkbba58e;
    ::ll::UntypedStorage<8, 16> mUnk6866b1;
    ::ll::UntypedStorage<1, 1>  mUnkc5a958;
    ::ll::UntypedStorage<1, 1>  mUnk58980e;
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
