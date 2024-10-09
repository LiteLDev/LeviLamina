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
    MCAPI UnzipSettings();

    MCAPI ~UnzipSettings();

    // NOLINTEND
};

}; // namespace Core::ZipUtils
