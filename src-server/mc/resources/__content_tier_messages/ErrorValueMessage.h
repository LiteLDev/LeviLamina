#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace _ContentTierMessages {

struct ErrorValueMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkfe609f;
    ::ll::UntypedStorage<8, 8> mUnkd66588;
    // NOLINTEND

public:
    // prevent constructor by default
    ErrorValueMessage& operator=(ErrorValueMessage const&);
    ErrorValueMessage(ErrorValueMessage const&);
    ErrorValueMessage();

};

}
