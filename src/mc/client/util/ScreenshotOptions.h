#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScreenshotOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk6ea098;
    ::ll::UntypedStorage<4, 4>  mUnk1848ec;
    ::ll::UntypedStorage<4, 4>  mUnkad8b39;
    ::ll::UntypedStorage<4, 4>  mUnkd82e4c;
    ::ll::UntypedStorage<4, 4>  mUnkbcc7aa;
    ::ll::UntypedStorage<1, 1>  mUnke6fb21;
    ::ll::UntypedStorage<1, 1>  mUnk579858;
    ::ll::UntypedStorage<8, 32> mUnkdf15d1;
    ::ll::UntypedStorage<8, 32> mUnk73ec65;
    ::ll::UntypedStorage<8, 32> mUnk262910;
    ::ll::UntypedStorage<1, 1>  mUnk4a744a;
    ::ll::UntypedStorage<1, 1>  mUnk7288e1;
    ::ll::UntypedStorage<1, 1>  mUnke613a3;
    ::ll::UntypedStorage<1, 1>  mUnk98f9eb;
    ::ll::UntypedStorage<1, 1>  mUnkd658c3;
    ::ll::UntypedStorage<1, 1>  mUnk44c1a0;
    ::ll::UntypedStorage<8, 32> mUnk96013f;
    ::ll::UntypedStorage<8, 32> mUnk2084e9;
    ::ll::UntypedStorage<8, 32> mUnke0a849;
    ::ll::UntypedStorage<4, 4>  mUnk1545cd;
    ::ll::UntypedStorage<8, 32> mUnk5df930;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenshotOptions& operator=(ScreenshotOptions const&);
    ScreenshotOptions(ScreenshotOptions const&);
    ScreenshotOptions();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::ScreenshotOptions&&);

    MCNAPI_C void* $ctor(::ScreenshotOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
