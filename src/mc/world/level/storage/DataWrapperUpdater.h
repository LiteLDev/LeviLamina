#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DataWrapperUpdater {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9a0681;
    ::ll::UntypedStorage<8, 8>  mUnkd7efe6;
    // NOLINTEND

public:
    // prevent constructor by default
    DataWrapperUpdater& operator=(DataWrapperUpdater const&);
    DataWrapperUpdater(DataWrapperUpdater const&);
    DataWrapperUpdater();
};
