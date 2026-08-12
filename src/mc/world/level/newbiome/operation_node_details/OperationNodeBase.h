#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OperationNodeDetails {

class OperationNodeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64> mSeed;
    ::ll::TypedStorage<8, 8, int64> mSeedMixup;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OperationNodeBase() = default;

    virtual void init(int64 seed);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $init(int64 seed);


    // NOLINTEND
};

} // namespace OperationNodeDetails
