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
#ifdef LL_PLAT_C
    MCNAPI StringData(::std::string key, ::std::string value);

    MCNAPI ~StringData();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::string key, ::std::string value);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace PlayerReportingSignal
