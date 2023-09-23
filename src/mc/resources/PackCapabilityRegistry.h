#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PackCapabilityRegistry {
public:
    // prevent constructor by default
    PackCapabilityRegistry& operator=(PackCapabilityRegistry const&);
    PackCapabilityRegistry(PackCapabilityRegistry const&);
    PackCapabilityRegistry();

public:
    // NOLINTBEGIN
    // symbol: ??0PackCapabilityRegistry@@QEAA@AEBV?$initializer_list@VPackCapability@@@std@@@Z
    MCAPI explicit PackCapabilityRegistry(std::initializer_list<class PackCapability> const&);

    // symbol: ??1PackCapabilityRegistry@@QEAA@XZ
    MCAPI ~PackCapabilityRegistry();

    // NOLINTEND
};
