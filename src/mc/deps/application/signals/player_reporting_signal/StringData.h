#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerReportingSignal {

struct StringData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk614936;
    ::ll::UntypedStorage<8, 32> mUnk5e4af7;
    // NOLINTEND

public:
    // prevent constructor by default
    StringData& operator=(StringData const&);
    StringData(StringData const&);
    StringData();

public:
    // member functions
    // NOLINTBEGIN

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
