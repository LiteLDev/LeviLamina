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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Core::ZipUtils
