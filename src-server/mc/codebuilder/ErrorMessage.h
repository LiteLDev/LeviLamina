#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct MCRESULT;
// clang-format on

namespace CodeBuilder {

struct ErrorMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk61afcd;
    ::ll::UntypedStorage<8, 16> mUnk5ccd40;
    // NOLINTEND

public:
    // prevent constructor by default
    ErrorMessage& operator=(ErrorMessage const&);
    ErrorMessage(ErrorMessage const&);
    ErrorMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ErrorMessage(::std::string const& requestId, ::MCRESULT result);

    MCNAPI ErrorMessage(::std::string const& requestId, ::MCRESULT result, ::std::string const& message);

    MCNAPI ~ErrorMessage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& requestId, ::MCRESULT result);

    MCNAPI void* $ctor(::std::string const& requestId, ::MCRESULT result, ::std::string const& message);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
