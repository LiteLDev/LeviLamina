#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Settings {

struct ConfirmationRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mTitle;
    ::ll::TypedStorage<8, 32, ::std::string> mDescription;
    ::ll::TypedStorage<8, 32, ::std::string> mAcceptLabel;
    ::ll::TypedStorage<8, 32, ::std::string> mCancelLabel;
    // NOLINTEND

public:
    // prevent constructor by default
    ConfirmationRequest& operator=(ConfirmationRequest const&);
    ConfirmationRequest(ConfirmationRequest const&);
    ConfirmationRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::Settings::ConfirmationRequest& operator=(::Settings::ConfirmationRequest&&);

    MCAPI ~ConfirmationRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Settings
