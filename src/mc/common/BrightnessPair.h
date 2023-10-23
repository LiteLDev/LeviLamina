#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/Brightness.h"

struct BrightnessPair {
    Brightness sky;	  // this+0x0
	Brightness block; // this+0x1
public:
    // prevent constructor by default
    BrightnessPair& operator=(BrightnessPair const&);
    BrightnessPair(BrightnessPair const&);
    BrightnessPair();
};
