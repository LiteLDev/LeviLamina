#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WorldTemplateMutableInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc24b6f;
    ::ll::UntypedStorage<8, 16> mUnkd8c596;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateMutableInfo& operator=(WorldTemplateMutableInfo const&);
    WorldTemplateMutableInfo(WorldTemplateMutableInfo const&);
    WorldTemplateMutableInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::WorldTemplateMutableInfo& operator=(::WorldTemplateMutableInfo&&);

    MCNAPI ~WorldTemplateMutableInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
