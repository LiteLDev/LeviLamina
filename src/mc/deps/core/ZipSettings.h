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
    MCAPI ZipSettings();

    MCAPI ~ZipSettings();

    // NOLINTEND
};

}; // namespace Core::ZipUtils
