#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class IAddActorEntityProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAddActorEntityProxy();

    virtual void initializeActor(::Actor& actor) = 0;

    virtual void reloadActor(::Actor& actor) = 0;
    // NOLINTEND
};
