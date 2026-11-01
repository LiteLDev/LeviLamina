#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OperationNodeDetails {

class Storage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                     mReadableBytes;
    ::ll::TypedStorage<8, 8, uint64>                     mWriteableBytes;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<char[0]>> mReadStorage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<char[0]>> mWriteStorage;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Storage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OperationNodeDetails
