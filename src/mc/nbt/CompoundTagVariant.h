#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompoundTagVariant {
public:
    // prevent constructor by default
    CompoundTagVariant& operator=(CompoundTagVariant const&);
    CompoundTagVariant(CompoundTagVariant const&);
    CompoundTagVariant();

public:
    // NOLINTBEGIN
    // symbol: ?emplace@CompoundTagVariant@@QEAAAEAVTag@@$$QEAV2@@Z
    MCAPI class Tag& emplace(class Tag&& tag);

    // symbol: ?get@CompoundTagVariant@@QEAAPEAVTag@@XZ
    MCAPI class Tag* get();

    // symbol: ?get@CompoundTagVariant@@QEBAPEBVTag@@XZ
    MCAPI class Tag const* get() const;

    // symbol: ??1CompoundTagVariant@@QEAA@XZ
    MCAPI ~CompoundTagVariant();

    // NOLINTEND
};
