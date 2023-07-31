#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class CommandParserInterface {

public:
    // prevent constructor by default
    CommandParserInterface& operator=(CommandParserInterface const&) = delete;
    CommandParserInterface(CommandParserInterface const&)            = delete;
    CommandParserInterface()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?VARIABLE_NUMBER_OF_PARAMETERS\@CommandParserInterface\@RakNet\@\@2EB
     */
    MCAPI static unsigned char const VARIABLE_NUMBER_OF_PARAMETERS;
    // NOLINTEND
};

}; // namespace RakNet
