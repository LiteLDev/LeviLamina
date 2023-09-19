#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv {

class ParserBase {
public:
    // prevent constructor by default
    ParserBase& operator=(ParserBase const&);
    ParserBase(ParserBase const&);
    ParserBase();
};

}; // namespace Puv
