#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientInstanceInitArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk545f58;
    ::ll::UntypedStorage<4, 4>  mUnk435ed3;
    ::ll::UntypedStorage<8, 8>  mUnk698480;
    ::ll::UntypedStorage<8, 8>  mUnkf9979d;
    ::ll::UntypedStorage<8, 16> mUnk136d3c;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInstanceInitArguments& operator=(ClientInstanceInitArguments const&);
    ClientInstanceInitArguments(ClientInstanceInitArguments const&);
    ClientInstanceInitArguments();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ClientInstanceInitArguments();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
