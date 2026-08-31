#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/utils/IInstanceIdGenerator.h"

struct InstanceIdGenerator : public ::IInstanceIdGenerator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual uint generate() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uint $generate();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
