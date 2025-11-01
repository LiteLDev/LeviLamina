#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSObjectListEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke1bef2;
    ::ll::UntypedStorage<4, 4> mUnkb89e88;
    // NOLINTEND

public:
    // prevent constructor by default
    JSObjectListEntry& operator=(JSObjectListEntry const&);
    JSObjectListEntry(JSObjectListEntry const&);
    JSObjectListEntry();
};
