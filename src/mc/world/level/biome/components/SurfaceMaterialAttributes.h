#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SurfaceMaterialAttributes {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SURFACEMATERIALATTRIBUTES
public:
    SurfaceMaterialAttributes& operator=(SurfaceMaterialAttributes const&) = delete;
    SurfaceMaterialAttributes()                                            = delete;
#endif

public:
    /**
     * @symbol ??0SurfaceMaterialAttributes\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI SurfaceMaterialAttributes(struct SurfaceMaterialAttributes&&);
    /**
     * @symbol ??0SurfaceMaterialAttributes\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI SurfaceMaterialAttributes(struct SurfaceMaterialAttributes const&);
    /**
     * @symbol ??4SurfaceMaterialAttributes\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct SurfaceMaterialAttributes& operator=(struct SurfaceMaterialAttributes&&);
    /**
     * @symbol ??1SurfaceMaterialAttributes\@\@QEAA\@XZ
     */
    MCAPI ~SurfaceMaterialAttributes();
};
