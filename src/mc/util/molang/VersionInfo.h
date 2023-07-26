#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MolangVersionMap {

class VersionInfo {

public:
    // prevent constructor by default
    VersionInfo& operator=(VersionInfo const&) = delete;
    VersionInfo(VersionInfo const&)            = delete;
    VersionInfo()                              = delete;

public:
    /**
     * @symbol ??1VersionInfo\@MolangVersionMap\@\@QEAA\@XZ
     */
    MCAPI ~VersionInfo(); // NOLINT
};

}; // namespace MolangVersionMap
