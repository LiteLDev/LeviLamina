#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerManagerController {
public:
    // prevent constructor by default
    ContainerManagerController& operator=(ContainerManagerController const&);
    ContainerManagerController(ContainerManagerController const&);
    ContainerManagerController();

public:
    // NOLINTBEGIN
    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static std::string_view const& TRANSFER_NO_DESTINATION();

    MCAPI static std::string_view const& TRANSFER_NO_ORIGIN();

    // NOLINTEND
};
