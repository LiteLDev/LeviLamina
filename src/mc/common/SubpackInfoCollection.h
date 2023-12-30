#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubpackInfoCollection {
public:
    // prevent constructor by default
    SubpackInfoCollection& operator=(SubpackInfoCollection const&);
    SubpackInfoCollection(SubpackInfoCollection const&);
    SubpackInfoCollection();

public:
    // NOLINTBEGIN
    // symbol: ?addSubpackInfo@SubpackInfoCollection@@QEAAX$$QEAUSubpackInfo@@@Z
    MCAPI void addSubpackInfo(struct SubpackInfo&& subpack);

    // NOLINTEND
};
