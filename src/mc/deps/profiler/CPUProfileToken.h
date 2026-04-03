#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class CPUProfileToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnkb1e92c;
    ::ll::UntypedStorage<1, 1>   mUnk1861d2;
    ::ll::UntypedStorage<8, 104> mUnkb9a589;
    // NOLINTEND

public:
    // prevent constructor by default
    CPUProfileToken& operator=(CPUProfileToken const&);
    CPUProfileToken(CPUProfileToken const&);
    CPUProfileToken();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CPUProfileToken();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core::Profile
