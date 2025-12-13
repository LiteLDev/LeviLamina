#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/NewType.h"

namespace Social {

struct AuthToken : public ::NewType<::std::string> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~AuthToken();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Social
