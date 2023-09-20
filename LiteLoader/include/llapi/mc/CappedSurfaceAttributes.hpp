/**
 * @file  CappedSurfaceAttributes.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol ?initializeNoise\@CappedSurfaceAttributes\@\@QEAAXI\@Z
     */
    MCAPI void initializeNoise(unsigned int);
    /**
     * @symbol ??4CappedSurfaceAttributes\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct CappedSurfaceAttributes & operator=(struct CappedSurfaceAttributes &&);

};