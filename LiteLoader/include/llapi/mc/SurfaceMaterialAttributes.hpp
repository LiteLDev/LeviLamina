/**
 * @file  MC/SurfaceMaterialAttributes.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure SurfaceMaterialAttributes.
 *
 */
struct SurfaceMaterialAttributes {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SURFACEMATERIALATTRIBUTES
public:
    struct SurfaceMaterialAttributes& operator=(struct SurfaceMaterialAttributes const &) = delete;
    SurfaceMaterialAttributes() = delete;
#endif

public:
    /**
     * @hash   -1328339387
     * @symbol ??0SurfaceMaterialAttributes@@QEAA@AEBU0@@Z
     */
    MCAPI SurfaceMaterialAttributes(struct SurfaceMaterialAttributes const &);
    /**
     * @hash   1426338781
     * @symbol ??0SurfaceMaterialAttributes@@QEAA@$$QEAU0@@Z
     */
    MCAPI SurfaceMaterialAttributes(struct SurfaceMaterialAttributes &&);
    /**
     * @hash   -1044222794
     * @symbol ??4SurfaceMaterialAttributes@@QEAAAEAU0@$$QEAU0@@Z
     */
    MCAPI struct SurfaceMaterialAttributes & operator=(struct SurfaceMaterialAttributes &&);
    /**
     * @hash   193059895
     * @symbol ??1SurfaceMaterialAttributes@@QEAA@XZ
     */
    MCAPI ~SurfaceMaterialAttributes();

};