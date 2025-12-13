#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ITreeCanopy;
// clang-format on

class ITreeCanopyWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ITreeCanopy>> mPtr;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ITreeCanopyWrapper();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
