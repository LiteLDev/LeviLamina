#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESessionError.h"

class MessageTracker {
public:
    // MessageTracker inner types declare
    // clang-format off
    struct MessageStatus;
    // clang-format on

    // MessageTracker inner types define
    struct MessageStatus {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnke1b276;
        ::ll::UntypedStorage<8, 16> mUnkc4ec43;
        ::ll::UntypedStorage<8, 16> mUnkff686d;
        ::ll::UntypedStorage<8, 64> mUnk8f7071;
        ::ll::UntypedStorage<1, 1>  mUnk8a6cb0;
        // NOLINTEND

    public:
        // prevent constructor by default
        MessageStatus& operator=(MessageStatus const&);
        MessageStatus(MessageStatus const&);
        MessageStatus();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk3969f8;
    ::ll::UntypedStorage<8, 80> mUnkc507e5;
    ::ll::UntypedStorage<8, 80> mUnk3dedd3;
    ::ll::UntypedStorage<8, 48> mUnkbcdda6;
    ::ll::UntypedStorage<8, 48> mUnkdc3254;
    ::ll::UntypedStorage<8, 8>  mUnkc75976;
    ::ll::UntypedStorage<8, 8>  mUnk11e362;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageTracker& operator=(MessageTracker const&);
    MessageTracker(MessageTracker const&);
    MessageTracker();
};
