#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::Releases {

struct VersionRelease {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk4332b4;
    ::ll::UntypedStorage<8, 40> mUnk26a9e4;
    // NOLINTEND

public:
    // prevent constructor by default
    VersionRelease& operator=(VersionRelease const&);
    VersionRelease(VersionRelease const&);
    VersionRelease();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~VersionRelease();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
