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

class RemovedIntState : public ::FlatteningUtils::RemovedState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke31ef1;
    // NOLINTEND

public:
    // prevent constructor by default
    RemovedIntState& operator=(RemovedIntState const&);
    RemovedIntState(RemovedIntState const&);
    RemovedIntState();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void addValue(::CompoundTag const& tag) /*override*/;

    // vIndex: 2
    virtual void match(::CompoundTagUpdaterNodeBuilder& builder, uint64 index) const /*override*/;

    // vIndex: 3
    virtual uint64 valueCount() const /*override*/;

    // vIndex: 0
    virtual ~RemovedIntState() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
