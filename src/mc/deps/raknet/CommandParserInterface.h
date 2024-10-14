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
    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static uchar const& VARIABLE_NUMBER_OF_PARAMETERS();

    // NOLINTEND
};

}; // namespace RakNet
