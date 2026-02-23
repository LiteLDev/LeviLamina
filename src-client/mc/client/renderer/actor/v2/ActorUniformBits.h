#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorUniformBits {
public:
    // member variables
    // NOLINTBEGIN
    bool mUnkd7a0b0 : 1;
    bool mUnk1cc85e : 1;
    bool mUnk4fb44d : 1;
    bool mUnk4c5c19 : 1;
    bool mUnk229940 : 1;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorUniformBits& operator=(ActorUniformBits const&);
    ActorUniformBits(ActorUniformBits const&);
    ActorUniformBits();
};
