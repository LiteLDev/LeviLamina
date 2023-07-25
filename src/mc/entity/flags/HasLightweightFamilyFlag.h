#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HasLightweightFamilyFlag {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HASLIGHTWEIGHTFAMILYFLAG
public:
    HasLightweightFamilyFlag& operator=(HasLightweightFamilyFlag const&) = delete;
    HasLightweightFamilyFlag(HasLightweightFamilyFlag const&)            = delete;
    HasLightweightFamilyFlag()                                           = delete;
#endif

public:
};
