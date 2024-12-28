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
    // vIndex: 0
    virtual ~OperationNodeBase();

    // vIndex: 1
    virtual void init(int64 seed);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $init(int64 seed);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OperationNodeDetails
