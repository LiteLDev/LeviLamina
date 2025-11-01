#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Internal {

class SingleActionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8813a2;
    ::ll::UntypedStorage<8, 32> mUnkb326eb;
    ::ll::UntypedStorage<8, 64> mUnkac197f;
    ::ll::UntypedStorage<1, 1> mUnkb009fd;
    ::ll::UntypedStorage<1, 1> mUnka65fc1;
    ::ll::UntypedStorage<8, 8> mUnkd3fe8a;
    // NOLINTEND

public:
    // prevent constructor by default
    SingleActionEvent& operator=(SingleActionEvent const&);
    SingleActionEvent(SingleActionEvent const&);
    SingleActionEvent();

};

}
