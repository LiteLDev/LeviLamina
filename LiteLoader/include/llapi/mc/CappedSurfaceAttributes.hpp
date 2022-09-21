/**
 * @file  MC/CappedSurfaceAttributes.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure CappedSurfaceAttributes.
 *
 */
struct CappedSurfaceAttributes {

#define AFTER_EXTRA
// Add Member There
struct MaterialLayer {
    MaterialLayer() = delete;
    MaterialLayer(MaterialLayer const&) = delete;
    MaterialLayer(MaterialLayer const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAPPEDSURFACEATTRIBUTES
public:
    struct CappedSurfaceAttributes& operator=(struct CappedSurfaceAttributes const &) = delete;
    CappedSurfaceAttributes(struct CappedSurfaceAttributes const &) = delete;
    CappedSurfaceAttributes() = delete;
#endif

public:
    /**
     * @hash   1576425628
     * @symbol ?getCeilingMaterial@CappedSurfaceAttributes@@QEBAPEBVBlock@@AEBVVec3@@@Z
     */
    MCAPI class Block const * getCeilingMaterial(class Vec3 const &) const;
    /**
     * @hash   97431692
     * @symbol ?getFloorMaterial@CappedSurfaceAttributes@@QEBAPEBVBlock@@AEBVVec3@@@Z
     */
    MCAPI class Block const * getFloorMaterial(class Vec3 const &) const;
    /**
     * @hash   -93600852
     * @symbol ?initializeNoise@CappedSurfaceAttributes@@QEAAXI@Z
     */
    MCAPI void initializeNoise(unsigned int);
    /**
     * @hash   -1784668402
     * @symbol ??4CappedSurfaceAttributes@@QEAAAEAU0@$$QEAU0@@Z
     */
    MCAPI struct CappedSurfaceAttributes & operator=(struct CappedSurfaceAttributes &&);
    /**
     * @hash   -581644013
     * @symbol ??1CappedSurfaceAttributes@@QEAA@XZ
     */
    MCAPI ~CappedSurfaceAttributes();
    /**
     * @hash   -1417701291
     * @symbol ?getRandomBlock@CappedSurfaceAttributes@@SAPEBVBlock@@AEBV?$vector@UMaterialLayer@CappedSurfaceAttributes@@V?$allocator@UMaterialLayer@CappedSurfaceAttributes@@@std@@@std@@AEBVVec3@@@Z
     */
    MCAPI static class Block const * getRandomBlock(std::vector<struct CappedSurfaceAttributes::MaterialLayer> const &, class Vec3 const &);

};