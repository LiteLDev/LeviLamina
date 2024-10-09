#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class UnzipInternals {
public:
    // prevent constructor by default
    UnzipInternals& operator=(UnzipInternals const&);
    UnzipInternals(UnzipInternals const&);
    UnzipInternals();

public:
    // NOLINTBEGIN
    MCAPI explicit UnzipInternals(void* zipFile);

    MCAPI void* get();

    MCAPI ~UnzipInternals();

    // NOLINTEND
};

}; // namespace Core
