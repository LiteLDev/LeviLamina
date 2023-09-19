#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class CommandParserInterface {
public:
    // prevent constructor by default
    CommandParserInterface& operator=(CommandParserInterface const&);
    CommandParserInterface(CommandParserInterface const&);
    CommandParserInterface();

public:
    // NOLINTBEGIN
    // symbol: ?VARIABLE_NUMBER_OF_PARAMETERS@CommandParserInterface@RakNet@@2EB
    MCAPI static uchar const VARIABLE_NUMBER_OF_PARAMETERS;

    // NOLINTEND
};

}; // namespace RakNet
