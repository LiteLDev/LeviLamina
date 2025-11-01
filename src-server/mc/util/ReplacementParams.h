#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

struct ReplacementParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk386168;
    ::ll::UntypedStorage<8, 8> mUnkee5d48;
    ::ll::UntypedStorage<4, 8> mUnkdc3075;
    ::ll::UntypedStorage<1, 2> mUnk14e016;
    // NOLINTEND

public:
    // prevent constructor by default
    ReplacementParams& operator=(ReplacementParams const&);
    ReplacementParams(ReplacementParams const&);
    ReplacementParams();

};

}
