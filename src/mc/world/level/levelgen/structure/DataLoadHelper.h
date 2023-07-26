#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DataLoadHelper {

public:
    // prevent constructor by default
    DataLoadHelper& operator=(DataLoadHelper const&) = delete;
    DataLoadHelper(DataLoadHelper const&)            = delete;
    DataLoadHelper()                                 = delete;
};
