#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/services/ServiceReference.h"

class EducationOptions {
public:
    // prevent constructor by default
    EducationOptions& operator=(EducationOptions const&);
    EducationOptions(EducationOptions const&);
    EducationOptions();

public:
    // NOLINTBEGIN
    // symbol: ?onActiveResourcePacksChanged@EducationOptions@@UEAAXAEAVResourcePackManager@@@Z
    MCVAPI void onActiveResourcePacksChanged(class ResourcePackManager& manager);

    // symbol: ??1EducationOptions@@UEAA@XZ
    MCVAPI ~EducationOptions();

    // symbol: ??0EducationOptions@@QEAA@PEAVResourcePackManager@@@Z
    MCAPI explicit EducationOptions(class ResourcePackManager* packMan);

    // symbol: ?init@EducationOptions@@QEAAXAEBVLevelData@@@Z
    MCAPI void init(class LevelData const& levelData);

    // symbol: ?getPackCapability@EducationOptions@@SA?AVPackCapability@@XZ
    MCAPI static class PackCapability getPackCapability();

    // symbol: ?isBaseCodeBuilderEnabled@EducationOptions@@SA_NXZ
    MCAPI static bool isBaseCodeBuilderEnabled();

    // symbol: ?isChemistryEnabled@EducationOptions@@SA_NXZ
    MCAPI static bool isChemistryEnabled();

    // symbol: ?isCodeBuilderEnabled@EducationOptions@@SA_NXZ
    MCAPI static bool isCodeBuilderEnabled();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getCurrentOptions@EducationOptions@@CA?AV?$ServiceReference@VEducationOptions@@@@XZ
    MCAPI static class ServiceReference<class EducationOptions> _getCurrentOptions();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?DEFAULT_OPTION@EducationOptions@@0V1@A
    MCAPI static class EducationOptions DEFAULT_OPTION;

    // NOLINTEND
};
