#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SurfaceMaterialAttributes {

public:
    // prevent constructor by default
    SurfaceMaterialAttributes& operator=(SurfaceMaterialAttributes const&) = delete;
    SurfaceMaterialAttributes()                                            = delete;

public:
    /**
     * @symbol ??0SurfaceMaterialAttributes\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI SurfaceMaterialAttributes(struct SurfaceMaterialAttributes&&); // NOLINT
    /**
     * @symbol ??0SurfaceMaterialAttributes\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI SurfaceMaterialAttributes(struct SurfaceMaterialAttributes const&); // NOLINT
    /**
     * @symbol ??4SurfaceMaterialAttributes\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct SurfaceMaterialAttributes& operator=(struct SurfaceMaterialAttributes&&); // NOLINT
    /**
     * @symbol ??1SurfaceMaterialAttributes\@\@QEAA\@XZ
     */
    MCAPI ~SurfaceMaterialAttributes(); // NOLINT
};
