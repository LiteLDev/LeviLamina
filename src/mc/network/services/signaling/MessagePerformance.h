#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MessagePerformance {
public:
    // MessagePerformance inner types define
    enum class Status : uchar {
        Success                = 0,
        FailedToSend           = 1,
        FailedToDeliver        = 2,
        FailedWaitingToSend    = 3,
        FailedWaitingToAccept  = 4,
        FailedWaitingToDeliver = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk885f91;
    ::ll::UntypedStorage<1, 1>  mUnk694795;
    ::ll::UntypedStorage<1, 1>  mUnkc9271b;
    ::ll::UntypedStorage<8, 16> mUnk4dbff2;
    ::ll::UntypedStorage<8, 16> mUnkb42124;
    // NOLINTEND

public:
    // prevent constructor by default
    MessagePerformance& operator=(MessagePerformance const&);
    MessagePerformance(MessagePerformance const&);
    MessagePerformance();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MessagePerformance();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
