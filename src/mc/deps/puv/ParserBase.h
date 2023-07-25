#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv {

class ParserBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PUV_PARSERBASE
public:
    ParserBase& operator=(ParserBase const&) = delete;
    ParserBase(ParserBase const&)            = delete;
    ParserBase()                             = delete;
#endif

public:
};

}; // namespace Puv
