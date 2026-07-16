#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class LogLineRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk15b94c;
    ::ll::UntypedStorage<8, 16> mUnk659970;
    ::ll::UntypedStorage<4, 4>  mUnk85eb29;
    ::ll::UntypedStorage<4, 8>  mUnked49e2;
    ::ll::UntypedStorage<8, 8>  mUnkf8a357;
    ::ll::UntypedStorage<8, 16> mUnk76d1de;
    ::ll::UntypedStorage<4, 4>  mUnkc023ad;
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

} // namespace webrtc
