#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DDUI {

struct DataStoreRemoval {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mDataStoreName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DataStoreRemoval();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::DDUI
