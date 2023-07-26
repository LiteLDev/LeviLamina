#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DataDrivenModel {

public:
    // prevent constructor by default
    DataDrivenModel& operator=(DataDrivenModel const&) = delete;
    DataDrivenModel(DataDrivenModel const&)            = delete;
    DataDrivenModel()                                  = delete;
};
