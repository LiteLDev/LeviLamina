#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NibblePair {
public:
    // member variables
    // NOLINTBEGIN
    uchar mUnk2857c7 : 4;
    uchar mUnkd644da : 4;
    // NOLINTEND

public:
    // prevent constructor by default
    NibblePair& operator=(NibblePair const&);
    NibblePair(NibblePair const&);
    NibblePair();

};
