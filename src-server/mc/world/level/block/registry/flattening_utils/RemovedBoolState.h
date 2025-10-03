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
    ::ll::TypedStorage<8, 24, ::std::vector<int>> mValues;
    // NOLINTEND

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
    virtual ~RemovedBoolState() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addValue(::CompoundTag const& tag);

    MCFOLD void $match(::CompoundTagUpdaterNodeBuilder& builder, uint64 index) const;

    MCFOLD uint64 $valueCount() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace FlatteningUtils
