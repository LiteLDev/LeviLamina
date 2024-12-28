#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace MovementDataExtractionUtility {

class SnapshotAccessor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk6087d4;
    // NOLINTEND

public:
    // prevent constructor by default
    SnapshotAccessor& operator=(SnapshotAccessor const&);
    SnapshotAccessor(SnapshotAccessor const&);
    SnapshotAccessor();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SnapshotAccessor(::EntityContext const& entity);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::EntityContext const& entity);
    // NOLINTEND
};

} // namespace MovementDataExtractionUtility
