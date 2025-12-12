#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class UserData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkecdab1;
    ::ll::UntypedStorage<8, 32> mUnk7543be;
    // NOLINTEND

public:
    // prevent constructor by default
    UserData& operator=(UserData const&);
    UserData(UserData const&);
    UserData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C int getInt() const;

    MCNAPI_C ~UserData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::Social::UserData const boolValue(bool value);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Social
