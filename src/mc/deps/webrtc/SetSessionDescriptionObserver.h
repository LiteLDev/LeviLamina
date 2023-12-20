#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class SetSessionDescriptionObserver {
public:
    // prevent constructor by default
    SetSessionDescriptionObserver& operator=(SetSessionDescriptionObserver const&);
    SetSessionDescriptionObserver(SetSessionDescriptionObserver const&);
    SetSessionDescriptionObserver();
};

}; // namespace webrtc
