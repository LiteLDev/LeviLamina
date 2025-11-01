#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading::Burst::Details {

class Lifetime {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc52263;
    // NOLINTEND

public:
    // prevent constructor by default
    Lifetime& operator=(Lifetime const&);
    Lifetime(Lifetime const&);
    Lifetime();

};

}
