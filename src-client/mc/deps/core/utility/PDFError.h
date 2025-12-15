#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PDFError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk128c13;
    // NOLINTEND

public:
    // prevent constructor by default
    PDFError& operator=(PDFError const&);
    PDFError(PDFError const&);
    PDFError();
};
