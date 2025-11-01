#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OS {

class WaitTimerImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1ac5c6;
    ::ll::UntypedStorage<8, 8> mUnkf6b381;
    ::ll::UntypedStorage<8, 8> mUnk74e324;
    // NOLINTEND

public:
    // prevent constructor by default
    WaitTimerImpl& operator=(WaitTimerImpl const&);
    WaitTimerImpl(WaitTimerImpl const&);
    WaitTimerImpl();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void WaitCallback(::_TP_CALLBACK_INSTANCE*, void* context, ::_TP_TIMER*);
    // NOLINTEND

};

}
