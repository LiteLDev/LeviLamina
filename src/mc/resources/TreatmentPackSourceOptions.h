#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TreatmentPackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkca207c;
    ::ll::UntypedStorage<8, 32> mUnkb3cd51;
    ::ll::UntypedStorage<1, 1>  mUnk6f272f;
    // NOLINTEND

public:
    // prevent constructor by default
    TreatmentPackSourceOptions& operator=(TreatmentPackSourceOptions const&);
    TreatmentPackSourceOptions(TreatmentPackSourceOptions const&);
    TreatmentPackSourceOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~TreatmentPackSourceOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
