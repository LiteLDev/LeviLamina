#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/XTaskQueuePort.h"

// auto generated forward declare list
// clang-format off
struct XTaskQueueObject;
struct XTaskQueueRegistrationToken;
// clang-format on

struct SubmitCallback {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI long Register(void*, void (*)(void*, ::XTaskQueueObject*, ::XTaskQueuePort), ::XTaskQueueRegistrationToken*);

    MCNAPI void Unregister(::XTaskQueueRegistrationToken);
    // NOLINTEND
};
