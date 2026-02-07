#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ModalScreenData.h"
#include "mc/client/gui/screens/controllers/ModalWindowSize.h"

struct UserManagementModalScreenData : public ::ModalScreenData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ModalWindowSize> windowSize;
    ::ll::TypedStorage<1, 1, bool>              defaultFocusOnLeftButton;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~UserManagementModalScreenData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
