#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PushNotificationMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk4aa399;
    ::ll::UntypedStorage<8, 32> mUnkf54b9b;
    ::ll::UntypedStorage<8, 32> mUnk524599;
    ::ll::UntypedStorage<8, 16> mUnkb557b5;
    // NOLINTEND

public:
    // prevent constructor by default
    PushNotificationMessage& operator=(PushNotificationMessage const&);
    PushNotificationMessage(PushNotificationMessage const&);
    PushNotificationMessage();
};
