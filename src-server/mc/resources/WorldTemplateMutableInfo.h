#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WorldTemplateMutableInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk86d67d;
    ::ll::UntypedStorage<8, 16> mUnkd771c0;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateMutableInfo& operator=(WorldTemplateMutableInfo const&);
    WorldTemplateMutableInfo(WorldTemplateMutableInfo const&);
    WorldTemplateMutableInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldTemplateMutableInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
