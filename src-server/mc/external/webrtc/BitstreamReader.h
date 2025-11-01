#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class BitstreamReader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk70eec4;
    ::ll::UntypedStorage<4, 4> mUnk4089e9;
    ::ll::UntypedStorage<1, 1> mUnk3ecc66;
    // NOLINTEND

public:
    // prevent constructor by default
    BitstreamReader& operator=(BitstreamReader const&);
    BitstreamReader(BitstreamReader const&);
    BitstreamReader();

};

}
