#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy {

struct DefinitionTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf8b01d;
    ::ll::UntypedStorage<2, 2> mUnkd0d821;
    ::ll::UntypedStorage<8, 48> mUnk69c51b;
    // NOLINTEND

public:
    // prevent constructor by default
    DefinitionTrigger& operator=(DefinitionTrigger const&);
    DefinitionTrigger(DefinitionTrigger const&);
    DefinitionTrigger();

};

}
