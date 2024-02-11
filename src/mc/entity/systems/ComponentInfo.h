#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ComponentInfo {
public:
    bool        mThreadSafe; // this+0x0
    std::string mName;       // this+0x8
    uint        mId;         // this+0x28

    // prevent constructor by default
    ComponentInfo& operator=(ComponentInfo const&);
    ComponentInfo(ComponentInfo const&);
    ComponentInfo();

public:
    // NOLINTBEGIN
    // symbol: ??1ComponentInfo@@QEAA@XZ
    MCAPI ~ComponentInfo();

    // NOLINTEND
};
