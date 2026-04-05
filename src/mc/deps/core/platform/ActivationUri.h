#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActivationUri {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk351dee;
    ::ll::UntypedStorage<8, 64> mUnka02957;
    // NOLINTEND

public:
    // prevent constructor by default
    ActivationUri& operator=(ActivationUri const&);
    ActivationUri(ActivationUri const&);
    ActivationUri();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~ActivationUri();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::std::unordered_map<::std::string, ::std::string>
    extractArgumentsFromFilename(::std::string_view filename, ::std::optional<::std::string> originalPath);

    MCNAPI static ::std::unordered_map<::std::string, ::std::string> extractArgumentsFromUri(::std::string const& uri);
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
