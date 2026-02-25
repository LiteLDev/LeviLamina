#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/SharedLock.h"

class UIControlFactoryContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::SharedLock<::std::shared_mutex>> mLock;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~UIControlFactoryContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
