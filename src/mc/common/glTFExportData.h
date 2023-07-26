#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct glTFExportData {

public:
    // prevent constructor by default
    glTFExportData& operator=(glTFExportData const&) = delete;
    glTFExportData(glTFExportData const&)            = delete;
    glTFExportData()                                 = delete;
};
