#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/ConfirmationRequest.h"

namespace Settings {

struct BooleanConfirmationRequest : public ::Settings::ConfirmationRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BooleanConfirmationRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Settings
