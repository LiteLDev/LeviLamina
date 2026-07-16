#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WorldTemplateManagerInitData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk219b88;
    ::ll::UntypedStorage<8, 24> mUnkaa4193;
    ::ll::UntypedStorage<8, 8>  mUnk4814f1;
    ::ll::UntypedStorage<8, 8>  mUnkfdec2b;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateManagerInitData& operator=(WorldTemplateManagerInitData const&);
    WorldTemplateManagerInitData(WorldTemplateManagerInitData const&);
    WorldTemplateManagerInitData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldTemplateManagerInitData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
