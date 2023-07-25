#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NewBlockID {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NEWBLOCKID
public:
    NewBlockID& operator=(NewBlockID const&) = delete;
    NewBlockID(NewBlockID const&)            = delete;
    NewBlockID()                             = delete;
#endif

public:
};
