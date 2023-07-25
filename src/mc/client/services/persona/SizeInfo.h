#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

struct SizeInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERSONA_SIZEINFO
public:
    SizeInfo& operator=(SizeInfo const&) = delete;
    SizeInfo(SizeInfo const&)            = delete;
    SizeInfo()                           = delete;
#endif

public:
};

}; // namespace persona
