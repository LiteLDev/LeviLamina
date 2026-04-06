#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/ConfirmationRequest.h"

namespace Settings {

struct OptionConfirmationRequest : public ::Settings::ConfirmationRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~OptionConfirmationRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Settings
