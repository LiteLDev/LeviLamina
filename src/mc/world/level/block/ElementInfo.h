#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ElementInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ELEMENTINFO
public:
    ElementInfo& operator=(ElementInfo const&) = delete;
    ElementInfo(ElementInfo const&)            = delete;
    ElementInfo()                              = delete;
#endif

public:
};
