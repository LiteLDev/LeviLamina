#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PDFError {
public:
    // prevent constructor by default
    PDFError& operator=(PDFError const&);
    PDFError(PDFError const&);
    PDFError();
};
