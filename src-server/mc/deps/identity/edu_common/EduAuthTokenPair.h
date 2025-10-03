#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Identity {

struct EduAuthTokenPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80>  mUnkb21695;
    ::ll::UntypedStorage<8, 136> mUnk3fc98a;
    // NOLINTEND

public:
    // prevent constructor by default
    EduAuthTokenPair& operator=(EduAuthTokenPair const&);
    EduAuthTokenPair(EduAuthTokenPair const&);
    EduAuthTokenPair();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EduAuthTokenPair();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Identity
