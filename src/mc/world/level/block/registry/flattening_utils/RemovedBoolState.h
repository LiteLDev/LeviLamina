#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/registry/flattening_utils/RemovedState.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class CompoundTagUpdaterNodeBuilder;
// clang-format on

namespace FlatteningUtils {

class RemovedBoolState : public ::FlatteningUtils::RemovedState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk56d17b;
    // NOLINTEND

public:
    // prevent constructor by default
    RemovedBoolState& operator=(RemovedBoolState const&);
    RemovedBoolState(RemovedBoolState const&);
    RemovedBoolState();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void addValue(::CompoundTag const& tag) /*override*/;

    virtual void match(::CompoundTagUpdaterNodeBuilder& builder, uint64 index) const /*override*/;

    virtual uint64 valueCount() const /*override*/;

    virtual ~RemovedBoolState() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $addValue(::CompoundTag const& tag);

    MCNAPI void $match(::CompoundTagUpdaterNodeBuilder& builder, uint64 index) const;

    MCNAPI uint64 $valueCount() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace FlatteningUtils
