#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PDFOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk104d74;
    ::ll::UntypedStorage<8, 32> mUnk7460c2;
    ::ll::UntypedStorage<8, 32> mUnk7ed398;
    // NOLINTEND

public:
    // prevent constructor by default
    PDFOptions& operator=(PDFOptions const&);
    PDFOptions(PDFOptions const&);
    PDFOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~PDFOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
