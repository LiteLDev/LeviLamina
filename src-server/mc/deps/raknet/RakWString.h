#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class RakWString {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk37de96;
    ::ll::UntypedStorage<8, 8> mUnk89536d;
    // NOLINTEND

public:
    // prevent constructor by default
    RakWString& operator=(RakWString const&);
    RakWString(RakWString const&);
    RakWString();

};

}
