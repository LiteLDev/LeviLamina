#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::ZipUtils {

class ZipSettings {
public:
    // prevent constructor by default
    ZipSettings& operator=(ZipSettings const&);
    ZipSettings(ZipSettings const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ZipSettings@ZipUtils@Core@@QEAA@XZ
    MCAPI ZipSettings();

    // symbol: ??1ZipSettings@ZipUtils@Core@@QEAA@XZ
    MCAPI ~ZipSettings();

    // NOLINTEND
};

}; // namespace Core::ZipUtils
