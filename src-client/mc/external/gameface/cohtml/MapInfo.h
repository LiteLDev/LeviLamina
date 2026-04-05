#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct MapInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk487ad7;
    ::ll::UntypedStorage<8, 8> mUnkc3f1d5;
    ::ll::UntypedStorage<8, 8> mUnk48e14b;
    ::ll::UntypedStorage<8, 8> mUnka0c603;
    // NOLINTEND

public:
    // prevent constructor by default
    MapInfo& operator=(MapInfo const&);
    MapInfo(MapInfo const&);
    MapInfo();
};

} // namespace cohtml
