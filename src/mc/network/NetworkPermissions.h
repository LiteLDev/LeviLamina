#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetworkPermissions {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKPERMISSIONS
public:
    NetworkPermissions& operator=(NetworkPermissions const&) = delete;
    NetworkPermissions(NetworkPermissions const&)            = delete;
    NetworkPermissions()                                     = delete;
#endif

public:
};
