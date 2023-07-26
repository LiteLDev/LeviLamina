#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/StackString.h"

class CameraPresets {
public:
    // CameraPresets inner types declare
    // clang-format off
    struct CameraList;
    // clang-format on

    // CameraPresets inner types define
    struct CameraList {

    public:
        // prevent constructor by default
        CameraList(CameraList const&) = delete;
        CameraList()                  = delete;

    public:
        /**
         * @symbol ??4CameraList\@CameraPresets\@\@QEAAAEAU01\@AEBU01\@\@Z
         */
        MCAPI struct CameraPresets::CameraList& operator=(struct CameraPresets::CameraList const&); // NOLINT
        /**
         * @symbol ??1CameraList\@CameraPresets\@\@QEAA\@XZ
         */
        MCAPI ~CameraList(); // NOLINT
        /**
         * @symbol ?bindType\@CameraList\@CameraPresets\@\@SAXXZ
         */
        MCAPI static void bindType(); // NOLINT
    };

public:
    // prevent constructor by default
    CameraPresets& operator=(CameraPresets const&) = delete;
    CameraPresets(CameraPresets const&)            = delete;

public:
    /**
     * @symbol ??0CameraPresets\@\@QEAA\@XZ
     */
    MCAPI CameraPresets(); // NOLINT
    /**
     * @symbol
     * ?buildCameraPresetList\@CameraPresets\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> buildCameraPresetList() const; // NOLINT
    /**
     * @symbol
     * ?getCameraPresetIndex\@CameraPresets\@\@QEBA?AV?$optional\@I\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI class std::optional<unsigned int> getCameraPresetIndex(std::string const&) const; // NOLINT
    /**
     * @symbol ?isEmpty\@CameraPresets\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const; // NOLINT
    /**
     * @symbol ?loadPresets\@CameraPresets\@\@QEAAXAEAVResourcePackManager\@\@\@Z
     */
    MCAPI void loadPresets(class ResourcePackManager&); // NOLINT
    /**
     * @symbol ??4CameraPresets\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class CameraPresets& operator=(class CameraPresets&&); // NOLINT
    /**
     * @symbol
     * ?isAllowedEaseTarget\@CameraPresets\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool isAllowedEaseTarget(std::string const&); // NOLINT

    // private:
    /**
     * @symbol ?_discardInvalidPresets\@CameraPresets\@\@AEAAXXZ
     */
    MCAPI void _discardInvalidPresets(); // NOLINT
    /**
     * @symbol
     * ?_parseAndLoadCameraList\@CameraPresets\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSemVersion\@\@0\@Z
     */
    MCAPI void _parseAndLoadCameraList(std::string const&, class SemVersion const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?_parseAndLoadCameraPreset\@CameraPresets\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSemVersion\@\@0\@Z
     */
    MCAPI void _parseAndLoadCameraPreset(std::string const&, class SemVersion const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?_loadJsonFiles\@CameraPresets\@\@CAXAEAVResourcePackManager\@\@AEBV?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@Core\@\@V?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSemVersion\@\@0\@Z\@std\@\@\@Z
     */
    MCAPI static void
    _loadJsonFiles(class ResourcePackManager&, class Core::PathBuffer<class Core::StackString<char, 1024>> const&, class std::function<void(std::string const&, class SemVersion const&, std::string const&)>); // NOLINT
    /**
     * @symbol ?_setupBindings\@CameraPresets\@\@CAXXZ
     */
    MCAPI static void _setupBindings(); // NOLINT

private:
};
