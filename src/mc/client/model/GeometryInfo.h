#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GeometryInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkf3950f;
    ::ll::UntypedStorage<8, 8>  mUnk41029f;
    // NOLINTEND

public:
    // prevent constructor by default
    GeometryInfo& operator=(GeometryInfo const&);
    GeometryInfo(GeometryInfo const&);
    GeometryInfo();
};
