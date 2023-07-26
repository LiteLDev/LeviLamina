#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContainerManagerController {

public:
    // prevent constructor by default
    ContainerManagerController& operator=(ContainerManagerController const&) = delete;
    ContainerManagerController(ContainerManagerController const&)            = delete;
    ContainerManagerController()                                             = delete;

public:
    /**
     * @symbol
     * ?TRANSFER_NO_DESTINATION\@ContainerManagerController\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const
        TRANSFER_NO_DESTINATION; // NOLINT
    /**
     * @symbol
     * ?TRANSFER_NO_ORIGIN\@ContainerManagerController\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const TRANSFER_NO_ORIGIN; // NOLINT
};
