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
    MCAPI ErrorMessage(::std::string const& requestId, ::MCRESULT result);

    MCAPI ErrorMessage(::std::string const& requestId, ::MCRESULT result, ::std::string const& message);

    MCAPI ~ErrorMessage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& requestId, ::MCRESULT result);

    MCAPI void* $ctor(::std::string const& requestId, ::MCRESULT result, ::std::string const& message);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace CodeBuilder
