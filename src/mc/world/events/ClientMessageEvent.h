#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientMessageEvent {
public:
    // prevent constructor by default
    ClientMessageEvent& operator=(ClientMessageEvent const&);
    ClientMessageEvent(ClientMessageEvent const&);
    ClientMessageEvent();
};
