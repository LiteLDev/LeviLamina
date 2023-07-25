#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CappedSurfaceAttributes {
public:
    // CappedSurfaceAttributes inner types declare
    // clang-format off
    struct MaterialLayer;
    // clang-format on

    // CappedSurfaceAttributes inner types define
    struct MaterialLayer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAPPEDSURFACEATTRIBUTES_MATERIALLAYER
    public:
        MaterialLayer& operator=(MaterialLayer const&) = delete;
        MaterialLayer(MaterialLayer const&)            = delete;
        MaterialLayer()                                = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAPPEDSURFACEATTRIBUTES
public:
    CappedSurfaceAttributes& operator=(CappedSurfaceAttributes const&) = delete;
    CappedSurfaceAttributes(CappedSurfaceAttributes const&)            = delete;
    CappedSurfaceAttributes()                                          = delete;
#endif

public:
    /**
     * @symbol ?getCeilingMaterial\@CappedSurfaceAttributes\@\@QEBAPEBVBlock\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Block const* getCeilingMaterial(class Vec3 const&) const;
    /**
     * @symbol ?getFloorMaterial\@CappedSurfaceAttributes\@\@QEBAPEBVBlock\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Block const* getFloorMaterial(class Vec3 const&) const;
    /**
     * @symbol ?initializeNoise\@CappedSurfaceAttributes\@\@QEAAXI\@Z
     */
    MCAPI void initializeNoise(unsigned int);
    /**
     * @symbol ??4CappedSurfaceAttributes\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct CappedSurfaceAttributes& operator=(struct CappedSurfaceAttributes&&);
    /**
     * @symbol
     * ?getRandomBlock\@CappedSurfaceAttributes\@\@SAPEBVBlock\@\@AEBV?$vector\@UMaterialLayer\@CappedSurfaceAttributes\@\@V?$allocator\@UMaterialLayer\@CappedSurfaceAttributes\@\@\@std\@\@\@std\@\@AEBVVec3\@\@\@Z
     */
    MCAPI static class Block const*
    getRandomBlock(std::vector<struct CappedSurfaceAttributes::MaterialLayer> const&, class Vec3 const&);
};
