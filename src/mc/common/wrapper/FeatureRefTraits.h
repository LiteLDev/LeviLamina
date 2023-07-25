#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FeatureRefTraits {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATUREREFTRAITS
public:
    FeatureRefTraits& operator=(FeatureRefTraits const&) = delete;
    FeatureRefTraits(FeatureRefTraits const&)            = delete;
    FeatureRefTraits()                                   = delete;
#endif

public:
};
