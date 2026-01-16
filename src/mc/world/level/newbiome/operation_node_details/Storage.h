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
    // prevent constructor by default
    Storage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Storage(uint64 size);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint64 size);
    // NOLINTEND
};

} // namespace OperationNodeDetails
