#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PDFOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8bbeac;
    ::ll::UntypedStorage<8, 32> mUnk3f3f80;
    ::ll::UntypedStorage<8, 32> mUnk14994f;
    // NOLINTEND

public:
    // prevent constructor by default
    PDFOptions& operator=(PDFOptions const&);
    PDFOptions(PDFOptions const&);
    PDFOptions();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~PDFOptions();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
