#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::ZipUtils {

class ZipSettings {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_ZIPUTILS_ZIPSETTINGS
public:
    ZipSettings& operator=(ZipSettings const&) = delete;
    ZipSettings(ZipSettings const&)            = delete;
#endif

public:
    /**
     * @symbol ??0ZipSettings\@ZipUtils\@Core\@\@QEAA\@XZ
     */
    MCAPI ZipSettings();
    /**
     * @symbol ??1ZipSettings\@ZipUtils\@Core\@\@QEAA\@XZ
     */
    MCAPI ~ZipSettings();
};

}; // namespace Core::ZipUtils
