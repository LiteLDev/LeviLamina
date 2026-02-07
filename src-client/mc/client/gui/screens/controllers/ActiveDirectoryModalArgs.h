#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"

struct ActiveDirectoryModalArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                mTitleText;
    ::ll::TypedStorage<8, 32, ::std::string>                                mBodyText;
    ::ll::TypedStorage<8, 32, ::std::string>                                mConfirmButtonText;
    ::ll::TypedStorage<8, 32, ::std::string>                                mCancelButtonText;
    ::ll::TypedStorage<8, 64, ::std::function<void(::ModalScreenButtonId)>> mOnComplete;
    // NOLINTEND

public:
    // prevent constructor by default
    ActiveDirectoryModalArgs& operator=(ActiveDirectoryModalArgs const&);
    ActiveDirectoryModalArgs(ActiveDirectoryModalArgs const&);
    ActiveDirectoryModalArgs();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActiveDirectoryModalArgs(::ActiveDirectoryModalArgs&&);

    MCAPI ~ActiveDirectoryModalArgs();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActiveDirectoryModalArgs&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
