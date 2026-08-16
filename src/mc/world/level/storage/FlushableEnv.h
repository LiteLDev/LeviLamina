#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FlushableEnv : public ::leveldb::EnvWrapper {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FlushableEnv() /*override*/;

    virtual void flushToPermanentStorage() = 0;
    // NOLINTEND
};
