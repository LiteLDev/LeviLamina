#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IGameConnectionListener {
public:
    // prevent constructor by default
    IGameConnectionListener& operator=(IGameConnectionListener const&);
    IGameConnectionListener(IGameConnectionListener const&);
    IGameConnectionListener();
};
