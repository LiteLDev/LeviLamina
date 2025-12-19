#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OffscreenCaptureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk59fd72;
    ::ll::UntypedStorage<4, 4>  mUnkde1fa8;
    ::ll::UntypedStorage<8, 24> mUnk8285b9;
    // NOLINTEND

public:
    // prevent constructor by default
    OffscreenCaptureData& operator=(OffscreenCaptureData const&);
    OffscreenCaptureData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C OffscreenCaptureData(::OffscreenCaptureData const&);

    MCAPI_C ~OffscreenCaptureData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::OffscreenCaptureData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_C void $dtor();
    // NOLINTEND
};
