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

class RemovedStringState : public ::FlatteningUtils::RemovedState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk843fe7;
    // NOLINTEND

public:
    // prevent constructor by default
    RemovedStringState& operator=(RemovedStringState const&);
    RemovedStringState(RemovedStringState const&);
    RemovedStringState();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void addValue(::CompoundTag const& tag) /*override*/;

    virtual void match(::CompoundTagUpdaterNodeBuilder& builder, uint64 index) const /*override*/;

    virtual uint64 valueCount() const /*override*/;

    virtual ~RemovedStringState() /*override*/ = default;
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
