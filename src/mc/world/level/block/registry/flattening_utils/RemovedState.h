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
    // vIndex: 0
    virtual ~RemovedState();

    // vIndex: 1
    virtual void addValue(class CompoundTag const& tag) = 0;

    // vIndex: 2
    virtual void match(class CompoundTagUpdaterNodeBuilder& builder, uint64 index) const = 0;

    // vIndex: 3
    virtual uint64 valueCount() const = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace FlatteningUtils
