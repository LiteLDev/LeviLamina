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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk40dd8d;
    // NOLINTEND

public:
    // prevent constructor by default
    RemovedState& operator=(RemovedState const&);
    RemovedState(RemovedState const&);
    RemovedState();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RemovedState() = default;

    virtual void addValue(::CompoundTag const&) = 0;

    virtual void match(::CompoundTagUpdaterNodeBuilder&, uint64) const = 0;

    virtual uint64 valueCount() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace FlatteningUtils
