#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/systems/Dependencies.h"

struct SystemInfo {
    std::string  mName;
    Dependencies mDependencies;
    void*        mGenerateDetailedInfo;

public:
    // prevent constructor by default
    SystemInfo& operator=(SystemInfo const&);
    SystemInfo(SystemInfo const&);
    SystemInfo();

public:
    // NOLINTBEGIN
    // symbol: ??0SystemInfo@@QEAA@$$QEAU0@@Z
    MCAPI SystemInfo(struct SystemInfo&&);

    // symbol: ??1SystemInfo@@QEAA@XZ
    MCAPI ~SystemInfo();

    // NOLINTEND
};
