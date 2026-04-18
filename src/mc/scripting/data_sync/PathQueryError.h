#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DDUI::PathUtility {

struct PathQueryError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>           parsingError;
    ::ll::TypedStorage<8, 32, ::std::string> message;
    // NOLINTEND

public:
    // prevent constructor by default
    PathQueryError& operator=(PathQueryError const&);
    PathQueryError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PathQueryError(::Bedrock::DDUI::PathUtility::PathQueryError const&);

    MCAPI ~PathQueryError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::DDUI::PathUtility::PathQueryError const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::DDUI::PathUtility
