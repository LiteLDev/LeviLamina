#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::ZipUtils {

class UnzipSettings {
public:
    // prevent constructor by default
    UnzipSettings& operator=(UnzipSettings const&);
    UnzipSettings(UnzipSettings const&);

public:
    // NOLINTBEGIN
    // symbol: ??0UnzipSettings@ZipUtils@Core@@QEAA@XZ
    MCAPI UnzipSettings();

    // symbol: ??1UnzipSettings@ZipUtils@Core@@QEAA@XZ
    MCAPI ~UnzipSettings();

    // NOLINTEND
};

}; // namespace Core::ZipUtils
