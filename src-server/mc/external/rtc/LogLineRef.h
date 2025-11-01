#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class LogLineRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka432fc;
    ::ll::UntypedStorage<8, 16> mUnke9c224;
    ::ll::UntypedStorage<4, 4> mUnkc58bfd;
    ::ll::UntypedStorage<4, 8> mUnkcab455;
    ::ll::UntypedStorage<8, 8> mUnkaf3536;
    ::ll::UntypedStorage<8, 16> mUnkb0d734;
    ::ll::UntypedStorage<4, 4> mUnk4d5e63;
    // NOLINTEND

public:
    // prevent constructor by default
    LogLineRef& operator=(LogLineRef const&);
    LogLineRef(LogLineRef const&);
    LogLineRef();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string DefaultLogLine() const;

    MCNAPI ~LogLineRef();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
