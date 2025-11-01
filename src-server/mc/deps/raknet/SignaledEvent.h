#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class SignaledEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk673ff6;
    // NOLINTEND

public:
    // prevent constructor by default
    SignaledEvent& operator=(SignaledEvent const&);
    SignaledEvent(SignaledEvent const&);
    SignaledEvent();

};

}
