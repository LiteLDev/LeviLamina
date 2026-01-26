#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DeviceIdErrorType {

struct ValidationFail {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk23ba94;
    // NOLINTEND

public:
    // prevent constructor by default
    ValidationFail& operator=(ValidationFail const&);
    ValidationFail(ValidationFail const&);
    ValidationFail();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::Bedrock::DeviceIdErrorType::ValidationFail&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::DeviceIdErrorType
