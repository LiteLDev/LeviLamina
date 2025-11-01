#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct BrightnessFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdbe47f;
    ::ll::UntypedStorage<4, 4> mUnk3b5c76;
    ::ll::UntypedStorage<1, 1> mUnk351e98;
    // NOLINTEND

public:
    // prevent constructor by default
    BrightnessFilter& operator=(BrightnessFilter const&);
    BrightnessFilter(BrightnessFilter const&);
    BrightnessFilter();

};

}
