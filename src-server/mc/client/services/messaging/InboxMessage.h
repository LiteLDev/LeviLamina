#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/messaging/MessageData.h"

struct InboxMessage : public ::MessageData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkfcc907;
    ::ll::UntypedStorage<8, 32> mUnk427714;
    ::ll::UntypedStorage<8, 32> mUnk46923f;
    ::ll::UntypedStorage<8, 32> mUnk5dbb1e;
    ::ll::UntypedStorage<8, 40> mUnk33df42;
    ::ll::UntypedStorage<1, 1> mUnke40f15;
    // NOLINTEND

public:
    // prevent constructor by default
    InboxMessage& operator=(InboxMessage const&);
    InboxMessage(InboxMessage const&);
    InboxMessage();

};
