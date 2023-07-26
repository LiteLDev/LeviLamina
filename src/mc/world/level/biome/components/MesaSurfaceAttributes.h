#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MesaSurfaceAttributes {

public:
    // prevent constructor by default
    MesaSurfaceAttributes& operator=(MesaSurfaceAttributes const&) = delete;
    MesaSurfaceAttributes(MesaSurfaceAttributes const&)            = delete;
    MesaSurfaceAttributes()                                        = delete;

public:
    /**
     * @symbol ??1MesaSurfaceAttributes\@\@QEAA\@XZ
     */
    MCAPI ~MesaSurfaceAttributes(); // NOLINT
};
