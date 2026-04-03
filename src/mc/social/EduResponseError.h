#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/StatusCode.h"
#include "mc/social/EduResponseType.h"

namespace Social {

struct EduResponseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk33e592;
    ::ll::UntypedStorage<4, 4>  mUnk659bfe;
    ::ll::UntypedStorage<8, 32> mUnk4aa792;
    ::ll::UntypedStorage<8, 24> mUnkeef64e;
    // NOLINTEND

public:
    // prevent constructor by default
    EduResponseError& operator=(EduResponseError const&);
    EduResponseError(EduResponseError const&);
    EduResponseError();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::Social::EduResponseType    _type,
        ::Bedrock::Http::StatusCode  _code,
        ::std::string                _message,
        ::std::vector<::std::string> _serverIds
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Social
