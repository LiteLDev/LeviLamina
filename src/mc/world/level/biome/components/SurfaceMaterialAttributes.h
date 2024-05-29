#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SurfaceMaterialAttributes {
public:
    // prevent constructor by default
    SurfaceMaterialAttributes& operator=(SurfaceMaterialAttributes const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SurfaceMaterialAttributes@@UEAA@XZ
    virtual ~SurfaceMaterialAttributes();

    // symbol: ??0SurfaceMaterialAttributes@@QEAA@XZ
    MCAPI SurfaceMaterialAttributes();

    // symbol: ??0SurfaceMaterialAttributes@@QEAA@AEBU0@@Z
    MCAPI SurfaceMaterialAttributes(struct SurfaceMaterialAttributes const&);

    // NOLINTEND
};
