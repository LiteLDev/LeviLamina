#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExternalDataInterface {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXTERNALDATAINTERFACE
public:
    ExternalDataInterface& operator=(ExternalDataInterface const&) = delete;
    ExternalDataInterface(ExternalDataInterface const&)            = delete;
    ExternalDataInterface()                                        = delete;
#endif

public:
};
