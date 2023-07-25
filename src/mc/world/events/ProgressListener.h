#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ProgressListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROGRESSLISTENER
public:
    ProgressListener& operator=(ProgressListener const&) = delete;
    ProgressListener(ProgressListener const&)            = delete;
    ProgressListener()                                   = delete;
#endif

public:
};
