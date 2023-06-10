/**
 * @file  CameraPresets.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"

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
     * @symbol ?getCameraPresetIndex\@CameraPresets\@\@QEBA?AV?$optional\@I\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI class std::optional<unsigned int> getCameraPresetIndex(std::string const &) const;
    /**
     * @symbol ?isEmpty\@CameraPresets\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol ?loadPresets\@CameraPresets\@\@QEAAXAEAVResourcePackManager\@\@\@Z
     */
    MCAPI void loadPresets(class ResourcePackManager &);
    /**
     * @symbol ??4CameraPresets\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class CameraPresets & operator=(class CameraPresets &&);
    /**
     * @symbol ?bindType\@CameraPresets\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?isAllowedEaseTarget\@CameraPresets\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool isAllowedEaseTarget(std::string const &);

//private:
    /**
     * @symbol ?_discardInvalidPresets\@CameraPresets\@\@AEAAXXZ
     */
    MCAPI void _discardInvalidPresets();
    /**
     * @symbol ?_parseAndLoadCameraList\@CameraPresets\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSemVersion\@\@0\@Z
     */
    MCAPI void _parseAndLoadCameraList(std::string const &, class SemVersion const &, std::string const &);
    /**
     * @symbol ?_parseAndLoadCameraPreset\@CameraPresets\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSemVersion\@\@0\@Z
     */
    MCAPI void _parseAndLoadCameraPreset(std::string const &, class SemVersion const &, std::string const &);
    /**
     * @symbol ?_loadJsonFiles\@CameraPresets\@\@CAXAEAVResourcePackManager\@\@AEBV?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@Core\@\@V?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSemVersion\@\@0\@Z\@std\@\@\@Z
     */
    MCAPI static void _loadJsonFiles(class ResourcePackManager &, class Core::PathBuffer<class Core::StackString<char, 1024>> const &, class std::function<void (std::string const &, class SemVersion const &, std::string const &)>);
    /**
     * @symbol ?_setupBindings\@CameraPresets\@\@CAXXZ
     */
    MCAPI static void _setupBindings();

private:

};
