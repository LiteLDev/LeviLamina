#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DelayRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk777e90;
    ::ll::UntypedStorage<8, 8> mUnkb1c5bd;
    ::ll::UntypedStorage<8, 32> mUnk2164de;
    // NOLINTEND

public:
    // prevent constructor by default
    DelayRequest& operator=(DelayRequest const&);
    DelayRequest(DelayRequest const&);
    DelayRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::DelayRequest& operator=(::DelayRequest&&);

    MCNAPI ~DelayRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
