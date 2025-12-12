#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExportedNameEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc441c0;
    ::ll::UntypedStorage<4, 4> mUnkcbbccb;
    ::ll::UntypedStorage<8, 8> mUnk83db7e;
    // NOLINTEND

public:
    // prevent constructor by default
    ExportedNameEntry& operator=(ExportedNameEntry const&);
    ExportedNameEntry(ExportedNameEntry const&);
    ExportedNameEntry();
};
