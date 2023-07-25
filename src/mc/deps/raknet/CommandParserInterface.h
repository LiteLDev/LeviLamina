#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class CommandParserInterface {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_COMMANDPARSERINTERFACE
public:
    CommandParserInterface& operator=(CommandParserInterface const&) = delete;
    CommandParserInterface(CommandParserInterface const&)            = delete;
    CommandParserInterface()                                         = delete;
#endif

public:
    /**
     * @symbol ?VARIABLE_NUMBER_OF_PARAMETERS\@CommandParserInterface\@RakNet\@\@2EB
     */
    MCAPI static unsigned char const VARIABLE_NUMBER_OF_PARAMETERS;
};

}; // namespace RakNet
