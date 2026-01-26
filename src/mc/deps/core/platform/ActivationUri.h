#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActivationUri {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5b6d24;
    ::ll::UntypedStorage<8, 64> mUnkfa4f30;
    // NOLINTEND

public:
    // prevent constructor by default
    ActivationUri& operator=(ActivationUri const&);
    ActivationUri(ActivationUri const&);
    ActivationUri();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::std::unordered_map<::std::string, ::std::string>
    extractArgumentsFromFilename(::std::string_view filename, ::std::optional<::std::string> originalPath);

    MCNAPI_C static ::std::unordered_map<::std::string, ::std::string>
    extractArgumentsFromUri(::std::string const& uri);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
