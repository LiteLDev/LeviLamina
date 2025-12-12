#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OperationNodeDetails {

class OperationNodeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk98fc1b;
    ::ll::UntypedStorage<8, 8> mUnkdd9c64;
    // NOLINTEND

public:
    // prevent constructor by default
    OperationNodeBase& operator=(OperationNodeBase const&);
    OperationNodeBase(OperationNodeBase const&);
    OperationNodeBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OperationNodeBase() = default;

    virtual void init(int64 seed);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init(int64 seed);


    // NOLINTEND
};

} // namespace OperationNodeDetails
