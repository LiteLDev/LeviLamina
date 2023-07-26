#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraPreset {

public:
    // prevent constructor by default
    CameraPreset() = delete;

public:
    /**
     * @symbol ??0CameraPreset\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI CameraPreset(struct CameraPreset const&); // NOLINT
    /**
     * @symbol ??4CameraPreset\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct CameraPreset& operator=(struct CameraPreset const&); // NOLINT
    /**
     * @symbol ??4CameraPreset\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct CameraPreset& operator=(struct CameraPreset&&); // NOLINT
    /**
     * @symbol ??1CameraPreset\@\@QEAA\@XZ
     */
    MCAPI ~CameraPreset(); // NOLINT
    /**
     * @symbol ?bindType\@CameraPreset\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
};
