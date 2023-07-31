#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraPreset {

public:
    // prevent constructor by default
    CameraPreset() = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0CameraPreset\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI CameraPreset(struct CameraPreset const&);
    /**
     * @symbol ?bindType\@CameraPreset\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ??4CameraPreset\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct CameraPreset& operator=(struct CameraPreset const&);
    /**
     * @symbol ??4CameraPreset\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct CameraPreset& operator=(struct CameraPreset&&);
    /**
     * @symbol ??1CameraPreset\@\@QEAA\@XZ
     */
    MCAPI ~CameraPreset();
    // NOLINTEND
};
