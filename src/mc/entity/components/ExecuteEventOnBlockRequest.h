#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExecuteEventOnBlockRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk8ba227;
    ::ll::UntypedStorage<8, 32> mUnk4541de;
    // NOLINTEND

public:
    // prevent constructor by default
    ExecuteEventOnBlockRequest& operator=(ExecuteEventOnBlockRequest const&);
    ExecuteEventOnBlockRequest(ExecuteEventOnBlockRequest const&);
    ExecuteEventOnBlockRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ExecuteEventOnBlockRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
