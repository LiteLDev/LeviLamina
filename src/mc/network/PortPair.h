#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PortPair {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PORTPAIR
public:
    PortPair& operator=(PortPair const&) = delete;
    PortPair(PortPair const&)            = delete;
    PortPair()                           = delete;
#endif

public:
};
