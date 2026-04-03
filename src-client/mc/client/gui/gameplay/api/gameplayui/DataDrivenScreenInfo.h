#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameplayUI {

struct DataDrivenScreenInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>        screenId;
    ::ll::TypedStorage<4, 4, uint>                  formId;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> dataInstanceId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DataDrivenScreenInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace GameplayUI
