#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerReportingSignal {

struct StringData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5bfd49;
    ::ll::UntypedStorage<8, 32> mUnkaac53f;
    // NOLINTEND

public:
    // prevent constructor by default
    StringData& operator=(StringData const&);
    StringData(StringData const&);
    StringData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C StringData(::std::string key, ::std::string value);

    MCNAPI_C ~StringData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::string key, ::std::string value);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace PlayerReportingSignal
