#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WorldTemplateMutableInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk86d67d;
    ::ll::UntypedStorage<8, 16> mUnk6fd03e;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateMutableInfo& operator=(WorldTemplateMutableInfo const&);
    WorldTemplateMutableInfo(WorldTemplateMutableInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldTemplateMutableInfo();

    MCNAPI ~WorldTemplateMutableInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
