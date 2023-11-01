#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Common {

struct BuildInfo {
public:
    std::string mBuildId;  // this+0x0
    std::string mCommitId; // this+0x20
    std::string mBranchId; // this+0x40
    std::string mFlavor;   // this+0x60

public:
    // NOLINTBEGIN
    // symbol: ??1BuildInfo@Common@@QEAA@XZ
    MCAPI ~BuildInfo();

    // NOLINTEND
};

}; // namespace Common
