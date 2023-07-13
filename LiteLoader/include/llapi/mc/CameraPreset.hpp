/**
 * @file  CameraPreset.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct CameraPreset {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERAPRESET
public:
    CameraPreset() = delete;
#endif

public:
    /**
     * @symbol ??0CameraPreset\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI CameraPreset(struct CameraPreset const &);
    /**
     * @symbol ??4CameraPreset\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct CameraPreset & operator=(struct CameraPreset const &);
    /**
     * @symbol ??4CameraPreset\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct CameraPreset & operator=(struct CameraPreset &&);
    /**
     * @symbol ??1CameraPreset\@\@QEAA\@XZ
     */
    MCAPI ~CameraPreset();
    /**
     * @symbol ?bindType\@CameraPreset\@\@SAXXZ
     */
    MCAPI static void bindType();

};