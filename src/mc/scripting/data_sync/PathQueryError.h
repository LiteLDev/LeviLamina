#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DDUI::PathUtility {

struct PathQueryError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkad9576;
    ::ll::UntypedStorage<8, 32> mUnkc25659;
    // NOLINTEND

public:
    // prevent constructor by default
    PathQueryError& operator=(PathQueryError const&);
    PathQueryError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PathQueryError(::Bedrock::DDUI::PathUtility::PathQueryError const&);

    MCNAPI ~PathQueryError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::DDUI::PathUtility::PathQueryError const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::DDUI::PathUtility
