#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct RequestHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkefe2f4;
    ::ll::UntypedStorage<8, 32> mUnk91d853;
    ::ll::UntypedStorage<1, 1>  mUnkc57e98;
    // NOLINTEND

public:
    // prevent constructor by default
    RequestHeader& operator=(RequestHeader const&);
    RequestHeader(RequestHeader const&);
    RequestHeader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RequestHeader();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace CodeBuilder
