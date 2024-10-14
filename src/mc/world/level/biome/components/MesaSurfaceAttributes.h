#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MesaSurfaceAttributes {
public:
    // prevent constructor by default
    MesaSurfaceAttributes& operator=(MesaSurfaceAttributes const&);
    MesaSurfaceAttributes(MesaSurfaceAttributes const&);
    MesaSurfaceAttributes();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MesaSurfaceAttributes() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
