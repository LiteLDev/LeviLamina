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
#ifdef LL_PLAT_C
    MCNAPI OptionChange(
        ::std::variant<bool, int, float, ::std::string> initialValue,
        ::std::variant<bool, int, float, ::std::string> currentValue
    );

    MCNAPI void changeOption(::std::variant<bool, int, float, ::std::string> currentValue);

    MCNAPI ~OptionChange();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::std::variant<bool, int, float, ::std::string> initialValue,
        ::std::variant<bool, int, float, ::std::string> currentValue
    );
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

} // namespace Social::Events
