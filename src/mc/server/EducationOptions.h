#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/services/ServiceReference.h"

class EducationOptions {

public:
    // prevent constructor by default
    EducationOptions& operator=(EducationOptions const&) = delete;
    EducationOptions(EducationOptions const&)            = delete;
    EducationOptions()                                   = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EDUCATIONOPTIONS
    /**
     * @symbol ?onActiveResourcePacksChanged\@EducationOptions\@\@UEAAXAEAVResourcePackManager\@\@\@Z
     */
    MCVAPI void onActiveResourcePacksChanged(class ResourcePackManager&); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EducationOptions(); // NOLINT
#endif
    /**
     * @symbol ??0EducationOptions\@\@QEAA\@PEAVResourcePackManager\@\@\@Z
     */
    MCAPI EducationOptions(class ResourcePackManager*); // NOLINT
    /**
     * @symbol ?init\@EducationOptions\@\@QEAAXAEBVLevelData\@\@\@Z
     */
    MCAPI void init(class LevelData const&); // NOLINT
    /**
     * @symbol ?getPackCapability\@EducationOptions\@\@SA?AVPackCapability\@\@XZ
     */
    MCAPI static class PackCapability getPackCapability(); // NOLINT
    /**
     * @symbol ?isBaseCodeBuilderEnabled\@EducationOptions\@\@SA_NXZ
     */
    MCAPI static bool isBaseCodeBuilderEnabled(); // NOLINT
    /**
     * @symbol ?isChemistryEnabled\@EducationOptions\@\@SA_NXZ
     */
    MCAPI static bool isChemistryEnabled(); // NOLINT
    /**
     * @symbol ?isCodeBuilderEnabled\@EducationOptions\@\@SA_NXZ
     */
    MCAPI static bool isCodeBuilderEnabled(); // NOLINT
    /**
     * @symbol ?isEducationEnabled\@EducationOptions\@\@SA_NXZ
     */
    MCAPI static bool isEducationEnabled(); // NOLINT

    // private:
    /**
     * @symbol ?_getCurrentOptions\@EducationOptions\@\@CA?AV?$ServiceReference\@VEducationOptions\@\@\@\@XZ
     */
    MCAPI static class ServiceReference<class EducationOptions> _getCurrentOptions(); // NOLINT

private:
    /**
     * @symbol ?DEFAULT_OPTION\@EducationOptions\@\@0V1\@A
     */
    MCAPI static class EducationOptions DEFAULT_OPTION; // NOLINT
};
