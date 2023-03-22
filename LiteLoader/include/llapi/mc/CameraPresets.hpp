/**
 * @file  CameraPresets.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CameraPresets.
 *
 */
class CameraPresets {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERAPRESETS
public:
    class CameraPresets& operator=(class CameraPresets const &) = delete;
    CameraPresets(class CameraPresets const &) = delete;
#endif

public:
    /**
     * @symbol ??0CameraPresets\@\@QEAA\@XZ
     */
    MCAPI CameraPresets();
    /**
     * @symbol ?buildCameraPresetList\@CameraPresets\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> buildCameraPresetList() const;
    /**
     * @symbol ??4CameraPresets\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class CameraPresets & operator=(class CameraPresets &&);
    /**
     * @symbol ?bindType\@CameraPresets\@\@SAXXZ
     */
    MCAPI static void bindType();

//private:
    /**
     * @symbol ?_setupBindings\@CameraPresets\@\@CAXXZ
     */
    MCAPI static void _setupBindings();

private:

};
