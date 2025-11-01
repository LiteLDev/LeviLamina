#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerMessaging {

struct NetworkID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk16c1ef;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkID& operator=(NetworkID const&);
    NetworkID(NetworkID const&);
    NetworkID();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit NetworkID(::std::string const& str);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& str);
    // NOLINTEND

};

}
