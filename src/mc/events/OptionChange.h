#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class OptionChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk9ee2e3;
    ::ll::UntypedStorage<8, 40> mUnkcb95d9;
    ::ll::UntypedStorage<8, 40> mUnkef2dc2;
    // NOLINTEND

public:
    // prevent constructor by default
    OptionChange& operator=(OptionChange const&);
    OptionChange(OptionChange const&);
    OptionChange();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void changeOption(::std::variant<bool, int, float, ::std::string> currentValue);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::std::variant<bool, int, float, ::std::string> initialValue,
        ::std::variant<bool, int, float, ::std::string> currentValue
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
