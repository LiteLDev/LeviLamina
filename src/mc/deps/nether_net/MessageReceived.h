#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::LanEvents {

struct MessageReceived {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk8571db;
    ::ll::UntypedStorage<8, 8>  mUnk3bf291;
    ::ll::UntypedStorage<8, 32> mUnk5978c9;
    ::ll::UntypedStorage<8, 32> mUnk2f5088;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageReceived& operator=(MessageReceived const&);
    MessageReceived(MessageReceived const&);
    MessageReceived();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MessageReceived();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace NetherNet::LanEvents
