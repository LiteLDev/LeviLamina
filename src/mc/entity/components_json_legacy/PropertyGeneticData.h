#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PropertyGeneticData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk236fbb;
    ::ll::UntypedStorage<8, 24> mUnk7a137a;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertyGeneticData& operator=(PropertyGeneticData const&);
    PropertyGeneticData(PropertyGeneticData const&);
    PropertyGeneticData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PropertyGeneticData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
