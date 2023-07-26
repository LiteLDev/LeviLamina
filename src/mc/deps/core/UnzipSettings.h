#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::ZipUtils {

class UnzipSettings {

public:
    // prevent constructor by default
    UnzipSettings& operator=(UnzipSettings const&) = delete;
    UnzipSettings(UnzipSettings const&)            = delete;

public:
    /**
     * @symbol ??0UnzipSettings\@ZipUtils\@Core\@\@QEAA\@XZ
     */
    MCAPI UnzipSettings(); // NOLINT
    /**
     * @symbol ??1UnzipSettings\@ZipUtils\@Core\@\@QEAA\@XZ
     */
    MCAPI ~UnzipSettings(); // NOLINT
};

}; // namespace Core::ZipUtils
