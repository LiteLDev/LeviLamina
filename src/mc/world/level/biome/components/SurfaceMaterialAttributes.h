#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SurfaceMaterialAttributes {
public:
    // prevent constructor by default
    SurfaceMaterialAttributes& operator=(SurfaceMaterialAttributes const&);
    SurfaceMaterialAttributes(SurfaceMaterialAttributes const&);
    SurfaceMaterialAttributes();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SurfaceMaterialAttributes();

    // NOLINTEND
};
