#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SupportedFeatureSchema {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnkbf6518;
    ::ll::UntypedStorage<8, 16> mUnkd15819;
    // NOLINTEND

public:
    // prevent constructor by default
    SupportedFeatureSchema& operator=(SupportedFeatureSchema const&);
    SupportedFeatureSchema(SupportedFeatureSchema const&);
    SupportedFeatureSchema();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SupportedFeatureSchema();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
