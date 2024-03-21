#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class CompoundTagUpdaterNodeBuilder;
// clang-format on

namespace FlatteningUtils {

class RemovedState {
public:
    // prevent constructor by default
    RemovedState& operator=(RemovedState const&);
    RemovedState(RemovedState const&);
    RemovedState();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RemovedState@FlatteningUtils@@UEAA@XZ
    virtual ~RemovedState();

    // vIndex: 1, symbol: ?addValue@RemovedIntState@FlatteningUtils@@UEAAXAEBVCompoundTag@@@Z
    virtual void addValue(class CompoundTag const&) = 0;

    // vIndex: 2, symbol: ?match@RemovedIntState@FlatteningUtils@@UEBAXAEAVCompoundTagUpdaterNodeBuilder@@_K@Z
    virtual void match(class CompoundTagUpdaterNodeBuilder&, uint64) const = 0;

    // vIndex: 3, symbol: ?valueCount@RemovedIntState@FlatteningUtils@@UEBA_KXZ
    virtual uint64 valueCount() const = 0;

    // NOLINTEND
};

}; // namespace FlatteningUtils
