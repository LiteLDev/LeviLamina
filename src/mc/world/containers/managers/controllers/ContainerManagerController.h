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
    // symbol: ?TRANSFER_NO_DESTINATION@ContainerManagerController@@2V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const TRANSFER_NO_DESTINATION;

    // symbol: ?TRANSFER_NO_ORIGIN@ContainerManagerController@@2V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const TRANSFER_NO_ORIGIN;

    // NOLINTEND
};
