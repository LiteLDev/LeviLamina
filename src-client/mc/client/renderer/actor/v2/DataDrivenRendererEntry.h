#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DataDrivenRendererEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkca4365;
    ::ll::UntypedStorage<4, 4> mUnk8e153e;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRendererEntry& operator=(DataDrivenRendererEntry const&);
    DataDrivenRendererEntry(DataDrivenRendererEntry const&);
    DataDrivenRendererEntry();
};
