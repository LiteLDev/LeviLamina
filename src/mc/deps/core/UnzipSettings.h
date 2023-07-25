#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::ZipUtils {

class UnzipSettings {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_ZIPUTILS_UNZIPSETTINGS
public:
    UnzipSettings& operator=(UnzipSettings const&) = delete;
    UnzipSettings(UnzipSettings const&)            = delete;
#endif

public:
    /**
     * @symbol ??0UnzipSettings\@ZipUtils\@Core\@\@QEAA\@XZ
     */
    MCAPI UnzipSettings();
    /**
     * @symbol ??1UnzipSettings\@ZipUtils\@Core\@\@QEAA\@XZ
     */
    MCAPI ~UnzipSettings();
};

}; // namespace Core::ZipUtils
