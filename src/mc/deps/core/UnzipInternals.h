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
    // symbol: ??0UnzipInternals@Core@@QEAA@PEAX@Z
    MCAPI explicit UnzipInternals(void* zipFile);

    // symbol: ?get@UnzipInternals@Core@@QEAAPEAXXZ
    MCAPI void* get();

    // symbol: ??1UnzipInternals@Core@@QEAA@XZ
    MCAPI ~UnzipInternals();

    // NOLINTEND
};

}; // namespace Core
